# TinyGPU Branch Coverage Methodology

## Purpose

This document explains why an earlier TinyGPU verification report showed about
`26%` branch coverage, why that number is not directly comparable with the
current result, and which branch coverage metric should be used in reports and
presentations.

## Metric Names

| Metric | Meaning |
|---|---|
| Canonical RTL logical branch coverage | Expression and FSM branch outcomes measured once in one complete `tinygpu_top` simulation hierarchy. |
| Canonical controller logical branch coverage | The same measurement restricted to `tinygpu_cmd_ctrl.sv`. |
| Merged multi-binary RTL branch coverage | Coverage merged from independently compiled directed testbench binaries. Equivalent RTL branches can appear more than once. |
| Functional coverage | Explicit project feature bins, such as opcode, mode, destination format, post-processing, Conv2D configuration, and error behavior. |
| Controller cross coverage | Valid combinations of controller mode and feature bins checked through `tinygpu_top`. |

The word **logical** distinguishes branch coverage from signal-toggle coverage.
The branch denominator contains coverage outcomes generated for expressions and
FSM decisions; it is not a count of SystemVerilog `if` statements.

## Previous Coverage Flow

The earlier Verilator flow used:

```sh
verilator --coverage ...
```

`--coverage` enabled several coverage classes together, including signal-toggle
coverage. When Verilator exported LCOV data, both logical expression outcomes
and per-bit signal activity appeared as `BRDA` records. The report script
treated every `BRDA` record as a branch.

This produced the historical results:

- raw RTL result: approximately `27.61% (47786/173058)`;
- non-memory RTL result: approximately `26.32% (37862/143833)`;
- an earlier snapshot reported `24.59% (35025/142452)`.

These denominators were dominated by coverage points attached to wide signals.
For example, 16-bit and 32-bit addresses, strides, counters, and data buses could
generate hundreds of per-bit records on a single source line. Those records
measured value transitions, not controller branch choices.

The old report also merged many independently compiled testbenches. Each binary
contained its own RTL hierarchy, so the same source branch could occur several
times in the merged denominator. A branch covered by one testbench did not
necessarily close the duplicate associated with another binary.

Therefore, the old `26%` value was a mixed toggle, expression, FSM, and
multi-hierarchy metric. Calling it pure RTL branch coverage was inaccurate.

## Current Coverage Flow

The current Verilator builds enable the required coverage classes explicitly:

```sh
--coverage-line --coverage-expr --coverage-fsm --coverage-user
```

Signal-toggle coverage is intentionally not enabled for the logical branch
metric. This matches the project scope: verify RTL control decisions without
requiring every memory address or data bit to toggle.

The differential harness now writes its data to `build/cov/diff.dat`, ensuring
that the comprehensive top-level run is included in the coverage report.

Two views are reported:

1. **Canonical view:** one `tinygpu_top` Verilator binary containing the
   deterministic differential regression and exhaustive controller matrix.
   Each RTL branch appears once in the denominator.
2. **Merged multi-binary view:** all separately compiled directed benches are
   merged. This is useful for judging the strength of each regression binary,
   but duplicate RTL hierarchies lower the percentage.

## Current Results

| Metric | Current result |
|---|---:|
| Canonical top RTL line coverage | `96.45% (1740/1804)` |
| Canonical top RTL logical branch coverage | `92.17% (753/817)` |
| Canonical controller logical branch coverage | `95.66% (353/369)` |
| Merged multi-binary RTL branch coverage | `74.68% (15139/20271)` |
| Merged non-memory RTL branch coverage | `74.01% (11965/16167)` |
| Merged waiver-adjusted RTL branch coverage | `74.84% (15131/20219)` |
| Functional coverage | `100.00% (33/33 bins)` |
| Valid controller cross coverage | `100.00% (169/169 bins)` |

The controller matrix contains 169 architecturally valid combinations across
GEMM, GEMV, vector operations, Conv2D, direct and descriptor modes, output
formats, post-processing features, tile boundaries, and software-visible error
paths. Meaningless `INT32 + requantization` combinations and the impossible
direct-mode descriptor-ABI error are not included in that denominator.

## Why The Denominator Changed

The change from roughly 143,000 old non-memory records to 817 canonical logical
branch outcomes did not remove RTL behavior or delete tests. It changed what is
being counted:

- per-bit toggle records are no longer counted as branches;
- duplicate branches from independent testbench hierarchies are removed from
  the canonical denominator;
- expression and FSM branch outcomes remain counted;
- legal direct, descriptor, GEMM, GEMV, vector, Conv2D, and error combinations
  are exercised in one top-level harness.

Consequently, `26.32%` and `92.17%` are not before-and-after scores for the same
metric. The former was a mixed coverage result; the latter is the corrected
logical branch coverage result.

## Interpreting The Merged Result

The `74.68%` merged multi-binary branch result is still useful. It answers:

> Does every independently compiled directed testbench exercise every branch
> in its own copy of the RTL?

That is stricter than overall design closure. A GEMM testbench is not expected
to exercise every Conv2D or descriptor branch, so duplicated uncovered branches
remain in the merged denominator. This metric identifies narrow testbenches but
should not replace the canonical top-level score.

## Remaining Branch Gaps

The canonical controller is at `95.66%`. Its remaining uncovered logical branch
outcomes are concentrated in:

- injected DMA or im2col memory-error exits;
- exact ready/valid stall interleavings;
- assertion-failure outcomes that must remain false during legal operation;
- defensive illegal-state recovery paths.

Normal legal operation and all defined controller feature crosses are covered.
Remaining defensive branches should be closed with fault injection, formal
proof, or documented waivers rather than impossible software commands.

## Reporting Rule

Use this wording in the project report and presentation:

> TinyGPU achieves 92.17% canonical top-level RTL logical branch coverage and
> 95.66% command-controller logical branch coverage. All 33 functional bins and
> all 169 architecturally valid controller crosses are covered. The secondary
> merged multi-binary branch score is 74.68% because independently compiled
> directed benches duplicate RTL branch points.

Do not present the historical `26%` number as the current branch coverage and
do not describe the move from `26%` to `92.17%` as test stimulus alone. The
increase primarily comes from correcting the coverage definition and hierarchy;
additional directed controller tests then close the valid functional crosses.

## Commands And Artifacts

Run the complete coverage flow with:

```sh
make coverage-report
```

Important outputs:

- `build/cov/diff.dat`: canonical top-level coverage database;
- `build/coverage_top.info`: canonical LCOV information;
- `build/coverage.info`: merged multi-binary LCOV information;
- `build/coverage/`: annotated merged RTL sources;
- `verification/branch_waivers.txt`: documented unreachable branch waivers.

