// =============================================================================
// main.c
// TinyGPU-ML accelerator test on NEORV32 / Tang Nano 20K
//
// Tests (in order):
//   1. Register read-back sanity check
//   2. Soft reset and STATUS verification
//   3. IRQ-driven VEC_ADD: z[4] = x[4] + y[4]
//   4. Descriptor-mode GEMM: C[2][2] = A[2][8] * B[8][2]
//   5. RELU: y[4] = max(0, x[4])
//   6. Conv2D via software im2col + hardware GEMM
//   7. Performance counter readback
// =============================================================================

#include <neorv32.h>
#include "tinygpu_driver.h"

// =============================================================================
// UART baud rate
// =============================================================================
#ifdef TGPU_GHDL_SIM
#define BAUD_RATE  1000000
#else
#define BAUD_RATE  19200
#endif

// =============================================================================
// Test data buffers — placed in DMEM
// Keep sizes small: SPM_A = 256 bytes, SPM_B = 256 bytes, SPM_C = 128 bytes
// =============================================================================

// --- VEC_ADD test ---
static volatile int8_t  vec_x[4]  = { 1,  2,  3,  4 };
static volatile int8_t  vec_y[4]  = { 10, 20, 30, 40 };
static volatile int32_t vec_z[4]  = { 0,  0,  0,  0 };  // output

// --- GEMM test: A[2][8] * B[8][2] = C[2][2] ---
// A is 2 rows x 8 cols of INT8
static volatile int8_t mat_a[2][8] = {
  { 1, 2, 3, 4, 5, 6, 7, 8 },
  { 1, 1, 1, 1, 1, 1, 1, 1 }
};
// B is 8 rows x 2 cols of INT8
static volatile int8_t mat_b[8][2] = {
  { 1, 0 },
  { 0, 1 },
  { 1, 0 },
  { 0, 1 },
  { 1, 0 },
  { 0, 1 },
  { 1, 0 },
  { 0, 1 }
};
// C is 2 rows x 2 cols of INT32 (output)
static volatile int32_t mat_c[2][2] = { {0,0}, {0,0} };
static volatile int32_t mat_c_desc[2][2] = { {0,0}, {0,0} };

// --- RELU test ---
static volatile int8_t  relu_in[4]  = { -5, 3, -1, 7 };
static volatile int32_t relu_out[4] = {  0, 0,  0, 0 };

// --- Conv2D via im2col test ---
// Input image 3x3, kernel 2x2, stride 1, no padding => output 2x2
static volatile int8_t conv_in[3][3] = {
  { 1, 2, 3 },
  { 4, 5, 6 },
  { 7, 8, 9 }
};
static volatile int8_t conv_kernel[2][2] = {
  { 1, 0 },
  { 0, 1 }
};
static volatile int8_t conv_im2col[4][4] = { {0,0,0,0}, {0,0,0,0}, {0,0,0,0}, {0,0,0,0} };
static volatile int8_t conv_weight[4][1] = { {0}, {0}, {0}, {0} };
static volatile int32_t conv_out_vec[4][1] = { {0}, {0}, {0}, {0} };
static volatile int32_t conv_out_map[2][2] = { {0,0}, {0,0} };

static volatile tgpu_descriptor_t gemm_desc;

static volatile uint32_t tgpu_irq_count = 0;
static volatile uint32_t tgpu_irq_seen  = 0;

#ifndef TGPU_SW_SIM_DISABLE_IRQ_TEST
#define TGPU_SW_SIM_DISABLE_IRQ_TEST 0
#endif

// =============================================================================
// Helper: pass/fail print
// =============================================================================
static int test_pass = 0;
static int test_fail = 0;
static int test_index = 0;

#ifdef TGPU_GHDL_SIM
static void sim_report_value(uint32_t index, int32_t value) {
  neorv32_gpio_port_set(0x54450000u |
                        ((index & 0xffu) << 8) |
                        ((uint32_t)value & 0xffu));
}
#endif

static void uart_putc(char c) {
#ifdef TGPU_GHDL_SIM
  (void)c;
#else
  neorv32_uart0_putc(c);
#endif
}

static void uart_puts(const char *s) {
#ifdef TGPU_GHDL_SIM
  (void)s;
#else
  while (*s != '\0') {
    uart_putc(*s);
    s++;
  }
#endif
}

static void uart_putln(const char *s) {
#ifdef TGPU_GHDL_SIM
  (void)s;
#else
  uart_puts(s);
  uart_putc('\n');
#endif
}

static void uart_print_u32(uint32_t value) {
#ifdef TGPU_GHDL_SIM
  (void)value;
#else
  char buf[12];
  neorv32_aux_itoa(buf, value, 10);
  uart_puts(buf);
#endif
}

