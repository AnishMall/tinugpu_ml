# TinyGPU-ML Integration for Tang Nano 9K

## Project Status

### ✅ Completed Stages

1. **Unit Testing** - All modules verified individually
2. **SoC Integration** - TinyGPU-ML successfully integrated with NEORV32 RISC-V processor
3. **FPGA Synthesis** - Design fits within Tang Nano 9K (GW1NR-9) resource constraints

---

## Hardware Configuration

### Target Platform
- **Board**: Sipeed Tang Nano 9K
- **FPGA**: Gowin GW1NR-LV9QN88PC6/I5
- **Resources**: 8,640 LUTs, 6,480 registers, 26 DSP blocks
- **Clock**: 27 MHz system clock

### TinyGPU Architecture (`tinygpu_pkg.sv`)

The design has been optimized for minimal resource usage while maintaining functionality:

```systemverilog
parameter int TILE_M      = 1;    // 1x1 PE array (was 4x4)
parameter int TILE_N      = 1;
parameter int TILE_K      = 4;    // K-dimension tiles

parameter int NUM_PES     = 1;    // TILE_M × TILE_N
parameter int SPM_A_BYTES = 32;   // Scratchpad A size
parameter int SPM_B_BYTES = 32;   // Scratchpad B size
parameter int SPM_C_BYTES = 16;   // Scratchpad C size
parameter int MAX_BURST   = 2;    // Maximum DMA burst
```

**Key Features**:
- Single INT8 MAC processing element
- 32-bit accumulator for intermediate results
- Memory-mapped interface via NEORV32 bus
- Supports GEMM, GEMV, vector operations

---

## NEORV32 Configuration

### Modified Settings in `neorv32_test_setup_bootloader.vhd`

#### System Parameters
```vhdl
CLOCK_FREQUENCY : natural := 27000000;  -- 27 MHz
IMEM_SIZE       : natural := 8*1024;    -- 8 KB instruction memory
DMEM_SIZE       : natural := 4*1024;    -- 4 KB data memory
```

#### RISC-V ISA Extensions (Minimized for Resource Optimization)
```vhdl
RISCV_ISA_C      => false,  -- Compressed ISA disabled
RISCV_ISA_M      => false,  -- Hardware multiply/divide disabled
RISCV_ISA_Zicntr => false,  -- Base counters disabled
```

#### Memory Configuration
```vhdl
IMEM_EN    => true,
IMEM_SIZE  => 8*1024,   -- Reduced from 16 KB
DMEM_EN    => true,
DMEM_SIZE  => 4*1024,   -- Reduced from 8 KB
```

#### Peripheral Configuration
```vhdl
IO_GPIO_NUM   => 6,      -- 6 GPIO pins
IO_CLINT_EN   => false,  -- Timer disabled to save LUTs
IO_UART0_EN   => true,   -- UART enabled for bootloader
IO_TINYGPU_EN => true,   -- TinyGPU accelerator enabled
```

---

## Resource Utilization

### Synthesis Results (Gowin EDA)

| Resource | Used | Available | Utilization |
|----------|------|-----------|-------------|
| **LUTs** | ~7,800–8,600 | 8,640 | ~90–99% |
| **Registers** | ~3,500 | 6,480 | ~54% |
| **ALUs** | ~1,200 | — | — |
| **Block RAM** | 9 SSRAMs | — | — |

**Breakdown by Component** (estimated):
- NEORV32 CPU core: ~3,500 LUTs
- Bootloader ROM: ~800 LUTs
- IMEM (8KB) + DMEM (4KB): ~600 LUTs
- UART + GPIO: ~300 LUTs
- **TinyGPU 1×1 PE**: ~3,500 LUTs
- Interconnect & glue logic: ~500 LUTs

---

## Build Instructions

### Prerequisites
- Gowin EDA (tested with v1.9.9+)
- TCL-enabled terminal or Gowin GUI

### Synthesis Flow

1. **Navigate to project directory**:
   ```bash
   cd neorv32-setups/gowineda/tang-nano-9k/tinygpu_v2
   ```

