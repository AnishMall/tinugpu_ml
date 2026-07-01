# TinyGPU-ML SoC Integration — NEORV32 on Tang Primer 25K (GW5A-25)

> **Status:** ✅ Complete — Verilator simulation, Python golden model (cocotb), and full FPGA synthesis + PnR verified  
> **Target Device:** GW5A-LV25MG121NC2/I1 (GW5A-25, Device Version B)  
> **Tool:** Gowin EDA V1.9.12.02 (64-bit)  
> **Project path:** `gowineda/tang-premier-25k/tinygpu_v5/`

***

## Table of Contents

1. [Project Overview](#1-project-overview)
2. [Achievement Summary](#2-achievement-summary)
3. [Repository Structure](#3-repository-structure)
4. [Pre-Synthesis Checklist](#4-pre-synthesis-checklist)
5. [Gowin EDA Device Configuration](#5-gowin-eda-device-configuration)
6. [Project Setup — TCL Commands](#6-project-setup--tcl-commands)
7. [Synthesis Language Settings](#7-synthesis-language-settings)
8. [Clock and Timing Configuration](#8-clock-and-timing-configuration)
9. [TinyGPU Enable Configuration](#9-tinygpu-enable-configuration)
10. [Running Synthesis and PnR](#10-running-synthesis-and-pnr)
11. [Post-PnR Verification](#11-post-pnr-verification)
12. [Power Analysis Results](#12-power-analysis-results)
13. [Timing Analysis Results](#13-timing-analysis-results)
14. [Verilator Simulation Results](#14-verilator-simulation-results)
15. [Python Golden Model — cocotb Results](#15-python-golden-model--cocotb-results)

***

## 1. Project Overview

This project integrates the **TinyGPU-ML** hardware accelerator into the **NEORV32 RISC-V SoC** as a memory-mapped custom IO peripheral. TinyGPU-ML implements a `4x4x16` tiled INT8 compute engine: a 4×4 systolic processing-element (PE) array performs signed INT8 multiply-accumulate operations into INT32, with shared epilogue, vector, DMA, and hardware Conv2D support.

The integration is wrapped in a VHDL bridge (`neorv32_tinygpu_wrapper.vhd`) that connects NEORV32's internal IO bus to TinyGPU's 32-bit register interface. The complete SoC is synthesised and placed-and-routed on the **Gowin GW5A-25** device mounted on the **Tang Primer 25K** development board.

***

## 2. Achievement Summary

| Milestone | Status |
|-----------|--------|
| TinyGPU-ML RTL design (SystemVerilog) | ✅ Complete |
| Verilator simulation — 18/18 tests | ✅ Passed |
| Python golden model verification (cocotb) | ✅ Passed — VEC_ADD, GEMM, RELU, im2col |
| NEORV32 VHDL wrapper integration | ✅ Complete |
| Gowin EDA Synthesis — 0 errors | ✅ Clean |
| Gowin PnR — 0 setup / 0 hold violations | ✅ Clean |
| Bitstream generated | ✅ `tang-premier-25k.fs` |
| Timing: Fmax 47.46 MHz @ 27 MHz constraint | ✅ 75% headroom |
| Power: 67.1 mW total, Tj = 27.3 °C | ✅ Well within limits |

***

## 3. Repository Structure

```
neorv32-setups/
├── gowineda/
│   └── tang-premier-25k/
│       └── tinygpu_v5/                  ← active project
│           ├── src/
│           │   ├── neorv32_tinygpu_wrapper.vhd   ← VHDL bridge (NEORV32 IO bus ↔ TinyGPU)
│           │   ├── neorv32_test_setup_bootloader.vhd
│           │   ├── neorv32_top.vhd
│           │   ├── neorv32_package.vhd
│           │   ├── neorv32_prim.vhd             ← fixed SPRAM read/write process
│           │   ├── tang-premier-25k_test_setup_bootloader.cst
│           │   └── tinygpu_20k.sdc              ← 27 MHz timing constraint
│           ├── impl/
│           │   └── pnr/
│           │       ├── tang-premier-25k.fs          ← bitstream (program this)
│           │       ├── tang-premier-25k.rpt.html    ← PnR resource report
│           │       ├── tang-premier-25k_tr_content.html  ← full timing paths
│           │       ├── tang-premier-25k.power.html  ← power analysis
│           │       └── tang-premier-25k.rpt.txt     ← plain text full report
│           └── tinygpu_v5_log.txt               ← complete synthesis + PnR log
│
└── neorv32/
    └── rtl/
        └── core/
            └── tinygpu_ml/                      ← TinyGPU-ML SystemVerilog source
                ├── tinygpu_pkg.sv
                ├── tinygpu_top.sv
                ├── tinygpu_cmd_ctrl.sv
                ├── tinygpu_regs.sv
                ├── tinygpu_spm.sv
                ├── tinygpu_mem_arbiter.sv
                ├── tinygpu_im2col_loader.sv
                ├── tinygpu_dma.sv
                ├── tinygpu_array4x4.sv
                ├── tinygpu_pe.sv
                ├── tinygpu_epilogue_shared.sv
                ├── tinygpu_epilogue.sv
                ├── tinygpu_vec_alu.sv
                ├── tinygpu_shared_mul.sv
                └── tinygpu_counters.sv
```

***

## 4. Pre-Synthesis Checklist

Before running synthesis, teammates **must** verify the following. Skipping any of these steps is the most common cause of PA2122, CT1113, or missing hierarchy errors.

### 4.1 Clock Frequency — Three Places to Check

All three must match. The project uses **27 MHz**.

- [ ] **`neorv32_top.vhd`** — generic default:
  ```vhdl
  CLOCK_FREQUENCY : natural := 27000000;
  ```

- [ ] **`neorv32_test_setup_bootloader.vhd`** — top-level port map:
  ```vhdl
  CLOCK_FREQUENCY : natural := 27000000;
  ```

- [ ] **`tinygpu_20k.sdc`** — timing constraint file (must be in `src/`):
  ```tcl
  create_clock -name clk_i -period 37.037 -waveform {0 18.518} [get_ports {clk_i}]
  ```

### 4.2 TinyGPU Enable — Two Places to Check

- [ ] **`neorv32_test_setup_bootloader.vhd`** — IO peripheral enable:
  ```vhdl
  IO_TINYGPU_EN => true
  ```

- [ ] **`neorv32_top.vhd`** — generic declaration:
  ```vhdl
  IO_TINYGPU_EN : boolean := true
  ```

### 4.3 SDC File Location

- [ ] Confirm `tinygpu_20k.sdc` is present at:
  ```
  gowineda/tang-premier-25k/tinygpu_v5/src/tinygpu_20k.sdc
  ```
  If missing, PnR will use Gowin's internal default of 100 MHz and show false timing violations.

### 4.4 Physical Constraints File

- [ ] Confirm `.cst` uses **MG121 alphanumeric pad names** (e.g., `A1`, `B3`), not numeric QN88 pin numbers. Using QN88 numeric assignments on GW5A-25 causes CT1113 pad location errors.

### 4.5 SPRAM Fix in `neorv32_prim.vhd`

- [ ] Confirm `neorv32_prim_spram` memory process uses **mutually exclusive read/write** (no same-cycle read+write on the same port). This resolves PA2122 `WRITE_MODE=2'b10` errors on all SPRAM instances.

### 4.6 Hierarchy Verification After Synthesis

After synthesis completes, open **Hierarchy** tab in Gowin Designer and verify the following tree is visible:

```
neorv32_test_setup_bootloader
  └── neorv32_top
        └── neorv32_tinygpu_wrapper
              └── tinygpu_top
                    ├── tinygpu_regs
                    ├── tinygpu_cmd_ctrl
                    ├── tinygpu_spm
                    ├── tinygpu_mem_arbiter
                    ├── tinygpu_im2col_loader
                    ├── tinygpu_dma
                    ├── tinygpu_array4x4
                    │     └── tinygpu_pe
                    ├── tinygpu_epilogue_shared
                    │     ├── tinygpu_vec_alu
                    │     └── tinygpu_shared_mul
                    └── tinygpu_counters
```

If `tinygpu_top` and its children are missing, check that `IO_TINYGPU_EN => true` is set in both files listed in §4.2.

***

## 5. Gowin EDA Device Configuration

### 5.1 Device Setup

In Gowin Designer: **Project → Configuration → Device**

| Setting | Value |
|---------|-------|
| Device Family | GW5A |
| Part Number | **GW5A-LV25MG121NC2/I1** |
| Device | GW5A-25 |
| Device Version | **B** |
| Package | MG121 |
| Speed Grade | C2/I1 |

> ⚠️ Device Version **must be B**. Version A uses different timing models and will produce incorrect timing reports.

### 5.2 Place & Route Configuration

In Gowin Designer: **Project → Configuration → Place & Route**

| Setting | Value |
|---------|-------|
| **Dual-Purpose Pin** | Enable **"Use SSPI as regular IO"** |

This setting must be enabled on GW5A-25. Without it, the SSPI pins cannot be used as user IO and pin assignment will fail or produce CT1113 errors.

***

## 6. Project Setup — TCL Commands

Open the Gowin EDA Tcl console and run the following sequence to create and configure the project from scratch.

### Step 1 — Navigate and create project

```tcl
cd C:/Users/Dell/Desktop/neorv32-setups/gowineda/tang-premier-25k

set nrv_project_name tinygpu_v5
set nrv_project_creation_path .
source create_project.tcl
```

### Step 2 — After the new project window opens

```tcl
set nrv_skip_creation true
source ../create_project.tcl
unset nrv_skip_creation
```

### Step 3 — Add TinyGPU-ML SystemVerilog source files

```tcl
set SV_PATH {C:/Users/Dell/Desktop/neorv32-setups/neorv32/rtl/core/tinygpu_ml}

add_file -type verilog "$SV_PATH/tinygpu_pkg.sv"
add_file -type verilog "$SV_PATH/tinygpu_shared_mul.sv"
add_file -type verilog "$SV_PATH/tinygpu_pe.sv"
add_file -type verilog "$SV_PATH/tinygpu_array4x4.sv"
add_file -type verilog "$SV_PATH/tinygpu_spm.sv"
add_file -type verilog "$SV_PATH/tinygpu_mem_arbiter.sv"
add_file -type verilog "$SV_PATH/tinygpu_im2col_loader.sv"
add_file -type verilog "$SV_PATH/tinygpu_epilogue_shared.sv"
add_file -type verilog "$SV_PATH/tinygpu_epilogue.sv"
add_file -type verilog "$SV_PATH/tinygpu_dma.sv"
add_file -type verilog "$SV_PATH/tinygpu_vec_alu.sv"
add_file -type verilog "$SV_PATH/tinygpu_cmd_ctrl.sv"
add_file -type verilog "$SV_PATH/tinygpu_counters.sv"
add_file -type verilog "$SV_PATH/tinygpu_regs.sv"
add_file -type verilog "$SV_PATH/tinygpu_top.sv"
```

### Step 4 — Add the SDC timing constraint

```tcl
add_file -type sdc "./src/tinygpu_20k.sdc"
```

### Step 5 — Set SystemVerilog include path

```tcl
set_option -include_path {C:/Users/Dell/Desktop/neorv32-setups/neorv32/rtl/core/tinygpu_ml}
```

> ⚠️ This include path is required so GowinSynthesis can resolve `tinygpu_pkg.sv` package imports across all `.sv` files. Without it, you will see `EX2582` package parameter warnings or elaboration failures.

***

## 7. Synthesis Language Settings

In Gowin Designer: **Project → Configuration → Synthesize → General**

| Language Setting | Value |
|-----------------|-------|
| **Verilog Language** | **SystemVerilog 2017** |
| **VHDL Language** | **VHDL 1993** |

> ⚠️ The TinyGPU-ML files use SV-2017 constructs (packages, `logic`, `always_ff`, `always_comb`, struct types). Setting Verilog Language to plain Verilog 2001 will cause parse errors.

***

## 8. Clock and Timing Configuration

The Tang Primer 25K board provides a **27 MHz** oscillator on `clk_i`. All timing constraints must be consistent across the three locations below.

### 8.1 `neorv32_top.vhd`

```vhdl
CLOCK_FREQUENCY : natural := 27000000;  -- clock frequency of clk_i in Hz
```

### 8.2 `neorv32_test_setup_bootloader.vhd`

```vhdl
CLOCK_FREQUENCY : natural := 27000000;  -- clock frequency of clk_i in Hz
```

### 8.3 `tinygpu_20k.sdc` (SDC Timing Constraint)

```tcl
create_clock -name clk_i -period 37.037 -waveform {0 18.518} [get_ports {clk_i}]
```

The period of 37.037 ns corresponds to 1/27 MHz = 37.037 ns. The waveform `{0 18.518}` sets rise at 0 ns and fall at the 50% point.

> **Note:** GowinSynthesis does not read the `.sdc` file — it uses an internal default of 100 MHz for its own synthesis timing report. The 100 MHz shown in `gwsynthesis_rpt.html` is **not a violation** — it is GowinSynthesis's default analysis clock. The real timing result is in `impl/pnr/tang-premier-25k_tr_content.html`, which correctly uses 27 MHz from the SDC.

***

## 9. TinyGPU Enable Configuration

TinyGPU-ML is instantiated as an optional IO peripheral inside NEORV32. The enable flag must be set to `true` in two places.

### 9.1 `neorv32_test_setup_bootloader.vhd`

```vhdl
IO_TINYGPU_EN => true   -- enable TinyGPU-ML accelerator
```

### 9.2 `neorv32_top.vhd`

```vhdl
IO_TINYGPU_EN : boolean := true   -- implement TinyGPU-ML accelerator
```

When both are set to `true`, GowinSynthesis will print the following during elaboration (confirming TinyGPU is live in the hierarchy):

```
Switching to Verilog mode to elaborate module 'tinygpu_top'
Compiling module 'tinygpu_top'
Compiling module 'tinygpu_regs'
...
Returning to VHDL mode to continue with elaboration
```

If these lines are absent from the synthesis log, `IO_TINYGPU_EN` is not propagating correctly — recheck both files.

***

## 10. Running Synthesis and PnR

### Run All (TCL Console — Recommended)

Simply run both commands in sequence from the Gowin EDA Tcl console:

```tcl
run_synthesis -force
run_pnr -force
```

Gowin will run synthesis, place & route, timing analysis, bitstream generation, and power analysis automatically. The final bitstream is at `impl/pnr/tang-premier-25k.fs`.

### Programming the FPGA

Open **Gowin Programmer** → select `impl/pnr/tang-premier-25k.fs` → click Program/Configure.

***

## 11. Post-PnR Verification

### 11.1 Hierarchy Check

Open Gowin Designer **Hierarchy** tab. Verify `tinygpu_top` and all child modules appear under `neorv32_tinygpu_wrapper` (see §4.6 for full expected tree).

### 11.2 Timing Verification

Open the following files in `impl/pnr/`:

| File | Purpose |
|------|---------|
| `tang-premier-25k_tr_content.html` | Full timing paths — search for `Slack`, `Fmax` |
| `tang-premier-25k.tr.html` | Short timing summary index |
| `tang-premier-25k.rpt.txt` | Plain text version — searchable in any editor |

Key numbers to confirm:

| Check | Expected | Actual (verified) |
|-------|----------|-------------------|
| Fmax | > 27 MHz | **47.462 MHz** ✅ |
| Setup violations | 0 | **0** ✅ |
| Hold violations | 0 | **0** ✅ |
| Paths analyzed | — | **22,579** |

### 11.3 Power Verification

Open `impl/pnr/tang-premier-25k.power.html` and confirm:

| Check | Limit | Actual (verified) |
|-------|-------|-------------------|
| Total power | < 500 mW | **67.1 mW** ✅ |
| Junction temperature | < 85 °C | **27.3 °C** ✅ |
| Max allowed ambient | > 25 °C | **82.7 °C** ✅ |

### 11.4 Full Build Log

The complete synthesis and PnR log is captured at:

```
gowineda/tang-premier-25k/tinygpu_v5/tinygpu_v5_log.txt
```

Use this file to trace any warnings or errors from a specific build run.

***

## 12. Power Analysis Results

Power analysis was run by Gowin PnR automatically using default 12.5% signal toggle rate.

| Metric | Value |
|--------|-------|
| Total Power | 67.109 mW |
| Quiescent (Static) Power | 53.493 mW |
| Dynamic Power | 13.616 mW |
| Junction Temperature | 27.268 °C |
| Thermal resistance (Theta JA) | 33.800 °C/W |
| Max Allowed Ambient Temperature | 82.732 °C |

### Supply Rail Breakdown

| Rail | Voltage | Dynamic (mA) | Quiescent (mA) | Power (mW) |
|------|---------|-------------|----------------|------------|
| VCC (core) | 0.900V | 14.229 | 30.004 | 39.810 |
| VCCX | 3.300V | 0.123 | 3.000 | 10.305 |
| VCCIO33 (I/O) | 3.300V | 0.123 | 1.027 | 3.795 |
| VCCLDO | 3.300V | 0.000 | 4.000 | 13.200 |

> **Note:** These figures use the 12.5% default toggle rate. For active GEMM inference workloads, dynamic power on `u_cmd_ctrl` and `tinygpu_array4x4` blocks will be higher. Feed `tinygpu_sim.vcd` (from Verilator) into Gowin Power Analyzer for a VCD-annotated estimate of peak active power.

***

## 13. Timing Analysis Results

Timing was analysed by Gowin PnR against the 27 MHz SDC constraint. All results are from `impl/pnr/tang-premier-25k_tr_content.html`.

| Metric | Value |
|--------|-------|
| Clock constraint | 27.000 MHz (37.037 ns) |
| **Actual Fmax** | **47.462 MHz** |
| Timing headroom above 27 MHz | +75% |
| Logic levels on critical path | 21 |
| Setup violated endpoints | **0 / 22,579** |
| Hold violated endpoints | **0 / 22,579** |
| Worst setup slack | **+15.968 ns** |
| Worst hold slack | **+0.180 ns** |
| Delay model (setup) | Slow 0.873V 0°C C2/I1 |
| Delay model (hold) | Fast 0.927V 85°C C2/I1 |

**Critical path:** `u_cmd_ctrl/conv_cfg_q[18]` → `u_cmd_ctrl/dst_m_step_q[3]` (21 logic levels, 21.015 ns data arrival, +15.968 ns slack against 37.037 ns period). This path is entirely within TinyGPU's GEMM address generation logic.

***

## 14. Verilator Simulation Results

Standalone RTL simulation was run using Verilator against the canonical `4x4x16` TinyGPU RTL configuration.

 ```
========================================
 TinyGPU-ML Verilator Simulation
 Array: 4x4 PEs, TILE_K=16, INT8 in, INT32 acc
========================================
[TEST 1] Register read/write      [PASS] SRC0_ADDR == 0xDEADBEEF
[TEST 2] Soft reset               [PASS] STATUS[BUSY]=0, STATUS[READY]=1
[TEST 3] VEC_ADD z[4]             [PASS] {11, 22, 33, 44}
[TEST 4] GEMM C[2][2]             [PASS] [[16,20],[4,4]]
[TEST 5] RELU y[4]                [PASS] {0, 3, 0, 7}
[TEST 6] Performance counters     [PASS] Cycles>0, Active<=Cycles, CMD>0
========================================
 Results: 18 passed, 0 failed
 Simulation time: 367 cycles
 VCD written to: tinygpu_sim.vcd
========================================
```

***

## 15. Python Golden Model — cocotb Results

The Python golden model was developed using **cocotb** to verify TinyGPU-ML RTL behaviour against software-computed reference outputs.

### Operations Verified

| Operation | Test | Status |
|-----------|------|--------|
| `VEC_ADD` | Element-wise INT8 vector addition, 4 elements | ✅ Passed |
| `GEMM` | 2×8 × 8×2 INT8 matrix multiply, INT32 accumulation | ✅ Passed |
| `RELU` | Element-wise max(0, x) on INT8 inputs | ✅ Passed |
| `im2col` convolution | im2col tensor unrolling + GEMM pipeline | ✅ Passed |
| Performance counters | Cycle, active, stall, command count correctness | ✅ Passed |

### Verification Methodology

1. Python reference model computes expected outputs using NumPy
2. cocotb drives stimulus into the RTL via the register interface (simulating how NEORV32 CPU would write commands)
3. RTL outputs are read back over the simulated bus and compared byte-by-byte against reference
4. Mismatches cause immediate test failure with value dump

All operations produce bit-exact match between Python golden model and RTL outputs across all tested input patterns.

***

*Document covers TinyGPU-ML SoC integration as of 24 June 2026 — Gowin EDA V1.9.12.02, NEORV32 + TinyGPU-ML on GW5A-LV25MG121NC2/I1.*