static void uart_print_i32(int32_t value) {
#ifdef TGPU_GHDL_SIM
  (void)value;
#else
  if (value < 0) {
    neorv32_uart0_putc('-');
    uart_print_u32((uint32_t)(-value));
  } else {
    uart_print_u32((uint32_t)value);
  }
#endif
}

static void check(const char *name, int condition) {
  if (condition) {
#ifndef TGPU_GHDL_SIM
    uart_puts("[PASS] ");
    uart_putln(name);
#endif
    test_pass++;
  } else {
    uart_puts("[FAIL] ");
    uart_putln(name);
    test_fail++;
  }
#ifdef TGPU_GHDL_SIM
  neorv32_gpio_port_set(0x54440000u |
                        (((uint32_t)test_index & 0x7fu) << 8) |
                        (condition ? 1u : 0u));
#endif
  test_index++;
}

static void tinygpu_firq_handler(void) {
  tgpu_irq_count++;
  tgpu_irq_seen = 1;
  tgpu_irq_ack();
}

static void im2col_2x2_stride1_int8(volatile int8_t dst[4][4], volatile int8_t src[3][3]) {
  int out_row, out_col;
  int patch_idx = 0;

  for (out_row = 0; out_row < 2; out_row++) {
    for (out_col = 0; out_col < 2; out_col++) {
      dst[patch_idx][0] = src[out_row + 0][out_col + 0];
      dst[patch_idx][1] = src[out_row + 0][out_col + 1];
      dst[patch_idx][2] = src[out_row + 1][out_col + 0];
      dst[patch_idx][3] = src[out_row + 1][out_col + 1];
      patch_idx++;
    }
  }
}

static void kernel_to_col_2x2_int8(volatile int8_t dst[4][1], volatile int8_t kernel[2][2]) {
  dst[0][0] = kernel[0][0];
  dst[1][0] = kernel[0][1];
  dst[2][0] = kernel[1][0];
  dst[3][0] = kernel[1][1];
}

static void vec_to_map_2x2_i32(volatile int32_t dst[2][2], volatile int32_t src[4][1]) {
  dst[0][0] = src[0][0];
  dst[0][1] = src[1][0];
  dst[1][0] = src[2][0];
  dst[1][1] = src[3][0];
}

