# TinyGPU demo SW Integration on NEORV32

This example runs the TinyGPU ML accelerator as a memory-mapped peripheral of NEORV32 and tests it in **GHDL simulation** using the standard NEORV32 testbench.

---

## Hardware Integration Summary

| Item | Detail |
|---|---|
| Accelerator | TinyGPU-ML, 2×2 PE array, INT8 input, INT32 accumulate |
| MMIO base address | `0xFFEE0000` (DEV_14 in IO switch) |
| DMA bus master | Independent memory bus via `neorv32_bus_switch` |
| IRQ | FIRQ channel 1 |
| Board | Tang Nano 20K (GW2AR-18) |
| Resource usage | 17% LUT, 10% FF, 35% BSRAM |

---

## Software Files

| File | Purpose |
|---|---|
| `main.c` | Test application — 6 test cases (VEC_ADD, GEMM, RELU, perf counters) |
| `tinygpu_driver.h` | Full register map, opcodes, flags, API declarations |
| `tinygpu_driver.c` | Driver implementation — direct mode, descriptor mode, polling |
| `Makefile` | Build system |

---

## How to run the simulation

### Step 1 — Prerequisites

Ensure the following are available in your environment:

```bash
riscv32-unknown-elf-gcc --version   # RISC-V GCC toolchain
ghdl --version                      # GHDL simulator v1.0.0+
```

### Step 2 — Testbench configuration

The standard `sim/neorv32_tb.vhd` requires these changes to match the TinyGPU hardware configuration:

| Generic | Required value | Reason |
|---|---|---|
| `CLOCK_FREQUENCY` | `27_000_000` | Tang Nano 20K runs at 27 MHz |
| `BOOT_MODE_SELECT` | `2` | Boot directly from IMEM image |
| `IMEM_SIZE` | `8*1024` | Match ROM array size |
| `IO_UART0_EN` | `true` | Enable UART0 for test output |
| `IO_TINYGPU_EN` | `true` | Enable TinyGPU wrapper |
| `IO_CLINT_EN` | `true` | Required for timer interrupts |
| `IO_DMA_EN` | `true` | Required for TinyGPU DMA |

The following generics from the standard testbench do not exist in this `neorv32_top.vhd` and must be commented out:

```vhdl
-- CACHE_UC_BASE       => x"F0000000",   -- not in this top
-- IO_GPIO_DIR_EN      => true,           -- not in this top
-- IO_TRNG_NUM_RO      => 3,              -- not in this top
-- IO_TRNG_NUM_INV     => 5,              -- not in this top
-- IO_TRNG_NUM_RBIT    => 64,             -- not in this top
-- gpio_dir_o          => gpio_dir,       -- not in this top
-- MEM_RST             => ...,            -- not in xbus_memory
-- RISCV_ISA_Zbc       => true,           -- not in this top
```

### Step 3 — Simulation script configuration

`sim/ghdl.sh` requires these changes:

```bash
# Exclude stale duplicate and unused stub
find ../rtl/core ../sim -type f -name '*.vhd' \
  ! -path '*/tinygpu_ml/*' \
  ! -name 'neorv32_tinygpu.vhd' \
  -exec ghdl -i --std=08 --workdir=build --ieee=standard --work=neorv32 {} \;
```

### Step 4 — Build and simulate

```bash
cd neorv32/sw/example/demo_tinygpu
make USER_FLAGS+=-DUART0_SIM_MODE clean_all install sim
```

`UART0_SIM_MODE` sends all UART0 TX output directly to the GHDL simulator console via `text.io` instead of the physical UART pin — no baud rate timing delays.

Expected compiler warning (normal):

```
neorv32_uart.c:92: warning: UART0_SIM_MODE (primary UART) enabled!
Sending all UART0.TX data to text.io simulation output instead of
real UART0 transmitter. Use this for simulation only!
```

---

## Current Simulation Status

| Item | Status |
|---|---|
| Compilation | ✅ Clean — no errors |
| Elaboration | ✅ Clean — no errors |
| CPU boot from IMEM | ✅ `BOOT_MODE_SELECT 2 - booting IMEM image` confirmed |
| UART0 enabled in sim | ✅ Confirmed in processor config |
| TinyGPU elaboration | ⚠️ Warning only — `tinygpu_top` unbound (SystemVerilog not supported by GHDL) |
| IMEM ROM data loading | 🔄 Under debug — CPU reads uninitialized `0xf?????f?` |
| UART test output | ⏳ Pending IMEM fix |
| VaporView waveform | ⏳ Pending UART output confirmation |

---

## Known Issues

### 1. `tinygpu_top` unbound warning

```
neorv32_tinygpu_wrapper.vhd:118: warning:
  instance "tinygpu_top_inst" of component "tinygpu_top" is not bound
```

**Cause** — `tinygpu_top` is SystemVerilog (`.sv`). GHDL only supports VHDL. The wrapper instantiates `tinygpu_top` as a component but GHDL cannot compile `.sv` files.

**Impact** — Warning only. Simulation still elaborates and runs. The TinyGPU bus interface responds with default values (all zeros).

**Resolution options:**
- Create a VHDL behavioral stub `tinygpu_top_stub.vhd` matching the `tinygpu_top` port map
- Use Verilator to co-simulate the SystemVerilog alongside GHDL

### 2. IMEM ROM loading (active debugging)

**Symptom** — CPU tracer shows `0xf?????f?` (uninitialized) at `0x00000000` instead of compiled firmware.

**Root cause under investigation** — `neorv32_imem_image.vhd` package compilation order vs GHDL import sequence.

