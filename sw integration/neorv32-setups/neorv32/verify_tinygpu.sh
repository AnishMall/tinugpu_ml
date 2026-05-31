#!/bin/bash
echo "========================================"
echo "TinyGPU Integration Verification"
echo "========================================"
echo ""
errors=0

echo -n "Check 1: Memory master signals declared... "
if grep -q "signal tinygpu_mem_req : bus_req_t;" rtl/core/neorv32_top.vhd && \
   grep -q "signal tinygpu_mem_rsp : bus_rsp_t;" rtl/core/neorv32_top.vhd; then
    echo "✓ PASS"
else
    echo "✗ FAIL"
    errors=$((errors + 1))
fi

echo -n "Check 2: Intermediate sys2a signals... "
if grep -q "sys2a_req" rtl/core/neorv32_top.vhd && \
   grep -q "sys2a_rsp" rtl/core/neorv32_top.vhd; then
    echo "✓ PASS"
else
    echo "✗ FAIL"
    errors=$((errors + 1))
fi

echo -n "Check 3: TinyGPU bus switch instantiated... "
if grep -q "neorv32_tinygpu_bus_switch_inst" rtl/core/neorv32_top.vhd; then
    echo "✓ PASS"
else
    echo "✗ FAIL"
    errors=$((errors + 1))
fi

echo -n "Check 4: Memory master ports connected... "
if grep -q "mem_req_o.*tinygpu_mem_req" rtl/core/neorv32_top.vhd && \
   grep -q "mem_rdata_i.*tinygpu_mem_rsp" rtl/core/neorv32_top.vhd; then
    echo "✓ PASS"
else
    echo "✗ FAIL"
    errors=$((errors + 1))
fi

echo -n "Check 5: TinyGPU RTL files present... "
if [ -f rtl/core/tinygpu_ml/tinygpu_top.sv ] && \
   [ -f rtl/core/tinygpu_ml/tinygpu_pkg.sv ] && \
   [ -f rtl/core/tinygpu_ml/tinygpu_regs.vhd ]; then
    echo "✓ PASS"
else
    echo "✗ FAIL"
    errors=$((errors + 1))
fi

echo ""
echo "========================================"
if [ $errors -eq 0 ]; then
    echo "✓ ALL CHECKS PASSED!"
else
    echo "✗ $errors CHECK(S) FAILED"
fi
echo "========================================"
