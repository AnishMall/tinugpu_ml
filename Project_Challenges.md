# TinyGPU-ML Project Challenges

## Overview

TinyGPU-ML evolved from a small SystemVerilog MAC-array exercise into a full
hardware/software accelerator project with RTL simulation, NEORV32 integration,
Conv2D support, verification closure, and FPGA implementation reports. The main
challenge was not a single bug; it was keeping architecture, verification,
software, and FPGA constraints aligned while the design scope changed.

## 1. SystemVerilog Tool Compatibility

Early unit tests exposed differences in how tools handled unpacked arrays and
module ports. The 4x4 MAC array initially passed in one environment but produced
unknown values in another Icarus Verilog setup. The fix was to make the array
wrapper drive every output element explicitly and avoid relying on simulator
behavior that was not robust across Icarus versions.

This established an important rule for the project: the RTL should be written in
a conservative, synthesis-friendly SystemVerilog style and checked on the same
tool versions used by collaborators.

## 2. Moving From Block Tests To Full Controller Tests

The individual PE, array, DMA, scratchpad, and epilogue blocks were easier to
test than the full command controller. Once the datapath blocks worked, most of
the remaining issues were in sequencing: when to load A and B tiles, when to
clear accumulators, when to launch DMA, when to apply post-processing, and when
to store results.

The solution was to add progressively stronger top-level tests:

- direct GEMM through MMIO registers;
- descriptor-mode GEMM;
- edge-tile masking;
- INT8 and INT32 output modes;
- bias, ReLU, clamp, and requantization;
- vector operations;
- randomized memory-latency stress;
- Conv2D through hardware streaming im2col.

This moved verification from "the blocks work" to "the system works when the
controller has to coordinate them."

## 3. DMA And Memory Handshake Correctness

The first controller versions filled scratchpad data synthetically. That was
useful for early bring-up, but it did not verify the actual memory interface.
Replacing synthetic fills with DMA-fed loads exposed the usual accelerator
integration problems: request hold behavior, delayed `mem_ready`, delayed
`mem_rvalid`, byte-lane stores, and one-outstanding-read assumptions.

The DMA and memory arbiter were separated from the controller so descriptor
fetch, tensor loads, bias loads, im2col reads, vector operations, and stores
could share one verified memory path.

## 4. NEORV32 Integration Boundary

The accelerator is host-centric: NEORV32 configures the job through MMIO, starts
the accelerator, and reads status/counters. TinyGPU performs the heavy compute
and memory movement, but it remains a peripheral controlled by software.

The difficult part was the hardware/software boundary:

- MMIO register addresses had to match software driver constants;
- status, done, IRQ, and error bits had to be stable and clearable;
- direct mode and descriptor mode had to remain compatible;
- Conv2D needed extra configuration without breaking the existing descriptor ABI;
- GHDL could simulate the VHDL firmware/MMIO environment, but not the real
  SystemVerilog accelerator behavior.

The final approach uses GHDL for firmware/MMIO regression with a behavioral
TinyGPU model, while Icarus and Verilator remain the source of truth for the
real SystemVerilog RTL.

## 5. Conv2D Scope And Streaming Im2col

The project requirement moved from GEMM/vector acceleration toward Conv2D
support. A dedicated convolution datapath would have increased area
substantially, so the RTL implements Conv2D by streaming im2col into the existing
GEMM engine.

The loader generates one activation tile at a time, injects zeros for padding,
and never materializes a full lowered im2col matrix in memory. This preserved the
main 4x4 MAC datapath while adding support for packed NHWC INT8 activations,
KH-KW-Cin-Cout weights, 1x1 and 3x3 kernels, stride 1 or 2, and padding 0 or 1.

The challenge was making Conv2D look like normal tiled GEMM internally without
adding a second large compute engine.

## 6. FPGA Area Pressure

The original 4x4x16 design was too large for the smaller boards. The Tang Nano
20K experiments showed that even reduced configurations could leave little room
for routing and future features. The project temporarily moved to smaller
configurations such as 1x1x4 and 2x2x8 to understand area and timing tradeoffs.

When the project goal shifted toward simulation, verification, and reportable
closure rather than a physical 20K-board demo, the canonical RTL returned to
4x4x16. The final Tang Primer 25K reports show the 4x4x16 hardware Conv2D design
can place and route, but with meaningful resource pressure:

- logic utilization is high;
- CLS utilization is very high;
- all DSPs are used;
- the design closes timing for the configured 27 MHz target.

This is a strong design lesson: functional architecture and FPGA fit must be
co-designed.

## 7. Timing Closure

Timing issues came mainly from long controller, DMA, memory, and post-processing
paths. Fixes included:

- registering top-level memory command outputs;
- replacing free-running address multiplications with pointer increments;
- serializing epilogue work through a shared post-processing path;
- separating memory arbitration from command sequencing;
- adding pipeline boundaries around vector and requantization flows;
- keeping one outstanding memory read to simplify timing and correctness.

The final Tang Primer 25K report closes timing with zero setup and hold
violations for the current project constraint.

## 8. Coverage Interpretation

Coverage was one of the most subtle project challenges. An early Verilator
number around 26% mixed signal-toggle records, expression records, FSM records,
and duplicated RTL hierarchies from many separately compiled testbenches. That
number was useful as a warning signal, but it was not a clean branch-coverage
metric.

The final reports distinguish:

- canonical top RTL line coverage;
- canonical top RTL logical branch coverage;
- canonical controller logical branch coverage;
- merged multi-binary RTL branch coverage;
- functional coverage;
- controller cross coverage.

The canonical top-level logical branch metric is the main design-closure number,
while the merged multi-binary number remains a secondary regression-breadth
metric.

## 9. Formal Verification Scope

Formal verification was added for focused properties rather than full SoC proof.
This was the practical choice because proving the complete accelerator with
memory, software-visible registers, DMA, Conv2D, and full controller progress is
too broad for a small course project.

The formal folder targets block-level safety and progress properties for pieces
such as the DMA pointer generator, memory arbiter, register protocol, counters,
and im2col address generation. These checks complement simulation rather than
replace it.

## 10. Documentation Drift

Because the architecture changed several times, the documentation occasionally
lagged behind the RTL. Older files referred to 1x1x4 or 2x2x8 builds even after
the canonical design returned to 4x4x16. Keeping the README, RTL spec,
architecture spec, demo notes, and metrics summary consistent became a real
maintenance task.

The final documentation now uses the same story:

- canonical RTL is 4x4x16;
- Conv2D is implemented in RTL using streaming im2col;
- Tang Primer 25K is the latest routed FPGA result;
- coverage metrics use corrected branch-coverage terminology;
- software im2col remains a reference/demo concept, not the primary Conv2D
  hardware path.

## 11. Final Project State

The project now has a coherent end-to-end story:

- 4x4x16 INT8 MAC accelerator with INT32 accumulation;
- GEMM, GEMV, vector operations, post-processing, and hardware Conv2D;
- direct MMIO and descriptor command paths;
- Icarus directed RTL regression;
- Verilator differential regression and coverage;
- GHDL firmware/MMIO regression with behavioral TinyGPU model;
- focused formal checks;
- Tang Primer 25K synthesis, PnR, timing, power, and utilization reports;
- presentation-ready demo, metrics, and methodology documents.

The remaining limitations are clear and defensible: batch size is fixed to 1,
Conv2D supports only 1x1 and 3x3 kernels, memory behavior is intentionally
simple, and the design is area-constrained on small Gowin devices.
