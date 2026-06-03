# TinyGPU-ML SW Integration on NEORV32

> **Platform:** Tang Nano 20K (GW2AR-18) · **Processor:** NEORV32 RISC-V SoC · **Simulator:** GHDL v1.0.0

This directory contains the software integration for the TinyGPU-ML hardware accelerator — a 2×2 Processing Element array for INT8 matrix operations — integrated as a memory-mapped peripheral of the NEORV32 RISC-V soft-core on a Tang Nano 20K FPGA.

---

## Hardware Integration Summary

| Item | Detail |
|---|---|
| Accelerator | TinyGPU-ML, 2×2 PE array, INT8 input, INT32 accumulate |
| Operations | GEMM, GEMV, VEC_ADD, VEC_MUL, RELU, CLAMP |
| MMIO base address | `0xFFEE0000` — DEV_14 in NEORV32 IO switch |
| DMA bus master | Independent memory bus via `neorv32_bus_switch` |
| IRQ | FIRQ channel 1 |
| Board | Tang Nano 20K — GW2AR-18C QN88P |
| Synthesis tool | Gowin EDA v1.9.12.02 |
| Resource usage | 17% LUT · 10% FF · 35% BSRAM (16 blocks) |

---

## Repository Structure

```
demo_tinygpu/
├── main.c                  # Test application — 7 checks incl. IRQ, descriptor mode, im2col
├── tinygpu_driver.h        # Register map, opcodes, flags, API
├── tinygpu_driver.c        # Driver — direct mode, descriptor mode, polling + IRQ helpers
└── Makefile                # Build system
```

---

## Register Map

| Offset | Register | Dir | Description |
|---|---|---|---|
| `0x00` | CTRL | RW | bit0=START, bit1=soft reset, bit2=IRQ enable, bit3=direct mode |
| `0x04` | STATUS | RO | bit0=busy, bit1=done, bit2-5=error flags, bit6=ready |
| `0x08` | CMD_ADDR | RW | Descriptor address (indirect mode) |
| `0x0C` | DIRECT_OP | RW | Opcode for direct mode |
| `0x10`–`0x1C` | SRC0/SRC1/BIAS/DST | RW | Memory addresses of operands |
| `0x20`–`0x28` | DIM_M/N/K | RW | Matrix dimensions |
| `0x2C`–`0x34` | STRIDEs | RW | Bytes per row for each matrix |
| `0x38` | FLAGS | RW | BIAS_EN, RELU_EN, CLAMP_EN, REQUANT_EN, DST_INT8/32, SIGNED |
| `0x44`–`0x50` | Perf counters | RO | cycles, active cycles, stalls, total commands |
| `0x54` | IRQ_STATUS | RW | Write bit0=1 to clear IRQ pending |

---

## Prerequisites

```bash
riscv-none-elf-gcc --version        # xPack bare-metal RISC-V GCC toolchain
ghdl --version                      # GHDL simulator
```

---

## Build

```bash
cd neorv32/sw/example/demo_tinygpu

# Standard build (for flashing to hardware)
make clean_all && make

# Recommended GHDL software-integration run
make sim_ghdl_safe

# Real TinyGPU RTL simulation (Verilator standalone)
cd ../../sim
./verilator_tinygpu.sh
```

The recommended GHDL path uses:

- `TGPU_GHDL_SIM=1`
- polling mode (`TGPU_SW_SIM_DISABLE_IRQ_TEST=1`)
- single-core testbench defaults
- caches disabled
- fast simulated UART receiver baud (`UART_SIM_BAUD=1000000`)

In this mode, the firmware avoids verbose UART logging and instead drops a final result signature on GPIO for the testbench to detect.

`UART0_SIM_MODE` is currently **not** the preferred path in this repo. It exposed unstable behavior in this GHDL/NEORV32 setup during TinyGPU demo runs, so the safer GHDL mode above is the maintained SW-simulation flow.

The checked-in `sim/neorv32_tb.vhd` and `sim/ghdl.sh` are configured for a **single-core** software-verification run by default (`DUAL_CORE_EN=false`). This avoids dual-hart UART interleaving and makes TinyGPU firmware debugging much more deterministic in GHDL.

