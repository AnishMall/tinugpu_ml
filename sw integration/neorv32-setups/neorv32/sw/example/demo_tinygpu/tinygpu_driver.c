// =============================================================================
// tinygpu_driver.c
// Driver implementation for TinyGPU-ML on NEORV32 / Tang Nano 20K
// =============================================================================

#include "tinygpu_driver.h"

static void tgpu_uart_putc(char c) {
  neorv32_uart0_putc(c);
}

static void tgpu_uart_puts(const char *s) {
  while (*s != '\0') {
    tgpu_uart_putc(*s);
    s++;
  }
}

static void tgpu_uart_print_u32(uint32_t value) {
  char buf[12];
  neorv32_aux_itoa(buf, value, 10);
  tgpu_uart_puts(buf);
}

static void tgpu_uart_print_hex32(uint32_t value) {
  char buf[12];
  neorv32_aux_itoa(buf, value, 16);
  tgpu_uart_puts("0x");
  tgpu_uart_puts(buf);
}

// =============================================================================
// tgpu_init
// Soft-reset the accelerator and verify it responds
// =============================================================================
void tgpu_init(void) {
  // Issue soft reset (bit 1 of CTRL) - clears all internal state
  tgpu_write(TGPU_REG_CTRL, TGPU_CTRL_SOFT_RESET);
  // Write 0 to release reset (soft_reset is level-triggered in hardware)
  tgpu_write(TGPU_REG_CTRL, 0);
}

// =============================================================================
// tgpu_wait
// Poll STATUS[BUSY] until clear. Returns TGPU_OK or TGPU_ERR_TIMEOUT.
// =============================================================================
tgpu_status_t tgpu_wait(void) {
  uint32_t timeout = TGPU_POLL_TIMEOUT;
  while (tgpu_read(TGPU_REG_STATUS) & TGPU_STATUS_BUSY) {
    if (--timeout == 0) {
      return TGPU_ERR_TIMEOUT;
    }
  }
  return TGPU_OK;
}

// =============================================================================
// tgpu_check_status
// Read STATUS and decode any error bits
// =============================================================================
tgpu_status_t tgpu_check_status(void) {
  uint32_t s = tgpu_read(TGPU_REG_STATUS);
  if (s & TGPU_STATUS_ERR_OPCODE) return TGPU_ERR_OPCODE;
  if (s & TGPU_STATUS_ERR_SHAPE)  return TGPU_ERR_SHAPE;
  if (s & TGPU_STATUS_ERR_MEMORY) return TGPU_ERR_MEMORY;
  if (s & TGPU_STATUS_ERR_FMT)    return TGPU_ERR_FMT;
  return TGPU_OK;
}

// =============================================================================
// tgpu_start_direct
// Program all registers manually and fire START pulse without waiting.
// ctrl_flags may contain TGPU_CTRL_IRQ_EN.
// =============================================================================
tgpu_status_t tgpu_start_direct(
  uint8_t   opcode,
  uint32_t  flags,
  uint32_t  src0_addr,
  uint32_t  src1_addr,
  uint32_t  bias_addr,
  uint32_t  dst_addr,
  uint16_t  dim_m,
  uint16_t  dim_n,
  uint16_t  dim_k,
  uint16_t  stride0,
  uint16_t  stride1,
  uint16_t  stride_dst,
  uint32_t  ctrl_flags
) {
  // Guard: don't start if already busy
  if (tgpu_read(TGPU_REG_STATUS) & TGPU_STATUS_BUSY) {
    return TGPU_ERR_BUSY;
  }

  // Enable direct mode (bit 3 of CTRL)
  tgpu_write(TGPU_REG_CTRL, TGPU_CTRL_DIRECT_MODE);

  // Write operand addresses
  tgpu_write(TGPU_REG_SRC0_ADDR,  src0_addr);
  tgpu_write(TGPU_REG_SRC1_ADDR,  src1_addr);
  tgpu_write(TGPU_REG_BIAS_ADDR,  bias_addr);
  tgpu_write(TGPU_REG_DST_ADDR,   dst_addr);

  // Write dimensions
  tgpu_write(TGPU_REG_DIM_M, (uint32_t)dim_m);
  tgpu_write(TGPU_REG_DIM_N, (uint32_t)dim_n);
  tgpu_write(TGPU_REG_DIM_K, (uint32_t)dim_k);

  // Write strides (bytes per row)
  tgpu_write(TGPU_REG_STRIDE0,    (uint32_t)stride0);
  tgpu_write(TGPU_REG_STRIDE1,    (uint32_t)stride1);
  tgpu_write(TGPU_REG_STRIDE_DST, (uint32_t)stride_dst);

  // Write flags and opcode
  tgpu_write(TGPU_REG_FLAGS,      flags);
  tgpu_write(TGPU_REG_DIRECT_OP,  (uint32_t)opcode);

  // Fire: write DIRECT_MODE | optional IRQ_EN | START together
  // START is a combinational pulse on the write, not a register bit
  tgpu_write(TGPU_REG_CTRL, TGPU_CTRL_DIRECT_MODE | ctrl_flags | TGPU_CTRL_START);

  return TGPU_OK;
}

