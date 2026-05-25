IVERILOG ?= iverilog
VVP ?= vvp
BUILD_DIR ?= build
TB_DIR ?= tb

RTL_SRCS := \
	tinygpu_pkg.sv \
	tinygpu_pe.sv \
	tinygpu_array4x4.sv \
	tinygpu_spm.sv \
	tinygpu_epilogue.sv \
	tinygpu_dma.sv \
	tinygpu_vec_alu.sv \
	tinygpu_cmd_ctrl.sv \
	tinygpu_counters.sv \
	tinygpu_regs.sv \
	tinygpu_top.sv

TB_NAMES := \
	tb_tinygpu_pe_tb \
	tb_tinygpu_array4x4_tb \
	tb_tinygpu_dma_tb \
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

$(BUILD_DIR)/%.vvp: $(TB_DIR)/%.sv | $(BUILD_DIR)
	$(IVERILOG) -g2012 -Wall -o $@ -s $* $(RTL_SRCS) $<
