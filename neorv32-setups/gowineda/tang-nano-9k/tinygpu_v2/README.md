# TinyGPU-ML Integration for Tang Nano 9K

## Project Status

### ✅ Completed Stages

1. **Unit Testing** — All individual RTL modules verified
2. **SoC Integration** — TinyGPU-ML integrated with NEORV32 RISC-V processor
3. **FPGA Synthesis** — ✅ Passed (Gowin EDA)
4. **Place & Route** — ✅ Passed — Bitstream generated successfully (May 24, 2026)

---

## Hardware Configuration

### Target Platform
- **Board**: Sipeed Tang Nano 9K
- **FPGA**: Gowin GW1NR-LV9QN88PC6/I5 (GW1NR-9C)
- **Total Logic Resources**: 8,640 LUTs
- **System Clock**: 27 MHz

---

## TinyGPU Architecture (`tinygpu_pkg.sv`)

Optimized for minimal resource usage on the GW1NR-9 FPGA:

```systemverilog
parameter int TILE_M      = 1;    // 1x1 PE array
parameter int TILE_N      = 1;
parameter int TILE_K      = 2;    // K-dimension tile depth

parameter int NUM_PES     = TILE_M * TILE_N;  // = 1 PE
parameter int SPM_A_BYTES = 32;   // Scratchpad A (was 64)
parameter int SPM_B_BYTES = 32;   // Scratchpad B (was 64)
parameter int SPM_C_BYTES = 16;   // Scratchpad C (was 32)
parameter int MAX_BURST   = 2;    // DMA burst length (was 4)
```

### Parameter Reduction Rationale

| Parameter | Original | Final | Reason |
|-----------|----------|-------|--------|
| `TILE_M × TILE_N` | 4×4 | 1×1 | 16× fewer PEs to fit device |
| `TILE_K` | 16 | 2 | Reduce datapath depth |
| `SPM_A/B_BYTES` | 64 B | 32 B | Cut BRAM usage by 50% |
| `SPM_C_BYTES` | 32 B | 16 B | Halve output scratchpad |
| `MAX_BURST` | 4 | 2 | Reduce bus logic width |

---

## NEORV32 Configuration (`neorv32_test_setup_bootloader.vhd`)

### System Parameters
```vhdl
CLOCK_FREQUENCY : natural := 27000000;  -- 27 MHz
IMEM_SIZE       : natural := 8*1024;    -- 8 KB (reduced from 16 KB)
DMEM_SIZE       : natural := 4*1024;    -- 4 KB (reduced from 8 KB)
```

### RISC-V ISA Extensions
All optional extensions disabled to save LUTs:
```vhdl
RISCV_ISA_C      => false,  -- Compressed ISA: disabled (-~1000 LUTs)
RISCV_ISA_M      => false,  -- Multiply/divide: disabled (-~1500 LUTs)
RISCV_ISA_Zicntr => false,  -- Base counters: disabled (-~200 LUTs)
```

### Memory & Peripherals
```vhdl
IMEM_EN          => true,
IMEM_SIZE        => 8*1024,
DMEM_EN          => true,
DMEM_SIZE        => 4*1024,
IO_GPIO_NUM      => 6,
IO_CLINT_EN      => false,   -- Timer disabled (-~400 LUTs)
IO_UART0_EN      => true,    -- UART kept (needed for bootloader)
IO_TINYGPU_EN    => true,    -- TinyGPU accelerator enabled
```

---

## Constraint Files

### Physical Constraints (`tang-nano-9k_test_setup_bootloader.cst`)
Pin assignments for Tang Nano 9K:
- `clk_i` → pin 52 (27 MHz oscillator)
- `rstn_i` → pin 3
- `uart0_txd_o` → pin 17
- `uart0_rxd_i` → pin 18
- `gpio_o[0:5]` → pins 10–16

### Timing Constraints (`tang-nano-9k.sdc`) ⚠️ Required for P&R
A separate SDC file is required for Place & Route to correctly identify the system clock. Without it, Gowin P&R emits warning `TA1132` and may fail routing.

```tcl
create_clock -name clk_i -period 37.037 -waveform {0 18.518} [get_ports {clk_i}]
```

**Location**: `src/tang-nano-9k.sdc`

Add to Gowin project via TCL console:
```tcl
add_file -type sdc src/tang-nano-9k.sdc
save_project
```

**⚠️ Important**: The `.cst` file only handles physical pin assignments. Clock timing constraints **must** be in a separate `.sdc` file. Attempting to add `create_clock` to the `.cst` file will cause syntax error `CT2000`.

