IVERILOG ?= iverilog
VVP ?= vvp
BUILD_DIR ?= build

RTL_SRCS := \
	rtl/tinygpu_pkg.sv \
	rtl/tinygpu_shared_mul.sv \
	rtl/tinygpu_pe.sv \
	rtl/tinygpu_array4x4.sv \
	rtl/tinygpu_spm.sv \
	rtl/tinygpu_mem_arbiter.sv \
	rtl/tinygpu_im2col_loader.sv \
	rtl/tinygpu_epilogue_shared.sv \
	rtl/tinygpu_epilogue.sv \
	rtl/tinygpu_dma.sv \
	rtl/tinygpu_vec_alu.sv \
	rtl/tinygpu_cmd_ctrl.sv \
	rtl/tinygpu_counters.sv \
	rtl/tinygpu_regs.sv \
	rtl/tinygpu_top.sv

TB_NAMES := \
	tb_tinygpu_pe_tb \
	tb_tinygpu_array4x4_tb \
	tb_tinygpu_dma_tb \
	tb_tinygpu_dma_lane_and_error_tb \
	tb_tinygpu_dma_branch_tb \
	tb_tinygpu_im2col_loader_tb \
	tb_tinygpu_im2col_loader_resume_tb \
	tb_tinygpu_im2col_branch_tb \
	tb_tinygpu_epilogue_tb \
	tb_tinygpu_epilogue_branch_tb \
	tb_tinygpu_gemm_tile_tb \
	tb_tinygpu_regs_tb \
	tb_tinygpu_regs_extended_tb \
	tb_tinygpu_regs_branch_tb \
	tb_tinygpu_counters_tb \
	tb_tinygpu_mem_arbiter_branch_tb \
	tb_tinygpu_cmd_ctrl_idle_tb \
	tb_tinygpu_top_gemm_tb \
	tb_tinygpu_top_edge_tiles_tb \
	tb_tinygpu_top_dst_int8_tb \
	tb_tinygpu_top_bias_relu_tb \
	tb_tinygpu_top_clamp_tb \
	tb_tinygpu_top_conv2d_tb \
	tb_tinygpu_top_conv2d_corners_tb \
	tb_tinygpu_top_branch_cov_tb \
	tb_tinygpu_top_controller_cov_tb \
	tb_tinygpu_top_error_paths_tb \
	tb_tinygpu_top_requant_tb \
	tb_tinygpu_top_demo_tb \
	tb_tinygpu_top_vector_tb \
	tb_tinygpu_top_directed_tb \
	tb_tinygpu_top_random_latency_tb

TB_VVPS := $(addprefix $(BUILD_DIR)/,$(addsuffix .vvp,$(TB_NAMES)))

.PHONY: all test lint verilator-diff verilator-directed-cov formal sync-rtl check-rtl-sync clean list demo-rtl demo-golden demo-sw coverage-report

all: test

test: $(TB_VVPS)
	@set -e; \
	for tb in $(TB_NAMES); do \
		echo "[run] $$tb"; \
		$(VVP) $(BUILD_DIR)/$$tb.vvp; \
	done

list:
	@printf "%s\n" $(TB_NAMES)

lint:
	verilator --lint-only --timing -Wall -Wno-fatal -Wno-UNUSEDPARAM \
	  --top-module tinygpu_top $(RTL_SRCS)

verilator-diff:
	bash scripts/run_verilator_diff.sh

verilator-directed-cov:
	bash scripts/run_verilator_directed_cov.sh

coverage-report:
	bash scripts/coverage_report.sh

formal:
	sby -f formal/tinygpu.sby

sync-rtl:
	bash scripts/sync_tinygpu_rtl.sh --update

check-rtl-sync:
	bash scripts/sync_tinygpu_rtl.sh --check

clean:
	rm -rf $(BUILD_DIR)

demo-rtl: $(BUILD_DIR)/tb_tinygpu_top_demo_tb.vvp
	$(VVP) $(BUILD_DIR)/tb_tinygpu_top_demo_tb.vvp

demo-golden:
	python3 verification/demo_golden.py

demo-sw:
	@set -e; \
	swroot='sw integration/neorv32-setups/neorv32'; \
	echo "TinyGPU-ML SW/MMIO demo (canonical 4x4x16)"; \
	$(MAKE) -C "$$swroot/sw/example/demo_tinygpu" sim_ghdl_safe >/dev/null; \
	grep 'Software integration result' "$$swroot/sim/ghdl.log"

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/%.vvp: tb/%.sv $(RTL_SRCS) | $(BUILD_DIR)
	$(IVERILOG) -g2012 -Wall -o $@ -s $* $(RTL_SRCS) $<