// =============================================================================
// tgpu_run_direct
// Program all registers manually and fire START pulse
// =============================================================================
tgpu_status_t tgpu_run_direct(
  uint8_t   opcode,
  uint32_t  flags,
  uint32_t  src0_addr,
  uint32_t  src1_addr,
  uint32_t  bias_addr,
  uint32_t  dst_addr,
  uint16_t  dim_m,
  uint16_t  dim_n,
  uint16_t  dim_k,
  uint16_t  stride0,
  uint16_t  stride1,
  uint16_t  stride_dst
) {
  tgpu_status_t ret = tgpu_start_direct(
    opcode, flags, src0_addr, src1_addr, bias_addr, dst_addr,
    dim_m, dim_n, dim_k, stride0, stride1, stride_dst, 0
  );
  if (ret != TGPU_OK) return ret;

  // Wait for completion
  ret = tgpu_wait();
  if (ret != TGPU_OK) return ret;

  // Check for hardware errors
  return tgpu_check_status();
}

// =============================================================================
// tgpu_start_descriptor
// Indirect mode: hardware loads a descriptor struct from DMEM and runs it.
// ctrl_flags may contain TGPU_CTRL_IRQ_EN.
// =============================================================================
tgpu_status_t tgpu_start_descriptor(uint32_t desc_addr, uint32_t ctrl_flags) {
  if (tgpu_read(TGPU_REG_STATUS) & TGPU_STATUS_BUSY) {
    return TGPU_ERR_BUSY;
  }

  // Set indirect mode (DIRECT_MODE = 0)
  tgpu_write(TGPU_REG_CTRL, 0);
  tgpu_write(TGPU_REG_CMD_ADDR, desc_addr);

  // Fire
  tgpu_write(TGPU_REG_CTRL, ctrl_flags | TGPU_CTRL_START);

  return TGPU_OK;
}

// =============================================================================
// tgpu_run_descriptor
// Indirect mode: hardware loads a descriptor struct from DMEM and runs it
// =============================================================================
tgpu_status_t tgpu_run_descriptor(uint32_t desc_addr) {
  tgpu_status_t ret = tgpu_start_descriptor(desc_addr, 0);
  if (ret != TGPU_OK) return ret;

  ret = tgpu_wait();
  if (ret != TGPU_OK) return ret;

  return tgpu_check_status();
}

// =============================================================================
// tgpu_gemm
// C[M][N] = A[M][K] * B[K][N]   (INT8 inputs, INT32 output)
// Strides default to tightly-packed rows
// =============================================================================
tgpu_status_t tgpu_gemm(
  uint32_t src_a, uint32_t src_b, uint32_t dst,
  uint16_t M, uint16_t N, uint16_t K,
  uint32_t flags
) {
  return tgpu_run_direct(
    TGPU_OP_GEMM,
    flags,
    src_a,
    src_b,
    0,              // no bias
    dst,
    M, N, K,
    K,              // stride0: K bytes per row of A (INT8, 1 byte each)
    N,              // stride1: N bytes per row of B
    N * 4           // stride_dst: N * 4 bytes per row of C (INT32 output)
  );
}

// =============================================================================
// tgpu_relu
// y[len] = max(0, x[len])
// =============================================================================
tgpu_status_t tgpu_relu(uint32_t src, uint32_t dst, uint16_t len) {
  return tgpu_run_direct(
    TGPU_OP_RELU,
    TGPU_FLAG_DST_INT32 | TGPU_FLAG_SIGNED_MODE,
    src,
    0,   // src1 not used
    0,   // bias not used
    dst,
    len,      // M = vector length
    1,        // N is unused by vector operations
    1,        // K = 1
    1,        // INT8 source element stride
    1,        // src1 is unused
    4         // INT32 destination element stride
  );
}