---

## Build Instructions

### Prerequisites
- Gowin EDA v1.9.9+ with SystemVerilog-2017 support enabled

### Full Synthesis + P&R Flow
```tcl
source create_project.tcl
add_file -type sdc src/tang-nano-9k.sdc
run syn
run pnr
```

### Output Files
| File | Description |
|------|-------------|
| `impl/pnr/tang-nano-9k.fs` | ✅ Final bitstream (program this) |
| `impl/pnr/tang-nano-9k.rpt.html` | Resource utilization report |
| `impl/pnr/tang-nano-9k.tr.html` | Timing analysis report |
| `impl/pnr/tang-nano-9k.power.html` | Power analysis report |
| `impl/gwsynthesis/tang-nano-9k_syn.rpt.html` | Synthesis report |

### Programming the FPGA
```bash
# Gowin Programmer (GUI): load tang-nano-9k.fs
# openFPGALoader (Linux):
openFPGALoader -b tangnano9k impl/pnr/tang-nano-9k.fs
```

---

## Resource Utilization (Final)

### Synthesis Report (Gowin EDA)

| Resource | Used | Available | Utilization |
|----------|------|-----------|-------------|
| **Logic** | 7,660 | 8,640 | **89%** |
| ├─ LUTs | 6,511 | — | — |
| ├─ ALUs | 1,095 | — | — |
| └─ RAM16s | 9 | — | — |
| **Registers** | 2,808 | 6,693 | **42%** |
| ├─ Flip-Flops | 2,808 | 6,693 | 42% |
| └─ Latches | 0 | 6,693 | 0% |
| **BSRAM** | 12 | 26 | **47%** |

### Component Breakdown (Estimated)

| Component | LUTs (approx.) | Notes |
|-----------|----------------|-------|
| NEORV32 CPU core (RV32I) | ~3,500 | Base processor without M/C extensions |
| Bootloader ROM | ~800 | On-chip boot memory |
| IMEM (8 KB) + DMEM (4 KB) | ~600 | Internal memories |
| UART + GPIO | ~300 | Serial communication + 6 GPIO pins |
| **TinyGPU 1×1 PE** | ~3,200 | Single processing element + controller |
| Interconnect & glue logic | ~300 | Bus arbitration and wiring |

**Key Observations**:
- Logic utilization at **89%** — close to device capacity
- 12 Block RAMs used for scratchpads and internal memories
- No latches synthesized (all sequential logic uses flip-flops)
- Healthy register headroom at 42% utilization

---

## Known Issues & Workarounds

### 1. SystemVerilog Package Import
**Problem**: `` `include "tinygpu_pkg.svh" `` caused EX3444 (`logic` unknown type) and EX3209 (root scope) errors in Gowin.

**Fix**: Renamed `.svh` to `.sv`, wrapped content in `package tinygpu_pkg; ... endpackage`, and changed all modules to use:
```systemverilog
import tinygpu_pkg::*;
```

### 2. P&R Failure — 93 LUTs Unplaced
**Problem**: Synthesis reported ~8,600 LUTs (passing), but physical placer could not fit all cells.

**Fix**: Reduced scratchpad sizes (`SPM_A/B` 64→32, `SPM_C` 32→16) and `MAX_BURST` (4→2), saving ~150 additional LUTs.

### 3. Missing Clock Constraint Warning (`TA1132`)
**Problem**: Gowin P&R warned `clk_i was determined to be a clock but was not created`.

**Fix**: Added `tang-nano-9k.sdc` with explicit `create_clock` constraint. The `.cst` file does **not** support SDC syntax — timing constraints must be in a separate `.sdc` file.

### 4. Unused Signal Warning (`EX1998`)
**Warning**: `Net 'tinygpu_mem_req.meta[4]' does not have a driver`

**Status**: Benign — this is an unconnected bus metadata field that gets optimized away. No action required.

---

## Next Steps

### Hardware Verification
- [ ] Program FPGA with generated bitstream
- [ ] Verify NEORV32 bootloader communication over UART (19200 baud)
- [ ] Run basic TinyGPU register read/write tests via memory-mapped interface

### Software
- [ ] Write NEORV32 C driver for TinyGPU registers
- [ ] Implement simple 1×1 GEMM test case
- [ ] Verify INT8 MAC result correctness

### Scaling (Future Work)
- [ ] Test on Tang Primer 25K (25K LUTs) to enable 2×2 or 4×4 PE array
- [ ] Re-enable RISC-V M-extension once resource budget allows
- [ ] Add external SDRAM DMA support for larger matrices

---

## File Structure
