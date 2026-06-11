# TinyGPU-ML RTL Implementation Specification

This document describes the TinyGPU-ML accelerator from a hardware implementation point of view. It is intended to be used as a design prompt/specification for generating Verilog/SystemVerilog RTL and extensive simulation testbenches.

The accelerator is a compact GPU-like ML compute subsystem for a NEORV32-based RISC-V SoC. It is not a graphics GPU. It is a memory-mapped, command-driven compute accelerator for quantized ML inference kernels.

---

## 1. Top-Level Goal

Implement a synthesizable RTL accelerator that supports:

1. Tiled GEMM: `C = A x B`
2. GEMV as a special case of GEMM
3. Vector add
4. Vector multiply
5. ReLU / clamp
6. Bias add
7. Requantization from `int32` accumulator values to `int8`
8. Conv2D through software `im2col + GEMM`, not through a dedicated convolution datapath

For larger tile configurations such as the standalone `4x4x16` RTL, the implementation may serialize the epilogue and reuse a shared multiplier for requantization in order to reduce FPGA area. The MAC array can remain parallel even if the postprocess path is multi-cycle.

The hardware must expose:

1. A memory-mapped register interface for NEORV32
2. A simple SRAM-like master interface for reading/writing matrix/vector data
3. Internal scratchpad buffers for tiled execution
4. A 4x4 int8 MAC array with int32 accumulation
5. An epilogue stage for bias, activation, and quantization
6. Performance counters for cycle count, active cycles, stall cycles, and completed command count
7. A complete verification suite with deterministic and randomized testbenches

---

## 2. RTL Language and Coding Expectations

Use synthesizable SystemVerilog where possible. If pure Verilog is required, keep the same module structure and replace packed structs/enums with localparams and explicit buses.

Required RTL style:

- Synchronous design with one clock and active-low reset: `clk`, `rst_n`
- Nonblocking assignments in sequential blocks
- Combinational `always_comb` or `always @(*)` for next-state logic
- No inferred latches
- Parameterized widths and tile sizes
- Small, testable modules
- Explicit valid/ready style handshakes where useful
- Synthesizable RTL only
- Testbenches may use SystemVerilog tasks, randomization, assertions, `$readmemh`, and `$display`

---

## 3. Global Parameters

Create a file named `tinygpu_pkg.sv` or `tinygpu_defs.vh`.

```systemverilog
parameter int ADDR_W       = 32;
parameter int DATA_W       = 32;
parameter int INT8_W       = 8;
parameter int ACC_W        = 32;

parameter int TILE_M       = 4;
parameter int TILE_N       = 4;
parameter int TILE_K       = 16;

parameter int NUM_PES      = TILE_M * TILE_N; // 16
parameter int SPM_A_BYTES  = 512;  // two banks of 256 bytes
parameter int SPM_B_BYTES  = 512;  // two banks of 256 bytes
parameter int SPM_C_BYTES  = 256;  // output staging
parameter int MAX_BURST    = 16;
```

Data format:

- A input: signed int8
- B input: signed int8
- MAC product: signed int16
- Accumulator: signed int32
- Bias: signed int32
- Output before quantization: signed int32
- Output after quantization: signed int8 with saturation

---

## 4. Opcode and Flag Definitions

Use these opcodes in the command processor.

```systemverilog
localparam logic [7:0] OP_NOP       = 8'h00;
localparam logic [7:0] OP_GEMM      = 8'h01;
localparam logic [7:0] OP_GEMV      = 8'h02;
localparam logic [7:0] OP_VEC_ADD   = 8'h03;
localparam logic [7:0] OP_VEC_MUL   = 8'h04;
localparam logic [7:0] OP_RELU      = 8'h05;
localparam logic [7:0] OP_CLAMP     = 8'h06;
```

Use these flags:

```systemverilog
localparam int FLAG_BIAS_EN         = 0;
localparam int FLAG_RELU_EN         = 1;
localparam int FLAG_CLAMP_EN        = 2;
localparam int FLAG_REQUANT_EN      = 3;
localparam int FLAG_DST_INT8        = 4;
localparam int FLAG_DST_INT32       = 5;
localparam int FLAG_SIGNED_MODE     = 6;
```

Rules:

