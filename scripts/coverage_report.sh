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

canonical_info="build/coverage_top.info"
if [[ -f build/cov/diff.dat ]]; then
  verilator_coverage --write-info "$canonical_info" build/cov/diff.dat >/dev/null

  canonical_line_summary=$(awk '
    BEGIN { rtl=0; total=0; covered=0; }
    /^SF:/ { rtl = ($0 ~ /^SF:rtl\//); next; }
    /^DA:/ && rtl {
      split($0, parts, ",");
      total++;
      if (parts[2] + 0 > 0) covered++;
    }
    END {
      pct = (total ? (100.0 * covered / total) : 0.0);
      printf "%d %d %.2f", covered, total, pct;
    }
  ' "$canonical_info")
  read -r canonical_line_covered canonical_line_total canonical_line_pct <<<"$canonical_line_summary"
  printf 'Canonical top RTL line coverage: %.2f%% (%d/%d)\n' \
    "$canonical_line_pct" "$canonical_line_covered" "$canonical_line_total"

  canonical_branch_summary=$(awk '
    BEGIN { rtl=0; total=0; covered=0; }
    /^SF:/ { rtl = ($0 ~ /^SF:rtl\//); next; }
    /^BRDA:/ && rtl {
      split($0, parts, ",");
      total++;
      if (parts[4] != "-" && parts[4] + 0 > 0) covered++;
    }
    END {
      pct = (total ? (100.0 * covered / total) : 0.0);
      printf "%d %d %.2f", covered, total, pct;
    }
  ' "$canonical_info")
  read -r canonical_branch_covered canonical_branch_total canonical_branch_pct <<<"$canonical_branch_summary"
  printf 'Canonical top RTL logical branch coverage: %.2f%% (%d/%d)\n' \
    "$canonical_branch_pct" "$canonical_branch_covered" "$canonical_branch_total"

  canonical_ctrl_summary=$(awk '
    BEGIN { ctrl=0; total=0; covered=0; }
    /^SF:/ { ctrl = ($0 == "SF:rtl/tinygpu_cmd_ctrl.sv"); next; }
    /^BRDA:/ && ctrl {
      split($0, parts, ",");
      total++;
      if (parts[4] != "-" && parts[4] + 0 > 0) covered++;
    }
    END {
      pct = (total ? (100.0 * covered / total) : 0.0);
      printf "%d %d %.2f", covered, total, pct;
    }
  ' "$canonical_info")
  read -r canonical_ctrl_covered canonical_ctrl_total canonical_ctrl_pct <<<"$canonical_ctrl_summary"
  printf 'Canonical controller logical branch coverage: %.2f%% (%d/%d)\n' \
    "$canonical_ctrl_pct" "$canonical_ctrl_covered" "$canonical_ctrl_total"
fi

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
printf 'Merged multi-binary RTL line coverage: %.2f%% (%d/%d)\n' \
  "$rtl_pct" "$rtl_covered" "$rtl_total"

rtl_branch_summary=$(awk '
  BEGIN { rtl=0; total=0; covered=0; }
  /^SF:/ {
    rtl = ($0 ~ /^SF:rtl\//);
    next;
  }
  /^BRDA:/ && rtl {
    split($0, parts, ",");
    total++;
    if (parts[4] != "-" && parts[4] + 0 > 0)
      covered++;
  }
  END {
    pct = (total ? (100.0 * covered / total) : 0.0);
    printf "%d %d %.2f", covered, total, pct;
  }
' build/coverage.info)

read -r rtl_branch_covered rtl_branch_total rtl_branch_pct <<<"$rtl_branch_summary"
printf 'Merged multi-binary RTL branch coverage: %.2f%% (%d/%d)\n' \
  "$rtl_branch_pct" "$rtl_branch_covered" "$rtl_branch_total"

waiver_file="verification/branch_waivers.txt"
if [[ -f "$waiver_file" ]]; then
  adjusted_branch_summary=$(awk -v waiver_file="$waiver_file" '
    BEGIN {
      rtl=0; total=0; covered=0; waived_total=0; waived_covered=0;
      while ((getline line < waiver_file) > 0) {
        sub(/[[:space:]].*$/, "", line);
        if (line == "" || line ~ /^#/)
          continue;
        split(line, parts, ":");
        waive[parts[1] ":" parts[2]] = 1;
      }
      close(waiver_file);
    }
    /^SF:/ {
      file=$0;
      sub(/^SF:/, "", file);
      rtl = (file ~ /^rtl\//);
      next;
    }
    /^BRDA:/ && rtl {
      split($0, parts, ",");
      line_no = parts[1];
      sub(/^BRDA:/, "", line_no);
      key = file ":" line_no;
      is_covered = (parts[4] != "-" && parts[4] + 0 > 0);
      if (key in waive) {
        waived_total++;
        if (is_covered)
          waived_covered++;
      } else {
        total++;
        if (is_covered)
          covered++;
      }
    }
    END {
      pct = (total ? (100.0 * covered / total) : 0.0);
      printf "%d %d %.2f %d %d", covered, total, pct, waived_covered, waived_total;
    }
  ' build/coverage.info)

  read -r adjusted_branch_covered adjusted_branch_total adjusted_branch_pct \
    waived_branch_covered waived_branch_total <<<"$adjusted_branch_summary"
  printf 'Merged waiver-adjusted RTL branch coverage: %.2f%% (%d/%d), waived architecturally impossible branches: %d/%d\n' \
    "$adjusted_branch_pct" "$adjusted_branch_covered" "$adjusted_branch_total" \
    "$waived_branch_covered" "$waived_branch_total"
fi

logic_branch_summary=$(awk '
  BEGIN { rtl=0; skip=0; total=0; covered=0; }
  /^SF:/ {
    rtl = ($0 ~ /^SF:rtl\//);
    skip = ($0 ~ /^SF:rtl\/tinygpu_dma\.sv$/) ||
           ($0 ~ /^SF:rtl\/tinygpu_spm\.sv$/) ||
           ($0 ~ /^SF:rtl\/tinygpu_mem_arbiter\.sv$/);
    next;
  }
  /^BRDA:/ && rtl && !skip {
    split($0, parts, ",");
    total++;
    if (parts[4] != "-" && parts[4] + 0 > 0)
      covered++;
  }
  END {
    pct = (total ? (100.0 * covered / total) : 0.0);
    printf "%d %d %.2f", covered, total, pct;
  }
' build/coverage.info)

read -r logic_branch_covered logic_branch_total logic_branch_pct <<<"$logic_branch_summary"
printf 'Merged non-memory RTL branch coverage: %.2f%% (%d/%d)\n' \
  "$logic_branch_pct" "$logic_branch_covered" "$logic_branch_total"
echo "  excludes tinygpu_dma.sv, tinygpu_spm.sv, tinygpu_mem_arbiter.sv"

if [[ -f "$waiver_file" ]]; then
  adjusted_logic_branch_summary=$(awk -v waiver_file="$waiver_file" '
    BEGIN {
      rtl=0; skip=0; total=0; covered=0; waived_total=0; waived_covered=0;
      while ((getline line < waiver_file) > 0) {
        sub(/[[:space:]].*$/, "", line);
        if (line == "" || line ~ /^#/)
          continue;
        split(line, parts, ":");
        waive[parts[1] ":" parts[2]] = 1;
      }
      close(waiver_file);
    }
    /^SF:/ {
      file=$0;
      sub(/^SF:/, "", file);
      rtl = (file ~ /^rtl\//);
      skip = (file == "rtl/tinygpu_dma.sv") ||
             (file == "rtl/tinygpu_spm.sv") ||
             (file == "rtl/tinygpu_mem_arbiter.sv");
      next;
    }
    /^BRDA:/ && rtl && !skip {
      split($0, parts, ",");
      line_no = parts[1];
      sub(/^BRDA:/, "", line_no);
      key = file ":" line_no;
      is_covered = (parts[4] != "-" && parts[4] + 0 > 0);
      if (key in waive) {
        waived_total++;
        if (is_covered)
          waived_covered++;
      } else {
        total++;
        if (is_covered)
          covered++;
      }
    }
    END {
      pct = (total ? (100.0 * covered / total) : 0.0);
      printf "%d %d %.2f %d %d", covered, total, pct, waived_covered, waived_total;
    }
  ' build/coverage.info)

  read -r adjusted_logic_covered adjusted_logic_total adjusted_logic_pct \
    waived_logic_covered waived_logic_total <<<"$adjusted_logic_branch_summary"
  printf 'Merged waiver-adjusted non-memory RTL branch coverage: %.2f%% (%d/%d), waived architecturally impossible branches: %d/%d\n' \
    "$adjusted_logic_pct" "$adjusted_logic_covered" "$adjusted_logic_total" \
    "$waived_logic_covered" "$waived_logic_total"
fi

if [[ -f build/coverage.prev.info ]]; then
  prev_branch_summary=$(awk '
    BEGIN { rtl=0; total=0; covered=0; }
    /^SF:/ {
      rtl = ($0 ~ /^SF:rtl\//);
      next;
    }
    /^BRDA:/ && rtl {
      split($0, parts, ",");
      total++;
      if (parts[4] != "-" && parts[4] + 0 > 0)
        covered++;
    }
    END {
      pct = (total ? (100.0 * covered / total) : 0.0);
      printf "%d %d %.2f", covered, total, pct;
    }
  ' build/coverage.prev.info)

  read -r prev_branch_covered prev_branch_total prev_branch_pct <<<"$prev_branch_summary"
  awk -v curr="$rtl_branch_pct" -v prev="$prev_branch_pct" \
    'BEGIN { printf "Merged RTL branch coverage delta vs previous report: %+0.2f points\n", curr - prev; }'
fi

echo "Merged RTL branch coverage by file:"
awk '
  /^SF:rtl\// {
    file=$0;
    sub(/^SF:rtl\//, "", file);
    total[file]=0;
    covered[file]=0;
    current=file;
    next;
  }
  /^SF:/ {
    current="";
    next;
  }
  /^BRDA:/ && current != "" {
    split($0, parts, ",");
    total[current]++;
    if (parts[4] != "-" && parts[4] + 0 > 0)
      covered[current]++;
  }
  END {
    for (file in total) {
      pct = (total[file] ? (100.0 * covered[file] / total[file]) : 0.0);
      printf "  %6.2f%% (%5d/%5d)  %s\n", pct, covered[file], total[file], file;
    }
  }
' build/coverage.info | sort -n

echo "RTL uncovered files (%00 markers):"
for file in build/coverage/tinygpu_*.sv; do
  count=$(( $( (rg -o '%00' "$file" || true) | wc -l | tr -d ' ' ) ))
  printf '  %5d  %s\n' "$count" "$(basename "$file")"
done | sort -nr

cp build/coverage.info build/coverage.prev.info
