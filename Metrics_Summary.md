# TinyGPU-ML Project Summary

## 1. Design Snapshot

| Item | Value |
|---|---|
| Accelerator role | INT8 ML inference accelerator integrated as an MMIO peripheral in NEORV32 |
| RTL configuration | `4x4x16` |
| Processing elements | `16` signed INT8 MAC PEs |
| Accumulator width | `INT32` |
| Supported compute flows | GEMM, GEMV, vector ops, ReLU, clamp, requantization, hardware Conv2D |
| Conv2D method | Streaming im2col in RTL, reusing the GEMM datapath |
| SoC target used for routed results | Tang Primer 25K, `GW5A-LV25MG121NC2/I1` |
| Toolchain | Gowin EDA `V1.9.12.02` |

## 2. Physical Implementation Results

| Metric | Result |
|---|---|
| PnR status | Complete |
| Bitstream generation | Complete |
| Placement + routing runtime | `1m 08s` |
| Peak memory during PnR | `901 MB` |
| Clock constraint | `27.000 MHz` |
| Post-route Fmax | `47.462 MHz` |
| Timing margin over target | `+75%` |
| Setup violations | `0` |
| Hold violations | `0` |
| Setup TNS | `0.000` |
| Hold TNS | `0.000` |
| Worst setup slack | `+15.968 ns` |
| Worst hold slack | `+0.180 ns` |
| Paths analyzed | `22,579` |
| Endpoints analyzed | `22,202` |

## 3. Area and Resource Usage

| Resource | Usage | Utilization |
|---|---:|---:|
| Logic | `17,921 / 23,040` | `78%` |
| LUTs | `15,589` | - |
| ALUs | `2,272` | - |
| Registers | `7,099 / 23,280` | `31%` |
| CLS | `10,298 / 11,520` | `90%` |
| BSRAM | `14 / 56` | `25%` |
| DSP | `28 / 28` | `100%` |
| I/O ports | `10 / 86` | `12%` |

### Main RTL Hotspots

| Block | Registers | ALUs | LUTs | DSPs |
|---|---:|---:|---:|---:|
| `u_cmd_ctrl` | `1140` | `610` | `3117` | `7` |
| `u_spm` | `1536` | `0` | `4651` | `0` |
| `u_im2col` | `168` | `142` | `418` | `4` |
| `u_dma` | `178` | `32` | `336` | `0` |
| `u_epilogue` | `119` | `96` | `893` | `0` |
| `u_mem_arbiter` | `0` | `0` | `298` | `0` |
| `u_shared_mul` | `2` | `6` | `4` | `2` |
| `u_regs` | `460` | `0` | `88` | `0` |

## 4. Power and Thermal

| Metric | Result |
|---|---:|
| Total power | `67.109 mW` |
| Quiescent power | `53.493 mW` |
| Dynamic power | `13.616 mW` |
| Junction temperature | `27.268 C` |
| Max allowed ambient temperature | `82.732 C` |

### TinyGPU Hierarchy Power

| Block | Power |
|---|---:|
| `tinygpu_top` | `10.284 mW` |
| `u_cmd_ctrl` | `10.192 mW` |
| `u_shared_mul` | `2.556 mW` |
| `u_im2col` | `2.103 mW` |
| `u_array4x4` | `0.755 mW` |
| `u_spm` | `0.525 mW` |

## 5. Verification Status

| Check | Result |
|---|---|
| Icarus directed regression | `32 / 32` benches available in `make test` |
| Verilator differential regression | `1000 / 1000` deterministic jobs passed |
| Canonical top RTL line coverage | `96.45% (1740 / 1804)` |
| Canonical top RTL logical branch coverage | `92.17% (753 / 817)` |
| Canonical controller logical branch coverage | `95.66% (353 / 369)` |
| Functional coverage | `100.00% (33 / 33 bins)` |
| Valid controller cross coverage | `100.00% (169 / 169 bins)` |
| Formal checks | Focused block-level proofs and assertions in place |

### Verification Scope

- Directed RTL tests cover GEMM, vector ops, DMA, registers, controller, im2col, Conv2D corners, error paths, requantization, edge tiles, INT8 store, bias, ReLU, clamp, and randomized latency.
- Verilator differential testing compares accelerator behavior against software reference models.
- Formal checks cover arbiter selection, counter monotonicity, DMA pointer safety, im2col addressing invariants, register protocol behavior, and bounded controller progress.

## 6. RTL Demo Performance Counters

Measured with the real SystemVerilog RTL using:

```bash
make demo-rtl
```

Result: `tb_tinygpu_top_demo_tb PASS`, with waveform output at
`build/tinygpu_top_demo.vcd`.

| Kernel | Output shown | Work reference | Cycles | Active | Stalls | Ops/cycle | Stall rate |
|---|---|---:|---:|---:|---:|---:|---:|
| Direct GEMM | `[[19,22],[43,50]]` | 8 MACs | `124` | `2` | `65` | `0.064` | `52%` |
| Descriptor GEMM | `[[19,22],[43,50]]` | 8 MACs | `194` | `2` | `135` | `0.041` | `69%` |
| Vector add | `{6,4,-4,12}` | 4 adds | `61` | `8` | `47` | `0.065` | `77%` |
| Conv2D `3x3` | rows `{1,2,3}`, `{4,5,6}`, `{7,8,9}` | 81 scalar mul/add ops | `888` | `27` | `695` | `0.091` | `78%` |

## 7. Firmware Baseline Cycle Counts

Measured in the NEORV32 GHDL software/MMIO regression using pure-C reference
kernels timed with `mcycle`, then compared with TinyGPU behavioral integration
model counters.

| Kernel | CPU-only cycles | TinyGPU model cycles | Speedup |
|---|---:|---:|---:|
| Vector add, 4 elements | `239` | `132` | `1.81x` |
| GEMM `2x2x8` | `2,839` | `1,079` | `2.63x` |
| Conv2D `3x3`, center kernel | `7,308` | `2,226` | `3.28x` |

Regression result:

```text
[TB:TGPU] Software integration result: pass=31 fail=0
```

These values are useful for the software-integration speedup story. The
standalone RTL demo counters remain the source for real SystemVerilog
microarchitectural behavior.
