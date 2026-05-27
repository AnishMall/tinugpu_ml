# TinyGPU-ML on Tang Nano 20K – V1

## Version 1

1. Initial setup made in `neorv32_test_setup_bootloader.vhd`.
2. Adjusted clock to 27 MHz and enabled the processor peripheral `IO_TINYGPU_EN`.
3. For detailed synthesis and PnR results, refer to the [`tinugpu_ml/gowin_reports_v3_20k`](tinugpu_ml/gowin_reports_v3_20k) folder.
4. This V1 configuration uses a reduced 2×2×8 TinyGPU tile (`TILE_M = 2`, `TILE_N = 2`, `TILE_K = 8`), downscaled from the original 4×4×16 configuration to fit the Tang Nano 20K resource budget without altering the overall pipeline structure.
