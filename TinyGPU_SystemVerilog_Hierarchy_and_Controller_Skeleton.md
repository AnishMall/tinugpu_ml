# TinyGPU SystemVerilog Hierarchy and Controller Skeleton

This note turns the implementation spec into a practical SystemVerilog design scaffold. It has two goals:

1. Define a clean RTL hierarchy and module boundary breakdown.
2. Provide a more concrete `tinygpu_cmd_ctrl.sv` skeleton with the key counters, masks, FSM, and DMA launch structure.

The intent is not to fully implement every module here, but to establish a sane architecture that can be coded incrementally and verified module-by-module.

---

## 1. Recommended RTL Hierarchy

At the top level, the accelerator should be partitioned into a thin shell, a register file, a central command controller, and small focused datapath blocks.

```text
tinygpu_top
├─ tinygpu_pkg
├─ tinygpu_regs
├─ tinygpu_cmd_ctrl
│  ├─ tinygpu_dma
│  ├─ tinygpu_spm
│  ├─ tinygpu_array4x4
│  │  └─ 16x tinygpu_pe
│  ├─ tinygpu_epilogue_shared
│  │  └─ tinygpu_shared_mul
│  ├─ tinygpu_vec_alu
│  ├─ tinygpu_shared_mul
│  └─ tinygpu_counters
└─ irq/status glue
```

### 1.1 Module Responsibilities

#### `tinygpu_pkg.sv`

Owns:

- global parameters
- opcodes
- flags
- enums for controller and DMA FSMs
- optional shared typedefs for command descriptors and status

Example:

```systemverilog
package tinygpu_pkg;

  parameter int ADDR_W      = 32;
  parameter int DATA_W      = 32;
  parameter int INT8_W      = 8;
  parameter int ACC_W       = 32;

  parameter int TILE_M      = 4;
  parameter int TILE_N      = 4;
  parameter int TILE_K      = 16;

  parameter int NUM_PES     = TILE_M * TILE_N;
  parameter int SPM_A_BYTES = 512;
  parameter int SPM_B_BYTES = 512;
  parameter int SPM_C_BYTES = 256;

  localparam logic [7:0] OP_NOP     = 8'h00;
  localparam logic [7:0] OP_GEMM    = 8'h01;
  localparam logic [7:0] OP_GEMV    = 8'h02;
  localparam logic [7:0] OP_VEC_ADD = 8'h03;
  localparam logic [7:0] OP_VEC_MUL = 8'h04;
  localparam logic [7:0] OP_RELU    = 8'h05;
  localparam logic [7:0] OP_CLAMP   = 8'h06;

  localparam int FLAG_BIAS_EN      = 0;
  localparam int FLAG_RELU_EN      = 1;
  localparam int FLAG_CLAMP_EN     = 2;
  localparam int FLAG_REQUANT_EN   = 3;
  localparam int FLAG_DST_INT8     = 4;
  localparam int FLAG_DST_INT32    = 5;
  localparam int FLAG_SIGNED_MODE  = 6;

  typedef enum logic [3:0] {
    S_IDLE,
    S_VALIDATE,
    S_INIT_TILE,
    S_LOAD_A,
    S_LOAD_B,
    S_CLEAR_ACC,
    S_COMPUTE_K,
    S_EPILOGUE,
    S_STORE_C,
    S_NEXT_TILE_N,
    S_NEXT_TILE_M,
    S_DONE,
    S_ERROR
  } cmd_state_e;

  typedef enum logic [2:0] {
    DMA_IDLE,
    DMA_ISSUE_READ,
    DMA_WAIT_READ,
    DMA_WRITE_SPM,
    DMA_READ_SPM,
    DMA_ISSUE_WRITE,
    DMA_DONE,
    DMA_ERROR
  } dma_state_e;

endpackage
```

#### `tinygpu_top.sv`

Owns:

- top-level ports
- instantiation and wiring of major blocks
- interrupt generation
- no deep algorithmic behavior

This module should stay mostly as glue.

#### `tinygpu_regs.sv`

Owns:

- MMIO decode
- writable argument registers
- `start_pulse`
- sticky status bits and reset behavior
- exposure of performance counters

This block should not understand the tiled execution flow.

#### `tinygpu_cmd_ctrl.sv`

Owns:

- command validation
- tile-loop sequencing
- DMA launch/control
- scratchpad read sequencing
- MAC array clear/enable control
- epilogue launch
- result store sequencing
- command completion and error handling

This is the architectural center of the accelerator.

#### `tinygpu_dma.sv`

Owns:

- SRAM-like memory master protocol
- memory address generation
- tile load/store iteration
- int8 unpacking and int32 accesses
- scratchpad DMA-side writes and reads

#### `tinygpu_spm.sv`

Owns:

- local storage for A, B, and C regions
- DMA-facing read/write access
- compute-facing parallel A and B read ports
- C staging access

#### `tinygpu_array4x4.sv`

Owns:

- 16 PE instantiations
- row/column masking
- output-stationary accumulation

#### `tinygpu_pe.sv`

Owns:

- one signed int8 x int8 multiply
- one signed int32 accumulator

#### `tinygpu_epilogue_shared.sv`

Owns:

- bias add
- ReLU/clamp
- requantization
- zero-point add
- int8 saturation

This block is intentionally multi-cycle and processes one output element at a time with a shared multiplier instead of running 16 requant lanes in parallel.

#### `tinygpu_shared_mul.sv`

Owns:

- one shared signed multiply resource
- simple start/done handshake
- reuse across serialized requant datapaths

#### `tinygpu_vec_alu.sv`

Owns:

- vector add
- vector multiply
- ReLU
- clamp

This can remain mostly independent of the 4x4 GEMM path. In the current root RTL, the vector requant/store path and the shared epilogue are driven from one physical shared multiplier in the controller path instead of keeping separate permanently parallel requant multiplies.

### 1.2 Area-Optimized 4x4 Note

The original architectural intent was a fully parallel `4x4x16` tile engine with a tile-wide epilogue. The implemented root `4x4x16` version now uses a more FPGA-friendly split:

- the `4x4` MAC array remains parallel
- the epilogue is serialized across tile elements
- requantization uses a shared multiplier

This preserves the identity of the design as a `4x4` GEMM accelerator while cutting a large amount of replicated postprocess logic.

The implemented epilogue also emits each serialized result directly into the
16-word C buffer. There is no second tile-wide staging pass before DMA store.

#### `tinygpu_im2col_loader.sv`

Owns hardware Conv2D activation lowering. It walks NHWC coordinates for up to
four output positions, suppresses reads for padded coordinates, writes the
current `4x16` A tile, and then rejoins the normal B-load and MAC sequence.

#### `tinygpu_mem_arbiter.sv`

Selects descriptor, DMA, im2col, vector, or bias traffic and gates ready/read
responses back to the active client. Only one read may be outstanding.

#### `tinygpu_counters.sv`

Owns:

- command cycle accounting
- active and stall cycle accounting
- completed command count

---

## 2. Top-Level Port-Level Skeleton

The top level should look like a clean shell around the register file, command controller, and counters.

