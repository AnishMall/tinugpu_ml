# TinyGPU ML RTL

Small SystemVerilog RTL project for a TinyGPU-style ML accelerator with a tiled `int8` GEMM/GEMV datapath, vector ops, MMIO control plane, local scratchpad, DMA path, and directed testbenches.

## What Is In The Repo

- `rtl/`
  - `tinygpu_top.sv`: top-level shell
  - `tinygpu_regs.sv`: MMIO register block
  - `tinygpu_cmd_ctrl.sv`: command/control FSM
  - `tinygpu_dma.sv`: external memory <-> scratchpad transfer engine
  - `tinygpu_spm.sv`: scratchpad memory
  - `tinygpu_array4x4.sv`: 4x4 output-stationary MAC array
  - `tinygpu_pe.sv`: leaf processing element
  - `tinygpu_epilogue.sv`: bias / ReLU / clamp / requant post-processing
  - `tinygpu_vec_alu.sv`: vector execution path
  - `tinygpu_counters.sv`: command counters
  - `tinygpu_pkg.sv`: shared params, opcodes, states, flags
- `tb/`
  - unit, datapath, top-level directed, and randomized-latency testbenches
- `TinyGPU_ML_RTL_Implementation_Spec.md`
  - project implementation spec
- `TinyGPU_SystemVerilog_Hierarchy_and_Controller_Skeleton.md`
  - hierarchy notes and controller skeleton writeup

## Implemented Features

- Direct MMIO command mode
- Descriptor command mode
- `OP_GEMM`
- `OP_GEMV`
- `OP_VEC_ADD`
- `OP_VEC_MUL`
- `OP_RELU`
- `OP_CLAMP`
- `FLAG_BIAS_EN`
- `FLAG_RELU_EN`
- `FLAG_CLAMP_EN`
- `FLAG_REQUANT_EN`
- `FLAG_DST_INT8`
- `FLAG_DST_INT32`
- edge-tile masking on the 4x4 array
- DMA-backed load/store path between external memory and scratchpad
- command/accounting counters

## Descriptor Layout

Descriptor mode uses a fixed 14-word, 32-bit layout:

1. `opcode`
2. `flags`
3. `src0_addr`
4. `src1_addr`
5. `bias_addr`
6. `dst_addr`
7. `M`
8. `N`
9. `K`
10. `stride0`
11. `stride1`
12. `stride_dst`
13. `scale`
14. `{shift, zero_point}`

This layout is also exercised in the directed top-level regression.

## Running The Tests

If `iverilog` and `vvp` are available:

```bash
make test
```

In the current environment I ran:

```bash
conda run -n work make test VVP=/opt/homebrew/bin/vvp
```

## Current Testbenches

- `tb_tinygpu_pe_tb`
- `tb_tinygpu_array4x4_tb`
- `tb_tinygpu_dma_tb`
- `tb_tinygpu_gemm_tile_tb`
- `tb_tinygpu_regs_tb`
- `tb_tinygpu_counters_tb`
- `tb_tinygpu_cmd_ctrl_idle_tb`
- `tb_tinygpu_top_gemm_tb`
- `tb_tinygpu_top_edge_tiles_tb`
- `tb_tinygpu_top_dst_int8_tb`
- `tb_tinygpu_top_bias_relu_tb`
- `tb_tinygpu_top_clamp_tb`
- `tb_tinygpu_top_vector_tb`
- `tb_tinygpu_top_directed_tb`
- `tb_tinygpu_top_random_latency_tb`

## Notes

- The full regression is currently passing under `iverilog`.
- Icarus still emits a few non-failing array sensitivity warnings in `tinygpu_cmd_ctrl.sv`.
- `build/` is generated output and is ignored by Git.
