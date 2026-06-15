#!/usr/bin/env bash
set -euo pipefail

ROOT_DIR=$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)
cd "$ROOT_DIR"

bash scripts/run_verilator_diff.sh

if [[ ! -d build/coverage ]]; then
  echo "coverage directory missing" >&2
  exit 1
fi

echo "Top uncovered files (%00 markers):"
for file in build/coverage/*.sv; do
  count=$(( $( (rg -o '%00' "$file" || true) | wc -l | tr -d ' ' ) ))
  printf '  %5d  %s\n' "$count" "$(basename "$file")"
done | sort -nr
