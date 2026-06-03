#!/usr/bin/env bash

set -e

cd "$(dirname "$0")"
GHDL="${GHDL:-ghdl}"

# GHDL build directory
rm -rf build
mkdir -p build

# Compile IMEM image package FIRST (dependency order)
$GHDL -a --std=08 --workdir=build --ieee=standard --work=neorv32 \
  ../rtl/core/neorv32_imem_image.vhd

# GHDL import
find ../rtl/core ../sim -type f -name '*.vhd' \
  ! -path '*/tinygpu_ml/*' \
  ! -name 'neorv32_tinygpu.vhd' \
  ! -name 'neorv32_imem_image.vhd' -exec \
  "$GHDL" -i --std=08 --workdir=build --ieee=standard --work=neorv32 {} \;

# GHDL analyze
$GHDL -m --work=neorv32 --workdir=build --std=08 neorv32_tb

# GHDL run parameters
if [ $# -eq 0 ]; then
  GHDL_RUN_ARGS="--stop-time=10ms -gDUAL_CORE_EN=false -gTRACE_LOG_EN=false"
else
  GHDL_RUN_ARGS="$*"
fi
echo "GHDL simulation run parameters: $GHDL_RUN_ARGS";

# prepare GHDL run
runcmd="$GHDL -r --work=neorv32 --workdir=build --std=08 neorv32_tb \
  --max-stack-alloc=0 \
  --ieee-asserts=disable \
  --assert-level=error $GHDL_RUN_ARGS"

# run simulation
if [ -n "$GHDL_NOLOG" ]; then
  eval "$runcmd"
else
  eval "$runcmd" 2>&1 | tee ghdl.log
fi