- `OP_GEMM` uses `M`, `N`, `K`.
- `OP_GEMV` uses `M`, `K`; internally set `N = 1`.
- `OP_VEC_ADD`, `OP_VEC_MUL`, `OP_RELU`, `OP_CLAMP` use `M` as vector length.
- `FLAG_REQUANT_EN` and `FLAG_DST_INT8` mean the epilogue converts int32 results to int8.
- If both `FLAG_DST_INT8` and `FLAG_DST_INT32` are set, raise shape/descriptor error.
- Unsupported opcodes set `STATUS.illegal_opcode`.

---

## 5. Memory-Mapped Register Interface

The accelerator appears as an MMIO peripheral to NEORV32.

| Offset | Register | Access | Description |
|---:|---|---|---|
| `0x00` | `CTRL` | R/W | Start, soft reset, IRQ enable, direct mode |
| `0x04` | `STATUS` | R | Busy, done, error bits |
| `0x08` | `CMD_ADDR` | R/W | Descriptor address in shared memory |
| `0x0C` | `DIRECT_OP` | R/W | Opcode for direct-launch mode |
| `0x10` | `SRC0_ADDR` | R/W | Matrix A / vector X base address |
| `0x14` | `SRC1_ADDR` | R/W | Matrix B / vector Y base address |
| `0x18` | `BIAS_ADDR` | R/W | Bias base address, optional |
| `0x1C` | `DST_ADDR` | R/W | Output base address |
| `0x20` | `DIM_M` | R/W | M dimension / vector length |
| `0x24` | `DIM_N` | R/W | N dimension |
| `0x28` | `DIM_K` | R/W | K dimension |
| `0x2C` | `STRIDE0` | R/W | Source 0 row stride in bytes |
| `0x30` | `STRIDE1` | R/W | Source 1 row stride in bytes |
| `0x34` | `STRIDE_DST` | R/W | Destination row stride in bytes |
| `0x38` | `FLAGS` | R/W | Kernel flags |
| `0x3C` | `SCALE` | R/W | Requant scale multiplier |
| `0x40` | `SHIFT_ZP` | R/W | `{shift[15:0], zero_point[15:0]}` |
| `0x44` | `CYCLE_COUNT` | R | Cycles for last command |
| `0x48` | `ACTIVE_COUNT` | R | Cycles with active compute |
| `0x4C` | `STALL_COUNT` | R | Cycles stalled |
| `0x50` | `CMD_COUNT` | R | Completed commands since reset |
| `0x54` | `IRQ_STATUS` | R/W1C | Interrupt status |

### CTRL bits

```systemverilog
CTRL[0] = start
CTRL[1] = soft_reset
CTRL[2] = irq_enable
CTRL[3] = direct_mode
```

When software writes `CTRL.start = 1`, the accelerator latches all direct-mode argument registers. The RTL should auto-clear the internal start pulse after accepting the command.

### STATUS bits

```systemverilog
STATUS[0] = busy
STATUS[1] = done
STATUS[2] = illegal_opcode
STATUS[3] = shape_error
STATUS[4] = memory_error
STATUS[5] = unsupported_format
STATUS[6] = idle
```

`done` remains high until the next command starts or software clears it via `CTRL.start` or soft reset.

---

## 6. External Interfaces

### 6.1 Top-level module

```systemverilog
module tinygpu_top #(
    parameter int ADDR_W = 32,
    parameter int DATA_W = 32
)(
    input  logic                 clk,
    input  logic                 rst_n,

    // MMIO slave interface
    input  logic                 mmio_valid,
    input  logic                 mmio_we,
    input  logic [ADDR_W-1:0]    mmio_addr,
    input  logic [DATA_W-1:0]    mmio_wdata,
    input  logic [DATA_W/8-1:0]  mmio_wstrb,
    output logic [DATA_W-1:0]    mmio_rdata,
    output logic                 mmio_ready,

    // Simple SRAM-like master interface
    output logic                 mem_req,
    output logic                 mem_we,
    output logic [ADDR_W-1:0]    mem_addr,
    output logic [DATA_W-1:0]    mem_wdata,
    output logic [DATA_W/8-1:0]  mem_wstrb,
    input  logic [DATA_W-1:0]    mem_rdata,
    input  logic                 mem_ready,
    input  logic                 mem_rvalid,

    output logic                 irq
);
```

### 6.2 MMIO behavior

- Reads and writes complete in one cycle if the register file is ready.
- `mmio_ready` can be tied high for a simple implementation.
- Writes obey `mmio_wstrb`.
- Read addresses outside the register map return zero.
- Writes outside the register map are ignored.