```systemverilog
module tinygpu_top import tinygpu_pkg::*; #(
  parameter int ADDR_W = 32,
  parameter int DATA_W = 32
)(
  input  logic                 clk,
  input  logic                 rst_n,

  input  logic                 mmio_valid,
  input  logic                 mmio_we,
  input  logic [ADDR_W-1:0]    mmio_addr,
  input  logic [DATA_W-1:0]    mmio_wdata,
  input  logic [DATA_W/8-1:0]  mmio_wstrb,
  output logic [DATA_W-1:0]    mmio_rdata,
  output logic                 mmio_ready,

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

  logic        reg_start_pulse;
  logic        reg_soft_reset;
  logic        reg_irq_enable;
  logic        reg_direct_mode;

  logic [7:0]  reg_opcode;
  logic [31:0] reg_src0_addr, reg_src1_addr, reg_bias_addr, reg_dst_addr;
  logic [15:0] reg_dim_m, reg_dim_n, reg_dim_k;
  logic [15:0] reg_stride0, reg_stride1, reg_stride_dst;
  logic [31:0] reg_flags;
  logic [31:0] reg_scale;
  logic [15:0] reg_shift, reg_zero_point;

  logic        ctrl_busy;
  logic        ctrl_done;
  logic        ctrl_illegal_opcode;
  logic        ctrl_shape_error;
  logic        ctrl_memory_error;
  logic        ctrl_unsupported_format;

  logic [31:0] cycle_count_last;
  logic [31:0] active_count_last;
  logic [31:0] stall_count_last;
  logic [31:0] cmd_count_total;

  logic        cnt_cmd_start;
  logic        cnt_cmd_done;
  logic        cnt_busy;
  logic        cnt_active;
  logic        cnt_stall;

  tinygpu_regs u_regs (...);
  tinygpu_cmd_ctrl u_cmd_ctrl (...);
  tinygpu_counters u_counters (...);

  assign irq = reg_irq_enable & ctrl_done;

endmodule
```

The key design point is that `tinygpu_top` should not contain the tile FSM. It should only route control and status.

---

## 3. Register File Boundary

The register block should present a narrow, stable contract to the command controller.

```systemverilog
module tinygpu_regs import tinygpu_pkg::*; (
  input  logic         clk,
  input  logic         rst_n,

  input  logic         mmio_valid,
  input  logic         mmio_we,
  input  logic [31:0]  mmio_addr,
  input  logic [31:0]  mmio_wdata,
  input  logic [3:0]   mmio_wstrb,
  output logic [31:0]  mmio_rdata,
  output logic         mmio_ready,

  input  logic         cmd_busy_i,
  input  logic         cmd_done_i,
  input  logic         illegal_opcode_i,
  input  logic         shape_error_i,
  input  logic         memory_error_i,
  input  logic         unsupported_fmt_i,

  input  logic [31:0]  cycle_count_i,
  input  logic [31:0]  active_count_i,
  input  logic [31:0]  stall_count_i,
  input  logic [31:0]  cmd_count_i,

  output logic         start_pulse_o,
  output logic         soft_reset_o,
  output logic         irq_enable_o,
  output logic         direct_mode_o,

  output logic [7:0]   opcode_o,
  output logic [31:0]  src0_addr_o,
  output logic [31:0]  src1_addr_o,
  output logic [31:0]  bias_addr_o,
  output logic [31:0]  dst_addr_o,
  output logic [15:0]  dim_m_o,
  output logic [15:0]  dim_n_o,
  output logic [15:0]  dim_k_o,
  output logic [15:0]  stride0_o,
  output logic [15:0]  stride1_o,
  output logic [15:0]  stride_dst_o,
  output logic [31:0]  flags_o,
  output logic [31:0]  scale_o,
  output logic [15:0]  shift_o,
  output logic [15:0]  zero_point_o
);
```

This is a good separation because software-visible state stays isolated from runtime sequencing.

---

## 4. Command Controller as the Hub

The command controller should be the only major block that understands end-to-end execution.

### 4.1 Top-Level Interface

```systemverilog
module tinygpu_cmd_ctrl import tinygpu_pkg::*; (
  input  logic         clk,
  input  logic         rst_n,

  input  logic         start,
  input  logic         soft_reset,
  input  logic         direct_mode,

  input  logic [7:0]   opcode,
  input  logic [31:0]  flags,
  input  logic [31:0]  src0_addr,
  input  logic [31:0]  src1_addr,
  input  logic [31:0]  bias_addr,
  input  logic [31:0]  dst_addr,
  input  logic [15:0]  M,
  input  logic [15:0]  N,
  input  logic [15:0]  K,
  input  logic [15:0]  stride0,
  input  logic [15:0]  stride1,
  input  logic [15:0]  stride_dst,
  input  logic [31:0]  scale,
  input  logic [15:0]  shift,
  input  logic [15:0]  zero_point,

  output logic         busy,
  output logic         done,
  output logic         illegal_opcode,
  output logic         shape_error,
  output logic         memory_error,
  output logic         unsupported_format,

  output logic         cnt_cmd_start,
  output logic         cnt_cmd_done,
  output logic         cnt_busy,
  output logic         cnt_active,
  output logic         cnt_stall,

  output logic         mem_req,
  output logic         mem_we,
  output logic [31:0]  mem_addr,
  output logic [31:0]  mem_wdata,
  output logic [3:0]   mem_wstrb,
  input  logic [31:0]  mem_rdata,
  input  logic         mem_ready,
  input  logic         mem_rvalid
);
```