// =============================================================================
// MAIN
// =============================================================================
int main(void) {

  neorv32_rte_setup();

  // ---- UART init ----
#ifndef TGPU_GHDL_SIM
  neorv32_uart0_setup(BAUD_RATE, 0);
#endif

#ifndef TGPU_GHDL_SIM
  uart_putln("");
  uart_putln("========================================");
  uart_putln(" TinyGPU-ML Accelerator Test");
  uart_putln(" Tang Nano 20K / NEORV32");
  uart_putln(" Array: 2x2 PEs, INT8 in, INT32 acc");
  uart_putln(" FIRQ : using channel 1 in this SW demo");
  uart_putln("========================================");
  uart_putln("");
#endif

  // ====================================================================
  // TEST 1: Register accessibility — write CTRL, read it back
  // ====================================================================
#ifndef TGPU_GHDL_SIM
  uart_putln("[TEST 1] Register read-back");
#endif

  tgpu_write(TGPU_REG_CTRL, 0);
  uint32_t ctrl_val = tgpu_read(TGPU_REG_CTRL);
  // After writing 0, CTRL should read back 0
  // (direct_mode=0, irq_en=0, start/reset bits are pulses so not stored)
  check("CTRL register read-back == 0", ctrl_val == 0);

  // Write a known value to SRC0_ADDR and read back
  tgpu_write(TGPU_REG_SRC0_ADDR, 0xDEADBEEF);
  uint32_t rb = tgpu_read(TGPU_REG_SRC0_ADDR);
  check("SRC0_ADDR read-back == 0xDEADBEEF", rb == 0xDEADBEEF);
  tgpu_write(TGPU_REG_SRC0_ADDR, 0); // clean up

  // ====================================================================
  // TEST 2: Soft reset — STATUS should show not busy after reset
  // ====================================================================
#ifndef TGPU_GHDL_SIM
  uart_putln("");
  uart_putln("[TEST 2] Soft reset");
#endif

  tgpu_init();
  uint32_t status = tgpu_read(TGPU_REG_STATUS);
  check("STATUS[BUSY]=0 after soft reset", !(status & TGPU_STATUS_BUSY));
  check("STATUS[ERR]=0 after soft reset",  !(status & TGPU_STATUS_ERR_MASK));

  // ====================================================================
  // TEST 3: VEC_ADD
  // ====================================================================
#if TGPU_SW_SIM_DISABLE_IRQ_TEST
#ifndef TGPU_GHDL_SIM
  uart_putln("");
  uart_putln("[TEST 3] Polling VEC_ADD z[4] = {1,2,3,4} + {10,20,30,40}");
#endif
  tgpu_status_t ret = tgpu_run_direct(
    TGPU_OP_VEC_ADD,
    TGPU_FLAG_DST_INT32 | TGPU_FLAG_SIGNED_MODE,
    (uint32_t)vec_x,
    (uint32_t)vec_y,
    0,
    (uint32_t)vec_z,
    4, 1, 1,
    1, 1, 4
  );
  if (ret != TGPU_OK) {
    uart_puts("  ERROR: tgpu_run_direct returned ");
    uart_print_i32((int32_t)ret);
    uart_putln("");
    tgpu_print_status();
    test_fail++;
  } else {
#ifdef TGPU_GHDL_SIM
    sim_report_value(0, vec_z[0]);
    sim_report_value(1, vec_z[1]);
    sim_report_value(2, vec_z[2]);
    sim_report_value(3, vec_z[3]);
#endif
#ifndef TGPU_GHDL_SIM
    uart_puts("  z = {");
    uart_print_i32(vec_z[0]);
    uart_puts(", ");
    uart_print_i32(vec_z[1]);
    uart_puts(", ");
    uart_print_i32(vec_z[2]);
    uart_puts(", ");
    uart_print_i32(vec_z[3]);
    uart_putln("}");
#endif
    check("VEC_ADD z[0]==11", vec_z[0] == 11);
    check("VEC_ADD z[1]==22", vec_z[1] == 22);
    check("VEC_ADD z[2]==33", vec_z[2] == 33);
    check("VEC_ADD z[3]==44", vec_z[3] == 44);
  }
#else
  uart_putln("");
  uart_putln("[TEST 3] IRQ-driven VEC_ADD z[4] = {1,2,3,4} + {10,20,30,40}");

  neorv32_rte_handler_install(TGPU_TRAP_CODE, tinygpu_firq_handler);
  neorv32_cpu_csr_clr(CSR_MIE, 1 << TGPU_FIRQ_ENABLE);
  neorv32_cpu_csr_clr(CSR_MSTATUS, 1 << CSR_MSTATUS_MIE);
  tgpu_irq_seen = 0;
  tgpu_irq_ack();
  neorv32_cpu_csr_set(CSR_MIE, 1 << TGPU_FIRQ_ENABLE);
  neorv32_cpu_csr_set(CSR_MSTATUS, 1 << CSR_MSTATUS_MIE);

  tgpu_status_t ret = tgpu_start_direct(
    TGPU_OP_VEC_ADD,
    TGPU_FLAG_DST_INT32 | TGPU_FLAG_SIGNED_MODE,
    (uint32_t)vec_x,
    (uint32_t)vec_y,
    0,
    (uint32_t)vec_z,
    4, 1, 1,
    1, 1, 4,
    TGPU_CTRL_IRQ_EN
  );

  if (ret != TGPU_OK) {
    uart_puts("  ERROR: tgpu_start_direct returned ");
    uart_print_i32((int32_t)ret);
    uart_putln("");
    tgpu_print_status();
    test_fail++;
  } else {
    uint32_t timeout = 100000u;
    while ((tgpu_irq_seen == 0) && (timeout != 0u)) {
      neorv32_cpu_sleep();
      timeout--;
    }
    check("TinyGPU IRQ observed", tgpu_irq_seen == 1u);
    ret = tgpu_check_status();
    if (ret != TGPU_OK) {
      uart_puts("  ERROR: tgpu_check_status returned ");
      uart_print_i32((int32_t)ret);
      uart_putln("");
      tgpu_print_status();
      test_fail++;
    } else {
      uart_puts("  z = {");
      uart_print_i32(vec_z[0]);
      uart_puts(", ");
      uart_print_i32(vec_z[1]);
      uart_puts(", ");
      uart_print_i32(vec_z[2]);
      uart_puts(", ");
      uart_print_i32(vec_z[3]);
      uart_putln("}");
      check("VEC_ADD z[0]==11", vec_z[0] == 11);
      check("VEC_ADD z[1]==22", vec_z[1] == 22);
      check("VEC_ADD z[2]==33", vec_z[2] == 33);
      check("VEC_ADD z[3]==44", vec_z[3] == 44);
    }
  }
#endif

  // ====================================================================
  // TEST 4: Descriptor-mode GEMM   C[2][2] = A[2][8] * B[8][2]
  //
  // A = [[1,2,3,4,5,6,7,8],   B = col0: {1,0,1,0,1,0,1,0} sum=4
  //      [1,1,1,1,1,1,1,1]]       col1: {0,1,0,1,0,1,0,1} sum=4
  //
  // C[0][0] = 1*1+2*0+3*1+4*0+5*1+6*0+7*1+8*0 = 1+3+5+7 = 16
  // C[0][1] = 1*0+2*1+3*0+4*1+5*0+6*1+7*0+8*1 = 2+4+6+8 = 20
  // C[1][0] = 1+1+1+1 = 4
  // C[1][1] = 1+1+1+1 = 4
  // ====================================================================
#ifndef TGPU_GHDL_SIM
  uart_putln("");
  uart_putln("[TEST 4] Descriptor-mode GEMM C[2][2] = A[2][8] * B[8][2]");
#endif

  gemm_desc.opcode     = TGPU_OP_GEMM;
  gemm_desc.flags      = TGPU_FLAG_DST_INT32;
  gemm_desc.src0_addr  = (uint32_t)mat_a;
  gemm_desc.src1_addr  = (uint32_t)mat_b;
  gemm_desc.bias_addr  = 0;
  gemm_desc.dst_addr   = (uint32_t)mat_c_desc;
  gemm_desc.dim_m      = 2;
  gemm_desc.dim_n      = 2;
  gemm_desc.dim_k      = 8;
  gemm_desc.stride0    = 8;
  gemm_desc.stride1    = 2;
  gemm_desc.stride_dst = 8;
  gemm_desc.scale      = 0;
  gemm_desc.shift_zero_point = TGPU_PACK_SHIFT_ZP(0, 0);

  ret = tgpu_run_descriptor((uint32_t)&gemm_desc);

  if (ret != TGPU_OK) {
    uart_puts("  ERROR: tgpu_run_descriptor returned ");
    uart_print_i32((int32_t)ret);
    uart_putln("");
    tgpu_print_status();
    test_fail++;
  } else {
#ifdef TGPU_GHDL_SIM
    sim_report_value(4, mat_c_desc[0][0]);
    sim_report_value(5, mat_c_desc[0][1]);
    sim_report_value(6, mat_c_desc[1][0]);
    sim_report_value(7, mat_c_desc[1][1]);
#endif
#ifndef TGPU_GHDL_SIM
    uart_puts("  C = [[");
    uart_print_i32(mat_c_desc[0][0]);
    uart_puts(", ");
    uart_print_i32(mat_c_desc[0][1]);
    uart_puts("], [");
    uart_print_i32(mat_c_desc[1][0]);
    uart_puts(", ");
    uart_print_i32(mat_c_desc[1][1]);
    uart_putln("]]");
#endif
    check("DESC GEMM C[0][0]==16", mat_c_desc[0][0] == 16);
    check("DESC GEMM C[0][1]==20", mat_c_desc[0][1] == 20);
    check("DESC GEMM C[1][0]==4",  mat_c_desc[1][0] == 4);
    check("DESC GEMM C[1][1]==4",  mat_c_desc[1][1] == 4);
  }

  // ====================================================================
  // TEST 5: RELU   y[4] = max(0, {-5, 3, -1, 7})
  // Expected: {0, 3, 0, 7}
  // ====================================================================
#ifndef TGPU_GHDL_SIM
  uart_putln("");
  uart_putln("[TEST 5] RELU y[4] = max(0, {-5,3,-1,7})");
#endif

  ret = tgpu_relu(
    (uint32_t)relu_in,
    (uint32_t)relu_out,
    4
  );

  if (ret != TGPU_OK) {
    uart_puts("  ERROR: tgpu_relu returned ");
    uart_print_i32((int32_t)ret);
    uart_putln("");
    tgpu_print_status();
    test_fail++;
  } else {
#ifdef TGPU_GHDL_SIM
    sim_report_value(8, relu_out[0]);
    sim_report_value(9, relu_out[1]);
    sim_report_value(10, relu_out[2]);
    sim_report_value(11, relu_out[3]);
#endif
#ifndef TGPU_GHDL_SIM
    uart_puts("  y = {");
    uart_print_i32(relu_out[0]);
    uart_puts(", ");
    uart_print_i32(relu_out[1]);
    uart_puts(", ");
    uart_print_i32(relu_out[2]);
    uart_puts(", ");
    uart_print_i32(relu_out[3]);
    uart_putln("}");
#endif
    check("RELU y[0]==0", relu_out[0] == 0);
    check("RELU y[1]==3", relu_out[1] == 3);
    check("RELU y[2]==0", relu_out[2] == 0);
    check("RELU y[3]==7", relu_out[3] == 7);
  }

  // ====================================================================
  // ====================================================================
  // TEST 6: Conv2D via software im2col + hardware GEMM
  //
  // Input:
  //   [[1,2,3],
  //    [4,5,6],
  //    [7,8,9]]
  //
  // Kernel:
  //   [[1,0],
  //    [0,1]]
  //
  // Expected output:
  //   [[1+5, 2+6],
  //    [4+8, 5+9]] = [[6,8],[12,14]]
  // ====================================================================
#ifndef TGPU_GHDL_SIM
  uart_putln("");
  uart_putln("[TEST 6] Conv2D via software im2col + hardware GEMM");
#endif

  im2col_2x2_stride1_int8(conv_im2col, conv_in);
  kernel_to_col_2x2_int8(conv_weight, conv_kernel);

  ret = tgpu_run_direct(
    TGPU_OP_GEMM,
    TGPU_FLAG_DST_INT32,
    (uint32_t)conv_im2col,
    (uint32_t)conv_weight,
    0,
    (uint32_t)conv_out_vec,
    4, 1, 4,
    4, 1, 4
  );

  if (ret != TGPU_OK) {
#ifdef TGPU_GHDL_SIM
    sim_report_value(12, ret);
#endif
    uart_puts("  ERROR: im2col GEMM returned ");
    uart_print_i32((int32_t)ret);
    uart_putln("");
    tgpu_print_status();
    test_fail++;
  } else {
    vec_to_map_2x2_i32(conv_out_map, conv_out_vec);
#ifndef TGPU_GHDL_SIM
    uart_puts("  im2col result = [[");
    uart_print_i32(conv_out_map[0][0]);
    uart_puts(", ");
    uart_print_i32(conv_out_map[0][1]);
    uart_puts("], [");
    uart_print_i32(conv_out_map[1][0]);
    uart_puts(", ");
    uart_print_i32(conv_out_map[1][1]);
    uart_putln("]]");
#endif
    check("IM2COL CONV y[0][0]==6",  conv_out_map[0][0] == 6);
    check("IM2COL CONV y[0][1]==8",  conv_out_map[0][1] == 8);
    check("IM2COL CONV y[1][0]==12", conv_out_map[1][0] == 12);
    check("IM2COL CONV y[1][1]==14", conv_out_map[1][1] == 14);
  }

  // ====================================================================
  // TEST 7: Performance counters
  // ====================================================================
#ifndef TGPU_GHDL_SIM
  uart_putln("");
  uart_putln("[TEST 7] Performance counters (from last command)");
#endif

  uint32_t cyc, act, stl;
  tgpu_get_perf(&cyc, &act, &stl);
#ifndef TGPU_GHDL_SIM
  uart_puts("  Cycles : ");
  uart_print_u32(cyc);
  uart_putln("");
  uart_puts("  Active : ");
  uart_print_u32(act);
  uart_putln("");
  uart_puts("  Stalls : ");
  uart_print_u32(stl);
  uart_putln("");
  uart_puts("  Efficiency: ");
  uart_print_u32((cyc > 0) ? (act * 100 / cyc) : 0);
  uart_putln("%");
#endif

  check("Cycle count > 0", cyc > 0);
  check("Active <= Cycles", act <= cyc);
#if TGPU_SW_SIM_DISABLE_IRQ_TEST
  check("IRQ count == 0 in polling build", tgpu_irq_count == 0u);
#else
  check("IRQ count >= 1", tgpu_irq_count >= 1u);
#endif

  // ====================================================================
  // FINAL SUMMARY
  // ====================================================================
#ifndef TGPU_GHDL_SIM
  uart_putln("");
  uart_putln("========================================");
  uart_puts(" Results: ");
  uart_print_i32(test_pass);
  uart_puts(" passed, ");
  uart_print_i32(test_fail);
  uart_putln(" failed");
  uart_putln("========================================");

  if (test_fail == 0) {
    uart_putln(" ALL TESTS PASSED");
  } else {
    uart_putln(" SOME TESTS FAILED -- see above");
    uart_putln(" Tip: check TINYGPU_BASE in tinygpu_driver.h");
    uart_putln("      matches your neorv32_top.vhd instantiation");
  }
#else
  neorv32_gpio_port_set(0x54470000u | ((uint32_t)(test_pass & 0xff) << 8) | (uint32_t)(test_fail & 0xff));
#endif

  // Full register dump for waveform correlation
#ifndef TGPU_GHDL_SIM
  tgpu_print_status();
#endif

  return 0;
}