### 6.3 SRAM master behavior

For write:

1. Assert `mem_req = 1`, `mem_we = 1`, `mem_addr`, `mem_wdata`, `mem_wstrb`.
2. Wait for `mem_ready`.
3. Deassert request or issue the next transfer.

For read:

1. Assert `mem_req = 1`, `mem_we = 0`, `mem_addr`.
2. Wait for `mem_ready` to accept address.
3. Wait for `mem_rvalid`.
4. Capture `mem_rdata`.

The testbench memory model must support configurable latency.

---

## 7. RTL Module Hierarchy

Implement these files.

```text
rtl/
  tinygpu_pkg.sv
  tinygpu_top.sv
  tinygpu_regs.sv
  tinygpu_cmd_ctrl.sv
  tinygpu_dma.sv
  tinygpu_spm.sv
  tinygpu_pe.sv
  tinygpu_array4x4.sv
  tinygpu_shared_mul.sv
  tinygpu_epilogue_shared.sv
  tinygpu_epilogue.sv
  tinygpu_vec_alu.sv
  tinygpu_counters.sv

tb/
  tb_tinygpu_pe.sv
  tb_tinygpu_array4x4.sv
  tb_tinygpu_epilogue.sv
  tb_tinygpu_spm.sv
  tb_tinygpu_dma.sv
  tb_tinygpu_regs.sv
  tb_tinygpu_gemm.sv
  tb_tinygpu_vector.sv
  tb_tinygpu_top_random.sv
  tb_tinygpu_top_directed.sv
  tinygpu_mem_model.sv
  tinygpu_scoreboard.sv
  tinygpu_golden_pkg.sv
```

### 7.1 Practical 4x4 Area Note

The straightforward interpretation of this spec would instantiate a fully parallel `4x4` epilogue as well as the `4x4` MAC array. That is functionally fine, but expensive on smaller FPGAs.

A practical implementation strategy is:

- keep the `4x4` PE array parallel
- stage the accumulated tile results
- run a shared multi-cycle epilogue over one element at a time
- reuse a shared multiplier block for requantization instead of instantiating 16 parallel requant multipliers

That optimization changes latency, but not the software-visible behavior of the accelerator.

---

## 8. Processing Element RTL

### Module

```systemverilog
module tinygpu_pe (
    input  logic                 clk,
    input  logic                 rst_n,

    input  logic                 clear_acc,
    input  logic                 mac_en,
    input  logic signed [7:0]    a_i,
    input  logic signed [7:0]    b_i,

    output logic signed [31:0]   acc_o
);
```

### Behavior

On reset:

```systemverilog
acc_o <= 32'sd0;
```

On `clear_acc`:

```systemverilog
acc_o <= 32'sd0;
```

On `mac_en`:

```systemverilog
acc_o <= acc_o + signed'(a_i) * signed'(b_i);
```

The first implementation can use a single-cycle MAC. If pipelining is added later, propagate valid signals and adjust the controller/testbenches for pipeline latency.

---

## 9. 4x4 MAC Array

### Module

```systemverilog
module tinygpu_array4x4 (
    input  logic                  clk,
    input  logic                  rst_n,

    input  logic                  clear_acc,
    input  logic                  mac_en,

    input  logic signed [7:0]     a_vec [0:3],
    input  logic signed [7:0]     b_vec [0:3],

    input  logic [3:0]            row_mask,
    input  logic [3:0]            col_mask,

    output logic signed [31:0]    c_tile [0:3][0:3]
);
```

### Behavior

The array contains 16 PEs. For PE `(r,c)`:

```systemverilog
pe_mac_en = mac_en && row_mask[r] && col_mask[c];
pe_a      = a_vec[r];
pe_b      = b_vec[c];
```

Each PE computes:

```text
c_tile[r][c] += a_vec[r] * b_vec[c]
```

for each K step.

### GEMM tile semantics

For one 4x4 output tile:

```text
for kk in 0..K_TILE_ACTIVE-1:
    a_vec[0] = A[m+0][k+kk]
    a_vec[1] = A[m+1][k+kk]
    a_vec[2] = A[m+2][k+kk]
    a_vec[3] = A[m+3][k+kk]

    b_vec[0] = B[k+kk][n+0]
    b_vec[1] = B[k+kk][n+1]
    b_vec[2] = B[k+kk][n+2]
    b_vec[3] = B[k+kk][n+3]

    array MACs all 16 output elements
```

