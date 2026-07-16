# TinyGPU-ML: Engineering Challenges and Project Outcomes

## 1. Project Evolution

TinyGPU-ML began as a small SystemVerilog exercise built around a signed INT8
processing element and a 4x4 MAC array. It developed into a complete accelerator
project containing a tiled compute engine, DMA, memory arbitration, vector and
post-processing units, hardware Conv2D support, an MMIO and descriptor command
interface, NEORV32 software integration, coverage-driven verification, formal
checks, and a routed FPGA implementation.

The hardest part was keeping four concerns aligned while the scope changed:

- the architecture had to remain useful for machine-learning workloads;
- the RTL had to be portable across simulators and synthesizable by Gowin tools;
- verification had to distinguish feature coverage from structural code coverage;
- the complete NEORV32 plus TinyGPU system had to fit and close timing on the
  selected FPGA.

The final canonical design is a `4x4x16` accelerator: 16 signed INT8 MAC
processing elements produce a 4x4 output tile and accumulate into INT32 values,
while the reduction dimension is processed in chunks of 16.

## 2. Portable SystemVerilog RTL

### Challenge

The first 4x4 array tests exposed simulator-dependent handling of unpacked array
ports. A PE test could pass while `c_tile[0][0]` became unknown in the array test
on another Icarus Verilog installation. The failure looked like an arithmetic or
reset bug, but the real issue was the way array outputs were connected through
the wrapper.

### Resolution

The wrapper was rewritten to drive each output element explicitly. The RTL also
adopted a more conservative SystemVerilog style for generated arrays, signed
arithmetic, reset values, widths, and module boundaries. Verilator lint was
added alongside Icarus simulation so portability problems could be found before
FPGA synthesis.

### Current outcome

The complete directed Icarus regression now passes `32/32` benches, and the
Verilator lint flow completes successfully. Simulator portability remains a
reason to avoid relying on ambiguous language behavior, but it is no longer a
known functional blocker.

## 3. From Working Blocks to a Working Accelerator

### Challenge

The PE, MAC array, scratchpad, DMA, and epilogue could each pass a unit test while
the complete command still failed. Most system-level faults were sequencing
errors rather than arithmetic errors: clearing an accumulator at the wrong
time, launching a DMA request twice, advancing a tile counter before a response,
or storing data before post-processing completed.

The command controller also grew to support direct and descriptor operation,
GEMM, GEMV, vector commands, Conv2D, edge masks, bias, ReLU, clamp,
requantization, INT8 and INT32 stores, status reporting, and error exits. This
made controller state transitions the central verification problem.

### Resolution

Verification was built in layers:

- unit benches isolate the PE, array, DMA, registers, counters, memory arbiter,
  im2col loader, and epilogue;
- directed top-level benches exercise complete legal and error command flows;
- randomized memory latency checks request and response sequencing;
- a Verilator differential harness compares RTL results with software reference
  calculations over 1000 deterministic jobs;
- controller cross coverage exercises valid combinations of opcode, command
  mode, destination format, post-processing options, and tile shape.

### Current outcome

All 1000 Verilator differential jobs pass. All 169 defined valid controller
cross combinations have been exercised. Remaining controller coverage gaps are
mainly injected memory faults, rare ready/valid interleavings, assertion-failure
outcomes, and defensive recovery behavior rather than missing normal commands.

## 4. DMA and Shared-Memory Protocols

### Challenge

Early controller versions used synthetic scratchpad data, which proved the local
datapath but not the memory interface. Replacing those values with real DMA-fed
loads exposed protocol requirements that are easy to miss in directed arithmetic
tests:

- a request must remain stable until accepted;
- read acceptance and read-data return are separate events;
- only one read may be outstanding in the current architecture;
- byte stores must select the correct lane and write strobe;
- row and tile address progression must remain correct under stalls;
- descriptor, DMA, bias, vector, and im2col clients must not corrupt one
  another's transactions.

### Resolution

