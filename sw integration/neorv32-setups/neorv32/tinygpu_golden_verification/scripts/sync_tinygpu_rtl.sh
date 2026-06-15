#!/usr/bin/env bash
set -euo pipefail

ROOT_DIR=$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)
SOURCE_DIR="$ROOT_DIR/rtl"
MIRRORS=(
  "$ROOT_DIR/neorv32-setups/neorv32/rtl/core/tinygpu_ml"
  "$ROOT_DIR/sw integration/neorv32-setups/neorv32/rtl/core/tinygpu_ml"
)

mapfile_compat() {
  while IFS= read -r line; do
    RTL_FILES+=("$line")
  done < "$SOURCE_DIR/files.f"
}

RTL_FILES=()
mapfile_compat
MODE=${1:---check}

case "$MODE" in
  --update)
    for mirror in "${MIRRORS[@]}"; do
      mkdir -p "$mirror"
      for file in "${RTL_FILES[@]}"; do
        cp "$SOURCE_DIR/$file" "$mirror/$file"
      done
      cp "$SOURCE_DIR/files.f" "$mirror/files.f"
    done
    ;;
  --check)
    for mirror in "${MIRRORS[@]}"; do
      for file in "${RTL_FILES[@]}" files.f; do
        if ! cmp -s "$SOURCE_DIR/$file" "$mirror/$file"; then
          echo "RTL mirror mismatch: $mirror/$file" >&2
          exit 1
        fi
      done
    done
    ;;
  *)
    echo "usage: $0 [--check|--update]" >&2
    exit 2
    ;;
esac