At the end of all K tiles, `c_tile` contains the output tile before epilogue.

---

## 10. Scratchpad Memory

### Module

```systemverilog
module tinygpu_spm #(
    parameter int A_BYTES = 512,
    parameter int B_BYTES = 512,
    parameter int C_BYTES = 256
)(
    input logic clk,
    input logic rst_n,

    // DMA write/read side
    input  logic        dma_wr_en,
    input  logic [1:0]  dma_region, // 0=A, 1=B, 2=C
    input  logic [8:0]  dma_addr,
    input  logic [31:0] dma_wdata,
    input  logic [3:0]  dma_wstrb,
    output logic [31:0] dma_rdata,

    // Compute read side for A and B
    input  logic [7:0]  a_rd_addr [0:3],
    output logic [7:0]  a_rd_data [0:3],

    input  logic [7:0]  b_rd_addr [0:3],
    output logic [7:0]  b_rd_data [0:3],

    // C write/read side
    input  logic        c_wr_en,
    input  logic [7:0]  c_wr_addr,
    input  logic [31:0] c_wr_data,
    input  logic [7:0]  c_rd_addr,
    output logic [31:0] c_rd_data
);
```

### Layout

A scratchpad stores a 4x16 tile:

```text
A_tile[row][kk], row = 0..3, kk = 0..15
linear address = row * TILE_K + kk
```

B scratchpad stores a 16x4 tile:

```text
B_tile[kk][col], kk = 0..15, col = 0..3
linear address = kk * TILE_N + col
```

C staging stores a 4x4 tile:

```text
C_tile[row][col], row = 0..3, col = 0..3
linear address = row * TILE_N + col
```

Implement two banks each for A and B: `A_bank0`, `A_bank1`, `B_bank0`, `B_bank1`. The first version may use one bank, but the interface should allow bank selection.

---

## 11. DMA / Address Generator

### Module

```systemverilog
module tinygpu_dma (
    input  logic              clk,
    input  logic              rst_n,

    input  logic              start,
    output logic              busy,
    output logic              done,
    output logic              error,

    input  logic [1:0]        op_kind,      // load A, load B, store C, load vector
    input  logic [31:0]       base_addr,
    input  logic [15:0]       rows,
    input  logic [15:0]       cols,
    input  logic [15:0]       stride_bytes,
    input  logic [1:0]        spm_region,
    input  logic [8:0]        spm_base,

    // memory master
    output logic              mem_req,
    output logic              mem_we,
    output logic [31:0]       mem_addr,
    output logic [31:0]       mem_wdata,
    output logic [3:0]        mem_wstrb,
    input  logic [31:0]       mem_rdata,
    input  logic              mem_ready,
    input  logic              mem_rvalid,

    // scratchpad side
    output logic              spm_wr_en,
    output logic [1:0]        spm_region_o,
    output logic [8:0]        spm_addr,
    output logic [31:0]       spm_wdata,
    output logic [3:0]        spm_wstrb,
    input  logic [31:0]       spm_rdata
);
```

### Address generation

For int8 element loads:

```text
mem_addr = base_addr + row * stride_bytes + col
```

For int32 read/store:

```text
mem_addr = base_addr + row * stride_bytes + col * 4
```

The DMA should support unaligned byte loads by reading the containing 32-bit word and extracting the requested byte. If alignment is restricted, descriptor validation must reject invalid addresses.

### FSM

```text
DMA_IDLE
DMA_ISSUE_READ
DMA_WAIT_READ
DMA_WRITE_SPM
DMA_READ_SPM
DMA_ISSUE_WRITE
DMA_DONE
DMA_ERROR
```

---

## 12. Epilogue Stage

### Module

```systemverilog
module tinygpu_epilogue (
    input  logic                 clk,
    input  logic                 rst_n,

    input  logic                 start,
    output logic                 busy,
    output logic                 done,

    input  logic [31:0]          flags,
    input  logic signed [31:0]   scale,
    input  logic signed [15:0]   shift,
    input  logic signed [15:0]   zero_point,

    input  logic signed [31:0]   c_in [0:3][0:3],
    input  logic signed [31:0]   bias [0:3],
    input  logic [3:0]           row_mask,
    input  logic [3:0]           col_mask,

    output logic signed [31:0]   c_out_i32 [0:3][0:3],
    output logic signed [7:0]    c_out_i8  [0:3][0:3]
);
```