Memory-client arbitration was separated from the main command FSM. Registered
address pointers replaced large free-running address multipliers, and the DMA
was tested with delayed `mem_ready`, delayed `mem_rvalid`, multi-row transfers,
all INT8 byte lanes, and INT32 stores. Assertions check request stability and
outstanding-read behavior.

### Current outcome

The memory protocol is verified for the bounded, one-outstanding-read model used
by TinyGPU. It is intentionally not a cache-coherent, burst-capable, or
multi-outstanding interconnect. Supporting those features would require a new
protocol and performance-verification phase.

## 5. Hardware Conv2D Without a Second Compute Engine

### Challenge

The project scope expanded from GEMM and vector operations to Conv2D. Adding a
dedicated convolution datapath would have duplicated multipliers, accumulators,
buffering, and post-processing, worsening an already tight FPGA area budget.
Materializing a complete im2col matrix in memory would also add storage and
external-memory traffic.

### Resolution

Conv2D is implemented in RTL through streaming im2col. The im2col loader derives
the activation addresses for one `4x16` tile, injects zero values for padded
coordinates, and sends the tile into the existing GEMM flow. Weights use the
normal DMA path, and the MAC array, accumulator, epilogue, and output store are
shared with GEMM.

The implemented scope is:

- packed NHWC signed INT8 input activations;
- `KH-KW-Cin-Cout` weight layout;
- batch size 1;
- `1x1` and `3x3` kernels;
- independent vertical and horizontal stride of 1 or 2;
- independent vertical and horizontal padding of 0 or 1;
- optional bias, ReLU, clamp, requantization, and INT8 or INT32 output.

### Current outcome

Conv2D is a real hardware-controlled path, not software im2col. Direct and
18-word descriptor Conv2D commands are tested, including asymmetric stride and
padding, partial output tiles, invalid configuration, and invalid descriptor ABI
cases. Groups, dilation above one, larger kernels, and batch sizes above one are
outside the implemented scope.

## 6. Area Optimization and FPGA Selection

### Challenge

The original parallel architecture exceeded smaller Gowin device limits. During
development, reduced `1x1x4` and `2x2x8` variants were used to separate RTL
correctness from board-capacity problems. Restoring `4x4x16` with Conv2D made
area optimization essential.

The main costs were not only the 16 MACs. Scratchpad multiplexing, controller
decode, parallel post-processing, address arithmetic, and SoC integration also
consumed substantial LUT and routing resources.

### Resolution

The design moved to tile-sized banked buffers, a serialized shared epilogue, a
single shared requantization multiplier, pointer-based DMA address generation,
and a common memory arbiter. The Tang Primer 25K was selected for the final
implementation evidence because smaller devices did not provide credible margin
for the complete configuration.

### Current outcome

The complete NEORV32 plus TinyGPU implementation places, routes, and generates a
bitstream on `GW5A-LV25MG121NC2/I1`. Resource use is:

| Resource | Used | Utilization |
|---|---:|---:|
| Logic | `17,921 / 23,040` | `78%` |
| Registers | `7,099 / 23,280` | `31%` |
| CLS | `10,298 / 11,520` | `90%` |
| BSRAM | `14 / 56` | `25%` |
| DSP | `28 / 28` | `100%` |

The design fits, but it has no DSP expansion margin and limited CLS margin.
Adding more PEs or major arithmetic features would require further sharing, a
larger device, or a different architecture.

## 7. Timing Closure

### Challenge

Early routed builds reported many failing paths. The longest paths crossed
controller decode, DMA command generation, memory-master outputs, vector
post-processing, and address calculations. Some reported problems were also
confused by stale source copies and incomplete constraints.

### Resolution

The important timing changes were:

- registered top-level memory-master commands;
- registered DMA issue information;
- pointer increments instead of combinational row and tile multiplication;
- staged vector and requantization operations;
- serialized epilogue processing;
- a separate request/response arbiter;
- explicit verification of the active project source list and clock constraint.

### Current outcome

The final Tang Primer 25K route closes the 27 MHz target with zero setup and hold
violations. Post-route Fmax is `47.462 MHz`, worst setup slack is `+15.968 ns`,
worst hold slack is `+0.180 ns`, and both setup and hold total negative slack are
zero. Timing is closed for the reported constraint; this does not imply that the
same design is closed at 50 MHz.

