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
| Resource usage | 86% logic · 56% registers · 35% BSRAM · 77% DSP |
| Timing at 27 MHz | 0 setup/hold violations · 48.397 MHz reported Fmax |

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

## Command Descriptor ABI

Indirect mode fetches exactly fourteen 32-bit little-endian words:

```text
0 opcode       1 flags        2 src0_addr    3 src1_addr
4 bias_addr    5 dst_addr     6 dim_m        7 dim_n
8 dim_k        9 stride0     10 stride1     11 stride_dst
12 scale      13 shift[31:16] | zero_point[15:0]
```

`tgpu_descriptor_t` mirrors this layout and has a compile-time 56-byte size
assertion. Do not repack the 16-bit dimensions or strides into shared words.

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

In this mode, the firmware keeps UART logging minimal and drops a final result signature on GPIO for the testbench to detect.

The maintained GHDL regression uses the GPIO signature as its pass/fail source because it is deterministic and avoids treating UART text formatting as a hardware correctness check. UART0 remains the intended human-readable interface for the board demo at `19200` baud.

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
| `[TB:TGPU] Software integration result: pass=23 fail=0` | Firmware self-check completed ✅ |
| `several sources for unresolved signal` | Multi-driver elaboration error ❌ |
| `bound check failure` | Generic value out of allowed range ❌ |

Expected healthy output for the maintained GHDL path:
```
[NEORV32] BOOT_MODE_SELECT 2 - booting IMEM image
[TB:TGPU] Software integration result: pass=28 fail=0
simulation stopped ...
```

### Expected simulation and UART checklist

Use this as the quick "is the software integration healthy?" checklist.

For the maintained **GHDL self-check mode**, `sim/ghdl.log` should contain:

```text
[NEORV32] BOOT_MODE_SELECT 2 - booting IMEM image
[TB:TGPU] Software integration result: pass=28 fail=0
```

If the GPIO result line does not appear, the firmware did not complete the self-check sequence.

### Hardware Conv2D path

The canonical SystemVerilog accelerator implements streaming im2col in hardware. The demo issues:

```text
OP_CONV2D -> streaming im2col tile loader -> existing GEMM datapath
```

The demo uses a `3x3`, stride-1, padding-1 identity kernel over a `3x3x1`
NHWC input and checks that the nine INT32 outputs equal the input values.

GHDL does not execute the SystemVerilog implementation; it uses the VHDL MMIO
behavioral model. In that regression, firmware builds the equivalent im2col
reference matrices and launches GEMM. Icarus and Verilator are the authoritative
tests for the hardware address generation, padding suppression, and Conv2D FSM.

For **on-board UART0** at `19200` baud, the same banner and `[TEST ...]` / `[PASS]` lines should appear on the serial terminal. The exact counter values in TEST 7 can vary, but the pass/fail text should not.

Vector operations use `DIM_M` as their element count. Their sources are INT8
with one-byte element strides; the current demo stores INT32 results with a
four-byte destination stride.

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

**Impact:** If the GHDL run reaches its GPIO completion signature, it validates firmware boot, MMIO accesses, and descriptor-vs-direct software sequencing against the stub. It does **not** replace the native SystemVerilog RTL testbenches for hardware verification.

**Current status:** The GHDL software-integration flow completes with
`pass=23 fail=0`. The former instruction corruption was caused by an
incomplete bus adapter, not UART0: the wrapper returned MMIO responses
combinationally, tied NEORV32's single completion ACK directly to both
TinyGPU `ready` and `rvalid`, and passed `0000` read strobes into NEORV32's
RAM byte-enable bus. The wrapper now registers MMIO responses, uses a
single-outstanding memory bridge, and drives all byte lanes for reads.

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
  neorv32/sim/ghdl.log              ← simulation output + GPIO pass/fail signature
  neorv32/sim/tb.uart0_rx.log       ← UART0 physical RX log when UART capture is enabled
  neorv32/sim/neorv32.tracer0.log   ← CPU core 0 instruction trace
  neorv32/sim/neorv32.tracer1.log   ← CPU core 1 instruction trace

Hardware (GowinEDA project):
  gowineda/tang-nano-20k/create_project.tcl
  gowineda/tang-nano-20k/tinygpu_v3_20k/src/neorv32_top.vhd
  gowineda/tang-nano-20k/tinygpu_v3_20k/src/neorv32_tinygpu_wrapper.vhd
  gowineda/tang-nano-20k/tinygpu_v3_20k/impl/pnr/tang-nano-20k.fs  ← bitstream
```

---

## Next Steps

| Priority | Task |
|---|---|
| 1 | Generate the Tang Mega 60K `4x4x16` projects with the exact installed Gowin part identifier |
| 2 | Require zero setup/hold violations and confirm the hierarchy contains 16 PEs |
| 3 | Compare standalone Conv2D-disabled/enabled and full NEORV32 utilization reports |
| 4 | Keep GHDL firmware/MMIO, Verilator differential, and Icarus RTL regressions green |