### 4.2 Internal Structural Breakdown

Inside `tinygpu_cmd_ctrl`, organize logic into these sections:

```text
A. command latch and validation
B. outer tile counters
C. inner K-step counter
D. row/column mask generation
E. DMA command generation
F. scratchpad read steering
G. MAC array control
H. epilogue and store control
I. FSM state and next-state logic
```

That makes the controller readable and testable even before refactoring into helper submodules.

---

## 5. Internal Wiring for `tinygpu_cmd_ctrl`

The controller will instantiate the DMA, scratchpad, array, epilogue, and optional vector ALU.

```systemverilog
  // DMA control
  logic        dma_start;
  logic        dma_busy, dma_done, dma_error;
  logic [1:0]  dma_op_kind;
  logic [31:0] dma_base_addr;
  logic [15:0] dma_rows, dma_cols, dma_stride_bytes;
  logic [1:0]  dma_spm_region;
  logic [8:0]  dma_spm_base;

  // Scratchpad DMA side
  logic        spm_dma_wr_en;
  logic [1:0]  spm_dma_region;
  logic [8:0]  spm_dma_addr;
  logic [31:0] spm_dma_wdata;
  logic [3:0]  spm_dma_wstrb;
  logic [31:0] spm_dma_rdata;

  // Scratchpad compute side
  logic [7:0]  a_rd_addr [0:3];
  logic [7:0]  a_rd_data [0:3];
  logic [7:0]  b_rd_addr [0:3];
  logic [7:0]  b_rd_data [0:3];

  logic        c_wr_en;
  logic [7:0]  c_wr_addr;
  logic [31:0] c_wr_data;
  logic [7:0]  c_rd_addr;
  logic [31:0] c_rd_data;

  // MAC array
  logic        array_clear_acc;
  logic        array_mac_en;
  logic [3:0]  row_mask, col_mask;
  logic signed [7:0]  a_vec [0:3];
  logic signed [7:0]  b_vec [0:3];
  logic signed [31:0] c_tile [0:3][0:3];

  // Epilogue
  logic        epi_start, epi_busy, epi_done;
  logic signed [31:0] bias_vec [0:3];
  logic signed [31:0] c_epi_i32 [0:3][0:3];
  logic signed [7:0]  c_epi_i8  [0:3][0:3];
```

Instantiations:

```systemverilog
  tinygpu_dma u_dma (...);
  tinygpu_spm u_spm (...);
  tinygpu_array4x4 u_array (...);
  tinygpu_epilogue u_epilogue (...);
  tinygpu_vec_alu u_vec_alu (...);
```

The key architectural rule is that `tinygpu_cmd_ctrl` owns the sequencing and these submodules stay mostly reactive.

---

## 6. More Concrete `tinygpu_cmd_ctrl` Skeleton

This section is the controller scaffold I would actually code first.

### 6.1 Internal State and Latched Command Fields

On `start`, latch the command so software writes cannot race the active operation.

```systemverilog
  cmd_state_e state_q, state_d;

  logic [7:0]  opcode_q;
  logic [31:0] flags_q;
  logic [31:0] src0_addr_q, src1_addr_q, bias_addr_q, dst_addr_q;
  logic [15:0] M_q, N_q, K_q;
  logic [15:0] stride0_q, stride1_q, stride_dst_q;
  logic [31:0] scale_q;
  logic [15:0] shift_q, zero_point_q;

  logic [15:0] m0_q, m0_d;
  logic [15:0] n0_q, n0_d;
  logic [15:0] k0_q, k0_d;
  logic [15:0] kk_q, kk_d;

  logic [15:0] active_tile_m;
  logic [15:0] active_tile_n;
  logic [15:0] active_tile_k;

  logic        latch_cmd;
```

