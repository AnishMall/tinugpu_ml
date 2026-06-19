# GW5A Port — PA2122 BSRAM WRITE_MODE Debug Log

**Device:** GW5A-LV25MG121NC1/10
**Project:** `gowineda/tang-nano-20k/tinygpu_v4`
**Issue:** PA2122 errors during Place & Route — BSRAM WRITE_MODE=2'b10 not supported on GW5A series

---

## Root Cause

Gowin's synthesizer infers BSRAM primitives from behavioral VHDL RAM processes.
GW5A devices do not support `WRITE_MODE = 2'b10` (read-before-write).
GW2AR-18 (Tang Nano 20K) did support it — hence this only appeared when switching devices.

Two separate inference sites were producing the error:

| Instance | File | Status |
|---|---|---|
| `regfile[0]_regfile[0]_0_0_s` | `neorv32_cpu_regfile.vhd` | ✅ FIXED |
| `spram_spram_0_0_s` / `spram_spram_0_1_s` | `neorv32_prim.vhd` | 🔴 IN PROGRESS |

---

## Fix 1 — Register File (RESOLVED)

**File:** `gowineda/tang-nano-20k/tinygpu_v4/src/neorv32_package.vhd` line 865

**Root cause:** `CPU_RF_ARCH_SEL := 0` (synchronous BSRAM-style register file) was set in the package default and propagated through the entire hierarchy. Changing `neorv32_top.vhd` default had no effect because the package value took precedence.

**Fix applied:**
```vhdl
-- BEFORE
CPU_RF_ARCH_SEL     : natural range 0 to 3           := 0;

-- AFTER
CPU_RF_ARCH_SEL     : natural range 0 to 3           := 2;
```

`ARCH_SEL=2` switches the register file from BSRAM inference to individual flip-flops — no BSRAM primitive, no WRITE_MODE, PA2122 gone for this instance.

**Confirmed working:** Log shows `cpu_rf_arch_sel=2` and `arch_sel=2` on regfile. `regfile[0]` PA2122 no longer appears.

**Note:** Also changed `neorv32_top.vhd` line 71 default to `:= 2` for consistency, but that alone was insufficient — the package is the authoritative source.

---

## Fix 2 — SPRAM / IMEM / DMEM (IN PROGRESS)

**File:** `gowineda/tang-nano-20k/tinygpu_v4/src/neorv32_prim.vhd`
**Entity:** `neorv32_prim_spram` — `memory_large` generate block

**Note from NEORV32 source comment:** Read-during-write behavior is irrelevant here — read and write accesses are guaranteed mutually exclusive. So any mode change is functionally safe.

### Attempt 1 — Write-first with else branch
```vhdl
if (en_i = '1') then
  if (rw_i = '1') then
    spram(...) <= data_i;
    rdata <= data_i;        -- write-first bypass
  else
    rdata <= spram(...);
  end if;
end if;
```
**Result:** Synthesizer still inferred WRITE_MODE=2'b10. Pattern not recognised.

### Attempt 2 — Read-first (wrong direction, made worse)
```vhdl
rdata <= spram(...);        -- read first
if (rw_i = '1') then
  spram(...) <= data_i;
end if;
```
**Result:** Same PA2122 error. Reverted.

### Attempt 3 — Separate independent if blocks (CURRENT / UNTESTED)
```vhdl
if (en_i = '1') and (rw_i = '1') then
  spram(to_integer(unsigned(addr_i))) <= data_i;
end if;
if (en_i = '1') and (rw_i = '0') then
  rdata <= spram(to_integer(unsigned(addr_i)));
end if;
```
**Rationale:** Completely separates the write and read paths into independent processes — removes any structural coupling that could trigger read-before-write inference.

**Status:** Edit not yet confirmed on disk. Pending PowerShell verification:
```powershell
Select-String -Path "...\neorv32_prim.vhd" -Pattern "rw_i = '0'"
```
Must return one match before running PnR.

---

## Files Modified (Desktop copy only)

These edits exist only in the Gowin project on the Windows Desktop:
```
C:\Users\Dell\Desktop\neorv32-setups\gowineda\tang-nano-20k\tinygpu_v4\src\
```

They are NOT present in the Docker container at `/workspaces/lab_DHWA-main/...`
If sources are ever re-copied from Docker to Desktop, these edits will be lost.

| File | Change | Status |
|---|---|---|
| `neorv32_package.vhd:865` | `CPU_RF_ARCH_SEL := 2` | ✅ Confirmed |
| `neorv32_top.vhd:71` | `CPU_RF_ARCH_SEL := 2` | ✅ Confirmed (belt-and-suspenders) |
| `neorv32_prim.vhd` — `memory_large` block | Separate if blocks for read/write | 🔴 Pending disk verification |

---

## Other Notes

- DSP overflow on GW2AR-18: design needs 13 DSP blocks, GW2AR-18 only has 12. GW5A-25 has sufficient DSP headroom — confirmed by clean synthesis with no DSP error.
- `CPU_RF_ARCH_SEL=2` (flip-flop style) uses more LUTs/FFs than BSRAM style but is within GW5A-25 budget.
- SDC timing constraint still missing — clock runs unconstrained at 100MHz default. Need to add `create_clock -name clk_i -period 37.037` for 27MHz target before timing analysis is meaningful.
- `tinygpu_regs.vhd` — do NOT add to Gowin project alongside `tinygpu_regs.sv` — duplicate module conflict.

---

## Current Error Count

| Run | `regfile` errors | `spram` errors | Total |
|---|---|---|---|
| Before any fix | 1 | 12 | 13 |
| After package fix | 0 ✅ | 12 | 12 |
| After spram fix (pending) | 0 ✅ | 0 (expected) | 0 |