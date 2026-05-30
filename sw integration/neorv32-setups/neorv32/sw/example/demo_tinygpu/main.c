// =============================================================================
// main.c
// TinyGPU-ML accelerator test on NEORV32 / Tang Nano 20K
//
// Tests (in order):
//   1. Register read-back sanity check
//   2. Soft reset and STATUS verification
//   3. VEC_ADD  : z[4] = x[4] + y[4]
//   4. GEMM     : C[2][2] = A[2][8] * B[8][2]  (smallest valid tile)
//   5. RELU     : y[4] = max(0, x[4])
//   6. Performance counter readback
// =============================================================================

#include <neorv32.h>
#include "tinygpu_driver.h"

// =============================================================================
// UART baud rate
// =============================================================================
#define BAUD_RATE  19200

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

// --- RELU test ---
static volatile int32_t relu_in[4]  = { -5, 3, -1, 7 };
static volatile int32_t relu_out[4] = {  0, 0,  0, 0 };

// =============================================================================
// Helper: pass/fail print
// =============================================================================
static int test_pass = 0;
static int test_fail = 0;

static void check(const char *name, int condition) {
  if (condition) {
    neorv32_uart0_printf("[PASS] %s\n", name);
    test_pass++;
  } else {
    neorv32_uart0_printf("[FAIL] %s\n", name);
    test_fail++;
  }
}