// =============================================================================
// tgpu_vec_add
// z[len] = x[len] + y[len]
// =============================================================================
tgpu_status_t tgpu_vec_add(uint32_t src0, uint32_t src1, uint32_t dst, uint16_t len) {
  return tgpu_run_direct(
    TGPU_OP_VEC_ADD,
    TGPU_FLAG_DST_INT32 | TGPU_FLAG_SIGNED_MODE,
    src0,
    src1,
    0,
    dst,
    len, 1, 1,
    1, 1, 4
  );
}

// =============================================================================
// TinyGPU IRQ helpers
// =============================================================================
void tgpu_irq_enable(void) {
  tgpu_write(TGPU_REG_CTRL, TGPU_CTRL_IRQ_EN);
}

void tgpu_irq_disable(void) {
  tgpu_write(TGPU_REG_CTRL, 0);
}

void tgpu_irq_ack(void) {
  tgpu_write(TGPU_REG_IRQ_STATUS, 1u);
}

uint32_t tgpu_irq_pending(void) {
  return tgpu_read(TGPU_REG_IRQ_STATUS) & 1u;
}

// =============================================================================
// tgpu_get_perf
// Read performance counters captured at end of last command
// =============================================================================
void tgpu_get_perf(uint32_t *cycles, uint32_t *active, uint32_t *stalls) {
  if (cycles) *cycles = tgpu_read(TGPU_REG_CYCLE_COUNT);
  if (active) *active = tgpu_read(TGPU_REG_ACTIVE_CNT);
  if (stalls) *stalls = tgpu_read(TGPU_REG_STALL_CNT);
}

// =============================================================================
// tgpu_print_status
// Dump full register state to UART0 for debugging
// =============================================================================
void tgpu_print_status(void) {
  uint32_t status = tgpu_read(TGPU_REG_STATUS);
  uint32_t ctrl   = tgpu_read(TGPU_REG_CTRL);

  tgpu_uart_puts("\n--- TinyGPU Status ---\n");
  tgpu_uart_puts("CTRL    : ");
  tgpu_uart_print_hex32(ctrl);
  tgpu_uart_putc('\n');
  tgpu_uart_puts("STATUS  : ");
  tgpu_uart_print_hex32(status);
  tgpu_uart_putc('\n');
  tgpu_uart_puts("  BUSY  : ");
  tgpu_uart_print_u32((status & TGPU_STATUS_BUSY) ? 1u : 0u);
  tgpu_uart_putc('\n');
  tgpu_uart_puts("  DONE  : ");
  tgpu_uart_print_u32((status & TGPU_STATUS_DONE) ? 1u : 0u);
  tgpu_uart_putc('\n');
  tgpu_uart_puts("  READY : ");
  tgpu_uart_print_u32((status & TGPU_STATUS_READY) ? 1u : 0u);
  tgpu_uart_putc('\n');
  tgpu_uart_puts("  ERR_OP: ");
  tgpu_uart_print_u32((status & TGPU_STATUS_ERR_OPCODE) ? 1u : 0u);
  tgpu_uart_putc('\n');
  tgpu_uart_puts("  ERR_SH: ");
  tgpu_uart_print_u32((status & TGPU_STATUS_ERR_SHAPE) ? 1u : 0u);
  tgpu_uart_putc('\n');
  tgpu_uart_puts("  ERR_MEM:");
  tgpu_uart_print_u32((status & TGPU_STATUS_ERR_MEMORY) ? 1u : 0u);
  tgpu_uart_putc('\n');
  tgpu_uart_puts("  ERR_FMT:");
  tgpu_uart_print_u32((status & TGPU_STATUS_ERR_FMT) ? 1u : 0u);
  tgpu_uart_putc('\n');

  uint32_t cyc, act, stl;
  tgpu_get_perf(&cyc, &act, &stl);
  tgpu_uart_puts("CYCLES  : ");
  tgpu_uart_print_u32(cyc);
  tgpu_uart_putc('\n');
  tgpu_uart_puts("ACTIVE  : ");
  tgpu_uart_print_u32(act);
  tgpu_uart_putc('\n');
  tgpu_uart_puts("STALLS  : ");
  tgpu_uart_print_u32(stl);
  tgpu_uart_putc('\n');
  tgpu_uart_puts("CMD_CNT : ");
  tgpu_uart_print_u32(tgpu_read(TGPU_REG_CMD_COUNT));
  tgpu_uart_puts("\n----------------------\n");
}