### Operation order

For every valid output element:

```text
x = c_in[row][col]

if BIAS_EN:
    x = x + bias[col]

if RELU_EN:
    if x < 0: x = 0

if CLAMP_EN:
    x = clamp(x, clamp_min, clamp_max)
```

For int32 output:

```text
c_out_i32[row][col] = x
```

For int8 output:

```text
scaled = (x * scale) >>> shift
shifted = scaled + zero_point
c_out_i8[row][col] = saturate_int8(shifted)
```

Saturation:

```systemverilog
function automatic signed [7:0] sat_i8(input signed [31:0] x);
    if (x > 127)       sat_i8 = 8'sd127;
    else if (x < -128) sat_i8 = -8'sd128;
    else               sat_i8 = x[7:0];
endfunction
```

---

## 13. Vector ALU

Supported operations:

- Vector add: `z[i] = x[i] + y[i]`
- Vector multiply: `z[i] = x[i] * y[i]`
- ReLU: `z[i] = max(x[i], 0)`
- Clamp: `z[i] = min(max(x[i], min), max)`

Implementation:

1. Load vector tile X.
2. Load vector tile Y if required.
3. Execute lane-wise operation using 4 lanes or reuse MAC array lanes.
4. Store result tile.

---

## 14. Command Controller

### Module

```systemverilog
module tinygpu_cmd_ctrl (
    input  logic clk,
    input  logic rst_n,

    input  logic start,
    output logic busy,
    output logic done,

    input  logic [7:0]  opcode,
    input  logic [31:0] flags,
    input  logic [31:0] src0_addr,
    input  logic [31:0] src1_addr,
    input  logic [31:0] bias_addr,
    input  logic [31:0] dst_addr,
    input  logic [15:0] M,
    input  logic [15:0] N,
    input  logic [15:0] K,
    input  logic [15:0] stride0,
    input  logic [15:0] stride1,
    input  logic [15:0] stride_dst,
    input  logic [31:0] scale,
    input  logic [15:0] shift,
    input  logic [15:0] zero_point,

    output logic illegal_opcode,
    output logic shape_error,
    output logic unsupported_format
);
```

This module also drives the DMA, scratchpad, MAC array, epilogue, and store logic.

### GEMM FSM states

```text
S_IDLE
S_VALIDATE
S_INIT_TILE
S_LOAD_A
S_LOAD_B
S_CLEAR_ACC
S_COMPUTE_K
S_NEXT_K
S_EPILOGUE
S_STORE_C
S_NEXT_TILE_N
S_NEXT_TILE_M
S_DONE
S_ERROR
```

### GEMM loop structure

```c
for (m0 = 0; m0 < M; m0 += TILE_M) {
  for (n0 = 0; n0 < N; n0 += TILE_N) {
    clear_accumulators();

    for (k0 = 0; k0 < K; k0 += TILE_K) {
      load_A_tile(m0, k0);
      load_B_tile(k0, n0);

      for (kk = 0; kk < active_tile_k; kk++) {
        a_vec = A_tile[0..3][kk];
        b_vec = B_tile[kk][0..3];
        mac_array(a_vec, b_vec, row_mask, col_mask);
      }
    }

    epilogue(c_tile, bias[n0..n0+3], flags);
    store_C_tile(m0, n0);
  }
}
```

### Mask generation

```text
row_mask[r] = (m0 + r) < M
col_mask[c] = (n0 + c) < N
active_tile_k = min(TILE_K, K - k0)
```

PEs with inactive masks must not update accumulators.

### Descriptor validation

Reject command if:

- Unsupported opcode
- `M == 0`
- For GEMM/GEMV, `K == 0`
- For GEMM, `N == 0`
- Invalid destination format flags
- Misaligned addresses if alignment is required
- Strides too small for rows
- Direct mode start while busy

---

## 15. Performance Counters

Implement in `tinygpu_counters.sv`.

```text
cycle_count  increments while busy
active_count increments when MAC array or vector ALU performs useful work
stall_count  increments while busy but waiting for DMA/memory or resource
cmd_count    increments when command completes successfully
```

Expose last-command values through MMIO.

---

## 16. Testbench Architecture

Every major module must have a standalone testbench. The top-level accelerator must have both directed and randomized integration testbenches.