The example `Makefile` also auto-detects a local xPack toolchain at:

```bash
/Users/anish/tinyml_gpu/.tools/xpack-riscv-none-elf-gcc-15.2.0-1/bin
```

If that directory exists, it is preferred over generic Homebrew `riscv64-elf-*` tools because it includes the bare-metal headers and libraries needed to rebuild the firmware image.

> In this repo, the GHDL flow uses `sim/tinygpu_top_stub.vhd`, a behavioral VHDL model of the TinyGPU MMIO + memory-master interface. It is useful for firmware integration checks, but it is not a substitute for native SystemVerilog RTL verification.

For real TinyGPU hardware behavior in simulation, use the Verilator flow documented in [sw integration/README.md](/Users/anish/tinyml_gpu/sw%20integration/README.md).

Expected build output:
```
Memory utilization:
   text    data     bss     dec     hex filename
   6840      56      56    6952    1b28 main.elf
Executable (VHD): 6896 bytes
Installing application image to ../../../rtl/core/neorv32_imem_image.vhd
Simulating processor using default testbench...
```

---

## Simulation Setup

### Testbench changes required (`sim/neorv32_tb.vhd`)

These generics must be set to match the TinyGPU hardware configuration:

| Generic | Required value | Reason |
|---|---|---|
| `CLOCK_FREQUENCY` | `27_000_000` | Tang Nano 20K oscillator frequency |
| `BOOT_MODE_SELECT` | `2` | Boot directly from IMEM image |
| `IMEM_SIZE` | `16*1024` | Needed for the current TinyGPU demo firmware image |
| `IO_UART0_EN` | `true` | Enable UART0 for test output |
| `IO_TINYGPU_EN` | `true` | Enable TinyGPU wrapper |
| `IO_CLINT_EN` | `true` | Required for timer interrupts |
| `IO_DMA_EN` | `true` | Required for TinyGPU DMA bus master |

These generics exist in the standard testbench but not in this `neorv32_top.vhd` — comment them out:

```vhdl
-- CACHE_UC_BASE       => x"F0000000",   -- not in this neorv32_top
-- IO_GPIO_DIR_EN      => true,           -- not in this neorv32_top
-- IO_TRNG_NUM_RO      => 3,              -- not in this neorv32_top
-- IO_TRNG_NUM_INV     => 5,              -- not in this neorv32_top
-- IO_TRNG_NUM_RBIT    => 64,             -- not in this neorv32_top
-- gpio_dir_o          => gpio_dir,       -- not in this neorv32_top
-- MEM_RST             => ...,            -- not in xbus_memory
-- RISCV_ISA_Zbc       => true,           -- not in this neorv32_top
```

Also set `HPM_NUM_CNTS => 13` (max allowed by this top is 13, not 29 from the standard testbench).

### Simulation script changes required (`sim/ghdl.sh`)

Three files must be excluded from the GHDL `find` scan to prevent duplicate entity conflicts and ensure correct IMEM image compilation order:

```bash
#!/usr/bin/env bash
set -e
cd $(dirname "$0")
GHDL="${GHDL:-ghdl}"

mkdir -p build

# Compile IMEM image package FIRST — must precede find scan
ghdl -a --std=08 --workdir=build --ieee=standard --work=neorv32 \
  ../rtl/core/neorv32_imem_image.vhd

# Import all VHDL except:
#   tinygpu_ml/*        — stale duplicate of neorv32_tinygpu_wrapper
#   neorv32_tinygpu.vhd — unused 4-register stub (conflicts with wrapper)
#   neorv32_imem_image.vhd — already compiled above
find ../rtl/core ../sim -type f -name '*.vhd' \
  ! -path '*/tinygpu_ml/*' \
  ! -name 'neorv32_tinygpu.vhd' \
  ! -name 'neorv32_imem_image.vhd' \
  -exec ghdl -i --std=08 --workdir=build --ieee=standard --work=neorv32 {} \;

$GHDL -m --work=neorv32 --workdir=build --std=08 neorv32_tb

if [ -z "$1" ]; then
  GHDL_RUN_ARGS="${@:---stop-time=10ms}"
else
  GHDL_RUN_ARGS=$@
fi
echo "GHDL simulation run parameters: $GHDL_RUN_ARGS"

runcmd="$GHDL -r --work=neorv32 --workdir=build --std=08 neorv32_tb \
  --max-stack-alloc=0 \
  --ieee-asserts=disable \
  --assert-level=error $GHDL_RUN_ARGS"

if [ -n "$GHDL_NOLOG" ]; then
  eval "$runcmd"
else
  eval "$runcmd" 2>&1 | tee ghdl.log
fi
```