Suggested latch behavior:

```systemverilog
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      opcode_q     <= '0;
      flags_q      <= '0;
      src0_addr_q  <= '0;
      src1_addr_q  <= '0;
      bias_addr_q  <= '0;
      dst_addr_q   <= '0;
      M_q          <= '0;
      N_q          <= '0;
      K_q          <= '0;
      stride0_q    <= '0;
      stride1_q    <= '0;
      stride_dst_q <= '0;
      scale_q      <= '0;
      shift_q      <= '0;
      zero_point_q <= '0;
    end else if (latch_cmd) begin
      opcode_q     <= opcode;
      flags_q      <= flags;
      src0_addr_q  <= src0_addr;
      src1_addr_q  <= src1_addr;
      bias_addr_q  <= bias_addr;
      dst_addr_q   <= dst_addr;
      M_q          <= M;
      N_q          <= N;
      K_q          <= K;
      stride0_q    <= stride0;
      stride1_q    <= stride1;
      stride_dst_q <= stride_dst;
      scale_q      <= scale;
      shift_q      <= shift;
      zero_point_q <= zero_point;
    end
  end
```

### 6.2 Tile Counters

These are the counters that express the tiled loop nest:

```text
for m0 in 0..M step TILE_M
  for n0 in 0..N step TILE_N
    for k0 in 0..K step TILE_K
      for kk in 0..active_tile_k-1
```

Recommended register set:

```systemverilog
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      m0_q <= '0;
      n0_q <= '0;
      k0_q <= '0;
      kk_q <= '0;
    end else begin
      m0_q <= m0_d;
      n0_q <= n0_d;
      k0_q <= k0_d;
      kk_q <= kk_d;
    end
  end

  always_comb begin
    m0_d = m0_q;
    n0_d = n0_q;
    k0_d = k0_q;
    kk_d = kk_q;

    case (state_q)
      S_INIT_TILE: begin
        k0_d = '0;
        kk_d = '0;
      end

      S_CLEAR_ACC: begin
        kk_d = '0;
      end

      S_COMPUTE_K: begin
        if (array_mac_en) begin
          if (kk_q + 16'd1 < active_tile_k) begin
            kk_d = kk_q + 16'd1;
          end else begin
            kk_d = '0;
          end
        end
      end

      S_NEXT_TILE_N: begin
        if (n0_q + TILE_N < N_q) begin
          n0_d = n0_q + TILE_N;
          k0_d = '0;
        end else begin
          n0_d = '0;
        end
      end

      S_NEXT_TILE_M: begin
        if (m0_q + TILE_M < M_q) begin
          m0_d = m0_q + TILE_M;
          n0_d = '0;
          k0_d = '0;
        end
      end

      default: begin
      end
    endcase
  end
```

In practice, `k0_q` will advance after each A/B tile pair is processed:

```systemverilog
  logic last_k_tile;

  assign last_k_tile = (k0_q + active_tile_k) >= K_q;
```

Then after a completed `S_COMPUTE_K` phase:

```systemverilog
  if (!last_k_tile)
    k0_d = k0_q + TILE_K;
```

### 6.3 Active Tile Sizes and Masks

These should be combinational from the current tile origin.

```systemverilog
  always_comb begin
    if ((M_q - m0_q) >= TILE_M)
      active_tile_m = TILE_M;
    else
      active_tile_m = M_q - m0_q;

    if ((N_q - n0_q) >= TILE_N)
      active_tile_n = TILE_N;
    else
      active_tile_n = N_q - n0_q;

    if ((K_q - k0_q) >= TILE_K)
      active_tile_k = TILE_K;
    else
      active_tile_k = K_q - k0_q;
  end

  always_comb begin
    for (int r = 0; r < TILE_M; r++) begin
      row_mask[r] = ((m0_q + r) < M_q);
    end

    for (int c = 0; c < TILE_N; c++) begin
      col_mask[c] = ((n0_q + c) < N_q);
    end
  end
```