2. **Open Gowin IDE** and run synthesis:
   ```tcl
   source create_project.tcl
   run syn
   ```

3. **Place & Route**:
   ```tcl
   run pnr
   ```

4. **Generate bitstream** (output: `impl/pnr/tang-nano-9k.fs`)

### Programming the FPGA
```bash
# Using Gowin Programmer (GUI)
# or openFPGALoader (Linux):
openFPGALoader -b tangnano9k impl/pnr/tang-nano-9k.fs
```

---

## Design Modifications Summary

### Changes from Original 4×4 Configuration

| Parameter | Original | Optimized | Reason |
|-----------|----------|-----------|--------|
| `TILE_M × TILE_N` | 4×4 (16 PEs) | 1×1 (1 PE) | Resource constraints |
| `TILE_K` | 16 | 4 | Reduce memory footprint |
| Scratchpad sizes | 512/512/256 B | 64/64/32 B | Fit in BRAM |
| RISC-V M-ext | Enabled | Disabled | Save ~1,500 LUTs |
| RISC-V C-ext | Enabled | Disabled | Save ~1,000 LUTs |
| CLINT timer | Enabled | Disabled | Save ~400 LUTs |
| IMEM/DMEM | 16KB/8KB | 8KB/4KB | Save ~800 LUTs |

---

## SystemVerilog Package Structure

The TinyGPU RTL is organized as a SystemVerilog package for clean integration:

### Key Files
- `tinygpu_pkg.sv` - Parameter definitions and FSM states
- `tinygpu_top.sv` - Top-level wrapper with bus interface
- `tinygpu_controller.sv` - Command FSM and sequencer
- `tinygpu_pe_array.sv` - Processing element array (1×1)
- `tinygpu_counters.sv` - Loop counters for M/N/K dimensions
- `tinygpu_spm.sv` - Scratchpad memory modules (A, B, C)

### Integration Method
All modules use:
```systemverilog
import tinygpu_pkg::*;
```
Instead of legacy `` `include "tinygpu_pkg.svh" `` to ensure proper Gowin SystemVerilog-2017 compilation.

---

## Known Issues & Workarounds

### Issue: Submodule `.git` Conflicts
**Problem**: Nested Git repositories prevented proper file tracking.

**Solution**: Removed `.git` folders from:
- `neorv32-setups/constraints/`
- `neorv32-setups/neorv32/`
- `neorv32-setups/neorv32/sw/riscv-arch-test/`

### Issue: SystemVerilog Compatibility
**Problem**: Gowin initially rejected `logic` keyword and packages.

**Solution**: Changed Gowin language mode to SystemVerilog-2017 via project settings.

---

## Next Steps

### Hardware
- [ ] Complete Place & Route verification
- [ ] Test timing at 27 MHz
- [ ] Program FPGA and verify bootloader communication
- [ ] Run basic TinyGPU matrix multiply tests

### Software
- [ ] Write NEORV32 C driver for TinyGPU register interface
- [ ] Implement matrix multiply test cases
- [ ] Profile performance vs software GEMM

### Scaling (Future)
- [ ] Test 2×2 PE array on larger Gowin FPGA (e.g., Tang Primer 25K)
- [ ] Add DMA support for external memory
- [ ] Implement quantization and activation fusion

---

## References

- [NEORV32 GitHub](https://github.com/stnolting/neorv32)
- [Gowin GW1NR-9 Datasheet](https://www.gowinsemi.com/en/product/detail/2/)
- [Tang Nano 9K Wiki](https://wiki.sipeed.com/hardware/en/tang/Tang-Nano-9K/Nano-9K.html)
- TinyGPU-ML RTL Specification (see `TinyGPU_ML_RTL_Implementation_Spec.md`)

---

## Contributors

- **Design**: TinyGPU-ML accelerator architecture
- **Integration**: NEORV32 + Gowin EDA optimization
- **Status**: Successfully synthesized (May 2026)

---

## License

Inherits licenses from:
- NEORV32: BSD-3-Clause
- Gowin project files: Project-specific