---

## Verification Log Files

Three files are produced after every simulation run.

### `sim/ghdl.log` — Main simulation log

```bash
tail -f /workspaces/lab_DHWA-main/neorv32-setups/neorv32/sim/ghdl.log
```

| Line to look for | Meaning |
|---|---|
| `BOOT_MODE_SELECT 2 - booting IMEM image` | CPU booted from compiled firmware ✅ |
| `Processor Configuration: ... UART0 ... TINYGPU ...` | Both peripherals active ✅ |
| `simulation stopped by --stop-time @10ms` | Simulation completed normally ✅ |
| `UART0_SIM_MODE` printf lines | Your C test output ✅ |
| `several sources for unresolved signal` | Multi-driver elaboration error ❌ |
| `bound check failure` | Generic value out of allowed range ❌ |

Expected healthy output for the maintained GHDL path:
```
[NEORV32] BOOT_MODE_SELECT 2 - booting IMEM image
[TB:TGPU] Software integration result: pass=<N> fail=<M>
simulation stopped ...
```

### Expected UART transcript checklist

Use this as the quick "is the software integration healthy?" checklist.

For the maintained **GHDL self-check mode**, `sim/ghdl.log` should contain:

```text
[NEORV32] BOOT_MODE_SELECT 2 - booting IMEM image
[TB:TGPU] Software integration result: pass=...
fail=...
```

If the GPIO result line does not appear, the firmware did not complete the self-check sequence.

### im2col software path

The current accelerator still does not implement dedicated Conv2D hardware. The SW demo therefore maps convolution as:

```text
Conv2D -> software im2col transform -> hardware GEMM
```

The demo application includes a tiny example:

- input image: `3x3`
- kernel: `2x2`
- stride: `1`
- output: `2x2`

Software flattens each `2x2` patch into one im2col row and flattens the kernel into one column vector, then launches:

```text
GEMM M=4, N=1, K=4
```

This matches the project scope's "Conv2D via software im2col + hardware GEMM" requirement without adding dedicated convolution RTL.

For **on-board UART0** at `19200` baud, the same banner and `[TEST ...]` / `[PASS]` lines should appear on the serial terminal. The exact counter values in TEST 6 can vary, but the pass/fail text should not.

### `sim/neorv32.tracer0.log` — CPU core 0 instruction trace

```bash
head -10 /workspaces/lab_DHWA-main/neorv32-setups/neorv32/sim/neorv32.tracer0.log
```

Format: `<inst#>  <cycle>  <PC>  <opcode>  <priv>  <mnemonic>  <trap?>`

| Pattern | Meaning |
|---|---|
| `0xf?????f?` at PC `0x00000000` | IMEM ROM not loaded — uninitialized ❌ |
| `INVALID <TRAP_ENTRY>` repeating | CPU stuck in trap loop ❌ |
| PC advancing `0x00000000` → `0x00001b28` | Firmware executing correctly ✅ |
| `lw/sw` at `0xFFEE0000`–`0xFFEE0054` | TinyGPU register access ✅ |

Healthy start:
```
0   30   0x00000000  0xf14020f3  M   csrr a1, mhartid
1   39   0x00000004  0x80002217  M   auipc tp, 0x80002
2   48   0x00000008  0xffb20213  M   addi tp, tp, -5
3   57   0x0000000c  0x80000197  M   auipc gp, 0x80000
```