---

## Verification Log Files

These three files are the primary verification outputs after every simulation run.

---

### 1. `sim/ghdl.log` — Main simulation log

**How to view:**
```bash
cat /workspaces/lab_DHWA-main/neorv32-setups/neorv32/sim/ghdl.log
# or live during simulation:
tail -f /workspaces/lab_DHWA-main/neorv32-setups/neorv32/sim/ghdl.log
```

**What to look for:**

| Line | Meaning |
|---|---|
| `BOOT_MODE_SELECT 2 - booting IMEM image` | CPU booted correctly from your compiled firmware ✅ |
| `Processor Configuration: ... UART0 ... TINYGPU ...` | Both peripherals enabled ✅ |
| `simulation stopped by --stop-time @10ms` | Simulation completed normally ✅ |
| `UART0_SIM_MODE` output lines | Your C code `printf` output appears here ✅ |
| `several sources for unresolved signal` | Multi-driver elaboration error ❌ |
| `bound check failure` | Generic value out of range ❌ |

**Expected healthy output (with `UART0_SIM_MODE`):**
```
[NEORV32] BOOT_MODE_SELECT 2 - booting IMEM image
========================================
 TinyGPU-ML Accelerator Test
========================================
[PASS] CTRL register read-back == 0
[PASS] STATUS[BUSY]=0 after soft reset
[PASS] VEC_ADD z[0]==11
...
Results: 12 passed, 0 failed
ALL TESTS PASSED
```

---

### 2. `sim/neorv32.tracer0.log` — CPU instruction trace (Core 0)

**How to view:**
```bash
head -20 /workspaces/lab_DHWA-main/neorv32-setups/neorv32/sim/neorv32.tracer0.log
tail -20 /workspaces/lab_DHWA-main/neorv32-setups/neorv32/sim/neorv32.tracer0.log
```

**Format:**
```
<inst#>  <cycle>  <PC>        <opcode>    <priv>  <mnemonic>   <trap?>
0        30       0x00000000  0xf14020f3  M       csrr a1, mhartid
1        39       0x00000004  0x80002217  M       auipc tp, 0x80002
```

**What to look for:**

| Pattern | Meaning |
|---|---|
| `0xf?????f?` at PC `0x00000000` | IMEM ROM not loaded — uninitialized memory ❌ |
| `INVALID <TRAP_ENTRY>` repeating | CPU stuck in trap loop — firmware not running ❌ |
| PC advancing through `0x00000000`–`0x00001b28` | CPU executing your firmware correctly ✅ |
| `sb x11, 3(x14)` near UART address `0xFFF50000` | CPU writing to UART TX register ✅ |
| `lw` at address `0xFFEE0000`–`0xFFEE0054` | CPU accessing TinyGPU registers ✅ |

**Healthy first few lines:**
```
0   30   0x00000000  0xf14020f3  M   csrr a1, mhartid
1   39   0x00000004  0x80002217  M   auipc tp, 0x80002
2   48   0x00000008  0xffb20213  M   addi tp, tp, -5
3   57   0x0000000c  0x80000197  M   auipc gp, 0x80000
```

---

### 3. `sim/tb.uart0_rx.log` — UART0 physical receiver log

**How to view:**
```bash
cat /workspaces/lab_DHWA-main/neorv32-setups/neorv32/sim/tb.uart0_rx.log
# or live:
tail -f /workspaces/lab_DHWA-main/neorv32-setups/neorv32/sim/tb.uart0_rx.log
```

**Important:** This file only has content when `UART0_SIM_MODE` is **OFF** (physical UART mode). Each character is written only when a full `\n` (LF) is received after serialization at 19200 baud.

When `UART0_SIM_MODE` is **ON** (simulation mode), output goes to `ghdl.log` instead — this file will be empty.

| Mode | Output location | Speed |
|---|---|---|
| `UART0_SIM_MODE` ON | `ghdl.log` (text.io) | Instant |
| `UART0_SIM_MODE` OFF | `tb.uart0_rx.log` | ~521µs per character at 19200 baud |

**When to use physical mode (no `UART0_SIM_MODE`):**
Only use physical UART mode when you need to verify the actual UART baud rate timing behaviour — requires `--stop-time=300ms` or longer.

---

## File Locations

```
Software:
  neorv32/sw/example/demo_tinygpu/main.c
  neorv32/sw/example/demo_tinygpu/tinygpu_driver.h
  neorv32/sw/example/demo_tinygpu/tinygpu_driver.c
  neorv32/sw/example/demo_tinygpu/Makefile

IMEM image (auto-generated by make):
  neorv32/rtl/core/neorv32_imem_image.vhd

Simulation:
  neorv32/sim/neorv32_tb.vhd        (testbench)
  neorv32/sim/ghdl.sh               (simulation script)
  neorv32/sim/ghdl.log              (main simulation output + UART0_SIM_MODE text)
  neorv32/sim/tb.uart0_rx.log       (UART0 physical receiver — only without SIM_MODE)
  neorv32/sim/neorv32.tracer0.log   (CPU core 0 instruction trace)
  neorv32/sim/neorv32.tracer1.log   (CPU core 1 instruction trace)

Hardware (GowinEDA):
  gowineda/tang-nano-20k/tinygpu_v3_20k_new/src/neorv32_top.vhd
  gowineda/tang-nano-20k/tinygpu_v3_20k_new/src/neorv32_tinygpu_wrapper.vhd
  gowineda/tang-nano-20k/tinygpu_v3_20k_new/impl/pnr/tang-nano-20k.fs
```
