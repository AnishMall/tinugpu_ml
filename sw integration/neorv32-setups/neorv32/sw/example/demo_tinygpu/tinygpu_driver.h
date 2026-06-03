// =============================================================================
// tinygpu_driver.h
// Driver for TinyGPU-ML accelerator on NEORV32 / Tang Nano 20K
//
// Hardware facts (from tinygpu_regs.sv + tinygpu_pkg.sv):
//   Array  : 2x2 = 4 Processing Elements
//   Tile   : M=2, N=2, K=8
//   Data   : INT8 inputs, INT32 accumulators
//   SPM A  : 256 bytes   SPM B : 256 bytes   SPM C : 128 bytes
//   Ops    : GEMM, GEMV, VEC_ADD, VEC_MUL, RELU, CLAMP
//
// Base address : 0xFFEE0000
//   --> Confirm by checking where neorv32_tinygpu_wrapper is instantiated
//       in your neorv32_top.vhd. If it is NOT in the CFS slot, update
//       TINYGPU_BASE below to match your actual address.
// =============================================================================

#ifndef TINYGPU_DRIVER_H
#define TINYGPU_DRIVER_H

#include <stdint.h>
#include <neorv32.h>

// =============================================================================
// BASE ADDRESS  <-- verify against your neorv32_top.vhd instantiation
// =============================================================================
#define TINYGPU_BASE  0xFFEE0000UL

// =============================================================================
// REGISTER OFFSETS  (from tinygpu_regs.sv localparam)
// =============================================================================
#define TGPU_REG_CTRL         0x00  // RW: control register
#define TGPU_REG_STATUS       0x04  // RO: status register
#define TGPU_REG_CMD_ADDR     0x08  // RW: command descriptor address (indirect mode)
#define TGPU_REG_DIRECT_OP    0x0C  // RW: opcode (direct mode)
#define TGPU_REG_SRC0_ADDR    0x10  // RW: source matrix A base address
#define TGPU_REG_SRC1_ADDR    0x14  // RW: source matrix B base address
#define TGPU_REG_BIAS_ADDR    0x18  // RW: bias vector base address
#define TGPU_REG_DST_ADDR     0x1C  // RW: destination matrix base address
#define TGPU_REG_DIM_M        0x20  // RW: matrix M dimension (rows of A / rows of C)
#define TGPU_REG_DIM_N        0x24  // RW: matrix N dimension (cols of B / cols of C)
#define TGPU_REG_DIM_K        0x28  // RW: matrix K dimension (cols of A = rows of B)
#define TGPU_REG_STRIDE0      0x2C  // RW: stride for src0 (bytes per row)
#define TGPU_REG_STRIDE1      0x30  // RW: stride for src1
#define TGPU_REG_STRIDE_DST   0x34  // RW: stride for dst
#define TGPU_REG_FLAGS        0x38  // RW: operation flags
#define TGPU_REG_SCALE        0x3C  // RW: requantization scale factor
#define TGPU_REG_SHIFT_ZP     0x40  // RW: [31:16]=shift, [15:0]=zero_point
#define TGPU_REG_CYCLE_COUNT  0x44  // RO: total cycles of last command
#define TGPU_REG_ACTIVE_CNT   0x48  // RO: active (compute) cycles of last command
#define TGPU_REG_STALL_CNT    0x4C  // RO: stall cycles of last command
#define TGPU_REG_CMD_COUNT    0x50  // RO: total commands executed since reset
#define TGPU_REG_IRQ_STATUS   0x54  // RW: write bit[0]=1 to clear IRQ pending

// =============================================================================
// CTRL register bits (offset 0x00)
// =============================================================================
#define TGPU_CTRL_START       (1u << 0)  // write 1 = start (auto-clears, pulse)
#define TGPU_CTRL_SOFT_RESET  (1u << 1)  // write 1 = soft reset
#define TGPU_CTRL_IRQ_EN      (1u << 2)  // 1 = enable done interrupt (FIRQ1)
#define TGPU_CTRL_DIRECT_MODE (1u << 3)  // 1 = direct mode, 0 = indirect/descriptor

// TinyGPU IRQ is routed on FIRQ1 in the SW integration setup.
#define TGPU_FIRQ_ENABLE      CFS_FIRQ_ENABLE
#define TGPU_FIRQ_PENDING     CFS_FIRQ_PENDING
#define TGPU_TRAP_CODE        CFS_TRAP_CODE

// =============================================================================
// STATUS register bits (offset 0x04)  -- READ ONLY
// =============================================================================
#define TGPU_STATUS_BUSY          (1u << 0)  // 1 = accelerator is running
#define TGPU_STATUS_DONE          (1u << 1)  // 1 = last command completed (sticky)
#define TGPU_STATUS_ERR_OPCODE    (1u << 2)  // error: illegal opcode
#define TGPU_STATUS_ERR_SHAPE     (1u << 3)  // error: bad matrix dimensions
#define TGPU_STATUS_ERR_MEMORY    (1u << 4)  // error: memory access fault
#define TGPU_STATUS_ERR_FMT       (1u << 5)  // error: unsupported format
#define TGPU_STATUS_READY         (1u << 6)  // 1 = not busy (convenience)
#define TGPU_STATUS_ERR_MASK      (TGPU_STATUS_ERR_OPCODE | \
                                   TGPU_STATUS_ERR_SHAPE  | \
                                   TGPU_STATUS_ERR_MEMORY | \
                                   TGPU_STATUS_ERR_FMT)