### `sim/tb.uart0_rx.log` — UART0 physical receiver log

```bash
tail -f /workspaces/lab_DHWA-main/neorv32-setups/neorv32/sim/tb.uart0_rx.log
```

| Mode | Output location | Speed |
|---|---|---|
| `sim_ghdl_safe` | GPIO signature reported in `ghdl.log` | Maintained GHDL SW-integration flow |
| Hardware / board run | UART0 serial console | Preferred for human-readable demo output |

---

## Known Issues

### 1. GHDL does not simulate the real SystemVerilog accelerator

```
neorv32_tinygpu_wrapper.vhd:118: warning:
  instance "tinygpu_top_inst" of component "tinygpu_top" is not bound [-Wbinding]
```

**Cause:** `tinygpu_top` is SystemVerilog (`.sv`). GHDL supports VHDL only, so it cannot compile the real TinyGPU RTL.

**Current repo state:** `sim/tinygpu_top_stub.vhd` is provided as a pure VHDL behavioral model matching the `tinygpu_top` component port map. It drives `mmio_ready='1'`, supports the demo app's IRQ-driven `VEC_ADD`, descriptor-mode `GEMM`, and `RELU` cases, and provides enough MMIO / memory-master behavior for software-integration testing.

**Impact:** A clean GHDL run validates firmware boot, UART output, MMIO accesses, IRQ handling, and descriptor-vs-direct software sequencing. It does **not** replace the native SystemVerilog RTL testbenches for hardware verification.

**Alternative:** Use Verilator or another mixed-language-capable simulator if you want one integrated CPU + real SV TinyGPU simulation flow.

### 2. IMEM ROM data loading

**Symptom:** CPU tracer shows `0xf?????f?` (VHDL `U` uninitialized) at `0x00000000`.

**Cause:** The `neorv32_imem_image.vhd` VHDL package is re-imported by the `find` scan in `ghdl.sh` after being correctly compiled, causing GHDL to use a stale/empty version.

**Fix:** Exclude `neorv32_imem_image.vhd` from the `find` scan and compile it explicitly first (see `ghdl.sh` changes above).

---

## File Locations

```
Software:
  neorv32/sw/example/demo_tinygpu/main.c            ← test application
  neorv32/sw/example/demo_tinygpu/tinygpu_driver.h  ← register map + API
  neorv32/sw/example/demo_tinygpu/tinygpu_driver.c  ← driver implementation
  neorv32/sw/example/demo_tinygpu/Makefile           ← build system

IMEM image (auto-generated — do not edit manually):
  neorv32/rtl/core/neorv32_imem_image.vhd

Simulation:
  neorv32/sim/neorv32_tb.vhd        ← testbench (modified for TinyGPU)
  neorv32/sim/ghdl.sh               ← simulation script (modified)
  neorv32/sim/ghdl.log              ← simulation output + UART0_SIM_MODE text
  neorv32/sim/tb.uart0_rx.log       ← UART0 physical RX (empty with SIM_MODE)
  neorv32/sim/neorv32.tracer0.log   ← CPU core 0 instruction trace
  neorv32/sim/neorv32.tracer1.log   ← CPU core 1 instruction trace

Hardware (GowinEDA project):
  gowineda/tang-nano-20k/tinygpu_v3_20k_new/src/neorv32_top.vhd
  gowineda/tang-nano-20k/tinygpu_v3_20k_new/src/neorv32_tinygpu_wrapper.vhd
  gowineda/tang-nano-20k/tinygpu_v3_20k_new/impl/pnr/tang-nano-20k.fs  ← bitstream
```

---

## Next Steps

| Priority | Task |
|---|---|
| 1 | Confirm UART output in `ghdl.log` with the IRQ/direct/descriptor test flow passing |
| 2 | Flash bitstream to Tang Nano 20K and confirm the same UART transcript on hardware |
| 3 | Add an IRQ-driven descriptor-mode variant if hardware/software latency testing is needed |
| 4 | Move to Verilator or mixed-language co-sim if a true CPU + SV accelerator simulation is required |
