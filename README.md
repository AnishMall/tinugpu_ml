# TinyGPU-ML NEORV32 SoC Integration

This folder contains the files needed to integrate TinyGPU-ML into the NEORV32 RISC-V SoC.

## Files

### VHDL Files (NEORV32 Integration)
- **neorv32_top.vhd** - Modified NEORV32 SoC top-level with TinyGPU bus arbiter
- **tinygpu_ml/tinygpu_regs.vhd** - Mixed-language VHDL wrapper that instantiates the real SystemVerilog `tinygpu_top`
- **neorv32_tinygpu.vhd** - legacy stub example, not the main integration path

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
CPU + DMA → sys2a → TinyGPU arbiter → sys2 → Memory
↑
TinyGPU DMA

## How to Use

1. Copy this entire `SoC/` folder into your NEORV32 project.
2. Add `neorv32_top.vhd`, `tinygpu_ml/tinygpu_regs.vhd`, and every `tinygpu_ml/*.sv` file to the synthesis project explicitly.
   You can use `tinygpu_ml/files.f` as the source manifest for the SystemVerilog side.
3. Enable TinyGPU in your design: `IO_TINYGPU_EN => true`
4. Synthesize with mixed-language support enabled in your FPGA tool.
5. Program registers at 0xFFEE0000 from software

## Important Integration Note

The SoC integration uses the uniquely named VHDL wrapper `neorv32_tinygpu_wrapper`, which then instantiates the real SystemVerilog `tinygpu_top`.
Do not rely on the legacy `neorv32_tinygpu.vhd` stub for the actual accelerator path.

## Tested Configuration

- **FPGA**: Sipeed Tang Nano 9K (Gowin GW1NR-9C)
- **Clock**: 27 MHz
- **Tool**: Gowin EDA v1.9.12.02
- **Status**: ✅ Synthesis, Place & Route, Bitstream generation successful

## Timing Note

The local `neorv32_top.vhd` copy now defaults `IMEM_OUTREG_EN` and `DMEM_OUTREG_EN` to `true` to help timing closure on the SoC side.
If your board-level NEORV32 instantiation explicitly overrides these generics, that external generic map still wins.
