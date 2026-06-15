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
verilator -Wall -Wno-fatal -Wno-UNUSEDPARAM --cc --exe --build --coverage \
  --top-module tinygpu_top \
  -Mdir build/obj_diff \
  "${RTL_FILES[@]}" verification/verilator_diff.cpp

build/obj_diff/Vtinygpu_top +verilator+coverage+file+build/cov/diff.dat