## 8. SRAM Inference and Gowin Project Consistency

### Challenge

One implementation attempt failed during PnR because an inferred single-port RAM
used an unsupported `WRITE_MODE`. Multiple NEORV32 and TinyGPU source copies made
it difficult to tell whether the active Gowin project contained the corrected
memory template. This initially looked like a device-capacity problem, although
the immediate cause was inference and project-source consistency.

### Resolution

The active Gowin project and source manifest were audited, and the NEORV32 memory
process was changed to a pattern supported by the target primitive. Source-tree
ownership and report locations were documented so synthesis results could be
matched to the RTL that produced them.

### Current outcome

The latest Tang Primer 25K flow completes synthesis, PnR, timing analysis, and
bitstream generation. Future builds still need reproducible source manifests;
copying RTL manually between board projects remains a maintenance risk.

## 9. NEORV32 Hardware/Software Boundary

### Challenge

The accelerator is host-centric: NEORV32 configures commands through MMIO,
starts execution, and reads status and counters. The register map, descriptor
layout, interrupt behavior, memory addresses, and data formats therefore have to
agree across C, VHDL wrappers, SystemVerilog RTL, and testbenches.

GHDL introduced another boundary issue because it handles the VHDL NEORV32
system but does not directly execute the real SystemVerilog accelerator in the
maintained flow. Earlier UART corruption and instruction traps also made it
necessary to distinguish a CPU/firmware simulation fault from an accelerator
arithmetic fault.

### Resolution

The verification roles were separated:

- Icarus and Verilator execute the real SystemVerilog accelerator;
- GHDL executes NEORV32 firmware and MMIO behavior using a VHDL TinyGPU model;
- the software driver, direct commands, descriptor commands, IRQ handling, and
  completion signatures are checked through the software regression;
- Python and C reference calculations provide independent expected results.

### Current outcome

The software/MMIO regression reports `pass=31 fail=0`. This demonstrates that
the firmware-visible contract is internally consistent. It is not a mixed-VHDL/
SystemVerilog full-SoC proof, so real RTL arithmetic remains supported by the
Icarus and Verilator results rather than the behavioral GHDL model.

## 10. Verification Coverage and Metric Interpretation

### Challenge

Coverage reporting initially produced a value around 26%. That figure combined
different Verilator record types and duplicated RTL instances from separately
compiled test binaries. It was useful for finding untouched code, but it was not
a clean measure of logical branch closure. At the same time, reporting 100%
functional coverage alone could be misleading because functional bins only
measure the scenarios explicitly defined by the verification plan.

### Resolution

The coverage flow now reports distinct metrics with distinct meanings:

| Metric | Current result | Meaning |
|---|---:|---|
| Canonical top RTL line coverage | `96.45% (1740/1804)` | Executed RTL source lines in one top-level hierarchy |
| Canonical top logical branch coverage | `92.17% (753/817)` | Taken logical decisions without duplicated test-binary hierarchies |
| Canonical controller logical branch coverage | `95.66% (353/369)` | Decision coverage inside the command controller |
| Merged multi-binary RTL branch coverage | `74.68% (15139/20271)` | Breadth across independently compiled directed regressions |
| Coarse functional coverage | `100% (33/33)` | Defined feature bins exercised |
| Valid controller cross coverage | `100% (169/169)` | Defined legal controller combinations exercised |

The increase from the old roughly 26% report to 92.17% should not be described
as stimulus improvement alone because the denominator and classification method
also changed. The current canonical logical-branch metric is the primary closure
number. The merged score is retained as a secondary measure because separately
compiled benches duplicate source decisions and include more expression-level
branches.

### Current outcome

Verification is substantially stronger than the earlier report suggested. It is
still not correct to call the design fully verified. The remaining canonical
branch gaps are concentrated in fault injection, rare protocol interleavings,
assertion-failure outcomes, and defensive state recovery. Architecturally
impossible branches are narrowly documented or supported by formal reasoning;
reachable legal and software-visible error paths remain part of the coverage
target.