### Common testbench components

```text
tb/tinygpu_mem_model.sv
tb/tinygpu_golden_pkg.sv
tb/tinygpu_scoreboard.sv
```

### Memory model requirements

The memory model must:

- Store at least 1 MB of byte-addressable memory.
- Support 32-bit reads/writes with byte strobes.
- Support configurable read latency:
  - 0 cycles
  - 1 cycle
  - random 1-5 cycles
- Support configurable write-ready stalls.
- Provide tasks:
  - `write_byte(addr, value)`
  - `read_byte(addr)`
  - `write_word(addr, value)`
  - `read_word(addr)`
  - `load_matrix_i8(base, rows, cols, stride, data)`
  - `load_matrix_i32(base, rows, cols, stride, data)`
  - `dump_matrix_i8(...)`
  - `dump_matrix_i32(...)`

### Golden model requirements

The golden package must implement:

```systemverilog
function automatic int signed gemm_ref_elem(...);
task automatic gemm_ref_i8_i32(...);
task automatic gemm_ref_i8_i8(...);
task automatic vec_add_ref(...);
task automatic vec_mul_ref(...);
function automatic byte signed sat_i8(input int signed x);
function automatic int signed requant_ref(input int signed x, input int signed scale, input int shift, input int zero_point);
```

### Scoreboard requirements

The scoreboard must:

- Compare output matrices element-by-element.
- Print detailed mismatch messages:
  - row
  - column
  - expected
  - actual
  - address
  - opcode
- Stop the simulation after too many mismatches.
- Report pass/fail summary.

---

## 17. Unit Testbenches

### `tb_tinygpu_pe.sv`

Test cases:

1. Reset initializes accumulator to zero.
2. `clear_acc` clears accumulator.
3. Single positive multiply: `3 * 4 = 12`
4. Signed multiply:
   - `-3 * 4 = -12`
   - `-3 * -4 = 12`
5. Accumulation across multiple cycles:
   - `(1*2) + (3*4) + (-2*5)`
6. `mac_en = 0` holds accumulator constant.
7. 1000 random `(a,b)` pairs.

Assertions:

```systemverilog
assert(acc_o == expected);
```

Also assert that `acc_o` remains stable when `mac_en == 0` and `clear_acc == 0`.

---

### `tb_tinygpu_array4x4.sv`

Test cases:

1. Clear all accumulators.
2. One K-step with known A/B vectors.
3. Full 4x4 by K=4 tile.
4. Full 4x4 by K=16 tile.
5. Edge masks:
   - only first 2 rows active
   - only first 3 columns active
   - row and column masks combined
6. 500 random A/B tile tests with active K from 1 to 16 and random row/column masks.

Assertions:

- Masked PEs remain zero after clear.
- Active PEs match golden output.
- No X/Z on outputs after reset and valid operation.

---

### `tb_tinygpu_epilogue.sv`

Test cases:

1. Pass-through int32 output.
2. Bias add only.
3. ReLU only.
4. Bias + ReLU.
5. Requantization:
   - scale = 1, shift = 0, zero_point = 0
   - scale = 2, shift = 1
   - nonzero zero point
6. Saturation:
   - values above 127 saturate to 127
   - values below -128 saturate to -128
7. Masked rows/columns.
8. 1000 random 4x4 int32 tiles with random flags.

---

### `tb_tinygpu_spm.sv`

Test cases:

1. Write/read A scratchpad bytes.
2. Write/read B scratchpad bytes.
3. Write/read C scratchpad int32 values.
4. Byte strobe correctness.
5. Bank isolation.
6. Random address write/read test.

---

### `tb_tinygpu_dma.sv`

Test cases:

1. Load a 4x16 A tile from contiguous memory.
2. Load a 16x4 B tile from contiguous memory.
3. Load with stride larger than tile width.
4. Store a 4x4 int32 C tile.
5. Store a 4x4 int8 C tile with byte strobes.
6. Memory latency:
   - 0 cycle
   - 1 cycle
   - random 1-5 cycles
7. Backpressure:
   - memory not ready for random cycles.

Assertions:

- Generated addresses match expected sequence.
- Scratchpad contents match source memory after load.
- Memory contents match scratchpad after store.
- `done` is asserted exactly once per command.
- `busy` behavior is correct.

---

### `tb_tinygpu_regs.sv`

Test cases:

1. Reset values.
2. Write/read all writable registers.
3. Read-only registers ignore writes.
4. `CTRL.start` generates a one-cycle internal start pulse.
5. `CTRL.soft_reset` clears status and internal latches.
6. `IRQ_STATUS` write-one-to-clear.
7. Writes with byte strobes.
8. Unknown addresses return zero or no-op.

---

## 18. Integration Testbenches

### `tb_tinygpu_gemm.sv`

Purpose: validate complete GEMM execution through `tinygpu_top`.

Directed tests:

1. `1x1 * 1x1`
2. `2x2 * 2x2`
3. `4x4 * 4x4`
4. `4x16 * 16x4`, exactly one full tile
5. `7x10 * 10x5`, edge rows/columns
6. `16x16 * 16x16`
7. Negative values
8. All zeros
9. Identity-like matrix
10. Bias + ReLU
11. Requantized int8 output

Random tests:

- 100 random GEMM shapes:
  - `M` in `[1, 16]`
  - `N` in `[1, 16]`
  - `K` in `[1, 32]`
- Random int8 A and B values.
- Random stride padding from 0 to 8 bytes.
- Random flags:
  - bias on/off
  - ReLU on/off
  - int32 or int8 output

Test flow:

```systemverilog
reset_dut();
load_A_to_memory();
load_B_to_memory();
load_bias_if_needed();
program_registers();
write_CTRL_start();
wait_done_or_timeout();
read_output_from_memory();
compute_golden();
scoreboard_compare();
check_counters();
```

Timeout:

- Add a watchdog.
- Fail if command does not finish within a conservative cycle bound.

Counter checks:

```text
cycle_count > 0
active_count > 0 for GEMM
active_count <= cycle_count
stall_count <= cycle_count
cmd_count increments by one
```

---

### `tb_tinygpu_vector.sv`

Directed tests:

1. Vector add length 1
2. Vector add length 4
3. Vector add length 17
4. Vector multiply length 16
5. ReLU length 32 with positive and negative values
6. Clamp length 32

Random tests:

- 200 random vector lengths from 1 to 256.
- Random input values.
- Random stride/alignment cases if supported.

---

### `tb_tinygpu_top_directed.sv`

Smoke test the whole accelerator:

1. Read reset status.
2. Run direct-mode GEMM.
3. Run direct-mode vector add.
4. Run direct-mode ReLU.
5. Run invalid opcode and check error.
6. Run zero-dimension descriptor and check shape error.
7. Confirm accelerator can accept a new command after an error and after a valid command.

---

### `tb_tinygpu_top_random.sv`

Stress test command sequencing and memory latency.

Randomize:

- Opcode among supported kernels
- Valid dimensions
- Memory latency
- Stalls
- Address offsets
- Stride values
- Flags

Rules:

- Random tests should only generate legal commands except in dedicated error tests.
- For every legal command, compare against golden model.
- At least 1000 random commands should pass before considering the design stable.

---

## 19. Error Handling Tests

Add tests for invalid commands:

1. Unsupported opcode.
2. `M = 0`.
3. GEMM with `N = 0`.
4. GEMM with `K = 0`.
5. Both `DST_INT8` and `DST_INT32` set.
6. Start command while busy.
7. Misaligned addresses if alignment is required.
8. Stride smaller than required row size.

Expected behavior:

- `STATUS` error bit set.
- `done` asserted or `busy` cleared.
- No output memory writes for rejected commands.
- Accelerator can run a valid command afterward.

---

## 20. NEORV32 Integration Assumptions

The RTL should be easy to adapt to the NEORV32 bus. Use a generic MMIO wrapper first, then adapt to the actual NEORV32 peripheral bus.

Integration steps:

1. Instantiate `tinygpu_top` in the NEORV32 SoC top-level.
2. Assign a base address, for example:

```text
TINYGPU_BASE = 0xFFFF_E000
```

3. Route MMIO accesses in the SoC address decoder.
4. Connect the accelerator memory master to shared SRAM or a bus arbiter.
5. Connect `irq` to an available interrupt line.
6. Add C header definitions for register offsets.
7. Write bare-metal tests that launch kernels and compare results.

---

## 21. Bare-Metal Software Driver Interface

Create a C driver mirroring the RTL register map.

