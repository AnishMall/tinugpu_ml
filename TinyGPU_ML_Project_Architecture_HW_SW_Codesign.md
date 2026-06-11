# TinyGPU-ML Project Architecture: Hardware/Software Co-Design Specification

This markdown document summarizes the technical architecture of the TinyGPU-ML project. It focuses only on the hardware side, software side, co-design interface, and simulation/verification plan.

---

## 1. Project Objective

TinyGPU-ML is a compact GPU-like accelerator for machine-learning inference workloads on a NEORV32-based RISC-V SoC.

The accelerator is not a graphics GPU. It is a memory-mapped, command-driven compute subsystem designed to accelerate small ML kernels using tiled execution, local scratchpad memory, a small parallel MAC array, vector arithmetic support, bias/activation/quantization post-processing, a memory-mapped software interface, and cycle/utilization counters.

The NEORV32 CPU remains the host processor. It prepares input/output buffers, configures the accelerator, launches compute kernels, and reads completion/status/performance information.

---

## 2. Supported Workloads

| Kernel | Hardware/Software Mapping | Purpose |
|---|---|---|
| GEMM | Direct hardware support | Dense matrix multiplication and fully connected layers |
| GEMV | GEMM special case | Matrix-vector multiplication |
| Vector add | Vector ALU | Elementwise tensor/vector addition |
| Vector multiply | Vector ALU | Elementwise multiplication |
| ReLU | Epilogue or vector ALU | Activation function |
| Clamp | Epilogue or vector ALU | Min/max activation clipping |
| Bias add | Epilogue stage | Adds per-output-channel bias |
| Requantization | Epilogue stage | Converts int32 accumulations to int8 outputs |
| Conv2D | Software im2col + hardware GEMM | Convolutional layers without dedicated convolution hardware |

### Explicitly Out of Scope

The architecture does not implement graphics rendering, CUDA/OpenCL compatibility, floating-point-first execution, training/backpropagation, virtual memory, hardware cache coherence, operating-system-level device drivers, dedicated direct Conv2D hardware, or reliability/fault-injection logic.

---

## 3. Numeric Format

| Data | Format |
|---|---|
| Input activations | signed int8 |
| Weights | signed int8 |
| MAC product | signed int16 |
| Accumulator | signed int32 |
| Bias | signed int32 |
| Output before quantization | signed int32 |
| Output after quantization | signed int8 with saturation |

Primary compute path:

```text
int8 x int8 -> int32 accumulation
```

This format is suitable for small ML inference, reduces memory footprint, maps well onto FPGA DSP resources, and keeps the RTL implementation manageable.

---

## 4. Top-Level Hardware Architecture

The accelerator subsystem contains the following blocks:

```text
NEORV32 Host CPU
    |
    | MMIO control path
    v
MMIO Register Bank + Command Processor
    |
    v
Tile DMA / Address Generator
    |
    v
Banked Scratchpad Memories
    |
    v
4x4 MAC Array + Vector ALU
    |
    v
Bias / ReLU / Requantization Epilogue
    |
    v
Shared SRAM / Main Memory
```

A performance-counter block observes command execution, MAC activity, DMA stalls, and completed command count.

---

## 5. Hardware Block Responsibilities

### 5.1 NEORV32 Host CPU

The CPU is responsible for application-level control, memory allocation, placing matrices/tensors in shared memory, writing accelerator registers, launching kernels, polling or receiving interrupt completion, reading output data, comparing with software reference during tests, and reading performance counters.

### 5.2 MMIO Register Bank

The accelerator is exposed as a memory-mapped peripheral. The register bank provides control bits, status bits, source/destination addresses, kernel opcode, matrix/tensor dimensions, strides, flags for bias/ReLU/quantization, and performance counters. The MMIO interface is the main hardware/software boundary.

### 5.3 Command Processor

The command processor latches kernel configuration from registers, validates opcode and dimensions, detects illegal command combinations, sequences execution, coordinates DMA, scratchpad, MAC array, epilogue, and storeback, and sets completion and error status bits. It implements the high-level accelerator FSM.

### 5.4 Tile DMA / Address Generator

