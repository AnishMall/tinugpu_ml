# NEORV32 Test Setup for the Sipeed Tang Nano 20K FPGA development board

This setup provides a simple script that you can run using the Gowin shell and creates a project with the NEORV32 processor already imported and ready to synthesize in the Gowin FPGA Designer IDE.
It uses the simplified [`neorv32_test_setup_bootloader.vhd`](https://github.com/stnolting/neorv32/blob/master/rtl/test_setups/neorv32_test_setup_bootloader.vhd) top entity, which is a wrapper for the actual processor top entity that provides a minimalistic interface (clock, reset, UART and 6 LEDs).

* FPGA Board:
  * :books: [Sipeed Tang Nano 20K](https://wiki.sipeed.com/hardware/en/tang/tang-nano-20k/nano-20k.html)
* FPGA:
  * Gowin Morningside GW2AR `GW2AR-LV18QN88C8/I7`
* Toolchain: Gowin EDA (tested with Gowin EDA 1.9.9 on Linux —not a 1.9.9 beta)

## NEORV32 Configuration

:information_source: See the top entity [`rtl/test_setups/neorv32_test_setup_bootloader.vhd` ](https://github.com/stnolting/neorv32/blob/master/rtl/test_setups/neorv32_test_setup_bootloader.vhd) for
configuration and entity details and [`tang-nano-20k_test_setup_bootloader.cst`](https://github.com/stnolting/neorv32-setups/blob/tang-nano-20k/gowineda/tang-nano-20k/tang-nano-20k_test_setup_bootloader.cst)
for the according FPGA pin mapping.

* CPU: `rv32imcu_Zicsr` + 4 `HPM` (hardware performance monitors)
* Memory: 16kB instruction memory (internal IMEM), 8kB data memory (internal DMEM), bootloader ROM
* Peripherals: `GPIO`, `MTIME`, `UART0`, `WDT`
* Tested with version [`1.9.2.5`](https://github.com/stnolting/neorv32/blob/master/CHANGELOG.md)
* Clock: 27MHz from on-board oscillator
* Reset: Via dedicated on-board "RESET" button
* GPIO output port `gpio_o` bits 0..5 are connected to the orange on-board LEDs (LED1 - LED6); LED6 is the bootloader status LED
* UART0 signals `uart0_txd_o` and `uart0_rxd_i` are connected to the on-board USB-UART chip
  * Under Linux, run `sudo modprobe ftdi_sio` for the on-board UART to appear under `/dev/ttyUSB*` (the higher of the two ports that will appear). Run `sudo modprobe -r ftdi_sio` to be able to program the device on the Gowin Programmer. There is no need to unplug the device from the USB port.

## TinyGPU-ML 2x2x8 Demo Build

The demo target uses a 2x2 PE array with `TILE_K=8`. The checked timing report
meets the 27 MHz board clock with zero setup/hold violations and reports a
48.397 MHz Fmax. Place-and-route uses 86% of logic and 77% of DSP resources, so
the configuration should remain frozen for the first board demonstration.

Generate a portable project with Gowin Shell instead of reusing the checked
`tinygpu_v3_20k.gprj`, which was produced on another workstation:

```bash
cd neorv32-setups/gowineda/tang-nano-20k
gw_sh create_project.tcl \
  --project-name tinygpu_v3_20k_local \
  --project-path .
```

The script copies the NEORV32 VHDL and TinyGPU SystemVerilog sources into the
generated project, enables `IO_TINYGPU_EN`, selects SystemVerilog 2017, and
applies the 27 MHz `tinygpu_20k.sdc` clock constraint.
After synthesis, confirm that the hierarchy contains four `tinygpu_pe`
instances and that both setup and hold violated endpoint counts are zero.
