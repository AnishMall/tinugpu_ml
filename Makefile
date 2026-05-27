IVERILOG ?= iverilog
VVP ?= vvp
BUILD_DIR ?= build

RTL_SRCS := \
	rtl/tinygpu_pkg.sv \
	rtl/tinygpu_shared_mul.sv \
	rtl/tinygpu_pe.sv \
	rtl/tinygpu_array4x4.sv \
	rtl/tinygpu_spm.sv \
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
	tb_tinygpu_epilogue_tb \
	tb_tinygpu_gemm_tile_tb \
	tb_tinygpu_regs_tb \
	tb_tinygpu_counters_tb \
	tb_tinygpu_cmd_ctrl_idle_tb \
	tb_tinygpu_top_gemm_tb \
	tb_tinygpu_top_edge_tiles_tb \
	tb_tinygpu_top_dst_int8_tb \
	tb_tinygpu_top_bias_relu_tb \
	tb_tinygpu_top_clamp_tb \
	tb_tinygpu_top_vector_tb \
	tb_tinygpu_top_directed_tb \
	tb_tinygpu_top_random_latency_tb

TB_VVPS := $(addprefix $(BUILD_DIR)/,$(addsuffix .vvp,$(TB_NAMES)))

.PHONY: all test clean list

all: test

test: $(TB_VVPS)
	@set -e; \
	for tb in $(TB_NAMES); do \
		echo "[run] $$tb"; \
		$(VVP) $(BUILD_DIR)/$$tb.vvp; \
	done

list:
	@printf "%s\n" $(TB_NAMES)

clean:
	rm -rf $(BUILD_DIR)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/%.vvp: tb/%.sv | $(BUILD_DIR)
	$(IVERILOG) -g2012 -Wall -o $@ -s $* $(RTL_SRCS) $<