This is one of the most important correctness points in the whole design.

### 6.4 Scratchpad Read Steering During MAC Compute

The compute phase needs one A byte per row and one B byte per column each cycle.

Address maps:

- `A_tile[row][kk] -> row*TILE_K + kk`
- `B_tile[kk][col] -> kk*TILE_N + col`

Suggested logic:

```systemverilog
  always_comb begin
    for (int r = 0; r < TILE_M; r++) begin
      a_rd_addr[r] = (r * TILE_K) + kk_q[7:0];
      a_vec[r]     = a_rd_data[r];
    end

    for (int c = 0; c < TILE_N; c++) begin
      b_rd_addr[c] = (kk_q[7:0] * TILE_N) + c;
      b_vec[c]     = b_rd_data[c];
    end
  end
```

Then the MAC array can consume:

```systemverilog
  assign array_mac_en = (state_q == S_COMPUTE_K);
```

### 6.5 DMA Launch Logic

The controller should treat DMA as a small worker that gets one request at a time.

Recommended DMA request fields:

```systemverilog
  always_comb begin
    dma_start       = 1'b0;
    dma_op_kind     = 2'b00;
    dma_base_addr   = '0;
    dma_rows        = '0;
    dma_cols        = '0;
    dma_stride_bytes= '0;
    dma_spm_region  = '0;
    dma_spm_base    = '0;

    case (state_q)
      S_LOAD_A: begin
        dma_start        = !dma_busy;
        dma_op_kind      = 2'd0; // load A
        dma_base_addr    = src0_addr_q + m0_q * stride0_q + k0_q;
        dma_rows         = active_tile_m;
        dma_cols         = active_tile_k;
        dma_stride_bytes = stride0_q;
        dma_spm_region   = 2'd0; // A
        dma_spm_base     = 9'd0;
      end

      S_LOAD_B: begin
        dma_start        = !dma_busy;
        dma_op_kind      = 2'd1; // load B
        dma_base_addr    = src1_addr_q + k0_q * stride1_q + n0_q;
        dma_rows         = active_tile_k;
        dma_cols         = active_tile_n;
        dma_stride_bytes = stride1_q;
        dma_spm_region   = 2'd1; // B
        dma_spm_base     = 9'd0;
      end

      S_STORE_C: begin
        dma_start        = !dma_busy;
        dma_op_kind      = 2'd2; // store C
        dma_base_addr    = dst_addr_q + m0_q * stride_dst_q + (n0_q * 4);
        dma_rows         = active_tile_m;
        dma_cols         = active_tile_n;
        dma_stride_bytes = stride_dst_q;
        dma_spm_region   = 2'd2; // C
        dma_spm_base     = 9'd0;
      end

      default: begin
      end
    endcase
  end
```

This assumes:

- A and B are int8
- C store path is initially int32
- int8 output packing can be added later

That is the right first implementation cut.

### 6.6 Epilogue Launch and C Staging

Once all K tiles have been accumulated, the controller launches epilogue. Then it writes the chosen result format into C staging for DMA store.

Suggested control:

```systemverilog
  assign epi_start = (state_q == S_EPILOGUE) && !epi_busy;
```

Bias handling:

```systemverilog
  // First pass simplification:
  // bias_vec can be forced to zero when bias is not yet implemented.
  always_comb begin
    for (int c = 0; c < TILE_N; c++) begin
      bias_vec[c] = 32'sd0;
    end
  end
```

Writing int32 epilogue output into C scratchpad:

```systemverilog
  // Example single-element write staging; this can be expanded into a small
  // nested counter over row/col in the store-prep phase.
  always_comb begin
    c_wr_en   = 1'b0;
    c_wr_addr = '0;
    c_wr_data = '0;

    if (state_q == S_STORE_C) begin
      // In a real implementation, iterate over tile rows/cols and place
      // c_epi_i32[row][col] into C scratchpad before or during DMA store.
    end
  end
```

