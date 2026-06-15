# =============================================
# TinyGPU-ML cocotb Makefile
# Simulator: Verilator + Coverage
# =============================================

RTL_DIR = ../rtl/core/tinygpu_ml

VERILOG_SOURCES = \
    $(RTL_DIR)/tinygpu_pkg.sv \
    $(RTL_DIR)/tinygpu_shared_mul.sv \
    $(RTL_DIR)/tinygpu_pe.sv \
    $(RTL_DIR)/tinygpu_array4x4.sv \
    $(RTL_DIR)/tinygpu_spm.sv \
    $(RTL_DIR)/tinygpu_mem_arbiter.sv \
    $(RTL_DIR)/tinygpu_im2col_loader.sv \
    $(RTL_DIR)/tinygpu_epilogue_shared.sv \
    $(RTL_DIR)/tinygpu_epilogue.sv \
    $(RTL_DIR)/tinygpu_dma.sv \
    $(RTL_DIR)/tinygpu_vec_alu.sv \
    $(RTL_DIR)/tinygpu_cmd_ctrl.sv \
    $(RTL_DIR)/tinygpu_counters.sv \
    $(RTL_DIR)/tinygpu_regs.sv \
    $(RTL_DIR)/tinygpu_top.sv

TOPLEVEL      = tinygpu_top
MODULE        = test_tinygpu
SIM           = verilator

COMPILE_ARGS += --coverage
EXTRA_ARGS   += --language 1800-2017 -Wno-fatal

include $(shell cocotb-config --makefiles)/Makefile.sim

coverage:
	@echo "Generating coverage report..."
	@mkdir -p coverage_annotated
	verilator_coverage --annotate coverage_annotated coverage.dat
	@echo "Coverage report written to coverage_annotated/"
	@echo ""
	@echo "Top uncovered files:"
	@for f in coverage_annotated/*.sv; do \
		count=$$(grep -c '%00' "$$f" 2>/dev/null || echo 0); \
		printf "  %5d uncovered lines: %s\n" $$count $$(basename $$f); \
	done | sort -rn