## 11. Formal Verification Boundaries

### Challenge

Simulation can show that selected executions work, but it cannot exhaustively
prove every arbitration, pointer, and protocol sequence. Conversely, proving the
complete accelerator plus processor, memory, and software is not realistic for
the available course-project time and compute budget.

### Resolution

Formal work was focused on bounded block-level safety and progress properties:

- legal FSM states and bounded controller progress;
- request stability and response routing in the memory arbiter;
- DMA pointer and transfer bounds;
- im2col address and padding invariants;
- counter monotonicity and register-protocol behavior.

Assertions are excluded from synthesis and complement, rather than replace, the
directed and differential simulation flows.

### Current outcome

The formal suite provides useful proof points for critical control logic. Full
SoC liveness, arbitrary external-memory behavior, and exhaustive end-to-end
numerical proof remain outside the claimed closure scope.

## 12. Performance and Architectural Efficiency

### Challenge

Correctness alone does not establish accelerator value. Small jobs can be
dominated by MMIO setup, descriptor fetch, DMA latency, padding checks, and
serialized post-processing. The deterministic RTL demo confirms that memory and
control overhead are significant: measured stall rates range from 52% for its
small direct GEMM to 78% for its Conv2D example.

### Resolution

The project now records controller cycle, active, and stall counters and reports
both RTL microarchitectural measurements and NEORV32 software-reference cycle
counts. This exposes overhead instead of presenting peak MAC throughput as
realized application throughput.

### Current outcome

The design demonstrates acceleration concepts and correct tiled execution, but
it is not yet bandwidth optimized. Burst transfers, double buffering, concurrent
load/compute/store, and larger workloads would be the highest-value performance
extensions.

## 13. Documentation and Reproducibility

### Challenge

The architecture changed through `1x1x4`, `2x2x8`, and `4x4x16` configurations,
while Conv2D moved from a software-im2col concept to a hardware streaming path.
Documentation, duplicated RTL trees, software banners, board projects, and
metrics could therefore describe different versions of the design.

### Resolution

The repository now identifies `rtl/` as the canonical accelerator source and
uses a consistent final narrative across the README, implementation
specification, architecture document, demo preparation, coverage methodology,
and metrics summary. Final logs, LCOV data, annotated coverage files, and the
demo waveform are preserved under `results/`, while the Tang Primer 25K
implementation reports are retained with the Gowin project.

### Current outcome

The repository contains reproducible commands and report evidence for the final
project state. The most important future maintenance improvement would be to
generate every board manifest from the canonical RTL list and automatically
check mirrored integration files for equality.

## 14. Final Status and Remaining Risks

The final project demonstrates:

- a `4x4x16` signed INT8/INT32 tiled accelerator;
- GEMM, GEMV, vector operations, bias, activation, clamp, and requantization;
- hardware Conv2D through streaming im2col;
- direct MMIO and descriptor command interfaces;
- `32/32` passing directed Icarus benches;
- `1000/1000` passing Verilator differential jobs;
- `92.17%` canonical top logical branch coverage and `95.66%` controller
  logical branch coverage;
- complete defined functional and valid controller cross bins;
- `pass=31 fail=0` in the NEORV32 software/MMIO regression;
- focused formal safety and progress checks;
- successful Tang Primer 25K PnR and bitstream generation with timing closure.

The main limitations are equally important:

- Conv2D is limited to batch 1, groups 1, dilation 1, and `1x1` or `3x3`
  kernels;
- the memory interface allows one outstanding read and no burst operation;
- DSP utilization is 100% and CLS utilization is 90% on the final device;
- the 27 MHz implementation is closed, but 50 MHz has not been demonstrated on
  this routed SoC build;
- GHDL validates the software/MMIO contract with a behavioral model, not the
  real SystemVerilog accelerator;
- remaining branch gaps and full-SoC liveness are not claimed as closed.

These limits do not invalidate the result. They define an honest boundary around
what has been implemented, measured, and verified, and they identify clear next
steps for a larger accelerator or a production-quality integration.
