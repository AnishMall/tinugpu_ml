# Tang Mega 60K synthesis target

This directory is the 50 MHz primary synthesis target for the canonical
`4x4x16` RTL. Set `GOWIN_PART_NUMBER` to the exact part string listed by the
installed Gowin EDA release, then run:

```bash
GOWIN_PART_NUMBER=<installed-part-id> gw_sh create_standalone.tcl
```

Do not substitute a guessed part code. Package, speed grade, and device
revision affect resource mapping and timing.

Required report configurations:

1. Standalone `4x4x16`, `ENABLE_CONV=0`.
2. Standalone `4x4x16`, `ENABLE_CONV=1`.
3. Full NEORV32 plus `4x4x16`, `ENABLE_CONV=1`.
4. Historical Tang Nano 20K `2x2x8` result.

The standalone script creates the default Conv2D-enabled project. For the
disabled comparison, set the top-level `ENABLE_CONV` parameter to zero in the
Gowin project. The full-SoC project should reuse the NEORV32 wrapper and board
pin constraints for the selected Tang Mega board while importing
`rtl/files.f` in order.

Closure requires zero setup, hold, recovery, and removal violations, no
unconstrained endpoints, and no inferred latches. Target utilization is below
80 percent for logic, DSP, and block RAM.
