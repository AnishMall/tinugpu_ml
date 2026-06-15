// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop___024root
constexpr CData/*0:0*/ Vtop___024root::tinygpu_top__DOT__ENABLE_CONV;
constexpr CData/*0:0*/ Vtop___024root::tinygpu_top__DOT__u_regs__DOT__ENABLE_CONV;
constexpr CData/*7:0*/ Vtop___024root::tinygpu_top__DOT__u_regs__DOT__REG_CTRL;
constexpr CData/*7:0*/ Vtop___024root::tinygpu_top__DOT__u_regs__DOT__REG_STATUS;
constexpr CData/*7:0*/ Vtop___024root::tinygpu_top__DOT__u_regs__DOT__REG_CMD_ADDR;
constexpr CData/*7:0*/ Vtop___024root::tinygpu_top__DOT__u_regs__DOT__REG_DIRECT_OP;
constexpr CData/*7:0*/ Vtop___024root::tinygpu_top__DOT__u_regs__DOT__REG_SRC0_ADDR;
constexpr CData/*7:0*/ Vtop___024root::tinygpu_top__DOT__u_regs__DOT__REG_SRC1_ADDR;
constexpr CData/*7:0*/ Vtop___024root::tinygpu_top__DOT__u_regs__DOT__REG_BIAS_ADDR;
constexpr CData/*7:0*/ Vtop___024root::tinygpu_top__DOT__u_regs__DOT__REG_DST_ADDR;
constexpr CData/*7:0*/ Vtop___024root::tinygpu_top__DOT__u_regs__DOT__REG_DIM_M;
constexpr CData/*7:0*/ Vtop___024root::tinygpu_top__DOT__u_regs__DOT__REG_DIM_N;
constexpr CData/*7:0*/ Vtop___024root::tinygpu_top__DOT__u_regs__DOT__REG_DIM_K;
constexpr CData/*7:0*/ Vtop___024root::tinygpu_top__DOT__u_regs__DOT__REG_STRIDE0;
constexpr CData/*7:0*/ Vtop___024root::tinygpu_top__DOT__u_regs__DOT__REG_STRIDE1;
constexpr CData/*7:0*/ Vtop___024root::tinygpu_top__DOT__u_regs__DOT__REG_STRIDE_DST;
constexpr CData/*7:0*/ Vtop___024root::tinygpu_top__DOT__u_regs__DOT__REG_FLAGS;
constexpr CData/*7:0*/ Vtop___024root::tinygpu_top__DOT__u_regs__DOT__REG_SCALE;
constexpr CData/*7:0*/ Vtop___024root::tinygpu_top__DOT__u_regs__DOT__REG_SHIFT_ZP;
constexpr CData/*7:0*/ Vtop___024root::tinygpu_top__DOT__u_regs__DOT__REG_CYCLE_COUNT;
constexpr CData/*7:0*/ Vtop___024root::tinygpu_top__DOT__u_regs__DOT__REG_ACTIVE_CNT;
constexpr CData/*7:0*/ Vtop___024root::tinygpu_top__DOT__u_regs__DOT__REG_STALL_CNT;
constexpr CData/*7:0*/ Vtop___024root::tinygpu_top__DOT__u_regs__DOT__REG_CMD_COUNT;
constexpr CData/*7:0*/ Vtop___024root::tinygpu_top__DOT__u_regs__DOT__REG_IRQ_STATUS;
constexpr CData/*7:0*/ Vtop___024root::tinygpu_top__DOT__u_regs__DOT__REG_CONV_IN_HW;
constexpr CData/*7:0*/ Vtop___024root::tinygpu_top__DOT__u_regs__DOT__REG_CONV_CHAN;
constexpr CData/*7:0*/ Vtop___024root::tinygpu_top__DOT__u_regs__DOT__REG_CONV_CFG;
constexpr CData/*7:0*/ Vtop___024root::tinygpu_top__DOT__u_regs__DOT__REG_CAPS;
constexpr CData/*0:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__ENABLE_CONV;
constexpr CData/*1:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__DMA_OP_LOAD_I8;
constexpr CData/*1:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__DMA_OP_STORE_I32;
constexpr CData/*1:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__DMA_OP_STORE_I8;
constexpr CData/*4:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__DESC_WORDS_BASE;
constexpr CData/*4:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__DESC_WORDS_CONV;
constexpr CData/*1:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__SPM_REGION_A;
constexpr CData/*1:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__SPM_REGION_B;
constexpr CData/*1:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__SPM_REGION_C;
constexpr CData/*1:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__REGION_A;
constexpr CData/*1:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__REGION_B;
constexpr CData/*1:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__REGION_C;
constexpr CData/*2:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__CLIENT_DMA;
constexpr CData/*2:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__CLIENT_DESC;
constexpr CData/*2:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__CLIENT_CONV;
constexpr CData/*2:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__CLIENT_VEC;
constexpr CData/*2:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__CLIENT_BIAS;
constexpr CData/*1:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__DMA_OP_LOAD_I8;
constexpr CData/*1:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__DMA_OP_STORE_I32;
constexpr CData/*1:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__DMA_OP_STORE_I8;
constexpr SData/*15:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__TILE_M_U16;
constexpr SData/*15:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__TILE_N_U16;
constexpr SData/*15:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__TILE_K_U16;
constexpr IData/*31:0*/ Vtop___024root::tinygpu_top__DOT__ADDR_W;
constexpr IData/*31:0*/ Vtop___024root::tinygpu_top__DOT__DATA_W;
constexpr IData/*31:0*/ Vtop___024root::tinygpu_top__DOT__u_regs__DOT__CAPS_VALUE;
constexpr IData/*31:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__TILE_M_SHIFT;
constexpr IData/*31:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__TILE_K_SHIFT;
constexpr IData/*31:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__A_BYTES;
constexpr IData/*31:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__B_BYTES;
constexpr IData/*31:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__C_BYTES;
constexpr IData/*31:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__A_CAPACITY;
constexpr IData/*31:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__B_CAPACITY;
constexpr IData/*31:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__C_WORDS;
constexpr IData/*31:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__C_INDEX_W;
constexpr IData/*31:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__CLAMP_MIN_DFLT;
constexpr IData/*31:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__CLAMP_MAX_DFLT;
constexpr IData/*31:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__EPI_ROW_W;
constexpr IData/*31:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__EPI_COL_W;
constexpr IData/*31:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__A_W;
constexpr IData/*31:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__B_W;
constexpr IData/*31:0*/ Vtop___024root::tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__OUT_W;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop___024root::~Vtop___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