// =============================================================================
// OPCODES  (from tinygpu_pkg.sv)
// =============================================================================
#define TGPU_OP_NOP      0x00u  // no operation
#define TGPU_OP_GEMM     0x01u  // C = A * B  (INT8 in, INT32 out)
#define TGPU_OP_GEMV     0x02u  // y = A * x  (matrix-vector)
#define TGPU_OP_VEC_ADD  0x03u  // z = x + y  (element-wise)
#define TGPU_OP_VEC_MUL  0x04u  // z = x * y  (element-wise)
#define TGPU_OP_RELU     0x05u  // y = max(0, x)
#define TGPU_OP_CLAMP    0x06u  // y = clamp(x, min, max)

// =============================================================================
// FLAGS register bits (offset 0x38)
// =============================================================================
#define TGPU_FLAG_BIAS_EN      (1u << 0)  // add bias after compute
#define TGPU_FLAG_RELU_EN      (1u << 1)  // apply ReLU to output
#define TGPU_FLAG_CLAMP_EN     (1u << 2)  // apply clamp to output
#define TGPU_FLAG_REQUANT_EN   (1u << 3)  // apply requantization
#define TGPU_FLAG_DST_INT8     (1u << 4)  // store result as INT8
#define TGPU_FLAG_DST_INT32    (1u << 5)  // store result as INT32
#define TGPU_FLAG_SIGNED_MODE  (1u << 6)  // signed arithmetic

// =============================================================================
// HARDWARE LIMITS  (from tinygpu_pkg.sv)
// =============================================================================
#define TGPU_TILE_M       2
#define TGPU_TILE_N       2
#define TGPU_TILE_K       8
#define TGPU_NUM_PES      4          // TILE_M * TILE_N
#define TGPU_SPM_A_BYTES  256
#define TGPU_SPM_B_BYTES  256
#define TGPU_SPM_C_BYTES  128
#define TGPU_MAX_BURST    8

// =============================================================================
// TIMEOUT for polling (adjust if running at different clock speeds)
// At 27 MHz clock, 1 000 000 iterations ~ 37 ms
// =============================================================================
#define TGPU_POLL_TIMEOUT  1000000u

// =============================================================================
// REGISTER ACCESSOR MACROS
// =============================================================================
#define TGPU_REG(offset)  (*((volatile uint32_t*)(TINYGPU_BASE + (offset))))

#define tgpu_write(offset, val)   (TGPU_REG(offset) = (uint32_t)(val))
#define tgpu_read(offset)         (TGPU_REG(offset))

// =============================================================================
// RETURN CODES
// =============================================================================
typedef enum {
  TGPU_OK               =  0,
  TGPU_ERR_TIMEOUT      = -1,
  TGPU_ERR_OPCODE       = -2,
  TGPU_ERR_SHAPE        = -3,
  TGPU_ERR_MEMORY       = -4,
  TGPU_ERR_FMT          = -5,
  TGPU_ERR_BUSY         = -6,
} tgpu_status_t;

// =============================================================================
// DESCRIPTOR  (for indirect / command-queue mode)
// Write this struct to DMEM, then point TGPU_REG_CMD_ADDR at it
// =============================================================================
typedef struct __attribute__((packed)) {
  uint8_t  opcode;       // TGPU_OP_*
  uint8_t  _pad0[3];
  uint32_t flags;        // TGPU_FLAG_*
  uint32_t src0_addr;    // byte address of matrix A in DMEM
  uint32_t src1_addr;    // byte address of matrix B in DMEM
  uint32_t bias_addr;    // byte address of bias vector (or 0)
  uint32_t dst_addr;     // byte address of output in DMEM
  uint16_t dim_m;
  uint16_t dim_n;
  uint16_t dim_k;
  uint16_t stride0;      // bytes per row of src0
  uint16_t stride1;      // bytes per row of src1
  uint16_t stride_dst;   // bytes per row of dst
  uint32_t scale;        // requant scale
  uint16_t shift;        // requant shift
  uint16_t zero_point;   // requant zero point
} tgpu_descriptor_t;

// =============================================================================
// API DECLARATIONS
// =============================================================================

// Initialise / soft-reset the accelerator
void tgpu_init(void);

// Poll until not busy. Returns TGPU_OK or TGPU_ERR_TIMEOUT.
tgpu_status_t tgpu_wait(void);

// Read and decode the STATUS register. Returns error code or TGPU_OK.
tgpu_status_t tgpu_check_status(void);

// Direct mode: fill registers and fire.
// All addresses are byte addresses in the NEORV32 address space.
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
);

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
);

// Indirect mode: point at a descriptor in memory and fire.
tgpu_status_t tgpu_start_descriptor(uint32_t desc_addr, uint32_t ctrl_flags);
tgpu_status_t tgpu_run_descriptor(uint32_t desc_addr);

// Convenience wrappers
tgpu_status_t tgpu_gemm(
  uint32_t src_a, uint32_t src_b, uint32_t dst,
  uint16_t M, uint16_t N, uint16_t K,
  uint32_t flags
);

tgpu_status_t tgpu_relu(uint32_t src, uint32_t dst, uint16_t len);
tgpu_status_t tgpu_vec_add(uint32_t src0, uint32_t src1, uint32_t dst, uint16_t len);

// IRQ helpers
void tgpu_irq_enable(void);
void tgpu_irq_disable(void);
void tgpu_irq_ack(void);
uint32_t tgpu_irq_pending(void);

// Read performance counters from last command
void tgpu_get_perf(uint32_t *cycles, uint32_t *active, uint32_t *stalls);

// Print status to UART0 (debug helper)
void tgpu_print_status(void);

#endif // TINYGPU_DRIVER_H
