#!/usr/bin/env bash

set -euo pipefail

script_dir="$(cd "$(dirname "$0")" && pwd)"
src_root="$(cd "$script_dir/.." && pwd)"
work_root="${WORK_ROOT:-/private/tmp/tinygpu_neorv32_verilator_work}"

if ! command -v verilator >/dev/null 2>&1; then
  echo "error: verilator not found on PATH" >&2
  echo "install Verilator first, then rerun this script" >&2
  exit 1
fi

OBJ_DIR="${OBJ_DIR:-obj_dir}"

rm -rf "$work_root"
mkdir -p "$work_root"
ln -s "$src_root/rtl" "$work_root/rtl"
mkdir -p "$work_root/sim"
ln -s "$src_root/sim/tb_tinygpu.cpp" "$work_root/sim/tb_tinygpu.cpp"

cd "$work_root"
rm -rf "$OBJ_DIR"

verilator -Wall --Wno-fatal --cc --trace \
  --language 1800-2017 \
  -O3 \
  -Mdir "$OBJ_DIR" \
  rtl/core/tinygpu_ml/tinygpu_pkg.sv \
  rtl/core/tinygpu_ml/tinygpu_spm.sv \
  rtl/core/tinygpu_ml/tinygpu_dma.sv \
  rtl/core/tinygpu_ml/tinygpu_array4x4.sv \
  rtl/core/tinygpu_ml/tinygpu_vec_alu.sv \
  rtl/core/tinygpu_ml/tinygpu_epilogue.sv \
  rtl/core/tinygpu_ml/tinygpu_regs.sv \
  rtl/core/tinygpu_ml/tinygpu_cmd_ctrl.sv \
  rtl/core/tinygpu_ml/tinygpu_counters.sv \
  rtl/core/tinygpu_ml/tinygpu_pe.sv \
  rtl/core/tinygpu_ml/tinygpu_top.sv \
  --top-module tinygpu_top \
  --exe sim/tb_tinygpu.cpp

make -C "$OBJ_DIR" -f Vtinygpu_top.mk
"./$OBJ_DIR/Vtinygpu_top"