For the minimal first implementation, keeping `C` staging as int32 is much simpler than supporting packed int8 immediately.

### 6.7 Validation Logic

Validation should happen before any DMA side effect.

```systemverilog
  logic opcode_ok;
  logic dst_flags_ok;
  logic dims_ok;

  always_comb begin
    opcode_ok = 1'b0;
    unique case (opcode_q)
      OP_GEMM,
      OP_GEMV,
      OP_VEC_ADD,
      OP_VEC_MUL,
      OP_RELU,
      OP_CLAMP: opcode_ok = 1'b1;
      default: opcode_ok = 1'b0;
    endcase

    dst_flags_ok = !(flags_q[FLAG_DST_INT8] && flags_q[FLAG_DST_INT32]);

    dims_ok = 1'b1;
    unique case (opcode_q)
      OP_GEMM: dims_ok = (M_q != 0) && (N_q != 0) && (K_q != 0);
      OP_GEMV: dims_ok = (M_q != 0) && (K_q != 0);
      OP_VEC_ADD,
      OP_VEC_MUL,
      OP_RELU,
      OP_CLAMP: dims_ok = (M_q != 0);
      default: dims_ok = 1'b0;
    endcase
  end
```

Error bit generation:

```systemverilog
  illegal_opcode     = (state_q == S_VALIDATE) && !opcode_ok;
  shape_error        = (state_q == S_VALIDATE) && opcode_ok && !dims_ok;
  unsupported_format = (state_q == S_VALIDATE) && opcode_ok && !dst_flags_ok;
```

In a more polished version, these should usually be sticky registered status outputs rather than purely combinational.

### 6.8 FSM Skeleton

This is the controller backbone I would implement first.

```systemverilog
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n)
      state_q <= S_IDLE;
    else if (soft_reset)
      state_q <= S_IDLE;
    else
      state_q <= state_d;
  end

  always_comb begin
    state_d       = state_q;
    latch_cmd     = 1'b0;
    busy          = 1'b1;
    done          = 1'b0;
    memory_error  = 1'b0;

    cnt_cmd_start = 1'b0;
    cnt_cmd_done  = 1'b0;
    cnt_busy      = (state_q != S_IDLE) && (state_q != S_DONE) && (state_q != S_ERROR);
    cnt_active    = (state_q == S_COMPUTE_K);
    cnt_stall     = 1'b0;

    array_clear_acc = 1'b0;

    case (state_q)
      S_IDLE: begin
        busy = 1'b0;
        if (start) begin
          latch_cmd     = 1'b1;
          cnt_cmd_start = 1'b1;
          state_d       = S_VALIDATE;
        end
      end

      S_VALIDATE: begin
        if (!opcode_ok)
          state_d = S_ERROR;
        else if (!dims_ok)
          state_d = S_ERROR;
        else if (!dst_flags_ok)
          state_d = S_ERROR;
        else
          state_d = S_INIT_TILE;
      end

      S_INIT_TILE: begin
        state_d = S_LOAD_A;
      end

      S_LOAD_A: begin
        if (dma_done)
          state_d = S_LOAD_B;
        else if (!dma_busy)
          cnt_stall = 1'b1;
      end

      S_LOAD_B: begin
        if (dma_done)
          state_d = S_CLEAR_ACC;
        else if (!dma_busy)
          cnt_stall = 1'b1;
      end

      S_CLEAR_ACC: begin
        array_clear_acc = 1'b1;
        state_d         = S_COMPUTE_K;
      end

      S_COMPUTE_K: begin
        if (kk_q + 16'd1 >= active_tile_k) begin
          if ((k0_q + active_tile_k) < K_q)
            state_d = S_LOAD_A;
          else
            state_d = S_EPILOGUE;
        end
      end

      S_EPILOGUE: begin
        if (epi_done)
          state_d = S_STORE_C;
      end

      S_STORE_C: begin
        if (dma_done) begin
          if (n0_q + TILE_N < N_q)
            state_d = S_NEXT_TILE_N;
          else if (m0_q + TILE_M < M_q)
            state_d = S_NEXT_TILE_M;
          else
            state_d = S_DONE;
        end else if (!dma_busy) begin
          cnt_stall = 1'b1;
        end
      end

      S_NEXT_TILE_N: begin
        state_d = S_LOAD_A;
      end

      S_NEXT_TILE_M: begin
        state_d = S_LOAD_A;
      end

      S_DONE: begin
        done         = 1'b1;
        cnt_cmd_done = 1'b1;
        busy         = 1'b0;
        state_d      = S_IDLE;
      end

      S_ERROR: begin
        done         = 1'b1;
        busy         = 1'b0;
        cnt_cmd_done = 1'b0;
        state_d      = S_IDLE;
      end

      default: begin
        state_d = S_IDLE;
      end
    endcase
  end
```

