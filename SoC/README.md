# TinyGPU-ML NEORV32 SoC Integration

This folder contains the files needed to integrate TinyGPU-ML into the NEORV32 RISC-V SoC.

## Files

### VHDL Files (NEORV32 Integration)
- **neorv32_top.vhd** - Modified NEORV32 SoC top-level with TinyGPU bus arbiter
- **neorv32_tinygpu.vhd** - VHDL wrapper that connects TinyGPU to NEORV32 IO bus

### SystemVerilog RTL (TinyGPU Core)
- **tinygpu_ml/** - Complete TinyGPU-ML RTL implementation
  - tinygpu_top.sv - Top-level module
  - tinygpu_pkg.sv - Package with parameters and opcodes
  - tinygpu_regs.sv - MMIO register file
  - tinygpu_cmd_ctrl.sv - Command controller FSM
  - tinygpu_dma.sv - DMA engine
  - tinygpu_spm.sv - Scratchpad memory
  - tinygpu_array4x4.sv - 4×4 MAC array
  - tinygpu_pe.sv - Processing element
  - tinygpu_epilogue.sv - Bias, ReLU, requantization
  - tinygpu_vec_alu.sv - Vector ALU
  - tinygpu_counters.sv - Performance counters

## MMIO Register Map

Base Address: **0xFFEE0000**

| Offset | Register | Access | Description |
|--------|----------|--------|-------------|
| 0x00 | CTRL | R/W | Control (START, RESET, IRQ_EN) |
| 0x04 | STATUS | R | Status (BUSY, DONE, ERROR) |
| 0x10 | SRC0ADDR | R/W | Matrix A base address |
| 0x14 | SRC1ADDR | R/W | Matrix B base address |
| 0x1C | DSTADDR | R/W | Output matrix address |
| 0x20 | DIM_M | R/W | M dimension (rows) |
| 0x24 | DIM_N | R/W | N dimension (cols) |
| 0x28 | DIM_K | R/W | K dimension (inner) |

See full register map in `../TinyGPU_ML_RTL_Implementation_Spec.md`

## Integration into NEORV32

### Changes to neorv32_top.vhd:
1. Added `tinygpu_mem_req` / `tinygpu_mem_rsp` bus signals
2. Added `sys2a` intermediate bus signals
3. Modified DMA arbiter to output to `sys2a` instead of `sys2`
4. Added TinyGPU bus arbiter between `sys2a` and `sys2`
5. Connected TinyGPU memory master to bus arbiter

### Bus Hierarchy: 

## How to Use

1. Copy this entire `SoC/` folder into your NEORV32 project at `rtl/core/`
2. Enable TinyGPU in your design: `IO_TINYGPU_EN => true`
3. Synthesize with your FPGA tool (Vivado/Quartus/Gowin/etc.)
4. Program registers at 0xFFEE0000 from software

## Tested Configuration

- **FPGA**: Sipeed Tang Nano 9K (Gowin GW1NR-9C)
- **Clock**: 27 MHz
- **Tool**: Gowin EDA v1.9.12.02
- **Status**: ✅ Synthesis, Place & Route, Bitstream generation successful
