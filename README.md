# TinyGPU-ML

TinyGPU-ML is a command-driven INT8 inference accelerator for integration with
the NEORV32 RISC-V SoC. The canonical implementation is a `4x4x16` tiled
engine: 16 signed INT8 processing elements run in parallel, accumulate into
INT32, and feed a serialized bias/activation/requantization epilogue.

Final verification transcripts, coverage files, and the demo waveform are
collected in [`results/`](results/). A project retrospective covering the main
debugging, verification, integration, area, and timing challenges is available
in [`Project_Challenges.md`](Project_Challenges.md).

## Hardware

The canonical source tree is [`rtl/`](rtl/). It implements:

- tiled GEMM and GEMV;
- vector add, multiply, ReLU, and clamp;
- bias, ReLU, clamp, requantization, INT8 stores, and INT32 stores;
- hardware Conv2D using streaming im2col into the existing GEMM array;
- direct MMIO and descriptor command modes;
- registered one-outstanding-read memory-master traffic;
- cycle, active-cycle, stall, and command counters.

Conv2D accepts packed NHWC signed INT8 activations and weights laid out as
`[KH][KW][Cin][Cout]`. It supports batch 1, `1x1` or `3x3` kernels, independent
stride 1 or 2, independent padding 0 or 1, dilation 1, and groups 1. The RTL
does not materialize a complete im2col matrix: it generates and loads one
`4x16` activation tile at a time, injects zero for padding, and reuses the
normal weight DMA, MAC array, epilogue, and output-store path.

The scratchpad contains exactly one tile: four A row banks, four B column
banks, and sixteen C words. DMA row addresses use registered pointers rather
than live row multipliers. The epilogue streams each completed element directly
to C storage and shares one requantization multiplier with the vector path.

## Software Interface

The NEORV32 MMIO base used by the integration is `0xFFEE0000`. Existing
14-word GEMM/vector descriptors remain unchanged. Conv2D uses an 18-word
descriptor: word 14 is ABI version 1, and words 15-17 contain input shape,
channel counts, and kernel/stride/padding configuration.

New registers are:

| Offset | Register | Description |
|---:|---|---|
| `0x58` | `CONV_IN_HW` | input height and width |
| `0x5c` | `CONV_CHANNELS` | output and input channels |
| `0x60` | `CONV_CFG` | padding, stride, and kernel fields |
| `0x64` | `CAPS` | ABI version, features, and tile dimensions |

The driver in
[`sw integration/neorv32-setups/neorv32/sw/example/demo_tinygpu`](sw%20integration/neorv32-setups/neorv32/sw/example/demo_tinygpu)
defines both descriptor layouts and provides `tgpu_conv2d()`.

## Verification

Run the complete Icarus regression:

```bash
make test
```

Run Verilator lint and the 1000-job deterministic differential regression:

```bash
make lint
make verilator-diff
```

The differential test compares GEMM, vector add, and hardware Conv2D against
C++ reference models while applying 0-15 cycles of memory backpressure.

Run the curated directed Verilator coverage subset:

```bash
make verilator-directed-cov
```

Run the merged coverage flow:

```bash
make coverage-report
```

This merges coverage from the randomized differential harness and the directed
Verilator subset, then annotates the canonical RTL under `build/coverage/`.
The report prints canonical top-level line and logical branch coverage,
controller logical branch coverage, and a secondary multi-binary branch score.
The canonical score avoids counting the same RTL branch repeatedly under
independently compiled testbench hierarchies.

Run the deterministic SystemVerilog RTL demo transcript:

```bash
make demo-rtl
```

This runs the real `rtl/tinygpu_top.sv` hierarchy with
`tb/tb_tinygpu_top_demo_tb.sv`, prints result/counter lines, and writes the
waveform file `build/tinygpu_top_demo.vcd`. The RTL demo prints:

```text
Direct GEMM C = [[19, 22], [43, 50]]
Direct GEMM perf: cycles=124 active=2 stalls=65 work=8 ops/cycle=0.064 stall=52%
Descriptor GEMM C = [[19, 22], [43, 50]]
Descriptor GEMM perf: cycles=194 active=2 stalls=135 work=8 ops/cycle=0.041 stall=69%
Vector add z = {6, 4, -4, 12}
Vector add perf: cycles=61 active=8 stalls=47 work=4 ops/cycle=0.065 stall=77%
Conv2D out row0 = {1, 2, 3}
Conv2D out row1 = {4, 5, 6}
Conv2D out row2 = {7, 8, 9}
Conv2D perf: cycles=888 active=27 stalls=695 work=81 ops/cycle=0.091 stall=78%
Last command cycles : 888
Last command active : 27
Last command stalls : 695
Commands completed : 4
```