The tile DMA engine moves data between shared memory and the local scratchpad. It supports rectangular tile loads/stores, row strides, byte addressing, int8 load paths, int32 store paths, and output writeback.

For int8 loads:

```text
mem_addr = base_addr + row * stride_bytes + col
```

For int32 accesses:

```text
mem_addr = base_addr + row * stride_bytes + col * 4
```

The DMA must handle memory latency and expose busy/done/error status to the controller.

### 5.5 Banked Scratchpad Memory

The scratchpad stores local tiles used by the compute array. It is logically divided into A scratchpad for activation/matrix-A tiles, B scratchpad for weight/matrix-B tiles, C/output staging buffer, and the accumulator file inside the MAC array.

Intended layout:

```text
A tile: 4 x 16 int8
B tile: 16 x 4 int8
C tile: 4 x 4 int32 or int8 after epilogue
```

Element layout:

```text
A_tile[row][kk]   -> row = 0..3, kk = 0..15
B_tile[kk][col]   -> kk  = 0..15, col = 0..3
C_tile[row][col]  -> row = 0..3, col = 0..3
```

The scratchpad can be implemented with one bank first, while preserving the interface for two-bank/double-buffered execution.

### 5.6 4x4 MAC Array

The compute core is a 4x4 output-stationary MAC array with 16 processing elements. Each PE contains signed int8 input A, signed int8 input B, a signed multiplier, a signed int32 accumulator, accumulator clear logic, MAC enable logic, and mask enable for edge tiles.

Each PE computes:

```text
acc[row][col] += A[row][kk] * B[kk][col]
```

The MAC array performs one outer-product-style update per K step:

```text
for kk in 0..active_tile_k-1:
    broadcast A[0..3][kk] across rows
    broadcast B[kk][0..3] across columns
    update all active accumulators
```

At the end of the K loop, the array holds one completed 4x4 output tile.

### 5.7 Output-Stationary Dataflow

For one output tile:

1. Clear the 4x4 accumulator array.
2. Load A and B tiles.
3. For each K step, update the 4x4 accumulator tile.
4. Keep partial sums local across K tiles.
5. Run epilogue after the full K dimension has been accumulated.
6. Store the completed C tile to memory.

This reduces external memory traffic because partial sums are not repeatedly written back after every MAC.

### 5.8 Epilogue Stage

The epilogue stage post-processes completed int32 accumulator results.

For each valid output element:

```text
x = accumulator_value

if bias enabled:
    x = x + bias[col]

if ReLU enabled:
    x = max(x, 0)

if clamp enabled:
    x = min(max(x, clamp_min), clamp_max)

if requantization enabled:
    x = (x * scale) >>> shift
    x = x + zero_point
    x = saturate_to_int8(x)
```

The epilogue can produce either int32 output or int8 quantized output.

Saturation rule:

```text
if x > 127:    output = 127
if x < -128:   output = -128
else:          output = x[7:0]
```

### 5.9 Vector ALU

The vector ALU supports simple elementwise kernels:

```text
z[i] = x[i] + y[i]
z[i] = x[i] * y[i]
z[i] = max(x[i], 0)
z[i] = clamp(x[i], min, max)
```

The vector ALU reuses the DMA, scratchpad, memory interface, command processor, and output store path. It may be implemented as four lanes to match the 4-wide tile structure.

### 5.10 Performance Counters

| Counter | Meaning |
|---|---|
| `CYCLE_COUNT` | Total cycles spent executing last command |
| `ACTIVE_COUNT` | Cycles where MAC array or vector ALU was active |
| `STALL_COUNT` | Cycles waiting on memory, DMA, or resource hazards |
| `CMD_COUNT` | Number of successfully completed commands |

Useful relationships:

```text
ACTIVE_COUNT <= CYCLE_COUNT
STALL_COUNT  <= CYCLE_COUNT
CYCLE_COUNT  > 0 for any valid completed command
ACTIVE_COUNT > 0 for compute kernels
```

---

## 6. GEMM Execution Model

The GEMM operation is:

```text
C[M,N] = A[M,K] x B[K,N]
```

Tile dimensions:

```text
TILE_M = 4
TILE_N = 4
TILE_K = 16
```

Hardware loop nest:

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

    run_epilogue();
    store_C_tile(m0, n0);
  }
}
```

### 6.1 Edge Tile Masking

Dimensions may not be multiples of 4 or 16. The controller must generate masks.

```text
row_mask[r] = (m0 + r) < M
col_mask[c] = (n0 + c) < N
active_tile_k = min(TILE_K, K - k0)
```

Inactive rows/columns must not update accumulators or write invalid outputs.

---

## 7. Hardware/Software Co-Design Layer

The co-design layer defines how the host CPU and accelerator cooperate.

### 7.1 Software Responsibilities

The software running on NEORV32:

1. Initializes input matrices/tensors in memory.
2. Builds accelerator configuration.
3. Writes MMIO registers.
4. Starts the accelerator.
5. Waits for completion.
6. Reads status and performance counters.
7. Uses output data.
8. In test mode, compares hardware output with C reference output.

### 7.2 Hardware Responsibilities

The accelerator hardware:

1. Accepts a command from software.
2. Validates the command.
3. Moves data tiles into scratchpad.
4. Performs tiled compute.
5. Applies optional epilogue operations.
6. Writes output back to memory.
7. Reports status and counters.

### 7.3 Register-Based Command Interface

The first implementation uses direct MMIO launch.

Software writes opcode, source addresses, destination address, dimensions, strides, flags, scale/shift/zero point, and start bit.

The hardware returns busy, done, error flags, performance counters, and optional interrupt.

---

## 8. MMIO Register Map

| Offset | Register | Access | Function |
|---:|---|---|---|
| `0x00` | `CTRL` | R/W | Start, reset, interrupt enable, direct mode |
| `0x04` | `STATUS` | R | Busy, done, illegal opcode, shape error |
| `0x08` | `CMD_ADDR` | R/W | Descriptor address, if descriptor mode is implemented |
| `0x0C` | `DIRECT_OP` | R/W | Direct-launch opcode |
| `0x10` | `SRC0_ADDR` | R/W | Matrix A / vector X address |
| `0x14` | `SRC1_ADDR` | R/W | Matrix B / vector Y address |
| `0x18` | `BIAS_ADDR` | R/W | Bias vector address |
| `0x1C` | `DST_ADDR` | R/W | Output address |
| `0x20` | `DIM_M` | R/W | M dimension or vector length |
| `0x24` | `DIM_N` | R/W | N dimension |
| `0x28` | `DIM_K` | R/W | K dimension |
| `0x2C` | `STRIDE0` | R/W | Source 0 row stride |
| `0x30` | `STRIDE1` | R/W | Source 1 row stride |
| `0x34` | `STRIDE_DST` | R/W | Destination row stride |
| `0x38` | `FLAGS` | R/W | Bias/ReLU/quantization flags |
| `0x3C` | `SCALE` | R/W | Requantization scale |
| `0x40` | `SHIFT_ZP` | R/W | Shift and zero point |
| `0x44` | `CYCLE_COUNT` | R | Last command cycle count |
| `0x48` | `ACTIVE_COUNT` | R | Last command active cycles |
| `0x4C` | `STALL_COUNT` | R | Last command stall cycles |
| `0x50` | `CMD_COUNT` | R | Completed commands |
| `0x54` | `IRQ_STATUS` | R/W1C | Interrupt status |

### 8.1 CTRL Bits

```text
CTRL[0] = start
CTRL[1] = soft_reset
CTRL[2] = irq_enable
CTRL[3] = direct_mode
```

### 8.2 STATUS Bits

```text
STATUS[0] = busy
STATUS[1] = done
STATUS[2] = illegal_opcode
STATUS[3] = shape_error
STATUS[4] = memory_error
STATUS[5] = unsupported_format
STATUS[6] = idle
```

---

## 9. Software Driver

The firmware driver should expose a clean API above the raw MMIO registers.

### 9.1 Low-Level Driver

```c
void tinygpu_reset(void);
void tinygpu_start(void);
int  tinygpu_wait_done(uint32_t timeout);
uint32_t tinygpu_status(void);
uint32_t tinygpu_cycles(void);
uint32_t tinygpu_active_cycles(void);
uint32_t tinygpu_stall_cycles(void);
```

### 9.2 Kernel Wrappers

```c
void tinygpu_gemm_i8(
    const int8_t *A,
    const int8_t *B,
    const int32_t *bias,
    int8_t *C,
    uint16_t M,
    uint16_t N,
    uint16_t K,
    int32_t scale,
    int16_t shift,
    int16_t zero_point,
    uint32_t flags
);

