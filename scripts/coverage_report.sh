#!/usr/bin/env bash
set -euo pipefail

ROOT_DIR=$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)
cd "$ROOT_DIR"

bash scripts/run_verilator_diff.sh
bash scripts/run_verilator_directed_cov.sh

mkdir -p build/coverage
mkdir -p build/logs

shopt -s nullglob
cov_files=(build/cov/*.dat)
shopt -u nullglob

if [[ ${#cov_files[@]} -eq 0 ]]; then
  echo "coverage data files missing" >&2
  exit 1
fi

verilator_coverage --annotate build/coverage --write-info build/coverage.info \
  "${cov_files[@]}" > build/logs/verilator_coverage_annotate.log

rtl_summary=$(awk '
  BEGIN { total=0; covered=0; }
  /^[ %~][0-9][0-9][0-9][0-9][0-9][0-9]/ {
    total++;
    if (substr($0,2,6) != "000000")
      covered++;
  }
  END {
    pct = (total ? (100.0 * covered / total) : 0.0);
    printf "%d %d %.2f", covered, total, pct;
  }
' build/coverage/tinygpu_*.sv)

read -r rtl_covered rtl_total rtl_pct <<<"$rtl_summary"
printf 'RTL-only line coverage: %.2f%% (%d/%d)\n' "$rtl_pct" "$rtl_covered" "$rtl_total"

echo "RTL uncovered files (%00 markers):"
for file in build/coverage/tinygpu_*.sv; do
  count=$(( $( (rg -o '%00' "$file" || true) | wc -l | tr -d ' ' ) ))
  printf '  %5d  %s\n' "$count" "$(basename "$file")"
done | sort -nr