### 6.9 Important Correction for Accumulator Clear

The accumulator must be cleared once per output tile, not once per K subtile.

That means:

- when entering a new `(m0, n0)` tile, clear accumulators
- then iterate across all `k0`
- only after all K subtile contributions are accumulated should epilogue run

So the intended control flow is:

```text
INIT_TILE
-> CLEAR_ACC
-> LOAD_A
-> LOAD_B
-> COMPUTE_K
-> if more k0 then LOAD_A again
-> else EPILOGUE
```

A very clean way to express that is:

```text
S_INIT_TILE
S_CLEAR_ACC
S_LOAD_A
S_LOAD_B
S_COMPUTE_K
S_EPILOGUE
S_STORE_C
```

instead of clearing inside every K-subtile pass.

---

## 7. Refined FSM Sequence for GEMM

This is the version I would actually recommend for implementation:

```text
S_IDLE
S_VALIDATE
S_INIT_TILE
S_CLEAR_ACC
S_LOAD_A
S_LOAD_B
S_COMPUTE_K
S_ADVANCE_K
S_EPILOGUE
S_STORE_C
S_NEXT_TILE_N
S_NEXT_TILE_M
S_DONE
S_ERROR
```

Where:

- `S_INIT_TILE` initializes masks and tile origin
- `S_CLEAR_ACC` resets the 4x4 MAC array once for the tile
- `S_LOAD_A/B` fill scratchpad for the current `k0`
- `S_COMPUTE_K` runs `kk = 0..active_tile_k-1`
- `S_ADVANCE_K` decides whether another K subtile is needed
- `S_EPILOGUE` post-processes the completed output tile
- `S_STORE_C` writes the tile back

That extra `S_ADVANCE_K` state often makes the controller easier to debug.

---

## 8. Practical First Implementation Scope

I would code the controller in this order:

1. direct mode only
2. `OP_GEMM` only
3. int8 input and int32 output only
4. no bias, no ReLU, no requant
5. single scratchpad bank
6. fixed tile sizes

After that passes:

1. edge masking
2. bias
3. ReLU/clamp
4. int8 requantized output
5. vector ops
6. descriptor mode
7. double buffering

This staged approach will save a lot of debug time.

---

## 9. Recommended Bring-Up Order

The clean implementation sequence is:

1. `tinygpu_pkg.sv`
2. `tinygpu_pe.sv`
3. `tinygpu_array4x4.sv`
4. `tinygpu_epilogue.sv`
5. `tinygpu_spm.sv`
6. `tinygpu_dma.sv`
7. `tinygpu_cmd_ctrl.sv`
8. `tinygpu_regs.sv`
9. `tinygpu_top.sv`

That order matches the dependency graph and keeps bugs localized.

---

## 10. Closing Notes

The most important design choices here are:

- keep `tinygpu_top` thin
- keep `tinygpu_regs` software-facing only
- let `tinygpu_cmd_ctrl` own all execution sequencing
- make the compute blocks simple and deterministic
- keep edge-tile masks explicit

If this were my project, the very next step would be to convert the controller skeleton above into a compilable `tinygpu_cmd_ctrl.sv` stub with complete port declarations, typed enums, reset logic, and TODO-marked sections for DMA/store details.
