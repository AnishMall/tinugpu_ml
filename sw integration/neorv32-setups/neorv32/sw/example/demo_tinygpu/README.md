# TinyGPU demo on NEORV32

This example runs the TinyGPU ML accelerator as a memory‑mapped peripheral of NEORV32 and tests it in **GHDL simulation** using the standard NEORV32 testbench.

## How to run the simulation

1. Go to the TinyGPU demo directory inside the NEORV32 tree:

   ```bash
   cd somewhere/neorv32-setups/neorv32/sw/example/demo_tinygpu
   ```

2. Build the demo application, install it into the NEORV32 IMEM image, and run the default GHDL testbench with UART0 redirected to the simulator:

   ```bash
   make USER_FLAGS+=-DUART0_SIM_MODE clean_all install sim
   ```

   - `UART0_SIM_MODE` sends all UART0 TX characters to the text.io simulation console instead of the physical UART pin.
   - If everything compiles, you will see a warning like:

     ```text
     neorv32_uart.c:92: warning: UART0_SIM_MODE (primary UART) enabled! Sending all UART0.TX data to text.io simulation output instead of real UART0 transmitter. Use this for simulation only!
     ```

   followed by the ELF size report, IMEM image generation, and the line:

   ```text
   Simulating processor using default testbench...
   ```

## Current integration status

With the TinyGPU wrapper enabled, the simulation currently stops during elaboration with:

```text
../rtl/core/neorv32_tinygpu_wrapper.vhd:118:3: warning:
  instance "tinygpu_top_inst" of component "tinygpu_top" is not bound [-Wbinding]
../rtl/core/neorv32_tinygpu_wrapper.vhd:34:14: warning:
  (in default configuration of neorv32_tinygpu_wrapper(neorv32_tinygpu_wrapper_rtl))
GHDL simulation run parameters: --stop-time=10ms
../rtl/core/neorv32_tinygpu_wrapper.vhd:118:3: warning:
  instance "tinygpu_top_inst" of component "tinygpu_top" is not bound [-Wbinding]
../rtl/core/neorv32_tinygpu_wrapper.vhd:34:14: warning:
  (in default configuration of neorv32_tinygpu_wrapper(neorv32_tinygpu_wrapper_rtl))
for signal: .neorv32_tb(neorv32_tb_rtl).neorv32_top_inst@neorv32_top(neorv32_top_rtl).tinygpu_mem_req.meta(4)
/usr/bin/ghdl-mcode:error: several sources for unresolved signal
/usr/bin/ghdl-mcode:error: error during elaboration
```

This tells us:

- The VHDL wrapper `neorv32_tinygpu_wrapper` instantiates a component `tinygpu_top` as `tinygpu_top_inst`, but GHDL cannot find a bound implementation for `tinygpu_top` in the current compile/elaboration configuration.
- During elaboration, GHDL also detects “several sources for unresolved signal” on a TinyGPU‑related memory request signal (`tinygpu_mem_req.meta(4)`), which suggests multiple drivers or a missing resolution function on that signal.

Both issues must be addressed in the simulation scripts (e.g. `sim/ghdl.sh`) and in the wrapper/arbiter RTL before TinyGPU can be simulated together with NEORV32.

## Next debugging steps (notes for contributors)

- Ensure all TinyGPU SystemVerilog modules (`tinygpu_top`, `tinygpu_regs`, `tinygpu_cmd_ctrl`, etc.) are compiled and visible to GHDL before `neorv32_tinygpu_wrapper.vhd` is analyzed.
- Check that `tinygpu_mem_req` and related bus signals are driven by exactly one source, or use a resolved type if multiple drivers are really required.
- Once binding and bus driving are fixed, the same `make USER_FLAGS+=-DUART0_SIM_MODE clean_all install sim` command should produce UART0 console output from the TinyGPU demo instead of an elaboration error.