void tinygpu_vec_add_i32(
    const int32_t *x,
    const int32_t *y,
    int32_t *z,
    uint32_t length
);

void tinygpu_relu_i32(
    const int32_t *x,
    int32_t *z,
    uint32_t length
);
```

### 9.3 Software Reference Functions

The software stack must also include reference implementations:

```c
void ref_gemm_i8_i32(...);
void ref_gemm_i8_i8_requant(...);
void ref_vec_add_i32(...);
void ref_vec_mul_i32(...);
void ref_relu_i32(...);
```

These are used for correctness checking and benchmark comparison.

---

## 10. NEORV32 Integration

The accelerator should be integrated as a memory-mapped peripheral.

### 10.1 SoC-Level Modifications

Required changes:

1. Add the accelerator MMIO block to the SoC address map.
2. Connect the MMIO interface to the NEORV32 bus/peripheral interconnect.
3. Connect the accelerator memory master interface to shared SRAM or a bus arbiter.
4. Add an interrupt line for command completion.
5. Add platform header definitions for the accelerator base address and register offsets.
6. Add build-system support for accelerator firmware tests.

### 10.2 Suggested Base Address

```text
TINYGPU_BASE = 0xFFFF_E000
```

This is an example address and should be adapted to the actual NEORV32 memory map.

---

## 11. RTL Module Breakdown

```text
rtl/
  tinygpu_top.v
  tinygpu_regs.v
  tinygpu_cmd_ctrl.v
  tinygpu_dma.v
  tinygpu_spm.v
  tinygpu_pe.v
  tinygpu_array4x4.v
  tinygpu_epilogue.v
  tinygpu_vec_alu.v
  tinygpu_counters.v
  tinygpu_defs.vh