```c
#define TINYGPU_BASE        0xFFFFE000u
#define TG_CTRL             0x00
#define TG_STATUS           0x04
#define TG_SRC0_ADDR        0x10
#define TG_SRC1_ADDR        0x14
#define TG_BIAS_ADDR        0x18
#define TG_DST_ADDR         0x1C
#define TG_DIM_M            0x20
#define TG_DIM_N            0x24
#define TG_DIM_K            0x28
#define TG_FLAGS            0x38
#define TG_CYCLE_COUNT      0x44
#define TG_ACTIVE_COUNT     0x48
#define TG_STALL_COUNT      0x4C
```

Functions:

```c
void tinygpu_reset(void);
void tinygpu_start(void);
int  tinygpu_wait_done(uint32_t timeout);
void tinygpu_gemm_i8(const int8_t *A, const int8_t *B, int8_t *C,
                     int M, int N, int K, int flags);
void tinygpu_vec_add_i32(const int32_t *x, const int32_t *y, int32_t *z,
                         int length);
```

---

## 22. Implementation Milestones

Generate and verify in this order:

1. `tinygpu_pe.sv`
2. `tinygpu_array4x4.sv`
3. `tinygpu_epilogue.sv`
4. `tinygpu_spm.sv`
5. `tinygpu_dma.sv`
6. `tinygpu_regs.sv`
7. `tinygpu_cmd_ctrl.sv`
8. `tinygpu_top.sv`
9. Unit testbenches
10. Full GEMM testbench
11. Vector kernel testbench
12. Randomized top-level testbench

Do not attempt full SoC integration until the standalone top-level testbench passes.

---

## 23. Expected Generated Project Structure

```text
README.md
rtl/*.sv
tb/*.sv
sim/Makefile
sim/filelist.f
sw/tinygpu.h
sw/tinygpu.c
sw/test_gemm.c
sw/test_vector.c
```

The `sim/Makefile` should support:

```text
make pe
make array
make epilogue
make spm
make dma
make regs
make gemm
make vector
make random
make all
```

---

## 24. Definition of Correctness

The design is correct if:

1. All unit tests pass.
2. Directed top-level GEMM tests pass.
3. Directed vector tests pass.
4. Randomized tests pass with no mismatches.
5. Invalid commands produce correct status bits and do not corrupt output memory.
6. Performance counters obey expected relationships.
7. The accelerator can run multiple commands sequentially without requiring external reset.
8. The design is synthesizable without unsynthesizable RTL constructs.

---

## 25. RTL Development Guidelines

When implementing or modifying RTL:

1. Implement one module at a time.
2. Add or update the matching testbench with the module change.
3. Prefer clarity over premature optimization.
4. Make the functional version work before adding pipelining or double-buffer overlap.
5. Keep all interfaces explicit.
6. Include comments explaining FSM states and dataflow.
7. Use deterministic random seeds in testbenches.
8. Add simulation assertions where behavior is unambiguous.
9. Use a memory model with variable latency to avoid assuming zero-latency memory.
10. Keep edge-tile masking correct; this is one of the most important parts of the design.

---

## 26. Current Simplifications

The current project version does not implement:

- graphics rendering
- CUDA/OpenCL
- floating point
- training/backpropagation
- hardware cache coherence
- virtual memory
- reliability or fault-injection logic
- dedicated direct Conv2D hardware

Conv2D is supported through software lowering to GEMM.

---

## 27. Minimal First Working Configuration

A minimal functional implementation can support:

1. Direct MMIO mode only
2. `OP_GEMM`
3. int8 input, int32 output
4. no bias
5. no ReLU
6. no requantization
7. one scratchpad bank
8. fixed `TILE_M = 4`, `TILE_N = 4`, `TILE_K = 16`

After this passes, add in this order:

1. edge masks
2. int8 output requantization
3. bias
4. ReLU/clamp
5. vector operations
6. double-buffered A/B banks
7. descriptor mode

---

## 28. Final Architecture Summary

TinyGPU-ML is a small NEORV32-attached ML accelerator built around a 4x4 output-stationary int8 MAC array. The host CPU launches kernels through MMIO registers. A command controller sequences DMA tile loads, scratchpad access, MAC execution, epilogue processing, and output stores. GEMM is the primary kernel, GEMV reuses the same datapath, vector operations use a small vector ALU, and convolution is executed by software lowering to GEMM. Extensive verification must cover individual arithmetic units, tile-level execution, memory movement, register behavior, edge masking, quantization, and full accelerator operation under randomized memory latency and randomized valid workloads.
