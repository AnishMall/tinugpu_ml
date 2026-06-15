#!/usr/bin/env bash
set -euo pipefail

ROOT_DIR=$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)
cd "$ROOT_DIR"
mkdir -p build
mkdir -p build/cov

mapfile_compat() {
  while IFS= read -r file; do
    RTL_FILES+=("rtl/$file")
  done < rtl/files.f
}

RTL_FILES=()
mapfile_compat

if [[ $# -gt 0 ]]; then
  TB_NAMES=("$@")
else
  TB_NAMES=(
    tb_tinygpu_top_directed_tb
    tb_tinygpu_top_error_paths_tb
    tb_tinygpu_top_controller_cov_tb
    tb_tinygpu_regs_extended_tb
    tb_tinygpu_top_requant_tb
    tb_tinygpu_top_conv2d_corners_tb
    tb_tinygpu_dma_lane_and_error_tb
    tb_tinygpu_im2col_loader_resume_tb
    tb_tinygpu_top_demo_tb
  )
fi

for tb in "${TB_NAMES[@]}"; do
  tb_src="tb/${tb}.sv"
  obj_dir="build/obj_cov_${tb}"
  cov_file="build/cov/${tb}.dat"
  if [[ ! -f "$tb_src" ]]; then
    echo "missing directed coverage bench: $tb_src" >&2
    exit 1
  fi

  verilator -Wall -Wno-fatal -Wno-UNUSEDPARAM --binary --timing --coverage \
    --top-module "$tb" \
    -Mdir "$obj_dir" \
    "${RTL_FILES[@]}" "$tb_src"

  "${obj_dir}/V${tb}" "+verilator+coverage+file+${cov_file}"
done