```

| Module | Responsibility |
|---|---|
| `tinygpu_top.v` | Top-level accelerator wrapper |
| `tinygpu_regs.v` | MMIO register file and status/counter exposure |
| `tinygpu_cmd_ctrl.v` | Main command FSM and kernel sequencing |
| `tinygpu_dma.v` | Tile load/store address generation and memory handshaking |
| `tinygpu_spm.v` | Local scratchpad memories |
| `tinygpu_pe.v` | One int8 multiply + int32 accumulate unit |
| `tinygpu_array4x4.v` | 16-PE MAC array |
| `tinygpu_epilogue.v` | Bias, activation, quantization, saturation |
| `tinygpu_vec_alu.v` | Vector add/multiply/ReLU/clamp operations |
| `tinygpu_counters.v` | Cycle, active, stall, and command counters |
| `tinygpu_defs.vh` | Parameters, opcodes, flags, register offsets |

---

## 12. Simulation and Verification Plan

Verification is organized in levels:

1. arithmetic unit verification,
2. MAC array verification,
3. scratchpad verification,
4. DMA/address-generator verification,
5. register-interface verification,
6. epilogue verification,
7. kernel-level verification,
8. top-level accelerator verification,
9. firmware-level SoC verification.

---

## 13. Unit-Level Simulations

### 13.1 PE Testbench

File:

```text
tb_tinygpu_pe.v
```

Tests:

- reset clears accumulator,
- `clear_acc` clears accumulator,
- positive multiply,
- negative multiply,
- negative-by-negative multiply,
- multi-cycle accumulation,
- `mac_en = 0` holds value,
- randomized signed int8 tests.

Expected check:

```text
acc_o == reference_accumulator
```

### 13.2 MAC Array Testbench

File:

```text
tb_tinygpu_array4x4.v
```

Tests:

- all accumulators clear correctly,
- one K-step with known A/B vectors,
- full 4x4 by K=4 tile,
- full 4x4 by K=16 tile,
- row mask only,
- column mask only,
- combined row/column mask,
- randomized 4xK by Kx4 tile multiplication.

Expected check:

```text
c_tile[row][col] == golden_tile[row][col]
```

Masked outputs must remain unchanged or zero according to the design convention.

### 13.3 Scratchpad Testbench

File:

```text
tb_tinygpu_spm.v
```

Tests:

- write/read A tile memory,
- write/read B tile memory,
- write/read C staging memory,
- byte strobe behavior,
- address boundary behavior,
- bank selection,
- randomized write/read tests.

### 13.4 DMA Testbench

File:

```text
tb_tinygpu_dma.v
```

Tests:

- load contiguous A tile,
- load contiguous B tile,
- load strided A/B tiles,
- store C tile as int32,
- store C tile as int8,
- memory latency variation,
- memory backpressure,
- invalid memory response handling if implemented.

Checks:

- generated addresses match expected sequence,
- scratchpad contents match source memory,
- stored memory contents match expected output,
- `busy` and `done` behavior is correct.

### 13.5 Epilogue Testbench

File:

```text
tb_tinygpu_epilogue.v
```

Tests:

- int32 pass-through,
- bias add,
- ReLU,
- bias + ReLU,
- clamp,
- requantization,
- saturation above 127,
- saturation below -128,
- masked output elements,
- randomized int32 tiles and flags.

### 13.6 Register Interface Testbench

File:

```text
tb_tinygpu_regs.v
```

Tests:

- reset values,
- write/read all writable registers,
- read-only registers ignore writes,
- unknown addresses return zero or no-op,
- `CTRL.start` generates a start pulse,
- soft reset clears status,
- IRQ status write-one-to-clear,
- byte strobe behavior.

---

## 14. Top-Level Accelerator Simulations

### 14.1 Directed GEMM Testbench

File:

```text
tb_tinygpu_gemm.v
```

Tests:

1. `1x1 * 1x1`
2. `2x2 * 2x2`
3. `4x4 * 4x4`
4. `4x16 * 16x4`
5. `7x10 * 10x5`
6. `16x16 * 16x16`
7. all-zero matrices
8. identity-like matrix
9. signed negative values
10. bias enabled
11. ReLU enabled
12. requantized int8 output

Flow:

```text
reset DUT
initialize memory
write MMIO registers
start accelerator
wait for done or timeout
read output memory
compute golden result
compare hardware output with golden result
check performance counters
```

### 14.2 Vector Kernel Testbench

File:

```text
tb_tinygpu_vector.v
```

Tests:

- vector add length 1,
- vector add length 4,
- vector add length 17,
- vector add length 128,
- vector multiply,
- ReLU with positive/negative values,
- clamp with min/max range,
- randomized vector tests.

### 14.3 Randomized Top-Level Testbench

File:

```text
tb_tinygpu_top_random.v
```

Randomize:

- opcode,
- dimensions,
- matrix/vector values,
- row strides,
- address offsets,
- flags,
- memory latency,
- memory backpressure.

Constraints:

- most tests should be legal,
- some tests should deliberately generate illegal descriptors,
- every legal test must compare against a golden model,
- every illegal test must check status bits and output-memory non-corruption.

Target:

```text
at least 1000 randomized legal commands
at least 100 randomized illegal/error commands
```

### 14.4 Error-Handling Testbench

Tests:

- unsupported opcode,
- `M = 0`,
- GEMM with `N = 0`,
- GEMM with `K = 0`,
- invalid destination format flags,
- start while busy,
- stride too small,
- misaligned addresses if alignment restrictions are implemented.

Expected behavior:

- error bit set,
- busy cleared,
- done or error completion visible,
- no output memory corruption,
- accelerator accepts a later valid command.

---

## 15. Testbench Infrastructure

### 15.1 Memory Model

A reusable memory model should provide:

- at least 1 MB byte-addressable storage,
- 32-bit reads/writes,
- byte strobes,
- configurable read latency,
- configurable write backpressure,
- helper tasks for loading/dumping matrices and vectors.

Tasks:

```verilog
write_byte(addr, value);
read_byte(addr);
write_word(addr, value);
read_word(addr);
load_matrix_i8(base, rows, cols, stride, data);
load_matrix_i32(base, rows, cols, stride, data);
dump_matrix_i8(base, rows, cols, stride, data);
dump_matrix_i32(base, rows, cols, stride, data);
```

### 15.2 Golden Model

The simulation environment must include golden reference tasks/functions:

```verilog
gemm_ref_i8_i32(...);
gemm_ref_i8_i8_requant(...);
vec_add_ref(...);
vec_mul_ref(...);
relu_ref(...);
clamp_ref(...);
requant_ref(...);
sat_i8(...);
```

### 15.3 Scoreboard

The scoreboard must:

- compare output element-by-element,
- print mismatch location,
- print expected and actual value,
- print opcode and dimensions,
- count mismatches,
- stop simulation after excessive mismatches,
- print final pass/fail summary.

---

## 16. Firmware-Level Simulations

After standalone RTL tests pass, run NEORV32-level firmware simulations.

Firmware tests:

1. basic register read/write,
2. GEMM small case,
3. GEMM edge case,
4. vector add,
5. ReLU,
6. bias + ReLU GEMM,
7. int8 requantized output,
8. invalid command status test,
9. performance-counter readback test.

Firmware should compare accelerator output with C reference functions and report pass/fail over UART or simulation console.

---

## 17. Evaluation Measurements

| Metric | Description |
|---|---|
| Latency | Total cycles per kernel |
| Speedup | Software cycles / hardware cycles |
| MAC throughput | Effective MACs per cycle |
| Utilization | `ACTIVE_COUNT / CYCLE_COUNT` |
| Stall fraction | `STALL_COUNT / CYCLE_COUNT` |
| LUT/FF usage | FPGA logic utilization |
| BRAM usage | Scratchpad memory usage |
| DSP usage | Multiplier resource usage |
| Max frequency | Timing result after synthesis/place-and-route |

### 17.1 Benchmark Set

GEMM:

```text
16x16
32x32
64x64
rectangular cases such as 7x10 x 10x5
```

GEMV:

```text
32x64
64x64
```

Vector kernels:

```text
length 64
length 128
length 256
length 512
```

Conv2D via im2col:

```text
small TinyML-style layers lowered into GEMM
```

---

## 18. Minimal Bring-Up Plan

### Stage 1: Basic GEMM Datapath

- PE,
- 4x4 MAC array,
- manual testbench stimulus,
- no DMA,
- no MMIO.

### Stage 2: Scratchpad + Tiled GEMM

- A/B tile storage,
- K loop,
- row/column masks,
- output tile generation.

### Stage 3: MMIO + Command FSM

- register file,
- start/done/busy,
- direct launch,
- basic error handling.

### Stage 4: DMA + Memory Model

- load A/B tiles from memory,
- store C tile,
- variable memory latency tests.

### Stage 5: Epilogue

- bias,
- ReLU,
- requantization,
- saturation.

### Stage 6: Vector Kernels

- vector add,
- vector multiply,
- ReLU/clamp as standalone kernels.

### Stage 7: NEORV32 Integration

- SoC address map,
- firmware driver,
- software reference,
- benchmark collection.

---

## 19. Final Technical Summary

TinyGPU-ML is a NEORV32-attached ML accelerator built around a 4x4 output-stationary signed int8 MAC array with signed int32 accumulation. The hardware is controlled through MMIO registers, moves matrix/vector tiles through a DMA/address-generator into banked scratchpad memory, executes tiled GEMM/GEMV/vector kernels, applies optional epilogue operations, and writes outputs back to shared memory.

The software layer provides a low-level register driver, kernel wrappers, C golden reference functions, and benchmark programs. The co-design boundary is defined by the MMIO register map, memory layout, command flags, and shared SRAM buffers.

The verification plan requires unit-level RTL testbenches, top-level randomized accelerator simulations, memory-latency stress tests, invalid-command tests, and NEORV32 firmware-level simulations.