// =============================================================================
// MAIN
// =============================================================================
int main(void) {

  // ---- UART init ----
  neorv32_uart0_setup(BAUD_RATE, 0);
  neorv32_uart0_printf("\n");
  neorv32_uart0_printf("========================================\n");
  neorv32_uart0_printf(" TinyGPU-ML Accelerator Test\n");
  neorv32_uart0_printf(" Tang Nano 20K / NEORV32\n");
  neorv32_uart0_printf(" Array: 2x2 PEs, INT8 in, INT32 acc\n");
  neorv32_uart0_printf("========================================\n\n");

  // ====================================================================
  // TEST 1: Register accessibility — write CTRL, read it back
  // ====================================================================
  neorv32_uart0_printf("[TEST 1] Register read-back\n");

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
  neorv32_uart0_printf("\n[TEST 2] Soft reset\n");

  tgpu_init();
  uint32_t status = tgpu_read(TGPU_REG_STATUS);
  check("STATUS[BUSY]=0 after soft reset", !(status & TGPU_STATUS_BUSY));
  check("STATUS[ERR]=0 after soft reset",  !(status & TGPU_STATUS_ERR_MASK));

  // ====================================================================
  // TEST 3: VEC_ADD   z[4] = x[4] + y[4]
  // Expected: z = {11, 22, 33, 44}
  // ====================================================================
  neorv32_uart0_printf("\n[TEST 3] VEC_ADD z[4] = {1,2,3,4} + {10,20,30,40}\n");

  tgpu_status_t ret = tgpu_vec_add(
    (uint32_t)vec_x,
    (uint32_t)vec_y,
    (uint32_t)vec_z,
    4
  );

  if (ret != TGPU_OK) {
    neorv32_uart0_printf("  ERROR: tgpu_vec_add returned %d\n", (int)ret);
    tgpu_print_status();
    test_fail++;
  } else {
    neorv32_uart0_printf("  z = {%d, %d, %d, %d}\n",
      (int)vec_z[0], (int)vec_z[1], (int)vec_z[2], (int)vec_z[3]);
    check("VEC_ADD z[0]==11", vec_z[0] == 11);
    check("VEC_ADD z[1]==22", vec_z[1] == 22);
    check("VEC_ADD z[2]==33", vec_z[2] == 33);
    check("VEC_ADD z[3]==44", vec_z[3] == 44);
  }

  // ====================================================================
  // TEST 4: GEMM   C[2][2] = A[2][8] * B[8][2]
  //
  // A = [[1,2,3,4,5,6,7,8],   B = col0: {1,0,1,0,1,0,1,0} sum=4
  //      [1,1,1,1,1,1,1,1]]       col1: {0,1,0,1,0,1,0,1} sum=4
  //
  // C[0][0] = 1*1+2*0+3*1+4*0+5*1+6*0+7*1+8*0 = 1+3+5+7 = 16
  // C[0][1] = 1*0+2*1+3*0+4*1+5*0+6*1+7*0+8*1 = 2+4+6+8 = 20
  // C[1][0] = 1+1+1+1 = 4
  // C[1][1] = 1+1+1+1 = 4
  // ====================================================================
  neorv32_uart0_printf("\n[TEST 4] GEMM C[2][2] = A[2][8] * B[8][2]\n");

  ret = tgpu_gemm(
    (uint32_t)mat_a,
    (uint32_t)mat_b,
    (uint32_t)mat_c,
    2, 2, 8,          // M=2, N=2, K=8
    TGPU_FLAG_DST_INT32
  );

  if (ret != TGPU_OK) {
    neorv32_uart0_printf("  ERROR: tgpu_gemm returned %d\n", (int)ret);
    tgpu_print_status();
    test_fail++;
  } else {
    neorv32_uart0_printf("  C = [[%d, %d], [%d, %d]]\n",
      (int)mat_c[0][0], (int)mat_c[0][1],
      (int)mat_c[1][0], (int)mat_c[1][1]);
    check("GEMM C[0][0]==16", mat_c[0][0] == 16);
    check("GEMM C[0][1]==20", mat_c[0][1] == 20);
    check("GEMM C[1][0]==4",  mat_c[1][0] == 4);
    check("GEMM C[1][1]==4",  mat_c[1][1] == 4);
  }

  // ====================================================================
  // TEST 5: RELU   y[4] = max(0, {-5, 3, -1, 7})
  // Expected: {0, 3, 0, 7}
  // ====================================================================
  neorv32_uart0_printf("\n[TEST 5] RELU y[4] = max(0, {-5,3,-1,7})\n");

  ret = tgpu_relu(
    (uint32_t)relu_in,
    (uint32_t)relu_out,
    4
  );

  if (ret != TGPU_OK) {
    neorv32_uart0_printf("  ERROR: tgpu_relu returned %d\n", (int)ret);
    tgpu_print_status();
    test_fail++;
  } else {
    neorv32_uart0_printf("  y = {%d, %d, %d, %d}\n",
      (int)relu_out[0], (int)relu_out[1],
      (int)relu_out[2], (int)relu_out[3]);
    check("RELU y[0]==0", relu_out[0] == 0);
    check("RELU y[1]==3", relu_out[1] == 3);
    check("RELU y[2]==0", relu_out[2] == 0);
    check("RELU y[3]==7", relu_out[3] == 7);
  }

  // ====================================================================
  // TEST 6: Performance counters
  // ====================================================================
  neorv32_uart0_printf("\n[TEST 6] Performance counters (from last RELU)\n");

  uint32_t cyc, act, stl;
  tgpu_get_perf(&cyc, &act, &stl);
  neorv32_uart0_printf("  Cycles : %d\n", cyc);
  neorv32_uart0_printf("  Active : %d\n", act);
  neorv32_uart0_printf("  Stalls : %d\n", stl);
  neorv32_uart0_printf("  Efficiency: %d%%\n",
    (cyc > 0) ? (act * 100 / cyc) : 0);

  check("Cycle count > 0", cyc > 0);
  check("Active <= Cycles", act <= cyc);

  // ====================================================================
  // FINAL SUMMARY
  // ====================================================================
  neorv32_uart0_printf("\n========================================\n");
  neorv32_uart0_printf(" Results: %d passed, %d failed\n", test_pass, test_fail);
  neorv32_uart0_printf("========================================\n");

  if (test_fail == 0) {
    neorv32_uart0_printf(" ALL TESTS PASSED\n");
  } else {
    neorv32_uart0_printf(" SOME TESTS FAILED -- see above\n");
    neorv32_uart0_printf(" Tip: check TINYGPU_BASE in tinygpu_driver.h\n");
    neorv32_uart0_printf("      matches your neorv32_top.vhd instantiation\n");
  }

  // Full register dump for waveform correlation
  tgpu_print_status();

  return 0;
}
