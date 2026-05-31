// =============================================================================
// tinygpu_driver.c
// Driver implementation for TinyGPU-ML on NEORV32 / Tang Nano 20K
// =============================================================================

#include "tinygpu_driver.h"

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

  // Fire: write DIRECT_MODE | START together
  // START is a combinational pulse on the write, not a register bit
  tgpu_write(TGPU_REG_CTRL, TGPU_CTRL_DIRECT_MODE | TGPU_CTRL_START);

  // Wait for completion
  tgpu_status_t ret = tgpu_wait();
  if (ret != TGPU_OK) return ret;

  // Check for hardware errors
  return tgpu_check_status();
}

// =============================================================================
// tgpu_run_descriptor
// Indirect mode: hardware loads a descriptor struct from DMEM and runs it
// =============================================================================
tgpu_status_t tgpu_run_descriptor(uint32_t desc_addr) {
  if (tgpu_read(TGPU_REG_STATUS) & TGPU_STATUS_BUSY) {
    return TGPU_ERR_BUSY;
  }

  // Set indirect mode (DIRECT_MODE = 0)
  tgpu_write(TGPU_REG_CTRL, 0);
  tgpu_write(TGPU_REG_CMD_ADDR, desc_addr);

  // Fire
  tgpu_write(TGPU_REG_CTRL, TGPU_CTRL_START);

  tgpu_status_t ret = tgpu_wait();
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
    0,
    src,
    0,   // src1 not used
    0,   // bias not used
    dst,
    1,        // M = 1 row
    len,      // N = vector length
    1,        // K = 1
    len,      // stride0
    len,      // stride1
    len * 4   // stride_dst (INT32 output)
  );
}

// =============================================================================
// tgpu_vec_add
// z[len] = x[len] + y[len]
// =============================================================================
tgpu_status_t tgpu_vec_add(uint32_t src0, uint32_t src1, uint32_t dst, uint16_t len) {
  return tgpu_run_direct(
    TGPU_OP_VEC_ADD,
    0,
    src0,
    src1,
    0,
    dst,
    1, len, 1,
    len, len, len * 4
  );
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

  neorv32_uart0_printf("\n--- TinyGPU Status ---\n");
  neorv32_uart0_printf("CTRL    : 0x%x\n", ctrl);
  neorv32_uart0_printf("STATUS  : 0x%x\n", status);
  neorv32_uart0_printf("  BUSY  : %d\n", (status & TGPU_STATUS_BUSY)       ? 1 : 0);
  neorv32_uart0_printf("  DONE  : %d\n", (status & TGPU_STATUS_DONE)       ? 1 : 0);
  neorv32_uart0_printf("  READY : %d\n", (status & TGPU_STATUS_READY)      ? 1 : 0);
  neorv32_uart0_printf("  ERR_OP: %d\n", (status & TGPU_STATUS_ERR_OPCODE) ? 1 : 0);
  neorv32_uart0_printf("  ERR_SH: %d\n", (status & TGPU_STATUS_ERR_SHAPE)  ? 1 : 0);
  neorv32_uart0_printf("  ERR_MEM:%d\n", (status & TGPU_STATUS_ERR_MEMORY) ? 1 : 0);
  neorv32_uart0_printf("  ERR_FMT:%d\n", (status & TGPU_STATUS_ERR_FMT)    ? 1 : 0);

  uint32_t cyc, act, stl;
  tgpu_get_perf(&cyc, &act, &stl);
  neorv32_uart0_printf("CYCLES  : %d\n", cyc);
  neorv32_uart0_printf("ACTIVE  : %d\n", act);
  neorv32_uart0_printf("STALLS  : %d\n", stl);
  neorv32_uart0_printf("CMD_CNT : %d\n", tgpu_read(TGPU_REG_CMD_COUNT));
  neorv32_uart0_printf("----------------------\n");
}