Run the matching Python golden reference for the same fixed demo inputs:

```bash
make demo-golden
```

Expected output:

```text
TinyGPU-ML Python golden demo
Direct GEMM C = [[19, 22], [43, 50]]
Descriptor GEMM C = [[19, 22], [43, 50]]
Vector add z = {6, 4, -4, 12}
Conv2D out row0 = {1, 2, 3}
Conv2D out row1 = {4, 5, 6}
Conv2D out row2 = {7, 8, 9}
demo_golden PASS
```

Run the maintained software/MMIO demo through the repository target:

```bash
make demo-sw
```

Or run the NEORV32 firmware/GHDL regression directly from the software example:

```bash
cd "sw integration/neorv32-setups/neorv32/sw/example/demo_tinygpu"
make sim_ghdl_safe
```

That flow uses the NEORV32 CPU model plus the behavioral TinyGPU VHDL
integration model. It is the right place to show firmware execution, MMIO
register access, CPU-only reference kernels, and the software-side pass/fail
signature. The current firmware baseline table is:

| Kernel | CPU-only cycles | TinyGPU model cycles | Speedup |
|---|---:|---:|---:|
| Vector add, 4 elements | `239` | `132` | `1.81x` |
| GEMM `2x2x8` | `2,839` | `1,079` | `2.63x` |
| Conv2D `3x3`, center kernel | `7,308` | `2,226` | `3.28x` |

The direct GHDL run should end with:

```text
[TB:TGPU] Software integration result: pass=31 fail=0
```

Use `make demo-rtl` for real RTL microarchitectural counters. Use
`make sim_ghdl_safe` for NEORV32 firmware/MMIO and CPU-only baseline numbers.
Do not mix these two timing sources into one rigorous speedup equation.

Current Verilator metrics from `make coverage-report` are:

- canonical top RTL line coverage: `96.45% (1740/1804)`
- canonical top RTL logical branch coverage: `92.17% (753/817)`
- canonical controller logical branch coverage: `95.66% (353/369)`
- coarse functional coverage: `100.00% (33/33 bins)`
- valid controller cross-product coverage: `100.00% (169/169 bins)`
- merged multi-binary RTL branch coverage: `74.68% (15139/20271)`

The 169 controller crosses cover legal GEMM, GEMV, vector, Conv2D, and error
combinations. Meaningless `INT32 + requant` crosses and the impossible
direct-mode descriptor-ABI error are excluded from the denominator.

Branch coverage closure notes and waiver rationale are documented in
[`Branch_Coverage_Closure.md`](Branch_Coverage_Closure.md). Defensive FSM
default branches are kept in the RTL as fault-containment paths and justified
with simulation/formal assertions that prove legal state encodings after reset.
The change from the historical `26%` metric to the current methodology is
documented in [`Branch_Coverage_Methodology.md`](Branch_Coverage_Methodology.md).

Formal project files are under [`formal/`](formal/):

```bash
make formal
```

This requires SymbiYosys, Yosys, and Z3. GHDL remains the NEORV32 firmware and
MMIO regression using the behavioral VHDL model; Icarus and Verilator verify
the real SystemVerilog accelerator.

## Source Synchronization

The NEORV32 SystemVerilog directories are generated mirrors of `rtl/`:

```bash
make sync-rtl
make check-rtl-sync
```

Gowin and mixed-language project manifests must import every file in
[`rtl/files.f`](rtl/files.f) in order.

## Synthesis

The primary target is a Tang Mega 60K-class Gowin FPGA at 50 MHz. Project
scaffolding and closure criteria are in
[`synthesis/tang-mega-60k`](synthesis/tang-mega-60k). The exact
`GOWIN_PART_NUMBER` must come from the installed Gowin device database; no
post-route 60K result is claimed in this repository yet.

The archived Tang Nano 20K `2x2x8` result remains a historical area/timing
comparison, not the primary architecture.
