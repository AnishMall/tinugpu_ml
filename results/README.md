# Final Simulation And Coverage Results

This folder contains the latest project evidence generated from the current RTL
tree.

## Simulation Transcripts

| File | Source command | Contents |
|---|---|---|
| `icarus_regression.log` | `make test` | Full Icarus directed regression transcript. |
| `verilator_lint.log` | `make lint` | Verilator lint transcript. |
| `rtl_demo.log` | `make demo-rtl` | Deterministic RTL demo output for GEMM, descriptor GEMM, vector add, Conv2D, and counters. |
| `python_golden_demo.log` | `make demo-golden` | Python golden-reference demo output using the same demo vectors. |
| `sw_mmio_demo.log` | `make demo-sw` | NEORV32 firmware/MMIO regression result using the behavioral TinyGPU model. |

## Coverage Artifacts

| File | Contents |
|---|---|
| `coverage_report.log` | Human-readable coverage summary. |
| `coverage_top.info` | Canonical top-level LCOV information from the Verilator differential run. |
| `coverage.info` | Merged multi-binary LCOV information from all Verilator coverage runs. |
| `coverage_annotated/` | Verilator annotated RTL source files showing covered and uncovered lines. |

## Waveform Artifact

| File | Contents |
|---|---|
| `tinygpu_top_demo.vcd` | Icarus RTL demo waveform with fixed checkpoint signals for review. |

## Tang Primer 25K Implementation Reports

The latest Tang Primer 25K synthesis, PnR, timing, power, bitstream, and parser
outputs are tracked under:

```text
SoC Integration/gowineda/tang-primer-25k/tinygpu_v5/impl/
```

The presentation-ready area, timing, power, and verification summary is in
[`../Metrics_Summary.md`](../Metrics_Summary.md).

## Current Headline Metrics

| Metric | Result |
|---|---:|
| Icarus directed regression | `32 / 32` benches pass |
| Verilator differential regression | `1000 / 1000` jobs pass |
| Canonical top RTL line coverage | `96.45% (1740 / 1804)` |
| Canonical top RTL logical branch coverage | `92.17% (753 / 817)` |
| Canonical controller logical branch coverage | `95.66% (353 / 369)` |
| Merged multi-binary RTL branch coverage | `74.68% (15139 / 20271)` |
| Functional coverage | `100.00% (33 / 33 bins)` |
| Valid controller cross coverage | `100.00% (169 / 169 bins)` |
| Software/MMIO regression | `pass=31 fail=0` |
