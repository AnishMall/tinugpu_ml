// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___eval_triggers_vec__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_3__read_linear_byte;
    CData/*7:0*/ tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_2__read_linear_byte;
    CData/*7:0*/ tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_1__read_linear_byte;
    CData/*7:0*/ tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_0__read_linear_byte;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__oldv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__oldv = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__newv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__newv = 0;
    CData/*1:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__wstrb = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__oldv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__oldv = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__newv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__newv = 0;
    CData/*1:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__wstrb = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__oldv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__oldv = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__newv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__newv = 0;
    CData/*1:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__wstrb = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__oldv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__oldv = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__newv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__newv = 0;
    CData/*1:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__wstrb = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__oldv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__oldv = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__newv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__newv = 0;
    CData/*1:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__wstrb = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__oldv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__oldv = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__newv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__newv = 0;
    CData/*1:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__wstrb = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__oldv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__oldv = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__newv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__newv = 0;
    CData/*3:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__wstrb = 0;
    CData/*1:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__region;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__region = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__addr;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__addr = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__bank;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__bank = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__offset;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__offset = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__word_index;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__word_index = 0;
    CData/*1:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__region;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__region = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__addr;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__addr = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__bank;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__bank = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__offset;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__offset = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__word_index;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__word_index = 0;
    CData/*1:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__region;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__region = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__addr;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__addr = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__bank;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__bank = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__offset;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__offset = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__word_index;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__word_index = 0;
    CData/*1:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__region;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__region = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__addr;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__addr = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__bank;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__bank = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__offset;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__offset = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__word_index;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__word_index = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x_in;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x_in = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__bias_in;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__bias_in = 0;
    CData/*0:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__valid_elem;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__valid_elem = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__flags_in;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__flags_in = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    __VdfgRegularize_h6e95ff9d_0_2 = 0;
    SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_10;
    __VdfgRegularize_h6e95ff9d_0_10 = 0;
    SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_11;
    __VdfgRegularize_h6e95ff9d_0_11 = 0;
    SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_12;
    __VdfgRegularize_h6e95ff9d_0_12 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_17;
    __VdfgRegularize_h6e95ff9d_0_17 = 0;
    // Body
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_bias_regs = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_cmd_n = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_store_cmd = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_cmd_n = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_raw = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_post = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i32 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i32;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8;
    vlSelfRef.tinygpu_top__DOT__mem_rdata = vlSelfRef.mem_rdata;
    vlSelfRef.tinygpu_top__DOT__mem_ready = vlSelfRef.mem_ready;
    vlSelfRef.tinygpu_top__DOT__mem_rvalid = vlSelfRef.mem_rvalid;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__base_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__stride_bytes 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_base 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__last_elem 
        = ((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q)) 
           & (3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_dma_cmd = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__busy = 1U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__busy = 1U;
    vlSelfRef.tinygpu_top__DOT__mem_req = vlSelfRef.tinygpu_top__DOT__mem_cmd_valid_q;
    vlSelfRef.tinygpu_top__DOT__reg_cmd_addr = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_addr_o;
    vlSelfRef.tinygpu_top__DOT__reg_opcode = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__opcode_o;
    vlSelfRef.tinygpu_top__DOT__reg_src0_addr = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src0_addr_o;
    vlSelfRef.tinygpu_top__DOT__reg_src1_addr = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src1_addr_o;
    vlSelfRef.tinygpu_top__DOT__reg_bias_addr = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__bias_addr_o;
    vlSelfRef.tinygpu_top__DOT__reg_dst_addr = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dst_addr_o;
    vlSelfRef.tinygpu_top__DOT__reg_dim_m = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_m_o;
    vlSelfRef.tinygpu_top__DOT__reg_dim_n = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_n_o;
    vlSelfRef.tinygpu_top__DOT__reg_dim_k = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_k_o;
    vlSelfRef.tinygpu_top__DOT__reg_stride0 = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride0_o;
    vlSelfRef.tinygpu_top__DOT__reg_stride1 = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride1_o;
    vlSelfRef.tinygpu_top__DOT__reg_stride_dst = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride_dst_o;
    vlSelfRef.tinygpu_top__DOT__reg_flags = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__flags_o;
    vlSelfRef.tinygpu_top__DOT__reg_scale = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__scale_o;
    vlSelfRef.tinygpu_top__DOT__reg_shift = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shift_o;
    vlSelfRef.tinygpu_top__DOT__reg_zero_point = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__zero_point_o;
    vlSelfRef.tinygpu_top__DOT__reg_conv_in_hw = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_in_hw_o;
    vlSelfRef.tinygpu_top__DOT__reg_conv_channels = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_channels_o;
    vlSelfRef.tinygpu_top__DOT__reg_conv_cfg = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_cfg_o;
    vlSelfRef.tinygpu_top__DOT__mem_we = vlSelfRef.tinygpu_top__DOT__mem_cmd_we_q;
    vlSelfRef.tinygpu_top__DOT__mem_addr = vlSelfRef.tinygpu_top__DOT__mem_cmd_addr_q;
    vlSelfRef.tinygpu_top__DOT__mem_wdata = vlSelfRef.tinygpu_top__DOT__mem_cmd_wdata_q;
    vlSelfRef.tinygpu_top__DOT__mem_wstrb = vlSelfRef.tinygpu_top__DOT__mem_cmd_wstrb_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw_q;
    if (((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q 
          >> 1U) & VL_GTS_III(32, 0U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post = 0U;
    }
    if ((4U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)) {
        vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__17__x 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post;
        vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__17__Vfuncout 
            = (VL_GTS_III(32, 0xffffff80U, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__17__x)
                ? 0xffffff80U : (VL_LTS_III(32, 0x0000007fU, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__17__x)
                                  ? 0x0000007fU : vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__17__x));
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post 
            = vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__17__Vfuncout;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_wstrb 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_wstrb;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_out_x 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_out_x;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_out_y 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_out_y;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_cmd_done = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__done = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_busy 
        = ((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
           & ((0x16U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
              & (0x17U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_active 
        = ((7U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
           | ((0x0eU == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
              | ((0x0fU == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
                 | (0x10U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_product 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__product_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_ic 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_ic;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_kw 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_kw;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_kh 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_kh;
    vlSelfRef.tinygpu_top__DOT__reg_irq_enable = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_enable_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__shift 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_wr_en = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wstrb = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wr_en = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__tile_out_x 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_index 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_index;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_busy 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__busy;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_store_base_addr 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_q 
           + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_q);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_ic 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_kw 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_kh 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__tile_out_y 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_wdata 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__sample_q;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_o 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__zero_point 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i32 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_i32;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i8 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_i8;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_rd_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_rd_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_a 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__opcode 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_we_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_we;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_wdata_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_wdata;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_wstrb_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_wstrb;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_we_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_we;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_wdata_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_wdata;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_wstrb_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_wstrb;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scale 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__scale_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_x_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__y_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_y_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_we = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__load_lane_sel 
        = (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wstrb = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wdata = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_req = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_req = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_addr 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr_q 
           + ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q) 
              << 2U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_req = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_we = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_req = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_req = 1U;
            }
        }
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_req = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wstrb = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_addr 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q 
           + ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q) 
              << 2U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wdata = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_start 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_start;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__bias 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__aligned_read_addr 
        = (0xfffffffcU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__aligned_write_addr 
        = (0xfffffffcU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_valid 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_valid;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__flags 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_rdata 
        = vlSelfRef.tinygpu_top__DOT__mem_rdata_stage_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_base 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_stride_bytes 
        = ((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q))
            ? (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q)
            : 1U);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_m_tiles 
        = ((0x0000ffffU & ((IData)(4U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q))) 
           < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q));
    vlSelfRef.tinygpu_top__DOT__ctrl_illegal_opcode 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__illegal_opcode;
    vlSelfRef.tinygpu_top__DOT__ctrl_shape_error = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shape_error;
    vlSelfRef.tinygpu_top__DOT__ctrl_memory_error = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__memory_error;
    vlSelfRef.tinygpu_top__DOT__ctrl_unsupported_format 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unsupported_format;
    vlSelfRef.tinygpu_top__DOT__cycle_count_last = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cycle_count_o;
    vlSelfRef.tinygpu_top__DOT__active_count_last = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_count_o;
    vlSelfRef.tinygpu_top__DOT__stall_count_last = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_count_o;
    vlSelfRef.tinygpu_top__DOT__cmd_count_total = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cmd_count_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[0U][0U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[0U][1U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[0U][2U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[0U][3U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[1U][0U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[1U][1U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[1U][2U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[1U][3U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[2U][0U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[2U][1U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[2U][2U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[2U][3U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[3U][0U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[3U][1U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[3U][2U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[3U][3U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__busy = 1U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_words_expected 
        = ((7U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))
            ? 0x12U : 0x0eU);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_done 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__done;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__array_clear_acc = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__error = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_busy 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_done 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__done;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__done = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_o 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_addr 
        = (0x000001ffU & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_q) 
                          + (0x000001f0U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_q) 
                                            << 4U))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q;
    vlSelfRef.tinygpu_top__DOT__clk = vlSelfRef.clk;
    vlSelfRef.tinygpu_top__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_start 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_start_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_conv_opcode 
        = (7U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_start = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__last_elem 
        = (((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q))) 
            >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows_q)) 
           & ((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q))) 
              >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols_q)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__use_dst_i8 
        = (1U & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q 
                 >> 4U));
    __VdfgRegularize_h6e95ff9d_0_10 = (0x0000ffffU 
                                       & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q) 
                                          - (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_mode_o) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_enable_o));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__array_mac_en = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_flags_ok 
        = (1U & (~ (3U == (3U & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q 
                                 >> 4U)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok 
        = ((7U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)) 
           | ((5U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)) 
              | ((4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)) 
                 | ((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)) 
                    | ((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)) 
                       | ((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)) 
                          | (6U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9 = ((0U 
                                                 != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q)) 
                                                & (0U 
                                                   != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q)));
    vlSelfRef.tinygpu_top__DOT__mmio_valid = vlSelfRef.mmio_valid;
    vlSelfRef.tinygpu_top__DOT__mmio_we = vlSelfRef.mmio_we;
    vlSelfRef.tinygpu_top__DOT__mmio_wstrb = vlSelfRef.mmio_wstrb;
    vlSelfRef.tinygpu_top__DOT__reg_direct_mode = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_mode_o;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = ((3U 
                                                 == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)) 
                                                | (4U 
                                                   == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)));
    vlSelfRef.tinygpu_top__DOT__mmio_addr = vlSelfRef.mmio_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_output_c 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_channels_q 
           >> 0x00000010U);
    vlSelfRef.tinygpu_top__DOT__mem_stage_ready = (1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.tinygpu_top__DOT__mem_cmd_valid_q) 
                                                       | (IData)(vlSelfRef.tinygpu_top__DOT__mem_read_pending_q))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_rvalid 
        = vlSelfRef.tinygpu_top__DOT__mem_rvalid_stage_q;
    __VdfgRegularize_h6e95ff9d_0_12 = (0x0000ffffU 
                                       & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q) 
                                          - (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q)));
    vlSelfRef.tinygpu_top__DOT__mmio_wdata = vlSelfRef.mmio_wdata;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk4__DOT__r = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_stride_bytes 
        = ((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q))
            ? (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q)
            : 1U);
    if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wstrb = 1U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wr_en = 1U;
            }
        }
    }
    if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__busy = 0U;
            if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__error = 1U;
            }
            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__done = 1U;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_wr_en = 1U;
                if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__sample_valid_q)))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_wdata = 0U;
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q) 
                         >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__busy = 0U;
        }
    }
    if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__busy = 0U;
        }
        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_we = 1U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_req = 1U;
                if ((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wstrb = 0x0fU;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wdata 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__store_word_q;
                } else if ((0U == (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wstrb = 1U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wdata 
                        = (0x000000ffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__store_word_q);
                } else if ((1U == (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wstrb = 2U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wdata 
                        = (0x0000ff00U & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__store_word_q 
                                          << 8U));
                } else if ((2U == (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wstrb = 4U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wdata 
                        = (0x00ff0000U & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__store_word_q 
                                          << 0x00000010U));
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wstrb = 8U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wdata 
                        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__store_word_q 
                           << 0x00000018U);
                }
            }
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_o 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_q;
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q)))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__busy = 0U;
            }
            if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_we = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_req = 1U;
            }
        }
        if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_o 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_q;
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                  >> 4U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_bias_regs = 1U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__array_clear_acc = 1U;
                    }
                }
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__array_mac_en = 1U;
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q)))) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_req = 1U;
                        }
                    }
                }
            }
        }
        if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_cmd_n = 2U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_cmd_n = 0U;
                        if ((1U & ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                                   & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q))))) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_dma_cmd = 1U;
                        }
                        if ((1U & (~ ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                                      & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q)))))) {
                            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) {
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_start = 1U;
                            }
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        if ((1U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)) {
                            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_q)))) {
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_req = 1U;
                            }
                        }
                    }
                }
            }
            if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_raw = 1U;
                    }
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_post = 1U;
                    }
                }
            }
        } else if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_cmd_n = 1U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_cmd_n = 0U;
                    if ((1U & ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                               & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q))))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_dma_cmd = 1U;
                    }
                    if ((1U & (~ ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                                  & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q)))))) {
                        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_start = 1U;
                        }
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_cmd_n = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_cmd_n = 0U;
                if ((1U & ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                           & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q))))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_dma_cmd = 1U;
                }
                if ((1U & (~ ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                              & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q)))))) {
                    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_start = 1U;
                    }
                }
            }
        }
    }
    if ((0x00000010U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_store_cmd = 1U;
                    }
                }
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_we = 1U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wstrb 
                            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_q;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wdata 
                            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_q;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_req = 1U;
                    }
                }
            }
            if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_d 
                            = (0x0000ffffU & ((IData)(4U) 
                                              + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q)));
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_d = 0U;
                    }
                }
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_cmd_done = 1U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__done = 1U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__busy = 0U;
                }
            } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_d 
                        = (0x0000ffffU & ((IData)(4U) 
                                          + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q)));
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__busy = 0U;
                    }
                }
            }
        }
        if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_we = 0U;
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q)))) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_req = 1U;
                        }
                    } else if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q)))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_req = 1U;
                    }
                }
            }
        }
    }
    while (VL_GTS_III(32, 4U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk4__DOT__r)) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask 
            = (((~ ((IData)(1U) << (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk4__DOT__r))) 
                & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask)) 
               | (0x0fU & (((0x0000ffffU & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q) 
                                            + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk4__DOT__r)) 
                            < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q)) 
                           << (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk4__DOT__r))));
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_addr[(3U 
                                                                & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk4__DOT__r)] 
            = (0x000000ffU & (VL_SHIFTL_III(8,32,32, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk4__DOT__r, 4U) 
                              + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q)));
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_vec[(3U 
                                                            & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk4__DOT__r)] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_data
            [(3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk4__DOT__r)];
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk4__DOT__r 
            = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk4__DOT__r);
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_stride_h 
        = (0x0000000fU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q 
                          >> 0x0000000cU));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_stride_w 
        = (0x0000000fU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q 
                          >> 8U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_c 
        = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_channels_q);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_bias 
        = (9U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_vec 
        = ((0x0dU == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
           | ((0x0cU == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
              | (0x12U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_desc 
        = (2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_h 
        = (0x0000000fU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q 
                          >> 4U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_h 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_in_hw_q 
           >> 0x00000010U);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_pad_h 
        = (0x0000000fU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q 
                          >> 0x00000014U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_w 
        = (0x0000000fU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_pad_w 
        = (0x0000000fU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q 
                          >> 0x00000010U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_w 
        = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_in_hw_q);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_conv 
        = (0x15U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_busy_status 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__busy;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_busy_status 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__busy;
    vlSelfRef.mem_req = vlSelfRef.tinygpu_top__DOT__mem_req;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr 
        = vlSelfRef.tinygpu_top__DOT__reg_cmd_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode 
        = vlSelfRef.tinygpu_top__DOT__reg_opcode;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr 
        = vlSelfRef.tinygpu_top__DOT__reg_src0_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr 
        = vlSelfRef.tinygpu_top__DOT__reg_src1_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr 
        = vlSelfRef.tinygpu_top__DOT__reg_bias_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr 
        = vlSelfRef.tinygpu_top__DOT__reg_dst_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M 
        = vlSelfRef.tinygpu_top__DOT__reg_dim_m;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__N 
        = vlSelfRef.tinygpu_top__DOT__reg_dim_n;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K 
        = vlSelfRef.tinygpu_top__DOT__reg_dim_k;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0 
        = vlSelfRef.tinygpu_top__DOT__reg_stride0;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1 
        = vlSelfRef.tinygpu_top__DOT__reg_stride1;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst 
        = vlSelfRef.tinygpu_top__DOT__reg_stride_dst;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags 
        = vlSelfRef.tinygpu_top__DOT__reg_flags;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__scale 
        = vlSelfRef.tinygpu_top__DOT__reg_scale;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shift 
        = vlSelfRef.tinygpu_top__DOT__reg_shift;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point 
        = vlSelfRef.tinygpu_top__DOT__reg_zero_point;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_in_hw 
        = vlSelfRef.tinygpu_top__DOT__reg_conv_in_hw;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_channels 
        = vlSelfRef.tinygpu_top__DOT__reg_conv_channels;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg 
        = vlSelfRef.tinygpu_top__DOT__reg_conv_cfg;
    vlSelfRef.mem_we = vlSelfRef.tinygpu_top__DOT__mem_we;
    vlSelfRef.mem_addr = vlSelfRef.tinygpu_top__DOT__mem_addr;
    vlSelfRef.mem_wdata = vlSelfRef.tinygpu_top__DOT__mem_wdata;
    vlSelfRef.mem_wstrb = vlSelfRef.tinygpu_top__DOT__mem_wstrb;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_q;
    vlSelfRef.tinygpu_top__DOT__cnt_cmd_done = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_cmd_done;
    vlSelfRef.tinygpu_top__DOT__ctrl_done = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__done;
    vlSelfRef.tinygpu_top__DOT__cnt_busy = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_busy;
    vlSelfRef.tinygpu_top__DOT__cnt_active = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_active;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_product 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_product;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_product 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_product;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_wr_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_wr_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wstrb 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wstrb;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wr_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wr_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_cmd_n = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_wdata 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_wdata;
    vlSelfRef.tinygpu_top__DOT__reg_irq_pending = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__zero_point_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__zero_point) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__zero_point));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_rd_data 
        = (VL_GTS_III(32, 0x00000010U, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_rd_addr))
            ? vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
           [(0x0000000fU & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_rd_addr))]
            : 0U);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_a 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_a;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_b 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scale;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_i) 
                              >> 7U)))) << 8U) | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_i));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__y_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__y_i) 
                              >> 7U)))) << 8U) | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__y_i));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_we_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_we;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_wstrb_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wstrb;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_wdata_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wdata;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_req_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_req;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_req_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_req;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_addr_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_req_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_req;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_we 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_we;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_req 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_req;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_req 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_req;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wstrb 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wstrb;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_addr_mux 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wdata 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wdata;
    if ((8U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)) {
        if (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q)))) {
            vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__18__x 
                = (VL_SHIFTRS_III(32,32,16, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_scaled_q, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q)) 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_ext);
            vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__18__Vfuncout 
                = (VL_LTS_III(32, 0x0000007fU, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__18__x)
                    ? 0x0000007fU : (VL_GTS_III(32, 0xffffff80U, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__18__x)
                                      ? 0x00000080U
                                      : (0x000000ffU 
                                         & vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__18__x)));
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8 
                = vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__18__Vfuncout;
        } else {
            vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__19__x 
                = (VL_SHIFTL_III(32,32,16, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_scaled_q, 
                                 (0x0000ffffU & (- (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q)))) 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_ext);
            vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__19__Vfuncout 
                = (VL_LTS_III(32, 0x0000007fU, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__19__x)
                    ? 0x0000007fU : (VL_GTS_III(32, 0xffffff80U, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__19__x)
                                      ? 0x00000080U
                                      : (0x000000ffU 
                                         & vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__19__x)));
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8 
                = vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__19__Vfuncout;
        }
    } else {
        vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__20__x 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post_q;
        vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__20__Vfuncout 
            = (VL_LTS_III(32, 0x0000007fU, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__20__x)
                ? 0x0000007fU : (VL_GTS_III(32, 0xffffff80U, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__20__x)
                                  ? 0x00000080U : (0x000000ffU 
                                                   & vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__20__x)));
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8 
            = vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__20__Vfuncout;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_addr = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_en = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_addr = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_rdata_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_rdata;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_elem_addr 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q 
           + ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_stride_bytes) 
              * (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_elem_addr 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q 
           + ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_stride_bytes) 
              * (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q)));
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__illegal_opcode_i 
        = vlSelfRef.tinygpu_top__DOT__ctrl_illegal_opcode;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shape_error_i 
        = vlSelfRef.tinygpu_top__DOT__ctrl_shape_error;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__memory_error_i 
        = vlSelfRef.tinygpu_top__DOT__ctrl_memory_error;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__unsupported_fmt_i 
        = vlSelfRef.tinygpu_top__DOT__ctrl_unsupported_format;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cycle_count_i 
        = vlSelfRef.tinygpu_top__DOT__cycle_count_last;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__active_count_i 
        = vlSelfRef.tinygpu_top__DOT__active_count_last;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stall_count_i 
        = vlSelfRef.tinygpu_top__DOT__stall_count_last;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_count_i 
        = vlSelfRef.tinygpu_top__DOT__cmd_count_total;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_tile 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile;
    vlSelfRef.tinygpu_top__DOT__ctrl_busy = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__busy;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_start = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__array_clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_error 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__error;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_busy 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_busy;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_done 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_done;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_done 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_done;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_done 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__done;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_region 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_done 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__clk = vlSelfRef.tinygpu_top__DOT__clk;
    vlSelfRef.tinygpu_top__DOT__u_counters__DOT__clk 
        = vlSelfRef.tinygpu_top__DOT__clk;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clk 
        = vlSelfRef.tinygpu_top__DOT__clk;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__rst_n 
        = vlSelfRef.tinygpu_top__DOT__rst_n;
    vlSelfRef.tinygpu_top__DOT__u_counters__DOT__rst_n 
        = vlSelfRef.tinygpu_top__DOT__rst_n;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n 
        = vlSelfRef.tinygpu_top__DOT__rst_n;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_start;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_error 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__start 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_start;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_cmd_n = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_data = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_stride_bytes 
        = ((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q))
            ? (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q)
            : ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__use_dst_i8)
                ? 1U : 4U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m 
        = ((4U <= (IData)(__VdfgRegularize_h6e95ff9d_0_10))
            ? 4U : (IData)(__VdfgRegularize_h6e95ff9d_0_10));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__array_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_illegal_opcode = 0U;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_valid 
        = vlSelfRef.tinygpu_top__DOT__mmio_valid;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_we 
        = vlSelfRef.tinygpu_top__DOT__mmio_we;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb 
        = vlSelfRef.tinygpu_top__DOT__mmio_wstrb;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__direct_mode 
        = vlSelfRef.tinygpu_top__DOT__reg_direct_mode;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_needs_y 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_addr 
        = vlSelfRef.tinygpu_top__DOT__mmio_addr;
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_conv_opcode) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_eff 
            = ((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q))
                ? (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q)
                : (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_output_c));
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_eff 
            = (0x0000ffffU & ((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q))
                               ? (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q)
                               : ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__use_dst_i8)
                                   ? (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_output_c)
                                   : VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_output_c), 2U))));
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_eff 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_eff 
            = (0x0000ffffU & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q));
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_ready 
        = vlSelfRef.tinygpu_top__DOT__mem_stage_ready;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_rvalid_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_rvalid;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k 
        = ((0x0010U <= (IData)(__VdfgRegularize_h6e95ff9d_0_12))
            ? 0x0010U : (IData)(__VdfgRegularize_h6e95ff9d_0_12));
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata 
        = vlSelfRef.tinygpu_top__DOT__mmio_wdata;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_vec;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_mask 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__row_mask 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__stride_h 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_stride_h;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__stride_w 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_stride_w;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_c 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_c;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_n_tiles 
        = ((0x0000ffffU & ((IData)(4U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q))) 
           < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n));
    __VdfgRegularize_h6e95ff9d_0_11 = (0x0000ffffU 
                                       & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n) 
                                          - (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk5__DOT__c = 0U;
    if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_addr 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__aligned_write_addr;
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q) 
                         >> 1U)))) {
        if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_addr 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__aligned_read_addr;
        }
    }
    if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_cmd_n 
                            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_store_base_addr;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_cmd_n 
                            = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__use_dst_i8)
                                ? 3U : 2U);
                    }
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_valid) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_en = 1U;
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_addr 
                                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_index;
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_data 
                                = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__use_dst_i8)
                                    ? (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i8)
                                    : vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i32);
                        }
                        if ((1U & ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_busy)) 
                                   & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_done))))) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_start = 1U;
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_cmd_n 
                        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_q 
                           + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_q);
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_cmd_n = 0U;
                }
            } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_cmd_n 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_q 
                       + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q));
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_cmd_n = 0U;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok)))) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_illegal_opcode = 1U;
                        }
                    }
                }
            }
        }
    }
    if ((0x00000010U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_d 
                            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_out_x;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_d 
                            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_out_y;
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                         >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_d = 0U;
                }
            } else if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_d = 0U;
            }
        }
    }
    while (VL_GTS_III(32, 4U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk5__DOT__c)) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask 
            = (((~ ((IData)(1U) << (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk5__DOT__c))) 
                & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask)) 
               | (0x0fU & (((0x0000ffffU & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q) 
                                            + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk5__DOT__c)) 
                            < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n)) 
                           << (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk5__DOT__c))));
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_addr[(3U 
                                                                & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk5__DOT__c)] 
            = (0x000000ffU & (VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q), 2U) 
                              + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk5__DOT__c));
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_vec[(3U 
                                                            & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk5__DOT__c)] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_data
            [(3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk5__DOT__c)];
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk5__DOT__c 
            = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk5__DOT__c);
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_row_stride 
        = ((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q))
            ? (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q)
            : ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_c) 
               * (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_w)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kernel_h 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_h;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_h 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_h;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__pad_h 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_pad_h;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16 = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_pad_h) 
                                                  << 1U) 
                                                 + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_h));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kernel_w 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_w;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_k_calc 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_h) 
           * ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_c) 
              * (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_w)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__pad_w 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_pad_w;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_w 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_w;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15 = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_pad_w) 
                                                  << 1U) 
                                                 + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_w));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_client_sel 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_desc)
            ? 1U : ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_conv)
                     ? 2U : ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_vec)
                              ? 3U : (4U & (- (IData)((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_bias)))))));
    vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cmd_done_i 
        = vlSelfRef.tinygpu_top__DOT__cnt_cmd_done;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_done_i 
        = vlSelfRef.tinygpu_top__DOT__ctrl_done;
    vlSelfRef.tinygpu_top__DOT__u_counters__DOT__busy_i 
        = vlSelfRef.tinygpu_top__DOT__cnt_busy;
    vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_i 
        = vlSelfRef.tinygpu_top__DOT__cnt_active;
    vlSelfRef.tinygpu_top__DOT__irq = ((IData)(vlSelfRef.tinygpu_top__DOT__reg_irq_enable) 
                                       & (IData)(vlSelfRef.tinygpu_top__DOT__reg_irq_pending));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__x_shifted 
        = ((8U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__flags)
            ? (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__shift)))
                ? (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__zero_point_ext 
                   + VL_SHIFTRS_III(32,32,16, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_elem_q, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__shift)))
                : (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__zero_point_ext 
                   + VL_SHIFTL_III(32,32,16, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_elem_q, 
                                   (0x0000ffffU & (- (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__shift))))))
            : vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_q);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_rd_data 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_rd_data;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_b 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_b;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__z_o = 0U;
    if ((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__opcode))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__z_o 
            = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_ext 
               + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__y_ext);
    } else if ((4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__opcode))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__z_o 
            = VL_MULS_III(32, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_ext, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__y_ext);
    } else if ((5U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__opcode))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__z_o 
            = (VL_GTS_III(32, 0U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_ext)
                ? 0U : vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_ext);
    } else if ((6U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__opcode))) {
        vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__29__x 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_ext;
        vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__29__Vfuncout 
            = (VL_GTS_III(32, 0xffffff80U, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__29__x)
                ? 0xffffff80U : (VL_LTS_III(32, 0x0000007fU, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__29__x)
                                  ? 0x0000007fU : vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__29__x));
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__z_o 
            = vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__29__Vfuncout;
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__z_o = 0U;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_we_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_we;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_req_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_req;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_req_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_req;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_wstrb_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wstrb;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_addr_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_addr_mux;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_wdata_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wdata;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_wr_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_wr_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__client_rdata_o 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_rdata_i;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_lane_sel 
        = (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_elem_addr);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_read_addr 
        = (0xfffffffcU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_elem_addr);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_lane_sel 
        = (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_elem_addr);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_read_addr 
        = (0xfffffffcU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_elem_addr);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_in 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_tile;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_busy_i 
        = vlSelfRef.tinygpu_top__DOT__ctrl_busy;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__start 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_start;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_scaled = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_start = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_region 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_region) 
           & (- (IData)((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_conv))))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__clk 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clk;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__clk 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clk;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__clk 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clk;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clk 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clk;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__clk 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clk;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clk 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clk;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__rst_n 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__rst_n 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rst_n 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__rst_n 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__rst_n 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__rst_n 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_memory_error = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_wr_data 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_data;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr_q 
           + ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_stride_bytes) 
              * (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_rows 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__unused_mmio_addr 
        = (1U & VL_REDXOR_32((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_addr 
                              >> 8U)));
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo 
        = (0x000000ffU & vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_addr);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_cmd_n = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_ready_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_ready;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_cmd_n = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_k_tiles 
        = ((0x0000ffffU & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q) 
                           + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k))) 
           < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_k 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k;
    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb))) {
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_op_next_w 
            = (0x000000ffU & vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__ctrl_mode_next_w 
            = (3U & (vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata 
                     >> 2U));
    } else {
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_op_next_w 
            = (0x000000ffU & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__opcode_o));
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__ctrl_mode_next_w 
            = (3U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7));
    }
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__wstrb 
        = (3U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb));
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__newv 
        = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata);
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__oldv 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_m_o;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__Vfuncout 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__oldv;
    if ((1U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__Vfuncout 
            = ((0xff00U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__Vfuncout)) 
               | (0x000000ffU & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__newv)));
    }
    if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__Vfuncout 
            = ((0x00ffU & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__Vfuncout)) 
               | (0x0000ff00U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__newv)));
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_m_next_w 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__wstrb 
        = (3U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb));
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__newv 
        = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata);
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__oldv 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_n_o;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__Vfuncout 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__oldv;
    if ((1U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__Vfuncout 
            = ((0xff00U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__Vfuncout)) 
               | (0x000000ffU & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__newv)));
    }
    if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__Vfuncout 
            = ((0x00ffU & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__Vfuncout)) 
               | (0x0000ff00U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__newv)));
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_n_next_w 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__wstrb 
        = (3U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb));
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__newv 
        = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata);
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__oldv 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_k_o;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__Vfuncout 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__oldv;
    if ((1U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__Vfuncout 
            = ((0xff00U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__Vfuncout)) 
               | (0x000000ffU & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__newv)));
    }
    if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__Vfuncout 
            = ((0x00ffU & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__Vfuncout)) 
               | (0x0000ff00U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__newv)));
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_k_next_w 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__wstrb 
        = (3U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb));
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__newv 
        = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata);
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__oldv 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride0_o;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__Vfuncout 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__oldv;
    if ((1U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__Vfuncout 
            = ((0xff00U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__Vfuncout)) 
               | (0x000000ffU & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__newv)));
    }
    if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__Vfuncout 
            = ((0x00ffU & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__Vfuncout)) 
               | (0x0000ff00U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__newv)));
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride0_next_w 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__wstrb 
        = (3U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb));
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__newv 
        = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata);
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__oldv 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride1_o;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__Vfuncout 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__oldv;
    if ((1U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__Vfuncout 
            = ((0xff00U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__Vfuncout)) 
               | (0x000000ffU & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__newv)));
    }
    if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__Vfuncout 
            = ((0x00ffU & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__Vfuncout)) 
               | (0x0000ff00U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__newv)));
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride1_next_w 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__wstrb 
        = (3U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb));
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__newv 
        = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata);
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__oldv 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride_dst_o;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__Vfuncout 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__oldv;
    if ((1U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__Vfuncout 
            = ((0xff00U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__Vfuncout)) 
               | (0x000000ffU & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__newv)));
    }
    if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__Vfuncout 
            = ((0x00ffU & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__Vfuncout)) 
               | (0x0000ff00U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__newv)));
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride_dst_next_w 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__wstrb 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__newv 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__oldv 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shift_o) 
            << 0x00000010U) | (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__zero_point_o));
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__oldv;
    if ((1U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout 
            = ((0xffffff00U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout) 
               | (0x000000ffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__newv));
    }
    if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout 
            = ((0xffff00ffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout) 
               | (0x0000ff00U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__newv));
    }
    if ((4U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout 
            = ((0xff00ffffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout) 
               | (0x00ff0000U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__newv));
    }
    if ((8U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout 
            = ((0x00ffffffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout) 
               | (0xff000000U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__newv));
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shiftzp_next_w 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk7__DOT__r = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_a 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_start)
            ? vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_a
            : vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post_q);
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_conv) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_wstrb 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_wstrb;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_wr_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_wr_en;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_addr;
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_wstrb 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wstrb;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_wr_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wr_en;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_addr;
    }
    if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_cmd_n 
                            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_eff;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_cmd_n 
                            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m;
                    }
                }
            }
        } else if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_cmd_n 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_eff;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_cmd_n 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k;
                }
            } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_cmd_n 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_cmd_n 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m;
            }
        }
    }
    if ((0x00000010U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        if ((8U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)) {
                            if ((1U & (~ ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_busy)) 
                                          & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_done)))))) {
                                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_done) {
                                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_scaled = 1U;
                                }
                            }
                            if ((1U & ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_busy)) 
                                       & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_done))))) {
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_start = 1U;
                            }
                        }
                    }
                }
            }
            if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_done) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_d 
                                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_ic;
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_d 
                                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_kw;
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_d 
                                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_kh;
                        }
                        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_q) {
                            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_error) {
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_d = 0U;
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_memory_error = 1U;
                            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_done) {
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_d = 0U;
                            }
                        } else {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_d = 1U;
                        }
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
                    } else {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_d = 0U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d = 0U;
                }
                if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
                }
            } else if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                if ((8U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
                }
            }
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_d = 0U;
                    }
                } else if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_d = 0U;
                }
            }
            if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_d = 0U;
                    }
                }
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d 
                            = (((0x0000ffffU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q))) 
                                < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k))
                                ? (0x0000ffffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q)))
                                : 0U);
                    }
                } else if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d = 0U;
                }
            } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d = 0U;
                }
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_d = 0U;
                if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d = 0U;
                }
            }
        }
        if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                               & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q))))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 1U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
                    } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
                    } else {
                        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_error) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_done) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                        }
                        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_error)))) {
                            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_done)))) {
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
                            }
                        }
                    }
                    if ((1U & (~ ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                                  & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q)))))) {
                        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 1U;
                        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_error) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_done) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                        }
                    }
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                }
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        if ((1U & (~ ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                                      & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q)))))) {
                            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)))) {
                                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_error) {
                                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_memory_error = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                } else {
                    if ((1U & ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                               & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q))))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 1U;
                    } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                    } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_error) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                    } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_done) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                    }
                    if ((1U & (~ ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                                  & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q)))))) {
                        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 1U;
                        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_error) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_done) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                        }
                    }
                }
                if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                    if ((1U & (~ ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                                  & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q)))))) {
                        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)))) {
                            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_error) {
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_memory_error = 1U;
                            }
                        }
                    }
                    if ((1U & ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                               & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q))))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
                    } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
                    } else if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_error)))) {
                        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_done)))) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
                        }
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                           & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q))))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 1U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
                } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
                } else {
                    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_error) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                    } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_done) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_error)))) {
                        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_done)))) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
                        }
                    }
                }
                if ((1U & (~ ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                              & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q)))))) {
                    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 1U;
                    } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_error) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                    } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_done) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)))) {
                        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_error) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_memory_error = 1U;
                        }
                    }
                }
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
            }
        } else {
            if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                }
                if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
                }
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
            }
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
        }
    }
    while (VL_GTS_III(32, 4U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk7__DOT__r)) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_data[(3U 
                                                                            & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk7__DOT__r)] 
            = (VL_GTS_III(32, 0x00000040U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_addr
                          [(3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk7__DOT__r)])
                ? vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_bank
               [(3U & VL_DIVS_III(32, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_addr
                                  [(3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk7__DOT__r)], (IData)(0x00000010U)))]
               [(0x0000000fU & VL_MODDIVS_III(32, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_addr
                                              [(3U 
                                                & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk7__DOT__r)], (IData)(0x00000010U)))]
                : 0U);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk7__DOT__r 
            = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk7__DOT__r);
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_b 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_start)
            ? vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_b
            : vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__scale_q);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[0U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[0U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[0U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[0U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[1U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[1U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[1U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[1U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[2U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[2U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[2U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[2U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[3U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[3U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[3U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en) 
                                                & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__row_mask));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en) 
                                                & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__row_mask) 
                                                   >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en) 
                                                & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__row_mask) 
                                                   >> 2U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en) 
                                                & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__row_mask) 
                                                   >> 3U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_ic 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_ic 
        = (((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_q))) 
            < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_c))
            ? (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_q)))
            : 0U);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n 
        = ((4U <= (IData)(__VdfgRegularize_h6e95ff9d_0_11))
            ? 4U : (IData)(__VdfgRegularize_h6e95ff9d_0_11));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_mask 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_vec;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_y 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_q) 
            + VL_MULS_III(32, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__stride_h), (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_y_q))) 
           - (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__pad_h));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_h_calc 
        = ((IData)(1U) + VL_SHIFTR_III(32,32,32, (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16 
                                                  - (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_h)), 
                                       (1U & (- (IData)(
                                                        (2U 
                                                         == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_stride_h)))))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_kw 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_kh 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_q;
    if (((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_q))) 
         >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_c))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_kw 
            = (((0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_q))) 
                < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kernel_w))
                ? (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_q)))
                : 0U);
        if (((0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_q))) 
             >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kernel_w))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_kh 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_q)));
        }
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_x 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_q) 
            + VL_MULS_III(32, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__stride_w), (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_q))) 
           - (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__pad_w));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_row_stride 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_row_stride;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_w_calc 
        = ((IData)(1U) + VL_SHIFTR_III(32,32,32, (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15 
                                                  - (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_w)), 
                                       (1U & (- (IData)(
                                                        (2U 
                                                         == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_stride_w)))))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_client_sel;
    vlSelfRef.irq = vlSelfRef.tinygpu_top__DOT__irq;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unused_c_rd_data 
        = (1U & VL_REDXOR_32(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_rd_data));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_a;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__z_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_addr_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__client_rdata_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_addr = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_start 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_start) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_start));
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__addr 
        = ((IData)(3U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_addr));
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__region 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_region;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__bank = 0U;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__offset = 0U;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__word_index = 0U;
    tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_0__read_linear_byte = 0U;
    if ((0U == (IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__region))) {
        __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__bank 
            = VL_SHIFTR_III(32,32,32, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__addr, 4U);
        __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__offset 
            = (0x0000000fU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__addr);
        if (((0x00000040U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__addr) 
             & (4U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__bank))) {
            tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_0__read_linear_byte 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_bank
                [(3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__bank)]
                [(0x0000000fU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__offset)];
        }
    } else if ((1U == (IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__region))) {
        __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__bank 
            = (3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__addr);
        __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__offset 
            = VL_SHIFTR_III(32,32,32, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__addr, 2U);
        if ((((0x00000040U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__addr) 
              & (4U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__bank)) 
             & (0x00000010U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__offset))) {
            tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_0__read_linear_byte 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_bank
                [(3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__bank)]
                [(0x0000000fU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__offset)];
        }
    } else if ((2U == (IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__region))) {
        __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__word_index 
            = VL_SHIFTR_III(32,32,32, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__addr, 2U);
        if ((0x00000010U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__word_index)) {
            tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_0__read_linear_byte 
                = (0x000000ffU & ((0U == (3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__addr))
                                   ? vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
                                  [(0x0000000fU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__word_index)]
                                   : ((1U == (3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__addr))
                                       ? (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
                                          [(0x0000000fU 
                                            & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__word_index)] 
                                          >> 8U) : 
                                      ((2U == (3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__addr))
                                        ? (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
                                           [(0x0000000fU 
                                             & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__word_index)] 
                                           >> 0x10U)
                                        : (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
                                           [(0x0000000fU 
                                             & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__word_index)] 
                                           >> 0x18U)))));
        }
    } else {
        tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_0__read_linear_byte = 0U;
    }
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__addr 
        = ((IData)(2U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_addr));
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__region 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_region;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__bank = 0U;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__offset = 0U;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__word_index = 0U;
    tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_1__read_linear_byte = 0U;
    if ((0U == (IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__region))) {
        __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__bank 
            = VL_SHIFTR_III(32,32,32, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__addr, 4U);
        __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__offset 
            = (0x0000000fU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__addr);
        if (((0x00000040U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__addr) 
             & (4U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__bank))) {
            tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_1__read_linear_byte 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_bank
                [(3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__bank)]
                [(0x0000000fU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__offset)];
        }
    } else if ((1U == (IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__region))) {
        __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__bank 
            = (3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__addr);
        __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__offset 
            = VL_SHIFTR_III(32,32,32, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__addr, 2U);
        if ((((0x00000040U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__addr) 
              & (4U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__bank)) 
             & (0x00000010U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__offset))) {
            tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_1__read_linear_byte 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_bank
                [(3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__bank)]
                [(0x0000000fU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__offset)];
        }
    } else if ((2U == (IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__region))) {
        __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__word_index 
            = VL_SHIFTR_III(32,32,32, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__addr, 2U);
        if ((0x00000010U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__word_index)) {
            tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_1__read_linear_byte 
                = (0x000000ffU & ((0U == (3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__addr))
                                   ? vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
                                  [(0x0000000fU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__word_index)]
                                   : ((1U == (3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__addr))
                                       ? (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
                                          [(0x0000000fU 
                                            & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__word_index)] 
                                          >> 8U) : 
                                      ((2U == (3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__addr))
                                        ? (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
                                           [(0x0000000fU 
                                             & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__word_index)] 
                                           >> 0x10U)
                                        : (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
                                           [(0x0000000fU 
                                             & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__word_index)] 
                                           >> 0x18U)))));
        }
    } else {
        tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_1__read_linear_byte = 0U;
    }
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__addr 
        = ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_addr));
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__region 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_region;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__bank = 0U;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__offset = 0U;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__word_index = 0U;
    tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_2__read_linear_byte = 0U;
    if ((0U == (IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__region))) {
        __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__bank 
            = VL_SHIFTR_III(32,32,32, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__addr, 4U);
        __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__offset 
            = (0x0000000fU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__addr);
        if (((0x00000040U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__addr) 
             & (4U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__bank))) {
            tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_2__read_linear_byte 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_bank
                [(3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__bank)]
                [(0x0000000fU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__offset)];
        }
    } else if ((1U == (IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__region))) {
        __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__bank 
            = (3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__addr);
        __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__offset 
            = VL_SHIFTR_III(32,32,32, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__addr, 2U);
        if ((((0x00000040U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__addr) 
              & (4U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__bank)) 
             & (0x00000010U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__offset))) {
            tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_2__read_linear_byte 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_bank
                [(3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__bank)]
                [(0x0000000fU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__offset)];
        }
    } else if ((2U == (IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__region))) {
        __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__word_index 
            = VL_SHIFTR_III(32,32,32, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__addr, 2U);
        if ((0x00000010U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__word_index)) {
            tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_2__read_linear_byte 
                = (0x000000ffU & ((0U == (3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__addr))
                                   ? vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
                                  [(0x0000000fU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__word_index)]
                                   : ((1U == (3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__addr))
                                       ? (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
                                          [(0x0000000fU 
                                            & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__word_index)] 
                                          >> 8U) : 
                                      ((2U == (3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__addr))
                                        ? (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
                                           [(0x0000000fU 
                                             & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__word_index)] 
                                           >> 0x10U)
                                        : (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
                                           [(0x0000000fU 
                                             & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__word_index)] 
                                           >> 0x18U)))));
        }
    } else {
        tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_2__read_linear_byte = 0U;
    }
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_addr;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__region 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_region;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__bank = 0U;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__offset = 0U;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__word_index = 0U;
    tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_3__read_linear_byte = 0U;
    if ((0U == (IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__region))) {
        __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__bank 
            = VL_SHIFTR_III(32,32,32, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__addr, 4U);
        __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__offset 
            = (0x0000000fU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__addr);
        if (((0x00000040U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__addr) 
             & (4U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__bank))) {
            tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_3__read_linear_byte 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_bank
                [(3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__bank)]
                [(0x0000000fU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__offset)];
        }
    } else if ((1U == (IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__region))) {
        __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__bank 
            = (3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__addr);
        __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__offset 
            = VL_SHIFTR_III(32,32,32, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__addr, 2U);
        if ((((0x00000040U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__addr) 
              & (4U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__bank)) 
             & (0x00000010U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__offset))) {
            tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_3__read_linear_byte 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_bank
                [(3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__bank)]
                [(0x0000000fU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__offset)];
        }
    } else if ((2U == (IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__region))) {
        __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__word_index 
            = VL_SHIFTR_III(32,32,32, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__addr, 2U);
        if ((0x00000010U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__word_index)) {
            tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_3__read_linear_byte 
                = (0x000000ffU & ((0U == (3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__addr))
                                   ? vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
                                  [(0x0000000fU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__word_index)]
                                   : ((1U == (3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__addr))
                                       ? (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
                                          [(0x0000000fU 
                                            & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__word_index)] 
                                          >> 8U) : 
                                      ((2U == (3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__addr))
                                        ? (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
                                           [(0x0000000fU 
                                             & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__word_index)] 
                                           >> 0x10U)
                                        : (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
                                           [(0x0000000fU 
                                             & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__word_index)] 
                                           >> 0x18U)))));
        }
    } else {
        tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_3__read_linear_byte = 0U;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_rdata 
        = ((((IData)(tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_0__read_linear_byte) 
             << 0x00000018U) | ((IData)(tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_1__read_linear_byte) 
                                << 0x00000010U)) | 
           (((IData)(tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_2__read_linear_byte) 
             << 8U) | (IData)(tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_3__read_linear_byte)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clk 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clk;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clk 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clk;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clk 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clk;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clk 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clk;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clk 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clk;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clk 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clk;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clk 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clk;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clk 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clk;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clk 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clk;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clk 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clk;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clk 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clk;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clk 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clk;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clk 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clk;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clk 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clk;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clk 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clk;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clk 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clk;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__rst_n;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__rst_n;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__rst_n;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__rst_n;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__rst_n;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__rst_n;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__rst_n;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__rst_n;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__rst_n;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__rst_n;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__rst_n;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__rst_n;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__rst_n;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__rst_n;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__rst_n;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__rst_n;
    vlSelfRef.tinygpu_top__DOT__cnt_stall = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_next = 0x0fU;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_next 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post_q;
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__use_dst_i8) {
        if ((0U == (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_next = 1U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_next 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8;
        } else if ((1U == (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_next = 2U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_next 
                = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8) 
                   << 8U);
        } else if ((2U == (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_next = 4U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_next 
                = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8) 
                   << 0x00000010U);
        } else {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_next = 8U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_next 
                = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8) 
                   << 0x00000018U);
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_aligned_addr 
            = (0xfffffffcU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr);
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_aligned_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_row 
        = ((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_q))) 
           >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_rows));
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata 
        = (((0x00000040U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))
             ? ((0x00000020U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))
                 ? ((- (IData)((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                         >> 3U))))) 
                    & (((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))
                         ? (0x011f1044U & ((- (IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))))) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                             >> 1U)))))))
                         : ((- (IData)((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))))) 
                            & (vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_cfg_o 
                               & (- (IData)((1U & (~ 
                                                   ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                    >> 1U)))))))) 
                       & (- (IData)((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                              >> 4U)))))))
                 : ((0x00000010U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))
                     ? ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))
                         ? ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))
                             ? ((- (IData)((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))))) 
                                & (vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_channels_o 
                                   & (- (IData)((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                     >> 1U)))))))
                             : ((- (IData)((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))))) 
                                & (vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_in_hw_o 
                                   & (- (IData)((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                     >> 1U))))))))
                         : ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))
                             ? ((- (IData)((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))))) 
                                & ((- (IData)((1U & 
                                               (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                   >> 1U))))) 
                                   & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_q)))
                             : ((- (IData)((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))))) 
                                & (vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_count_i 
                                   & (- (IData)((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                     >> 1U)))))))))
                     : ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))
                         ? ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))
                             ? ((- (IData)((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))))) 
                                & (vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stall_count_i 
                                   & (- (IData)((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                     >> 1U)))))))
                             : ((- (IData)((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))))) 
                                & (vlSelfRef.tinygpu_top__DOT__u_regs__DOT__active_count_i 
                                   & (- (IData)((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                     >> 1U))))))))
                         : ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))
                             ? ((- (IData)((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))))) 
                                & (vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cycle_count_i 
                                   & (- (IData)((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                     >> 1U)))))))
                             : ((- (IData)((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))))) 
                                & ((((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shift_o) 
                                     << 0x00000010U) 
                                    | (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__zero_point_o)) 
                                   & (- (IData)((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                     >> 1U)))))))))))
             : ((0x00000020U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))
                 ? ((0x00000010U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))
                     ? ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))
                         ? ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))
                             ? ((- (IData)((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))))) 
                                & (vlSelfRef.tinygpu_top__DOT__u_regs__DOT__scale_o 
                                   & (- (IData)((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                     >> 1U)))))))
                             : ((- (IData)((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))))) 
                                & (vlSelfRef.tinygpu_top__DOT__u_regs__DOT__flags_o 
                                   & (- (IData)((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                     >> 1U))))))))
                         : ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))
                             ? ((- (IData)((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))))) 
                                & ((- (IData)((1U & 
                                               (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                   >> 1U))))) 
                                   & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride_dst_o)))
                             : ((- (IData)((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))))) 
                                & ((- (IData)((1U & 
                                               (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                   >> 1U))))) 
                                   & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride1_o)))))
                     : ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))
                         ? ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))
                             ? ((- (IData)((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))))) 
                                & ((- (IData)((1U & 
                                               (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                   >> 1U))))) 
                                   & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride0_o)))
                             : ((- (IData)((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))))) 
                                & ((- (IData)((1U & 
                                               (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                   >> 1U))))) 
                                   & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_k_o))))
                         : ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))
                             ? ((- (IData)((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))))) 
                                & ((- (IData)((1U & 
                                               (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                   >> 1U))))) 
                                   & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_n_o)))
                             : ((- (IData)((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))))) 
                                & ((- (IData)((1U & 
                                               (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                   >> 1U))))) 
                                   & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_m_o))))))
                 : ((0x00000010U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))
                     ? ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))
                         ? ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))
                             ? ((- (IData)((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))))) 
                                & (vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dst_addr_o 
                                   & (- (IData)((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                     >> 1U)))))))
                             : ((- (IData)((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))))) 
                                & (vlSelfRef.tinygpu_top__DOT__u_regs__DOT__bias_addr_o 
                                   & (- (IData)((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                     >> 1U))))))))
                         : ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))
                             ? ((- (IData)((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))))) 
                                & (vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src1_addr_o 
                                   & (- (IData)((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                     >> 1U)))))))
                             : ((- (IData)((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))))) 
                                & (vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src0_addr_o 
                                   & (- (IData)((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                     >> 1U)))))))))
                     : ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))
                         ? ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))
                             ? ((- (IData)((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))))) 
                                & ((- (IData)((1U & 
                                               (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                   >> 1U))))) 
                                   & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__opcode_o)))
                             : ((- (IData)((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))))) 
                                & (vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_addr_o 
                                   & (- (IData)((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                     >> 1U))))))))
                         : ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))
                             ? ((- (IData)((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))))) 
                                & ((- (IData)((1U & 
                                               (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                   >> 1U))))) 
                                   & (((((2U & ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_busy_i)) 
                                                << 1U)) 
                                         | (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__unsupported_fmt_i)) 
                                        << 5U) | (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__memory_error_i) 
                                                   << 4U) 
                                                  | ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shape_error_i) 
                                                     << 3U))) 
                                      | (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__illegal_opcode_i) 
                                          << 2U) | 
                                         (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__done_sticky_q) 
                                           << 1U) | (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_busy_i))))))
                             : ((- (IData)((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))))) 
                                & ((- (IData)((1U & 
                                               (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                   >> 1U))))) 
                                   & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7) 
                                      << 2U)))))))) 
           & (- (IData)((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                  >> 7U))))));
    __VdfgRegularize_h6e95ff9d_0_17 = ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_valid) 
                                       & ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_we) 
                                          & (0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_k 
        = ((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_q))) 
           >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_k));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_cmd_n = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_last 
        = (((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q))) 
            >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m)) 
           & ((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q))) 
              >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk8__DOT__c = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_cmd_n 
                            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n;
                    }
                }
            }
        } else if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_cmd_n 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n;
                }
            } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_cmd_n 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k;
            }
        }
    }
    if ((0x00000010U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_addr 
                            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_addr_q;
                    }
                }
            }
            if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d = 0U;
                }
            }
        }
    } else if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 1U)))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_addr 
                    = ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))
                        ? vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_read_addr
                        : vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_read_addr);
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_k_tiles) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d 
                            = (0x0000ffffU & ((IData)(0x0010U) 
                                              + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q)));
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                         >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d = 0U;
            }
        } else if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d = 0U;
        }
    }
    while (VL_GTS_III(32, 4U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk8__DOT__c)) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_data[(3U 
                                                                            & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk8__DOT__c)] 
            = (VL_GTS_III(32, 0x00000040U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_addr
                          [(3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk8__DOT__c)])
                ? vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_bank
               [(3U & VL_MODDIVS_III(32, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_addr
                                     [(3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk8__DOT__c)], (IData)(4U)))]
               [(0x0000000fU & VL_DIVS_III(32, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_addr
                                           [(3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk8__DOT__c)], (IData)(4U)))]
                : 0U);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk8__DOT__c 
            = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk8__DOT__c);
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__elem_valid 
        = (1U & (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_mask) 
                  >> (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q)) 
                 & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_mask) 
                    >> (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 1U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 2U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 3U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 2U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 3U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 1U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 3U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 1U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 2U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6));
    __VdfgRegularize_h6e95ff9d_0_2 = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__row_mask) 
                                      & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[0U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[1U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[2U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[3U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[0U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[1U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[2U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[3U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[0U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[1U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[2U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[3U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[0U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[1U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[2U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[3U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__coord_valid 
        = (VL_LTES_III(32, 0U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_y) 
           & (VL_LTES_III(32, 0U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_x) 
              & (VL_LTS_III(32, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_y, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_h)) 
                 & VL_LTS_III(32, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_x, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_w)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__elem_addr 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_base 
           + ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_row_stride 
               * vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_y) 
              + ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_x 
                  * (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_c)) 
                 + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_q))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__output_w 
        = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_w_calc);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_m_calc 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_h_calc 
           * vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_w_calc);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_ready_o 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_ready_i) 
           & (1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_ready_o 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_ready_i) 
           & (4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_rvalid_o 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_rvalid_i) 
           & (0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_ready_o 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_ready_i) 
           & (2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_rvalid_o 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_rvalid_i) 
           & (2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_ready_o 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_ready_i) 
           & (3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_rvalid_o 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_rvalid_i) 
           & (3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_rvalid_o 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_rvalid_i) 
           & (1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_rvalid_o 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_rvalid_i) 
           & (4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_ready_o 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_ready_i) 
           & (0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_b;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rdata 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_load_byte 
        = (0x000000ffU & ((0x0dU == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))
                           ? ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_lane_sel))
                               ? vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata
                               : ((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_lane_sel))
                                   ? (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata 
                                      >> 8U) : ((2U 
                                                 == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_lane_sel))
                                                 ? 
                                                (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata 
                                                 >> 0x00000010U)
                                                 : 
                                                (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata 
                                                 >> 0x00000018U))))
                           : ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_lane_sel))
                               ? vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata
                               : ((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_lane_sel))
                                   ? (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata 
                                      >> 8U) : ((2U 
                                                 == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_lane_sel))
                                                 ? 
                                                (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata 
                                                 >> 0x00000010U)
                                                 : 
                                                (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata 
                                                 >> 0x00000018U))))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rdata 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_addr_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__start 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_start;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_rdata 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_rdata;
    vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_i 
        = vlSelfRef.tinygpu_top__DOT__cnt_stall;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_addr_next 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_aligned_addr;
    vlSelfRef.tinygpu_top__DOT__mmio_rdata = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__soft_reset_o 
        = ((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata 
            >> 1U) & (IData)(__VdfgRegularize_h6e95ff9d_0_17));
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__start_pulse_o 
        = (vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_17));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__flags_in 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__flags;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__valid_elem 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__elem_valid;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__bias_in 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__bias
        [vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q];
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x_in 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_in
        [vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q]
        [vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q];
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x 
        = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x_in;
    if (__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__valid_elem) {
        if ((1U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__flags_in)) {
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x 
                = (__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x 
                   + __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__bias_in);
        }
        if (((__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__flags_in 
              >> 1U) & VL_GTS_III(32, 0U, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x))) {
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x = 0U;
        }
        if ((4U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__flags_in)) {
            vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__x 
                = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x;
            vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__Vfuncout 
                = (VL_GTS_III(32, 0xffffff80U, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__x)
                    ? 0xffffff80U : (VL_LTS_III(32, 0x0000007fU, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__x)
                                      ? 0x0000007fU
                                      : vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__x));
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x 
                = vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__Vfuncout;
        }
    } else {
        __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x = 0U;
    }
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__Vfuncout 
        = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_n 
        = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__Vfuncout;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_2));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en) 
           & ((IData)(__VdfgRegularize_h6e95ff9d_0_2) 
              >> 1U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en) 
           & ((IData)(__VdfgRegularize_h6e95ff9d_0_2) 
              >> 2U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en) 
           & ((IData)(__VdfgRegularize_h6e95ff9d_0_2) 
              >> 3U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__lane_sel 
        = (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__elem_addr);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__aligned_addr 
        = (0xfffffffcU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__elem_addr);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_y_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_y_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_shape_ok 
        = ((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_h)) 
           & ((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_w)) 
              & ((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_c)) 
                 & ((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_output_c)) 
                    & ((((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_h)) 
                         & (1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_w))) 
                        | ((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_h)) 
                           & (3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_w)))) 
                       & (((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_stride_h)) 
                           | (1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_stride_h))) 
                          & (((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_stride_w)) 
                              | (1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_stride_w))) 
                             & ((1U >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_pad_h)) 
                                & ((1U >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_pad_w)) 
                                   & ((0U == (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q 
                                              >> 0x00000018U)) 
                                      & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16 
                                          >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_h)) 
                                         & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15 
                                             >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_w)) 
                                            & ((0U 
                                                != vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_m_calc) 
                                               & ((0x0000ffffU 
                                                   >= vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_m_calc) 
                                                  & ((0U 
                                                      != vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_k_calc) 
                                                     & ((0x0000ffffU 
                                                         >= vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_k_calc) 
                                                        & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__direct_mode) 
                                                           | (1U 
                                                              == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_desc_version_q)))))))))))))))))));
    if ((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_we_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_we_i;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_we 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_we_o;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_wdata_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_wdata_i;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_wdata 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_wdata_o;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_wstrb_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_wstrb_i;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_wstrb 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_wstrb_o;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_ready 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_ready_o;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_req_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_req_i;
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_we_o 
            = ((2U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i)) 
               & ((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))
                   ? (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_we_i)
                   : ((4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))
                       ? (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_we_i)
                       : (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_we_i))));
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_we 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_we_o;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_wdata_o 
            = (((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))
                 ? vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_wdata_i
                 : ((4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))
                     ? vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_wdata_i
                     : vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_wdata_i)) 
               & (- (IData)((2U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i)))));
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_wdata 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_wdata_o;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_wstrb_o 
            = (((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))
                 ? (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_wstrb_i)
                 : ((4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))
                     ? (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_wstrb_i)
                     : (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_wstrb_i))) 
               & (- (IData)((2U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i)))));
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_wstrb 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_wstrb_o;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_ready 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_ready_o;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_req_o 
            = ((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))
                ? (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_req_i)
                : ((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))
                    ? (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_req_i)
                    : ((4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))
                        ? (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_req_i)
                        : (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_req_i))));
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_req 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_req_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_ready 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_ready_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_rvalid 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_rvalid_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_ready 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_ready_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_rvalid 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_rvalid_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_ready 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_ready_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_rvalid 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_rvalid_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_rvalid 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_rvalid_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_rvalid 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_rvalid_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_ready 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_ready_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__load_byte 
        = (0x000000ffU & ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__load_lane_sel))
                           ? vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rdata
                           : ((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__load_lane_sel))
                               ? (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rdata 
                                  >> 8U) : ((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__load_lane_sel))
                                             ? (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rdata 
                                                >> 0x00000010U)
                                             : (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rdata 
                                                >> 0x00000018U)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_rdata 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_rdata;
    vlSelfRef.mmio_rdata = vlSelfRef.tinygpu_top__DOT__mmio_rdata;
    vlSelfRef.tinygpu_top__DOT__reg_soft_reset = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__soft_reset_o;
    if (vlSelfRef.tinygpu_top__DOT__u_regs__DOT__start_pulse_o) {
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__start_direct_mode_o 
            = (1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__ctrl_mode_next_w) 
                     >> 1U));
        vlSelfRef.tinygpu_top__DOT__reg_start_pulse = 1U;
    } else {
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__start_direct_mode_o 
            = (1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_mode_o));
        vlSelfRef.tinygpu_top__DOT__reg_start_pulse = 0U;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__aligned_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok 
        = ((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))
            ? ((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q)) 
               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9))
            : ((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))
                ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)
                : ((7U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))
                    ? (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_shape_ok)
                    : ((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q)) 
                       & ((6U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)) 
                          | ((5U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)) 
                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)))))));
    vlSelfRef.tinygpu_top__DOT__mem_we_raw = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_we;
    vlSelfRef.tinygpu_top__DOT__mem_wdata_raw = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_wdata;
    vlSelfRef.tinygpu_top__DOT__mem_wstrb_raw = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_wstrb;
    vlSelfRef.tinygpu_top__DOT__mem_req_raw = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_req;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rvalid 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_rvalid;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_ready 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_ready;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rvalid 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_rvalid;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_vec_y_reg = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_vec_x_reg = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_desc_word = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_bias_reg = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_ready 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_ready;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wdata = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wdata 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__load_byte;
            }
        }
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__soft_reset 
        = vlSelfRef.tinygpu_top__DOT__reg_soft_reset;
    vlSelfRef.tinygpu_top__DOT__reg_start_direct_mode 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__start_direct_mode_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__start 
        = vlSelfRef.tinygpu_top__DOT__reg_start_pulse;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_shape_error = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_unsupported_format = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q;
    if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_k) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_d = 0U;
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_row)))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_d 
                            = (0x0000ffffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_q)));
                    }
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_d 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__first_kh_q;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_d 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__first_kw_q;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_d 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__first_ic_q;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_d 
                        = (((0x0000ffffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_q))) 
                            < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__output_w))
                            ? (0x0000ffffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_q)))
                            : 0U);
                    if (((0x0000ffffU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_q))) 
                         >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__output_w))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_y_d 
                            = (0x0000ffffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_y_q)));
                    }
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_d 
                        = (0x0000ffffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_q)));
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_d 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_kh;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_d 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_kw;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_d 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_ic;
                }
            }
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_d 
            = ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))
                ? 0U : ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))
                         ? ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_k)
                             ? ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_row)
                                 ? 6U : 1U) : 1U) : 5U));
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)))) {
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_d 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_kh;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_d 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_kw;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_d 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_ic;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_d 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__tile_out_x;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_y_d 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__tile_out_y;
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rvalid) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_d = 4U;
                }
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_ready) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_d = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_d 
                = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__coord_valid)
                    ? 2U : 4U);
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_d 
                = (((((((((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_rows)) 
                          | (4U < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_rows))) 
                         | (0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_k))) 
                        | (0x0010U < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_k))) 
                       | (0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__output_w))) 
                      | (0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_c))) 
                     | (0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kernel_h))) 
                    | (0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kernel_w)))
                    ? 7U : 1U);
        }
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__advance_elem = 0U;
    if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d = 0U;
        } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_ready) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d 
                    = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__last_elem)
                        ? 6U : 4U);
            }
        } else {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d = 5U;
        }
        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_ready) {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__last_elem)))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__advance_elem = 1U;
                    }
                }
            }
        }
    } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d 
                = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__last_elem)
                    ? 6U : 1U);
            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__last_elem)))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__advance_elem = 1U;
            }
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rvalid) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_ready) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d = 2U;
        }
    } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__start) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d 
            = (((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows)) 
                | (0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols)))
                ? 6U : ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind))
                         ? 1U : (((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind)) 
                                  | (3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind)))
                                  ? 4U : 7U)));
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wdata 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wdata;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_wdata 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_conv)
            ? vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_wdata
            : vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wdata);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__start_direct_mode 
        = vlSelfRef.tinygpu_top__DOT__reg_start_direct_mode;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd_addr = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_status = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_cmd_start = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_addr_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_addr_o 
        = ((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))
            ? vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_addr_i
            : ((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))
                ? vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_addr_i
                : ((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))
                    ? vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_addr_i
                    : ((4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))
                        ? vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_addr_i
                        : vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_addr_i))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q;
    if (((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q)) 
         & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__start))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_d = 0U;
    } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__advance_elem) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_d 
            = (((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q))) 
                < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols_q))
                ? (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q)))
                : 0U);
        if (((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q))) 
             >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols_q))) {
            if (((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q))) 
                 < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_d 
                    = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q)));
            }
        }
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_row_base_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_row_base_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_q;
    if ((1U & (~ ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q)) 
                  & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__start))))) {
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__advance_elem) {
            if (((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q))) 
                 >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols_q))) {
                if (((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q))) 
                     < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_row_base_d 
                        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_row_base_q 
                           + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__stride_bytes_q));
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_d 
                        = (0x000001ffU & ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind_q))
                                           ? ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q))
                                               ? ((IData)(0x0010U) 
                                                  + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_q))
                                               : ((IData)(4U) 
                                                  + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_q)))
                                           : ((IData)(0x0010U) 
                                              + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_q))));
                }
            }
            if (((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q))) 
                 < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_d 
                    = ((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind_q))
                        ? ((IData)(4U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q)
                        : ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q));
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_d 
                    = (0x000001ffU & ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind_q))
                                       ? ((IData)(1U) 
                                          + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_q))
                                       : ((IData)(4U) 
                                          + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_q))));
            } else if (((0x0000ffffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q))) 
                        < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_d 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_row_base_q 
                       + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__stride_bytes_q));
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_d 
                    = (0x000001ffU & ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind_q))
                                       ? ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q))
                                           ? ((IData)(0x0010U) 
                                              + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_q))
                                           : ((IData)(4U) 
                                              + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_q)))
                                       : ((IData)(0x0010U) 
                                          + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_q))));
            }
        }
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_cmd_fields = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q) {
                            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_rvalid) {
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_vec_y_reg = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q) {
                            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_rvalid) {
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_vec_x_reg = 1U;
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        if ((1U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)) {
                            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_q) {
                                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_rvalid) {
                                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_bias_reg = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q) {
                            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_rvalid) {
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_desc_word = 1U;
                            }
                        }
                    }
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_d = 0U;
                    } else if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q) 
                                & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_rvalid))) {
                        if (((0x0000001fU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) 
                             < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_words_expected))) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_d 
                                = (0x0000001fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q)));
                        }
                    }
                } else if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_d = 0U;
                }
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok) {
                            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok)))) {
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_shape_error = 1U;
                            }
                            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok) {
                                if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_flags_ok)))) {
                                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_unsupported_format = 1U;
                                }
                            }
                        }
                        if ((((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok) 
                              & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok)) 
                             & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_flags_ok))) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_d = 0x00000010U;
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_d 
                                = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__use_dst_i8)
                                    ? 4U : 0x00000010U);
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_d 
                                = VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_eff), 2U);
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_d 
                                = VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_eff), 4U);
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_d 
                                = VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q), 2U);
                        }
                    } else {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_d = 0U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__start) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd_addr = 1U;
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_cmd_start = 1U;
                            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__start_direct_mode) {
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd = 1U;
                            }
                            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__start_direct_mode)))) {
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_cmd_fields = 1U;
                            }
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_status = 1U;
                        } else {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_status = 0U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q;
    if ((0x00000010U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_d 
                            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr_q;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_d 
                            = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_q 
                               + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_q);
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_d 
                            = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_q 
                               + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_q);
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_d 
                            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_d 
                        = ((IData)(4U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_q);
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_d 
                        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_q 
                           + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_q);
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_d 
                        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q 
                           + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_q);
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_d 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q;
                } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_ready))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d 
                        = (((0x0000ffffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q))) 
                            < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q))
                            ? (0x0000ffffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q)))
                            : 0U);
                }
            }
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d 
                = ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                             >> 2U))) && ((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                                                 >> 1U)) 
                                          && ((1U & 
                                               (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) 
                                              && (1U 
                                                  & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_ready))))));
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
        }
        if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0U;
        } else if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0U;
            } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_q) {
                    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_error) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x17U;
                    } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_done) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 6U;
                    }
                }
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 4U;
            }
        } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 4U;
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_ready) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
                    = (((0x0000ffffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q))) 
                        < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q))
                        ? 0x0cU : 0x16U);
            }
        } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x12U;
        } else if ((8U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)) {
            if ((1U & (~ ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_busy)) 
                          & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_done)))))) {
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_done) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x11U;
                }
            }
        } else {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x11U;
        }
    } else {
        if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_q)))) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d 
                                = (((0x0000ffffU & 
                                     ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q))) 
                                    < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n))
                                    ? (0x0000ffffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q)))
                                    : 0U);
                            if (((0x0000ffffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q))) 
                                 >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n))) {
                                if (((0x0000ffffU & 
                                      ((IData)(1U) 
                                       + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q))) 
                                     < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m))) {
                                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d 
                                        = (0x0000ffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q)));
                                }
                            }
                            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_last) {
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d = 1U;
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d = 0U;
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d = 0U;
                            }
                        }
                    }
                } else if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_k_tiles)))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d = 0U;
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        if (((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q 
                              & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_q)) 
                             & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_rvalid))) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d 
                                = (((0x0000ffffU & 
                                     ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q))) 
                                    < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n))
                                    ? (0x0000ffffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q)))
                                    : 0U);
                        }
                    } else if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_k_tiles)))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d = 0U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_k_tiles) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_d 
                                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_q 
                                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_q);
                        }
                    }
                }
            }
            if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
                        = ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))
                            ? ((8U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)
                                ? 0x10U : 0x11U) : 0x0fU);
                } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q) {
                        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_rvalid) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x0eU;
                        }
                    } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_ready) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 1U;
                    }
                } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q) {
                    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_rvalid) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
                            = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_needs_y)
                                ? 0x0dU : 0x0eU);
                    }
                } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_ready) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 1U;
                }
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                    }
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        if ((1U & (~ ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                                      & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q)))))) {
                            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)))) {
                                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_error) {
                                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x17U;
                                } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_done) {
                                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
                                        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_n_tiles)
                                            ? 0x13U
                                            : ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_m_tiles)
                                                ? 0x14U
                                                : 0x16U));
                                }
                            }
                        }
                    } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_done) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x0bU;
                    }
                } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)) {
                        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_q) {
                            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_rvalid) {
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                                if (((0x0000ffffU & 
                                      ((IData)(1U) 
                                       + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q))) 
                                     >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n))) {
                                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x0aU;
                                }
                            }
                        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_ready) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 1U;
                        }
                    } else {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x0aU;
                    }
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
                        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_k_tiles)
                            ? ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_conv_opcode)
                                ? 0x15U : 5U) : ((1U 
                                                  & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)
                                                  ? 9U
                                                  : 0x0aU));
                }
            }
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d = 0U;
                    }
                } else if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d = 0U;
                }
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        if ((((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok) 
                              & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok)) 
                             & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_flags_ok))) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_d 
                                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q;
                        }
                    } else {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_d = 0U;
                    }
                }
            }
            if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                        if (((0x0000ffffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q))) 
                             >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k))) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 8U;
                        }
                    } else if ((1U & (~ ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                                         & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q)))))) {
                        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)))) {
                            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_error) {
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x17U;
                            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_done) {
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 7U;
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                    }
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        if ((1U & (~ ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                                      & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q)))))) {
                            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)))) {
                                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_error) {
                                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x17U;
                                } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_done) {
                                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 6U;
                                }
                            }
                        }
                    } else {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
                            = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_conv_opcode)
                                ? 0x15U : 5U);
                    }
                }
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d = 0U;
                    }
                }
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
                            = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode)
                                ? 0x0cU : 4U);
                    } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q) {
                        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_rvalid) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
                            if (((0x0000001fU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) 
                                 >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_words_expected))) {
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 1U;
                            }
                        }
                    } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_ready) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 1U;
                    }
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d = 0U;
                    }
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
                            = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok)
                                ? ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok)
                                    ? ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_flags_ok)
                                        ? 3U : 0x17U)
                                    : 0x17U) : 0x17U);
                    } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__start) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
                            = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__start_direct_mode)
                                ? 1U : 2U);
                    }
                }
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d = 0U;
                }
            } else if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d = 0U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        if ((((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok) 
                              & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok)) 
                             & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_flags_ok))) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_d = 0U;
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_d = 0U;
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_d 
                                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr_q;
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_d 
                                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr_q;
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_d 
                                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q;
                        }
                    } else {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_d = 0U;
                    }
                }
            }
        }
    }
    vlSelfRef.tinygpu_top__DOT__cnt_cmd_start = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_cmd_start;
    vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cmd_start_i 
        = vlSelfRef.tinygpu_top__DOT__cnt_cmd_start;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_addr_o;
    vlSelfRef.tinygpu_top__DOT__mem_addr_raw = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_addr;
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_triggers_vec__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (((QData)((IData)(
                                                      (((((((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_counters__DOT__rst_n)) 
                                                            & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_counters__DOT__rst_n__0)) 
                                                           << 3U) 
                                                          | (((IData)(vlSelfRef.tinygpu_top__DOT__u_counters__DOT__clk) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_counters__DOT__clk__0))) 
                                                             << 2U)) 
                                                         | ((((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__rst_n)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__rst_n__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__clk__0))))) 
                                                        << 0x00000010U) 
                                                       | ((((((((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__rst_n)) 
                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__rst_n__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clk__0))) 
                                                                 << 2U)) 
                                                             | ((((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clk__0))))) 
                                                            << 0x0000000cU) 
                                                           | ((((((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clk__0))))) 
                                                              << 8U)) 
                                                          | (((((((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clk__0))))) 
                                                              << 4U) 
                                                             | (((((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clk__0)))))))))) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       ((((((((((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n)) 
                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clk__0))) 
                                                                 << 2U)) 
                                                             | ((((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clk__0))))) 
                                                            << 0x0000000cU) 
                                                           | ((((((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clk__0))))) 
                                                              << 8U)) 
                                                          | (((((((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clk__0))))) 
                                                              << 4U) 
                                                             | (((((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clk__0))))))) 
                                                         << 0x00000010U) 
                                                        | ((((((((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n__0)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clk__0))) 
                                                                  << 2U)) 
                                                              | ((((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rst_n__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__clk__0))))) 
                                                             << 0x0000000cU) 
                                                            | ((((((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__rst_n__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__rst_n__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__clk__0))))) 
                                                               << 8U)) 
                                                           | (((((((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_regs__DOT__rst_n__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_regs__DOT__clk__0))))) 
                                                               << 4U) 
                                                              | (((((~ (IData)(vlSelfRef.tinygpu_top__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__rst_n__0)) 
                                                                   << 3U) 
                                                                  | (((IData)(vlSelfRef.tinygpu_top__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__clk__0))) 
                                                                     << 2U)) 
                                                                 | ((vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_data__1.neq(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_data) 
                                                                     << 1U) 
                                                                    | vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_data__1.neq(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_data)))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_data__1.assign(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_data);
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_data__1.assign(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_data);
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__clk__0 
        = vlSelfRef.tinygpu_top__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__rst_n__0 
        = vlSelfRef.tinygpu_top__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_regs__DOT__clk__0 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_regs__DOT__rst_n__0 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__clk__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__clk__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__rst_n__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__clk__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__rst_n__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__clk__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rst_n__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clk__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clk__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clk__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clk__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clk__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clk__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clk__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clk__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clk__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clk__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clk__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clk__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clk__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clk__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clk__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clk__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clk__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__rst_n__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__clk__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__rst_n__0 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_counters__DOT__clk__0 
        = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_counters__DOT__rst_n__0 
        = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__rst_n;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered[0U] = (1ULL | vlSelfRef.__VactTriggered[0U]);
        vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered[0U]);
    }
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___act_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_data 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_data;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk5__DOT__c = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk5__DOT__c)) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask 
            = (((~ ((IData)(1U) << (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk5__DOT__c))) 
                & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask)) 
               | (0x0fU & (((0x0000ffffU & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q) 
                                            + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk5__DOT__c)) 
                            < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n)) 
                           << (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk5__DOT__c))));
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_addr[(3U 
                                                                & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk5__DOT__c)] 
            = (0x000000ffU & (VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q), 2U) 
                              + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk5__DOT__c));
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_vec[(3U 
                                                            & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk5__DOT__c)] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_data
            [(3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk5__DOT__c)];
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk5__DOT__c 
            = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk5__DOT__c);
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_mask 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_vec;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk8__DOT__c = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk8__DOT__c)) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_data[(3U 
                                                                            & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk8__DOT__c)] 
            = (VL_GTS_III(32, 0x00000040U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_addr
                          [(3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk8__DOT__c)])
                ? vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_bank
               [(3U & VL_MODDIVS_III(32, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_addr
                                     [(3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk8__DOT__c)], (IData)(4U)))]
               [(0x0000000fU & VL_DIVS_III(32, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_addr
                                           [(3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk8__DOT__c)], (IData)(4U)))]
                : 0U);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk8__DOT__c 
            = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk8__DOT__c);
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[0U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[1U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[2U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[3U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[0U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[1U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[2U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[3U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[0U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[1U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[2U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[3U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[0U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[1U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[2U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[3U];
}

void Vtop___024root___act_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_data 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_data;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk4__DOT__r = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk4__DOT__r)) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask 
            = (((~ ((IData)(1U) << (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk4__DOT__r))) 
                & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask)) 
               | (0x0fU & (((0x0000ffffU & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q) 
                                            + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk4__DOT__r)) 
                            < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q)) 
                           << (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk4__DOT__r))));
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_addr[(3U 
                                                                & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk4__DOT__r)] 
            = (0x000000ffU & (VL_SHIFTL_III(8,32,32, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk4__DOT__r, 4U) 
                              + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q)));
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_vec[(3U 
                                                            & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk4__DOT__r)] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_data
            [(3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk4__DOT__r)];
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk4__DOT__r 
            = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk4__DOT__r);
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_vec;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_mask 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__row_mask 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk7__DOT__r = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk7__DOT__r)) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_data[(3U 
                                                                            & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk7__DOT__r)] 
            = (VL_GTS_III(32, 0x00000040U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_addr
                          [(3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk7__DOT__r)])
                ? vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_bank
               [(3U & VL_DIVS_III(32, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_addr
                                  [(3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk7__DOT__r)], (IData)(0x00000010U)))]
               [(0x0000000fU & VL_MODDIVS_III(32, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_addr
                                              [(3U 
                                                & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk7__DOT__r)], (IData)(0x00000010U)))]
                : 0U);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk7__DOT__r 
            = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk7__DOT__r);
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[0U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[0U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[0U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[0U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[1U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[1U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[1U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[1U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[2U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[2U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[2U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[2U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[3U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[3U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[3U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en) 
                                                & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__row_mask));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en) 
                                                & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__row_mask) 
                                                   >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en) 
                                                & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__row_mask) 
                                                   >> 2U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en) 
                                                & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__row_mask) 
                                                   >> 3U));
}

void Vtop___024root___act_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x_in;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x_in = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__bias_in;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__bias_in = 0;
    CData/*0:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__valid_elem;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__valid_elem = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__flags_in;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__flags_in = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    __VdfgRegularize_h6e95ff9d_0_2 = 0;
    // Body
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__elem_valid 
        = (1U & (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_mask) 
                  >> (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q)) 
                 & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_mask) 
                    >> (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q))));
    __VdfgRegularize_h6e95ff9d_0_2 = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__row_mask) 
                                      & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 1U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 2U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 3U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 2U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 3U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 1U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 3U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 1U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 2U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6));
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__flags_in 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__flags;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__valid_elem 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__elem_valid;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__bias_in 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__bias
        [vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q];
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x_in 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_in
        [vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q]
        [vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q];
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x 
        = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x_in;
    if (__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__valid_elem) {
        if ((1U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__flags_in)) {
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x 
                = (__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x 
                   + __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__bias_in);
        }
        if (((__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__flags_in 
              >> 1U) & VL_GTS_III(32, 0U, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x))) {
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x = 0U;
        }
        if ((4U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__flags_in)) {
            vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__x 
                = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x;
            vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__Vfuncout 
                = (VL_GTS_III(32, 0xffffff80U, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__x)
                    ? 0xffffff80U : (VL_LTS_III(32, 0x0000007fU, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__x)
                                      ? 0x0000007fU
                                      : vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__x));
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x 
                = vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__Vfuncout;
        }
    } else {
        __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x = 0U;
    }
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__Vfuncout 
        = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_n 
        = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__Vfuncout;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_2));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en) 
           & ((IData)(__VdfgRegularize_h6e95ff9d_0_2) 
              >> 1U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en) 
           & ((IData)(__VdfgRegularize_h6e95ff9d_0_2) 
              >> 2U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en) 
           & ((IData)(__VdfgRegularize_h6e95ff9d_0_2) 
              >> 3U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en;
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtop___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtop___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtop___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_counters__DOT__cycle_cur_q;
    __Vdly__tinygpu_top__DOT__u_counters__DOT__cycle_cur_q = 0;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_counters__DOT__active_cur_q;
    __Vdly__tinygpu_top__DOT__u_counters__DOT__active_cur_q = 0;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_counters__DOT__stall_cur_q;
    __Vdly__tinygpu_top__DOT__u_counters__DOT__stall_cur_q = 0;
    // Body
    __Vdly__tinygpu_top__DOT__u_counters__DOT__cycle_cur_q 
        = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cycle_cur_q;
    __Vdly__tinygpu_top__DOT__u_counters__DOT__active_cur_q 
        = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_cur_q;
    __Vdly__tinygpu_top__DOT__u_counters__DOT__stall_cur_q 
        = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_cur_q;
    if (vlSelfRef.tinygpu_top__DOT__u_counters__DOT__rst_n) {
        if (vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cmd_done_i) {
            vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cmd_count_o 
                = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cmd_count_o);
            vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cycle_count_o 
                = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cycle_cur_q;
            vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_count_o 
                = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_cur_q;
            vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_count_o 
                = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_cur_q;
        }
        if (vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cmd_start_i) {
            __Vdly__tinygpu_top__DOT__u_counters__DOT__cycle_cur_q = 0U;
            __Vdly__tinygpu_top__DOT__u_counters__DOT__active_cur_q = 0U;
            __Vdly__tinygpu_top__DOT__u_counters__DOT__stall_cur_q = 0U;
        } else {
            if (vlSelfRef.tinygpu_top__DOT__u_counters__DOT__busy_i) {
                __Vdly__tinygpu_top__DOT__u_counters__DOT__cycle_cur_q 
                    = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cycle_cur_q);
            }
            if (vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_i) {
                __Vdly__tinygpu_top__DOT__u_counters__DOT__active_cur_q 
                    = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_cur_q);
            }
            if (vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_i) {
                __Vdly__tinygpu_top__DOT__u_counters__DOT__stall_cur_q 
                    = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_cur_q);
            }
        }
    } else {
        vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cmd_count_o = 0U;
        __Vdly__tinygpu_top__DOT__u_counters__DOT__cycle_cur_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cycle_count_o = 0U;
        __Vdly__tinygpu_top__DOT__u_counters__DOT__active_cur_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_count_o = 0U;
        __Vdly__tinygpu_top__DOT__u_counters__DOT__stall_cur_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_count_o = 0U;
    }
    vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cycle_cur_q 
        = __Vdly__tinygpu_top__DOT__u_counters__DOT__cycle_cur_q;
    vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_cur_q 
        = __Vdly__tinygpu_top__DOT__u_counters__DOT__active_cur_q;
    vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_cur_q 
        = __Vdly__tinygpu_top__DOT__u_counters__DOT__stall_cur_q;
    vlSelfRef.tinygpu_top__DOT__cmd_count_total = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cmd_count_o;
    vlSelfRef.tinygpu_top__DOT__cycle_count_last = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cycle_count_o;
    vlSelfRef.tinygpu_top__DOT__active_count_last = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_count_o;
    vlSelfRef.tinygpu_top__DOT__stall_count_last = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_count_o;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_count_i 
        = vlSelfRef.tinygpu_top__DOT__cmd_count_total;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cycle_count_i 
        = vlSelfRef.tinygpu_top__DOT__cycle_count_last;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__active_count_i 
        = vlSelfRef.tinygpu_top__DOT__active_count_last;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stall_count_i 
        = vlSelfRef.tinygpu_top__DOT__stall_count_last;
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0;
    // Body
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n) {
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clear_acc) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0U;
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext);
        }
    } else {
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0U;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[0U][0U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0;
    // Body
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n) {
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clear_acc) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0U;
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext);
        }
    } else {
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0U;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[0U][1U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0;
    // Body
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n) {
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clear_acc) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0U;
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext);
        }
    } else {
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0U;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[0U][2U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
}

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0;
    // Body
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n) {
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clear_acc) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0U;
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext);
        }
    } else {
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0U;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[0U][3U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
}

void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0;
    // Body
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n) {
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clear_acc) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0U;
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext);
        }
    } else {
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0U;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[1U][0U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
}

void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0;
    // Body
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n) {
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clear_acc) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0U;
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext);
        }
    } else {
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0U;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[1U][1U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
}

void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0;
    // Body
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n) {
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clear_acc) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0U;
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext);
        }
    } else {
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0U;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[1U][2U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
}

void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0;
    // Body
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n) {
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clear_acc) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0U;
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext);
        }
    } else {
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0U;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[1U][3U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
}

void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0;
    // Body
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n) {
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clear_acc) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0U;
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext);
        }
    } else {
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0U;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[2U][0U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
}

void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0;
    // Body
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n) {
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clear_acc) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0U;
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext);
        }
    } else {
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0U;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[2U][1U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
}

void Vtop___024root___nba_sequent__TOP__11(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0;
    // Body
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n) {
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clear_acc) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0U;
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext);
        }
    } else {
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0U;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[2U][2U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
}

void Vtop___024root___nba_sequent__TOP__12(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0;
    // Body
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n) {
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clear_acc) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0U;
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext);
        }
    } else {
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0U;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[2U][3U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
}

void Vtop___024root___nba_sequent__TOP__13(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__13\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0;
    // Body
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n) {
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clear_acc) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0U;
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext);
        }
    } else {
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0U;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[3U][0U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
}

void Vtop___024root___nba_sequent__TOP__14(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__14\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0;
    // Body
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n) {
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clear_acc) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0U;
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext);
        }
    } else {
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0U;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[3U][1U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
}

void Vtop___024root___nba_sequent__TOP__15(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__15\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0;
    // Body
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n) {
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clear_acc) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0U;
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext);
        }
    } else {
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0U;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[3U][2U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
}

void Vtop___024root___nba_sequent__TOP__16(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__16\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0;
    // Body
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n) {
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clear_acc) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0U;
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext);
        }
    } else {
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0U;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[3U][3U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
}

void Vtop___024root___nba_sequent__TOP__17(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__17\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rst_n) {
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_req_q) {
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_req)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tinygpu_dma.sv:325: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl.u_dma", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_dma.sv", 325, "");
                }
                if (VL_UNLIKELY((((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_we) 
                                  != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_we_q))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tinygpu_dma.sv:326: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl.u_dma", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_dma.sv", 326, "");
                }
                if (VL_UNLIKELY(((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_addr 
                                  != vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_addr_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: tinygpu_dma.sv:327: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl.u_dma", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_dma.sv", 327, "");
                }
                if (VL_UNLIKELY(((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wdata 
                                  != vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_wdata_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: tinygpu_dma.sv:328: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl.u_dma", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_dma.sv", 328, "");
                }
                if (VL_UNLIKELY((((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wstrb) 
                                  != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_wstrb_q))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tinygpu_dma.sv:329: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl.u_dma", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_dma.sv", 329, "");
                }
            }
        }
        if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_req) 
             & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_ready)))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_req_q = 1U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_we_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_we;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_addr_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_addr;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_wdata_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wdata;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_wstrb_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wstrb;
        } else {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_req_q = 0U;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_d;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_d;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q 
            = (6U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q));
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q 
            = (7U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q));
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_row_base_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_row_base_d;
        if ((4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__store_word_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_rdata;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_d;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_d;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_d;
        if (((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q)) 
             & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__start))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__stride_bytes_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__stride_bytes;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_row_base_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__base_addr;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__base_addr;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_base;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_base;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d;
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_req_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_we_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_addr_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_wdata_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_wstrb_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__stride_bytes_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_row_base_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__store_word_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q = 0U;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__load_lane_sel 
        = (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__aligned_read_addr 
        = (0xfffffffcU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__aligned_write_addr 
        = (0xfffffffcU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__last_elem 
        = (((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q))) 
            >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows_q)) 
           & ((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q))) 
              >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols_q)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_done 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_error 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__busy = 1U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wstrb = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wr_en = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wstrb = 1U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wr_en = 1U;
            }
        }
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_we = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_req = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wstrb = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_addr = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wdata = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_o 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr = 0U;
    if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__busy = 0U;
        }
        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_we = 1U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_req = 1U;
                if ((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wstrb = 0x0fU;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wdata 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__store_word_q;
                } else if ((0U == (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wstrb = 1U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wdata 
                        = (0x000000ffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__store_word_q);
                } else if ((1U == (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wstrb = 2U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wdata 
                        = (0x0000ff00U & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__store_word_q 
                                          << 8U));
                } else if ((2U == (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wstrb = 4U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wdata 
                        = (0x00ff0000U & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__store_word_q 
                                          << 0x00000010U));
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wstrb = 8U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wdata 
                        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__store_word_q 
                           << 0x00000018U);
                }
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_addr 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__aligned_write_addr;
            }
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_o 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_q;
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q)))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__busy = 0U;
            }
            if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_we = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_req = 1U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_addr 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__aligned_read_addr;
            }
        }
        if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_o 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_q;
            }
        }
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wstrb 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wstrb;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wr_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wr_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_we 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_we;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_req 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_req;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wstrb 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wstrb;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wdata 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wdata;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_region 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_we_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_we;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_req_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_req;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_wstrb_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wstrb;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_addr_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_wdata_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wdata;
}

void Vtop___024root___nba_sequent__TOP__18(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__18\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy = 0;
    // Body
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy;
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__rst_n) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__done = 0U;
        if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__start) 
             & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy)))) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy = 1U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__product_o 
                = VL_MULS_III(32, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__a_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__b_i);
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__done = 1U;
        }
    } else {
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__done = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__product_o = 0U;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_product 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__product_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_busy 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_done 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__done;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_busy 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_busy;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_done 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_done;
}

void Vtop___024root___nba_sequent__TOP__19(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__19\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__27__x;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__27__x = 0;
    CData/*7:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__28__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__28__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__28__x;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__28__x = 0;
    CData/*2:0*/ __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q = 0;
    CData/*1:0*/ __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q = 0;
    CData/*1:0*/ __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q = 0;
    CData/*7:0*/ __VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8__v0;
    __VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8__v0;
    __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8__v0 = 0;
    CData/*1:0*/ __VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8__v0;
    __VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8__v0 = 0;
    IData/*31:0*/ __VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i32__v0;
    __VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i32__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i32__v0;
    __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i32__v0 = 0;
    CData/*1:0*/ __VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i32__v0;
    __VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i32__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i32__v1;
    __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i32__v1 = 0;
    CData/*1:0*/ __VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i32__v1;
    __VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i32__v1 = 0;
    CData/*1:0*/ __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8__v1;
    __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8__v1 = 0;
    CData/*1:0*/ __VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8__v1;
    __VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8__v1 = 0;
    // Body
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q;
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__rst_n) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__done = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_start = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_valid = 0U;
        if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q))) {
                __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__busy = 0U;
            } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q))) {
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__last_elem) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__busy = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__done = 1U;
                    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q = 0U;
                } else {
                    if ((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q))) {
                        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q 
                            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q)));
                        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q = 0U;
                    } else {
                        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q 
                            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q)));
                    }
                    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q = 1U;
                }
            } else {
                __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__27__x 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__x_shifted;
                __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__28__x 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__x_shifted;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____VlemCall_0__sat_i8 
                    = (VL_LTS_III(32, 0x0000007fU, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__27__x)
                        ? 0x0000007fU : (VL_GTS_III(32, 0xffffff80U, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__27__x)
                                          ? 0x00000080U
                                          : (0x000000ffU 
                                             & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__27__x)));
                __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__28__Vfuncout 
                    = (VL_LTS_III(32, 0x0000007fU, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__28__x)
                        ? 0x0000007fU : (VL_GTS_III(32, 0xffffff80U, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__28__x)
                                          ? 0x00000080U
                                          : (0x000000ffU 
                                             & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__28__x)));
                __VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8__v0 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____VlemCall_0__sat_i8;
                __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8__v0 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q;
                __VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8__v0 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q;
                vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8.enqueue(__VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8__v0, (IData)(__VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8__v0), __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8__v0);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_valid = 1U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_i32 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_q;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_i8 
                    = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__28__Vfuncout;
                __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q = 5U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_index 
                    = (0x000000ffU & (VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q), 2U) 
                                      + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q)));
            }
        } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q))) {
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_done) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_elem_q 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_product;
                    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q = 4U;
                }
            } else {
                __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_n;
            __VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i32__v0 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_n;
            __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i32__v0 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q;
            __VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i32__v0 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q;
            vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i32.enqueue(__VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i32__v0, (IData)(__VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i32__v0), __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i32__v0);
            if ((8U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__flags)) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_start = 1U;
                __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q = 2U;
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_elem_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_n;
                __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q = 4U;
            }
        } else {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__busy = 0U;
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__start) {
                __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q = 0U;
                __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__busy = 1U;
                __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q = 1U;
            }
        }
    } else {
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q = 0U;
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk1__DOT__r = 0U;
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__busy = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__done = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_start = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_valid = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_index = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_i32 = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_i8 = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_elem_q = 0U;
        while (VL_GTS_III(32, 4U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk1__DOT__r)) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk1__DOT__unnamedblk2__DOT__c = 0U;
            while (VL_GTS_III(32, 4U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk1__DOT__unnamedblk2__DOT__c)) {
                __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i32__v1 
                    = (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk1__DOT__unnamedblk2__DOT__c);
                __VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i32__v1 
                    = (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk1__DOT__r);
                vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i32.enqueue(0U, (IData)(__VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i32__v1), __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i32__v1);
                __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8__v1 
                    = (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk1__DOT__unnamedblk2__DOT__c);
                __VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8__v1 
                    = (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk1__DOT__r);
                vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8.enqueue(0U, (IData)(__VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8__v1), __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8__v1);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk1__DOT__unnamedblk2__DOT__c 
                    = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk1__DOT__unnamedblk2__DOT__c);
            }
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk1__DOT__r 
                = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk1__DOT__r);
        }
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q;
    vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8.commit(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8);
    vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i32.commit(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i32);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_busy 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__busy;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_a 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_start 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_start;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_done 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__done;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__last_elem 
        = ((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q)) 
           & (3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_a 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_a;
}

void Vtop___024root___nba_sequent__TOP__20(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__20\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__oldv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__oldv = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__newv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__newv = 0;
    CData/*1:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__wstrb = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__oldv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__oldv = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__newv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__newv = 0;
    CData/*1:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__wstrb = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__oldv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__oldv = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__newv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__newv = 0;
    CData/*1:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__wstrb = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__oldv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__oldv = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__newv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__newv = 0;
    CData/*1:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__wstrb = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__oldv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__oldv = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__newv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__newv = 0;
    CData/*1:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__wstrb = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__oldv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__oldv = 0;
    SData/*15:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__newv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__newv = 0;
    CData/*1:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__wstrb = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__oldv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__oldv = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__newv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__newv = 0;
    CData/*3:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__wstrb = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__oldv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__oldv = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__newv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__newv = 0;
    CData/*3:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__wstrb = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__oldv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__oldv = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__newv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__newv = 0;
    CData/*3:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__wstrb = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__oldv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__oldv = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__newv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__newv = 0;
    CData/*3:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__wstrb = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__oldv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__oldv = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__newv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__newv = 0;
    CData/*3:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__wstrb = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__oldv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__oldv = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__newv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__newv = 0;
    CData/*3:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__wstrb = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__oldv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__oldv = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__newv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__newv = 0;
    CData/*3:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__wstrb = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__oldv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__oldv = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__newv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__newv = 0;
    CData/*3:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__wstrb = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__oldv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__oldv = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__newv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__newv = 0;
    CData/*3:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__wstrb = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__oldv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__oldv = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__newv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__newv = 0;
    CData/*3:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__wstrb = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__oldv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__oldv = 0;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__newv;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__newv = 0;
    CData/*3:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__wstrb = 0;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_regs__DOT__dst_addr_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__dst_addr_o = 0;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_regs__DOT__bias_addr_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__bias_addr_o = 0;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_regs__DOT__cmd_addr_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__cmd_addr_o = 0;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_regs__DOT__src1_addr_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__src1_addr_o = 0;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_regs__DOT__src0_addr_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__src0_addr_o = 0;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_in_hw_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_in_hw_o = 0;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_regs__DOT__flags_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__flags_o = 0;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_regs__DOT__scale_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__scale_o = 0;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_channels_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_channels_o = 0;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_cfg_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_cfg_o = 0;
    // Body
    __Vdly__tinygpu_top__DOT__u_regs__DOT__dst_addr_o 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dst_addr_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__bias_addr_o 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__bias_addr_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__cmd_addr_o 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_addr_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__src1_addr_o 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src1_addr_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__src0_addr_o 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src0_addr_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_in_hw_o 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_in_hw_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__flags_o 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__flags_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__scale_o 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__scale_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_channels_o 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_channels_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_cfg_o 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_cfg_o;
    if (vlSelfRef.tinygpu_top__DOT__u_regs__DOT__rst_n) {
        if (vlSelfRef.tinygpu_top__DOT__u_regs__DOT__soft_reset_o) {
            __Vdly__tinygpu_top__DOT__u_regs__DOT__dst_addr_o = 0U;
            __Vdly__tinygpu_top__DOT__u_regs__DOT__bias_addr_o = 0U;
            __Vdly__tinygpu_top__DOT__u_regs__DOT__cmd_addr_o = 0U;
            __Vdly__tinygpu_top__DOT__u_regs__DOT__src1_addr_o = 0U;
            __Vdly__tinygpu_top__DOT__u_regs__DOT__src0_addr_o = 0U;
            __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_in_hw_o = 0U;
            __Vdly__tinygpu_top__DOT__u_regs__DOT__flags_o = 0U;
            __Vdly__tinygpu_top__DOT__u_regs__DOT__scale_o = 0U;
            __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_channels_o = 0U;
            __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_cfg_o = 0U;
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__done_sticky_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__opcode_o = 0U;
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_k_o = 0U;
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_n_o = 0U;
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_m_o = 0U;
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride0_o = 0U;
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride1_o = 0U;
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride_dst_o = 0U;
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shift_o = 0U;
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__zero_point_o = 0U;
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_enable_o = 0U;
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_mode_o = 0U;
        } else {
            if (vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_done_i) {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__done_sticky_q = 1U;
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_q = 1U;
            }
            if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_valid) 
                 & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_we))) {
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                              >> 7U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                      >> 5U)))) {
                            if ((0x00000010U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                    if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo)))) {
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__wstrb 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__newv 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__oldv 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dst_addr_o;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__Vfuncout 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__oldv;
                                                if (
                                                    (1U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__Vfuncout 
                                                        = 
                                                        ((0xffffff00U 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__Vfuncout) 
                                                         | (0x000000ffU 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__newv));
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__Vfuncout 
                                                        = 
                                                        ((0xffff00ffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__Vfuncout) 
                                                         | (0x0000ff00U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__newv));
                                                }
                                                if (
                                                    (4U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__Vfuncout 
                                                        = 
                                                        ((0xff00ffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__Vfuncout) 
                                                         | (0x00ff0000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__newv));
                                                }
                                                if (
                                                    (8U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__Vfuncout 
                                                        = 
                                                        ((0x00ffffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__Vfuncout) 
                                                         | (0xff000000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__newv));
                                                }
                                                __Vdly__tinygpu_top__DOT__u_regs__DOT__dst_addr_o 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__Vfuncout;
                                            }
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo)))) {
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__wstrb 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__newv 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__oldv 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__bias_addr_o;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__Vfuncout 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__oldv;
                                                if (
                                                    (1U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__Vfuncout 
                                                        = 
                                                        ((0xffffff00U 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__Vfuncout) 
                                                         | (0x000000ffU 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__newv));
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__Vfuncout 
                                                        = 
                                                        ((0xffff00ffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__Vfuncout) 
                                                         | (0x0000ff00U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__newv));
                                                }
                                                if (
                                                    (4U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__Vfuncout 
                                                        = 
                                                        ((0xff00ffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__Vfuncout) 
                                                         | (0x00ff0000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__newv));
                                                }
                                                if (
                                                    (8U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__Vfuncout 
                                                        = 
                                                        ((0x00ffffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__Vfuncout) 
                                                         | (0xff000000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__newv));
                                                }
                                                __Vdly__tinygpu_top__DOT__u_regs__DOT__bias_addr_o 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__Vfuncout;
                                            }
                                        }
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo)))) {
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__wstrb 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__newv 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__oldv 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src1_addr_o;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__Vfuncout 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__oldv;
                                                if (
                                                    (1U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__Vfuncout 
                                                        = 
                                                        ((0xffffff00U 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__Vfuncout) 
                                                         | (0x000000ffU 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__newv));
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__Vfuncout 
                                                        = 
                                                        ((0xffff00ffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__Vfuncout) 
                                                         | (0x0000ff00U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__newv));
                                                }
                                                if (
                                                    (4U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__Vfuncout 
                                                        = 
                                                        ((0xff00ffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__Vfuncout) 
                                                         | (0x00ff0000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__newv));
                                                }
                                                if (
                                                    (8U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__Vfuncout 
                                                        = 
                                                        ((0x00ffffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__Vfuncout) 
                                                         | (0xff000000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__newv));
                                                }
                                                __Vdly__tinygpu_top__DOT__u_regs__DOT__src1_addr_o 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__Vfuncout;
                                            }
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo)))) {
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__wstrb 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__newv 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__oldv 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src0_addr_o;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__Vfuncout 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__oldv;
                                                if (
                                                    (1U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__Vfuncout 
                                                        = 
                                                        ((0xffffff00U 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__Vfuncout) 
                                                         | (0x000000ffU 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__newv));
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__Vfuncout 
                                                        = 
                                                        ((0xffff00ffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__Vfuncout) 
                                                         | (0x0000ff00U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__newv));
                                                }
                                                if (
                                                    (4U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__Vfuncout 
                                                        = 
                                                        ((0xff00ffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__Vfuncout) 
                                                         | (0x00ff0000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__newv));
                                                }
                                                if (
                                                    (8U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__Vfuncout 
                                                        = 
                                                        ((0x00ffffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__Vfuncout) 
                                                         | (0xff000000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__newv));
                                                }
                                                __Vdly__tinygpu_top__DOT__u_regs__DOT__src0_addr_o 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__Vfuncout;
                                            }
                                        }
                                    }
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                          >> 4U)))) {
                                if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo)))) {
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__wstrb 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__newv 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__oldv 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_addr_o;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__Vfuncout 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__oldv;
                                                if (
                                                    (1U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__Vfuncout 
                                                        = 
                                                        ((0xffffff00U 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__Vfuncout) 
                                                         | (0x000000ffU 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__newv));
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__Vfuncout 
                                                        = 
                                                        ((0xffff00ffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__Vfuncout) 
                                                         | (0x0000ff00U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__newv));
                                                }
                                                if (
                                                    (4U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__Vfuncout 
                                                        = 
                                                        ((0xff00ffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__Vfuncout) 
                                                         | (0x00ff0000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__newv));
                                                }
                                                if (
                                                    (8U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__Vfuncout 
                                                        = 
                                                        ((0x00ffffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__Vfuncout) 
                                                         | (0xff000000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__newv));
                                                }
                                                __Vdly__tinygpu_top__DOT__u_regs__DOT__cmd_addr_o 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__Vfuncout;
                                            }
                                        }
                                    }
                                    if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo)))) {
                                                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__opcode_o 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_op_next_w;
                                            }
                                        }
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo)))) {
                                                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_enable_o 
                                                    = 
                                                    (1U 
                                                     & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__ctrl_mode_next_w));
                                                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_mode_o 
                                                    = 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__ctrl_mode_next_w) 
                                                        >> 1U));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((0x00000020U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                            if ((0x00000010U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo)))) {
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__wstrb 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__newv 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__oldv 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__flags_o;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__Vfuncout 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__oldv;
                                                if (
                                                    (1U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__Vfuncout 
                                                        = 
                                                        ((0xffffff00U 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__Vfuncout) 
                                                         | (0x000000ffU 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__newv));
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__Vfuncout 
                                                        = 
                                                        ((0xffff00ffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__Vfuncout) 
                                                         | (0x0000ff00U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__newv));
                                                }
                                                if (
                                                    (4U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__Vfuncout 
                                                        = 
                                                        ((0xff00ffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__Vfuncout) 
                                                         | (0x00ff0000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__newv));
                                                }
                                                if (
                                                    (8U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__Vfuncout 
                                                        = 
                                                        ((0x00ffffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__Vfuncout) 
                                                         | (0xff000000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__newv));
                                                }
                                                __Vdly__tinygpu_top__DOT__u_regs__DOT__flags_o 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__Vfuncout;
                                            }
                                        }
                                    }
                                    if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo)))) {
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__wstrb 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__newv 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__oldv 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__scale_o;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__Vfuncout 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__oldv;
                                                if (
                                                    (1U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__Vfuncout 
                                                        = 
                                                        ((0xffffff00U 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__Vfuncout) 
                                                         | (0x000000ffU 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__newv));
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__Vfuncout 
                                                        = 
                                                        ((0xffff00ffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__Vfuncout) 
                                                         | (0x0000ff00U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__newv));
                                                }
                                                if (
                                                    (4U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__Vfuncout 
                                                        = 
                                                        ((0xff00ffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__Vfuncout) 
                                                         | (0x00ff0000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__newv));
                                                }
                                                if (
                                                    (8U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__Vfuncout 
                                                        = 
                                                        ((0x00ffffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__Vfuncout) 
                                                         | (0xff000000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__newv));
                                                }
                                                __Vdly__tinygpu_top__DOT__u_regs__DOT__scale_o 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__Vfuncout;
                                            }
                                        }
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo)))) {
                                                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride1_o 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride1_next_w;
                                            }
                                        }
                                    }
                                    if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo)))) {
                                                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride_dst_o 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride_dst_next_w;
                                            }
                                        }
                                    }
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                          >> 4U)))) {
                                if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo)))) {
                                                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_k_o 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_k_next_w;
                                            }
                                        }
                                    }
                                    if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo)))) {
                                                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride0_o 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride0_next_w;
                                            }
                                        }
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo)))) {
                                                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_n_o 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_n_next_w;
                                            }
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo)))) {
                                                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_m_o 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_m_next_w;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((0x00000040U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                      >> 5U)))) {
                            if ((0x00000010U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo)))) {
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__wstrb 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__newv 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__oldv 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_in_hw_o;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__Vfuncout 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__oldv;
                                                if (
                                                    (1U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__Vfuncout 
                                                        = 
                                                        ((0xffffff00U 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__Vfuncout) 
                                                         | (0x000000ffU 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__newv));
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__Vfuncout 
                                                        = 
                                                        ((0xffff00ffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__Vfuncout) 
                                                         | (0x0000ff00U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__newv));
                                                }
                                                if (
                                                    (4U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__Vfuncout 
                                                        = 
                                                        ((0xff00ffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__Vfuncout) 
                                                         | (0x00ff0000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__newv));
                                                }
                                                if (
                                                    (8U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__Vfuncout 
                                                        = 
                                                        ((0x00ffffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__Vfuncout) 
                                                         | (0xff000000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__newv));
                                                }
                                                __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_in_hw_o 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__Vfuncout;
                                            }
                                        }
                                    }
                                    if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo)))) {
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__wstrb 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__newv 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__oldv 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_channels_o;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__Vfuncout 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__oldv;
                                                if (
                                                    (1U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__Vfuncout 
                                                        = 
                                                        ((0xffffff00U 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__Vfuncout) 
                                                         | (0x000000ffU 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__newv));
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__Vfuncout 
                                                        = 
                                                        ((0xffff00ffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__Vfuncout) 
                                                         | (0x0000ff00U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__newv));
                                                }
                                                if (
                                                    (4U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__Vfuncout 
                                                        = 
                                                        ((0xff00ffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__Vfuncout) 
                                                         | (0x00ff0000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__newv));
                                                }
                                                if (
                                                    (8U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__Vfuncout 
                                                        = 
                                                        ((0x00ffffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__Vfuncout) 
                                                         | (0xff000000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__newv));
                                                }
                                                __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_channels_o 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__Vfuncout;
                                            }
                                        }
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo)))) {
                                                if (
                                                    (1U 
                                                     & vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata)) {
                                                    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_q = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo)))) {
                                                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shift_o 
                                                    = 
                                                    (vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shiftzp_next_w 
                                                     >> 0x10U);
                                                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__zero_point_o 
                                                    = 
                                                    (0x0000ffffU 
                                                     & vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shiftzp_next_w);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((0x00000020U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo)))) {
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__wstrb 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__newv 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__oldv 
                                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_cfg_o;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__Vfuncout 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__oldv;
                                                if (
                                                    (1U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__Vfuncout 
                                                        = 
                                                        ((0xffffff00U 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__Vfuncout) 
                                                         | (0x000000ffU 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__newv));
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__Vfuncout 
                                                        = 
                                                        ((0xffff00ffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__Vfuncout) 
                                                         | (0x0000ff00U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__newv));
                                                }
                                                if (
                                                    (4U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__Vfuncout 
                                                        = 
                                                        ((0xff00ffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__Vfuncout) 
                                                         | (0x00ff0000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__newv));
                                                }
                                                if (
                                                    (8U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__Vfuncout 
                                                        = 
                                                        ((0x00ffffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__Vfuncout) 
                                                         | (0xff000000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__newv));
                                                }
                                                __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_cfg_o 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__Vfuncout;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (vlSelfRef.tinygpu_top__DOT__u_regs__DOT__start_pulse_o) {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__done_sticky_q = 0U;
            }
        }
    } else {
        __Vdly__tinygpu_top__DOT__u_regs__DOT__dst_addr_o = 0U;
        __Vdly__tinygpu_top__DOT__u_regs__DOT__bias_addr_o = 0U;
        __Vdly__tinygpu_top__DOT__u_regs__DOT__cmd_addr_o = 0U;
        __Vdly__tinygpu_top__DOT__u_regs__DOT__src1_addr_o = 0U;
        __Vdly__tinygpu_top__DOT__u_regs__DOT__src0_addr_o = 0U;
        __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_in_hw_o = 0U;
        __Vdly__tinygpu_top__DOT__u_regs__DOT__flags_o = 0U;
        __Vdly__tinygpu_top__DOT__u_regs__DOT__scale_o = 0U;
        __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_channels_o = 0U;
        __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_cfg_o = 0U;
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__done_sticky_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__opcode_o = 0U;
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_k_o = 0U;
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_n_o = 0U;
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_m_o = 0U;
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride0_o = 0U;
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride1_o = 0U;
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride_dst_o = 0U;
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shift_o = 0U;
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__zero_point_o = 0U;
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_enable_o = 0U;
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_mode_o = 0U;
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dst_addr_o 
        = __Vdly__tinygpu_top__DOT__u_regs__DOT__dst_addr_o;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__bias_addr_o 
        = __Vdly__tinygpu_top__DOT__u_regs__DOT__bias_addr_o;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_addr_o 
        = __Vdly__tinygpu_top__DOT__u_regs__DOT__cmd_addr_o;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src1_addr_o 
        = __Vdly__tinygpu_top__DOT__u_regs__DOT__src1_addr_o;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src0_addr_o 
        = __Vdly__tinygpu_top__DOT__u_regs__DOT__src0_addr_o;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_in_hw_o 
        = __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_in_hw_o;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__flags_o 
        = __Vdly__tinygpu_top__DOT__u_regs__DOT__flags_o;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__scale_o 
        = __Vdly__tinygpu_top__DOT__u_regs__DOT__scale_o;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_channels_o 
        = __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_channels_o;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_cfg_o 
        = __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_cfg_o;
    vlSelfRef.tinygpu_top__DOT__reg_dst_addr = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dst_addr_o;
    vlSelfRef.tinygpu_top__DOT__reg_bias_addr = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__bias_addr_o;
    vlSelfRef.tinygpu_top__DOT__reg_cmd_addr = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_addr_o;
    vlSelfRef.tinygpu_top__DOT__reg_src1_addr = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src1_addr_o;
    vlSelfRef.tinygpu_top__DOT__reg_src0_addr = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src0_addr_o;
    vlSelfRef.tinygpu_top__DOT__reg_conv_in_hw = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_in_hw_o;
    vlSelfRef.tinygpu_top__DOT__reg_flags = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__flags_o;
    vlSelfRef.tinygpu_top__DOT__reg_scale = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__scale_o;
    vlSelfRef.tinygpu_top__DOT__reg_conv_channels = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_channels_o;
    vlSelfRef.tinygpu_top__DOT__reg_conv_cfg = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_cfg_o;
    vlSelfRef.tinygpu_top__DOT__reg_opcode = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__opcode_o;
    vlSelfRef.tinygpu_top__DOT__reg_dim_k = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_k_o;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__wstrb 
        = (3U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb));
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__newv 
        = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata);
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__oldv 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_k_o;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__Vfuncout 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__oldv;
    if ((1U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__Vfuncout 
            = ((0xff00U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__Vfuncout)) 
               | (0x000000ffU & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__newv)));
    }
    if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__Vfuncout 
            = ((0x00ffU & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__Vfuncout)) 
               | (0x0000ff00U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__newv)));
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_k_next_w 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__Vfuncout;
    vlSelfRef.tinygpu_top__DOT__reg_dim_n = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_n_o;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__wstrb 
        = (3U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb));
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__newv 
        = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata);
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__oldv 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_n_o;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__Vfuncout 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__oldv;
    if ((1U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__Vfuncout 
            = ((0xff00U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__Vfuncout)) 
               | (0x000000ffU & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__newv)));
    }
    if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__Vfuncout 
            = ((0x00ffU & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__Vfuncout)) 
               | (0x0000ff00U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__newv)));
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_n_next_w 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__Vfuncout;
    vlSelfRef.tinygpu_top__DOT__reg_dim_m = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_m_o;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__wstrb 
        = (3U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb));
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__newv 
        = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata);
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__oldv 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_m_o;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__Vfuncout 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__oldv;
    if ((1U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__Vfuncout 
            = ((0xff00U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__Vfuncout)) 
               | (0x000000ffU & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__newv)));
    }
    if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__Vfuncout 
            = ((0x00ffU & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__Vfuncout)) 
               | (0x0000ff00U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__newv)));
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_m_next_w 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__Vfuncout;
    vlSelfRef.tinygpu_top__DOT__reg_stride0 = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride0_o;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__wstrb 
        = (3U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb));
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__newv 
        = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata);
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__oldv 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride0_o;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__Vfuncout 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__oldv;
    if ((1U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__Vfuncout 
            = ((0xff00U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__Vfuncout)) 
               | (0x000000ffU & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__newv)));
    }
    if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__Vfuncout 
            = ((0x00ffU & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__Vfuncout)) 
               | (0x0000ff00U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__newv)));
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride0_next_w 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__Vfuncout;
    vlSelfRef.tinygpu_top__DOT__reg_stride1 = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride1_o;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__wstrb 
        = (3U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb));
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__newv 
        = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata);
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__oldv 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride1_o;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__Vfuncout 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__oldv;
    if ((1U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__Vfuncout 
            = ((0xff00U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__Vfuncout)) 
               | (0x000000ffU & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__newv)));
    }
    if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__Vfuncout 
            = ((0x00ffU & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__Vfuncout)) 
               | (0x0000ff00U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__newv)));
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride1_next_w 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__Vfuncout;
    vlSelfRef.tinygpu_top__DOT__reg_stride_dst = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride_dst_o;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__wstrb 
        = (3U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb));
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__newv 
        = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata);
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__oldv 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride_dst_o;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__Vfuncout 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__oldv;
    if ((1U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__Vfuncout 
            = ((0xff00U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__Vfuncout)) 
               | (0x000000ffU & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__newv)));
    }
    if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__Vfuncout 
            = ((0x00ffU & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__Vfuncout)) 
               | (0x0000ff00U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__newv)));
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride_dst_next_w 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__Vfuncout;
    vlSelfRef.tinygpu_top__DOT__reg_shift = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shift_o;
    vlSelfRef.tinygpu_top__DOT__reg_zero_point = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__zero_point_o;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__wstrb 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__newv 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__oldv 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shift_o) 
            << 0x00000010U) | (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__zero_point_o));
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__oldv;
    if ((1U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout 
            = ((0xffffff00U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout) 
               | (0x000000ffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__newv));
    }
    if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout 
            = ((0xffff00ffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout) 
               | (0x0000ff00U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__newv));
    }
    if ((4U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout 
            = ((0xff00ffffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout) 
               | (0x00ff0000U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__newv));
    }
    if ((8U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout 
            = ((0x00ffffffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout) 
               | (0xff000000U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__newv));
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shiftzp_next_w 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout;
    vlSelfRef.tinygpu_top__DOT__reg_irq_enable = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_enable_o;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_o 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_q;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_mode_o) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_enable_o));
    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb))) {
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_op_next_w 
            = (0x000000ffU & vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__ctrl_mode_next_w 
            = (3U & (vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata 
                     >> 2U));
    } else {
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_op_next_w 
            = (0x000000ffU & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__opcode_o));
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__ctrl_mode_next_w 
            = (3U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7));
    }
    vlSelfRef.tinygpu_top__DOT__reg_direct_mode = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_mode_o;
    vlSelfRef.tinygpu_top__DOT__reg_irq_pending = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__direct_mode 
        = vlSelfRef.tinygpu_top__DOT__reg_direct_mode;
    vlSelfRef.tinygpu_top__DOT__irq = ((IData)(vlSelfRef.tinygpu_top__DOT__reg_irq_enable) 
                                       & (IData)(vlSelfRef.tinygpu_top__DOT__reg_irq_pending));
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__start_direct_mode_o 
        = (1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__start_pulse_o)
                  ? ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__ctrl_mode_next_w) 
                     >> 1U) : (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_mode_o)));
    vlSelfRef.irq = vlSelfRef.tinygpu_top__DOT__irq;
    vlSelfRef.tinygpu_top__DOT__reg_start_direct_mode 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__start_direct_mode_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__start_direct_mode 
        = vlSelfRef.tinygpu_top__DOT__reg_start_direct_mode;
}

void Vtop___024root___nba_sequent__TOP__21(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__21\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__rst_n) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_req) 
                              & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__coord_valid)))))) {
                VL_WRITEF_NX("[%0t] %%Error: tinygpu_im2col_loader.sv:294: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl.u_im2col", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_im2col_loader.sv", 294, "");
            }
            if (VL_UNLIKELY(((((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_req) 
                               & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_ready)) 
                              & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__read_outstanding_q))))) {
                VL_WRITEF_NX("[%0t] %%Error: tinygpu_im2col_loader.sv:295: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl.u_im2col", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_im2col_loader.sv", 295, "");
            }
            if (VL_UNLIKELY(((1U & (~ (((4U > (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_q)) 
                                        | (0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) 
                                       | (6U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: tinygpu_im2col_loader.sv:300: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl.u_im2col", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_im2col_loader.sv", 300, "");
            }
            if (VL_UNLIKELY(((1U & (~ (((0x0010U > (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_q)) 
                                        | (0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) 
                                       | (6U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: tinygpu_im2col_loader.sv:301: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl.u_im2col", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_im2col_loader.sv", 301, "");
            }
        }
        if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_req) 
             & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_ready))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__read_outstanding_q = 1U;
        }
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rvalid) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__read_outstanding_q = 0U;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_y_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_y_d;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_d;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_d;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_d;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_d;
        if (((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)) 
             & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__first_kh_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_kh;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__first_kw_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_kw;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__first_ic_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_ic;
        }
        if ((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__sample_valid_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__coord_valid;
        }
        if (((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)) 
             & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rvalid))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__sample_q 
                = (0x000000ffU & ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__lane_sel))
                                   ? vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rdata
                                   : ((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__lane_sel))
                                       ? (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rdata 
                                          >> 8U) : 
                                      ((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__lane_sel))
                                        ? (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rdata 
                                           >> 0x10U)
                                        : (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rdata 
                                           >> 0x18U)))));
        } else if (((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)) 
                    & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__coord_valid)))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__sample_q = 0U;
        }
        if ((((5U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)) 
              & (0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_q))) 
             & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_k))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_kh 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_kh;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_kw 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_kw;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_ic 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_ic;
        }
        if ((((5U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)) 
              & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_row)) 
             & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_k))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_out_y 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_y_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_out_x 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_d;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_d;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_d;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_d;
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__read_outstanding_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_y_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__first_kh_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__first_kw_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__first_ic_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__sample_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__sample_valid_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_out_y = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_out_x = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_kh = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_kw = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_ic = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q = 0U;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_out_y 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_out_y;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_out_x 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_out_x;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_kh 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_kh;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_kw 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_kw;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_ic 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_ic;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_addr 
        = (0x000001ffU & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_q) 
                          + (0x000001f0U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_q) 
                                            << 4U))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__busy = 1U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_wr_en = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_wdata 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__sample_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_req = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_req = 1U;
            }
        }
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__error = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__done = 0U;
    if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__busy = 0U;
            if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__error = 1U;
            }
            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__done = 1U;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_wr_en = 1U;
                if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__sample_valid_q)))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_wdata = 0U;
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q) 
                         >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__busy = 0U;
        }
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_wdata 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_wdata;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_req 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_req;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_error 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__error;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_done 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__done;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_req_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_req;
}

void Vtop___024root___nba_sequent__TOP__22(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__22\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__tinygpu_top__DOT__mem_cmd_valid_q;
    __Vdly__tinygpu_top__DOT__mem_cmd_valid_q = 0;
    CData/*0:0*/ __Vdly__tinygpu_top__DOT__mem_read_pending_q;
    __Vdly__tinygpu_top__DOT__mem_read_pending_q = 0;
    // Body
    __Vdly__tinygpu_top__DOT__mem_read_pending_q = vlSelfRef.tinygpu_top__DOT__mem_read_pending_q;
    __Vdly__tinygpu_top__DOT__mem_cmd_valid_q = vlSelfRef.tinygpu_top__DOT__mem_cmd_valid_q;
    if (vlSelfRef.tinygpu_top__DOT__rst_n) {
        vlSelfRef.tinygpu_top__DOT__mem_rvalid_stage_q = 0U;
        if (((IData)(vlSelfRef.tinygpu_top__DOT__mem_stage_ready) 
             & (IData)(vlSelfRef.tinygpu_top__DOT__mem_req_raw))) {
            vlSelfRef.tinygpu_top__DOT__mem_cmd_addr_q 
                = vlSelfRef.tinygpu_top__DOT__mem_addr_raw;
            vlSelfRef.tinygpu_top__DOT__mem_cmd_wdata_q 
                = vlSelfRef.tinygpu_top__DOT__mem_wdata_raw;
            vlSelfRef.tinygpu_top__DOT__mem_cmd_wstrb_q 
                = vlSelfRef.tinygpu_top__DOT__mem_wstrb_raw;
            __Vdly__tinygpu_top__DOT__mem_cmd_valid_q = 1U;
        }
        if (((IData)(vlSelfRef.tinygpu_top__DOT__mem_cmd_valid_q) 
             & (IData)(vlSelfRef.tinygpu_top__DOT__mem_ready))) {
            __Vdly__tinygpu_top__DOT__mem_cmd_valid_q = 0U;
            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__mem_cmd_we_q)))) {
                if (vlSelfRef.tinygpu_top__DOT__mem_rvalid) {
                    __Vdly__tinygpu_top__DOT__mem_read_pending_q = 0U;
                    vlSelfRef.tinygpu_top__DOT__mem_rdata_stage_q 
                        = vlSelfRef.tinygpu_top__DOT__mem_rdata;
                    vlSelfRef.tinygpu_top__DOT__mem_rvalid_stage_q = 1U;
                } else {
                    __Vdly__tinygpu_top__DOT__mem_read_pending_q = 1U;
                }
            }
        }
        if (((IData)(vlSelfRef.tinygpu_top__DOT__mem_stage_ready) 
             & (IData)(vlSelfRef.tinygpu_top__DOT__mem_req_raw))) {
            vlSelfRef.tinygpu_top__DOT__mem_cmd_we_q 
                = vlSelfRef.tinygpu_top__DOT__mem_we_raw;
        }
        if (((IData)(vlSelfRef.tinygpu_top__DOT__mem_read_pending_q) 
             & (IData)(vlSelfRef.tinygpu_top__DOT__mem_rvalid))) {
            __Vdly__tinygpu_top__DOT__mem_read_pending_q = 0U;
            vlSelfRef.tinygpu_top__DOT__mem_rdata_stage_q 
                = vlSelfRef.tinygpu_top__DOT__mem_rdata;
            vlSelfRef.tinygpu_top__DOT__mem_rvalid_stage_q = 1U;
        }
    } else {
        vlSelfRef.tinygpu_top__DOT__mem_cmd_addr_q = 0U;
        vlSelfRef.tinygpu_top__DOT__mem_cmd_wdata_q = 0U;
        vlSelfRef.tinygpu_top__DOT__mem_cmd_wstrb_q = 0U;
        __Vdly__tinygpu_top__DOT__mem_cmd_valid_q = 0U;
        __Vdly__tinygpu_top__DOT__mem_read_pending_q = 0U;
        vlSelfRef.tinygpu_top__DOT__mem_rdata_stage_q = 0U;
        vlSelfRef.tinygpu_top__DOT__mem_rvalid_stage_q = 0U;
        vlSelfRef.tinygpu_top__DOT__mem_cmd_we_q = 0U;
    }
    vlSelfRef.tinygpu_top__DOT__mem_read_pending_q 
        = __Vdly__tinygpu_top__DOT__mem_read_pending_q;
    vlSelfRef.tinygpu_top__DOT__mem_cmd_valid_q = __Vdly__tinygpu_top__DOT__mem_cmd_valid_q;
    vlSelfRef.tinygpu_top__DOT__mem_addr = vlSelfRef.tinygpu_top__DOT__mem_cmd_addr_q;
    vlSelfRef.tinygpu_top__DOT__mem_wdata = vlSelfRef.tinygpu_top__DOT__mem_cmd_wdata_q;
    vlSelfRef.tinygpu_top__DOT__mem_wstrb = vlSelfRef.tinygpu_top__DOT__mem_cmd_wstrb_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_rdata 
        = vlSelfRef.tinygpu_top__DOT__mem_rdata_stage_q;
    vlSelfRef.tinygpu_top__DOT__mem_req = vlSelfRef.tinygpu_top__DOT__mem_cmd_valid_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_rvalid 
        = vlSelfRef.tinygpu_top__DOT__mem_rvalid_stage_q;
    vlSelfRef.mem_addr = vlSelfRef.tinygpu_top__DOT__mem_addr;
    vlSelfRef.mem_wdata = vlSelfRef.tinygpu_top__DOT__mem_wdata;
    vlSelfRef.mem_wstrb = vlSelfRef.tinygpu_top__DOT__mem_wstrb;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_rdata_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_rdata;
    vlSelfRef.mem_req = vlSelfRef.tinygpu_top__DOT__mem_req;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_rvalid_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_rvalid;
    vlSelfRef.tinygpu_top__DOT__mem_stage_ready = (1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.tinygpu_top__DOT__mem_cmd_valid_q) 
                                                       | (IData)(vlSelfRef.tinygpu_top__DOT__mem_read_pending_q))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__client_rdata_o 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_rdata_i;
    vlSelfRef.tinygpu_top__DOT__mem_we = vlSelfRef.tinygpu_top__DOT__mem_cmd_we_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_ready 
        = vlSelfRef.tinygpu_top__DOT__mem_stage_ready;
    vlSelfRef.mem_we = vlSelfRef.tinygpu_top__DOT__mem_we;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_ready_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_ready;
}

extern const VlUnpacked<CData/*3:0*/, 128> Vtop__ConstPool__TABLE_h3e598b89_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hf6103b94_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hb7e7998f_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h9af21c15_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_ha3ab30d9_0;

void Vtop___024root___nba_sequent__TOP__23(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__23\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    __VdfgRegularize_h6e95ff9d_0_2 = 0;
    SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_10;
    __VdfgRegularize_h6e95ff9d_0_10 = 0;
    SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_11;
    __VdfgRegularize_h6e95ff9d_0_11 = 0;
    SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_12;
    __VdfgRegularize_h6e95ff9d_0_12 = 0;
    CData/*1:0*/ __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v0;
    __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v1;
    __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v1 = 0;
    IData/*31:0*/ __VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v2;
    __VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v2 = 0;
    CData/*1:0*/ __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v2;
    __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v2 = 0;
    CData/*1:0*/ __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v3;
    __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v3 = 0;
    // Body
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n) {
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__soft_reset)))) {
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((0x17U < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tinygpu_cmd_ctrl.sv:1860: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_cmd_ctrl.sv", 1860, "");
                }
                if (VL_UNLIKELY((((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q) 
                                  > (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tinygpu_cmd_ctrl.sv:1861: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_cmd_ctrl.sv", 1861, "");
                }
                if (VL_UNLIKELY((((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q) 
                                  > (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tinygpu_cmd_ctrl.sv:1862: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_cmd_ctrl.sv", 1862, "");
                }
                if (VL_UNLIKELY((((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q) 
                                  > (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tinygpu_cmd_ctrl.sv:1863: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_cmd_ctrl.sv", 1863, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__array_mac_en)) 
                                           | (7U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tinygpu_cmd_ctrl.sv:1864: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_cmd_ctrl.sv", 1864, "");
                }
                if (VL_UNLIKELY((((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_wr_en) 
                                  & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_conv)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tinygpu_cmd_ctrl.sv:1865: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_cmd_ctrl.sv", 1865, "");
                }
                if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_busy_status)) 
                                            | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q)) 
                                           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tinygpu_cmd_ctrl.sv:1866: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_cmd_ctrl.sv", 1866, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_busy_status)) 
                                           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_q))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tinygpu_cmd_ctrl.sv:1867: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_cmd_ctrl.sv", 1867, "");
                }
            }
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_valid) {
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i32
                                      [(3U & VL_DIVS_III(32, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_index), (IData)(4U)))]
                                      [(3U & VL_MODDIVS_III(32, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_index), (IData)(4U)))] 
                                      != vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i32)))) {
                        VL_WRITEF_NX("[%0t] %%Error: tinygpu_cmd_ctrl.sv:1869: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000));
                        VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_cmd_ctrl.sv", 1869, "");
                    }
                    if (VL_UNLIKELY(((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8
                                      [(3U & VL_DIVS_III(32, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_index), (IData)(4U)))]
                                      [(3U & VL_MODDIVS_III(32, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_index), (IData)(4U)))] 
                                      != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i8))))) {
                        VL_WRITEF_NX("[%0t] %%Error: tinygpu_cmd_ctrl.sv:1870: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000));
                        VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_cmd_ctrl.sv", 1870, "");
                    }
                }
            }
        }
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n) {
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__soft_reset) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk2__DOT__c = 0U;
            while (VL_GTS_III(32, 4U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk2__DOT__c)) {
                __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v0 
                    = (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk2__DOT__c);
                vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec.enqueue(0U, (IData)(__VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v0));
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk2__DOT__c 
                    = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk2__DOT__c);
            }
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_bias_regs) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk3__DOT__c = 0U;
            while (VL_GTS_III(32, 4U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk3__DOT__c)) {
                __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v1 
                    = (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk3__DOT__c);
                vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec.enqueue(0U, (IData)(__VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v1));
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk3__DOT__c 
                    = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk3__DOT__c);
            }
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_bias_reg) {
            __VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v2 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata;
            __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v2 
                = (3U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q));
            vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec.enqueue(__VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v2, (IData)(__VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v2));
        }
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk1__DOT__c = 0U;
        while (VL_GTS_III(32, 4U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk1__DOT__c)) {
            __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v3 
                = (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk1__DOT__c);
            vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec.enqueue(0U, (IData)(__VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v3));
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk1__DOT__c 
                = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk1__DOT__c);
        }
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_q 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n) 
           && ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__soft_reset))) 
               && (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n) 
           && ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__soft_reset))) 
               && (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n) 
           && ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__soft_reset))) 
               && (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_q 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n) 
           && ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__soft_reset))) 
               && (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d)));
    __Vtableidx1 = ((((((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_unsupported_format) 
                        << 3U) | ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_memory_error) 
                                  << 2U)) | (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_shape_error) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_illegal_opcode))) 
                     << 3U) | (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_status) 
                                << 2U) | (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__soft_reset) 
                                           << 1U) | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n))));
    if ((1U & Vtop__ConstPool__TABLE_h3e598b89_0[__Vtableidx1])) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__illegal_opcode 
            = Vtop__ConstPool__TABLE_hf6103b94_0[__Vtableidx1];
    }
    if ((2U & Vtop__ConstPool__TABLE_h3e598b89_0[__Vtableidx1])) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shape_error 
            = Vtop__ConstPool__TABLE_hb7e7998f_0[__Vtableidx1];
    }
    if ((4U & Vtop__ConstPool__TABLE_h3e598b89_0[__Vtableidx1])) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__memory_error 
            = Vtop__ConstPool__TABLE_h9af21c15_0[__Vtableidx1];
    }
    if ((8U & Vtop__ConstPool__TABLE_h3e598b89_0[__Vtableidx1])) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unsupported_format 
            = Vtop__ConstPool__TABLE_ha3ab30d9_0[__Vtableidx1];
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n) {
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__soft_reset) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_y_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_x_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_addr_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_scaled_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q = 0U;
        } else {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_raw) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw;
            }
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_dma_cmd) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_cmd_n;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_cmd_n;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_cmd_n;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_cmd_n;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_cmd_n;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_cmd_n;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_cmd_n;
            }
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_d;
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_vec_y_reg) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_y_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_load_byte;
            }
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_vec_x_reg) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_x_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_load_byte;
            }
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd_addr) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr;
            }
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_store_cmd) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_next;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_next;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_addr_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_addr_next;
            }
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_scaled) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_scaled_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_product;
            }
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d;
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_post) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post;
            }
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d;
        }
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_y_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_x_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_addr_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_scaled_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q = 0U;
    }
    vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec.commit(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n) 
           && ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__soft_reset))) 
               && (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n) 
           && ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__soft_reset))) 
               && (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__bias 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_base 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__stride_bytes 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__base_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__tile_out_x 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__tile_out_y 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_kh 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_kw 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_ic 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_store_base_addr 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_q 
           + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_q);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__y_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_y_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_x_q;
    vlSelfRef.tinygpu_top__DOT__ctrl_illegal_opcode 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__illegal_opcode;
    vlSelfRef.tinygpu_top__DOT__ctrl_shape_error = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shape_error;
    vlSelfRef.tinygpu_top__DOT__ctrl_memory_error = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__memory_error;
    vlSelfRef.tinygpu_top__DOT__ctrl_unsupported_format 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unsupported_format;
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n) {
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__soft_reset) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode_q = 0U;
        } else {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode_q 
                = ((((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)) 
                     | (4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) 
                    | (5U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) 
                   | (6U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)));
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q 
                = ((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))
                    ? 1U : (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q));
        }
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode_q = 0U;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__y_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__y_i) 
                              >> 7U)))) << 8U) | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__y_i));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_i) 
                              >> 7U)))) << 8U) | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_i));
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__illegal_opcode_i 
        = vlSelfRef.tinygpu_top__DOT__ctrl_illegal_opcode;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shape_error_i 
        = vlSelfRef.tinygpu_top__DOT__ctrl_shape_error;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__memory_error_i 
        = vlSelfRef.tinygpu_top__DOT__ctrl_memory_error;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__unsupported_fmt_i 
        = vlSelfRef.tinygpu_top__DOT__ctrl_unsupported_format;
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n) {
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__soft_reset) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q = 0U;
        } else {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d;
        }
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q = 0U;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_addr 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q 
           + ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q) 
              << 2U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_n_tiles 
        = ((0x0000ffffU & ((IData)(4U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q))) 
           < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n));
    __VdfgRegularize_h6e95ff9d_0_11 = (0x0000ffffU 
                                       & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n) 
                                          - (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk5__DOT__c = 0U;
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n) {
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__soft_reset) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__scale_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_in_hw_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_channels_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_desc_version_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_start_q = 0U;
        } else {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_start_q 
                = ((0x15U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
                   & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_q)));
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__N;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__scale_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__scale;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shift;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_in_hw_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_in_hw;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_channels_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_channels;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_desc_version_q = 1U;
            }
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_cmd_fields) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr_q = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr_q = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__scale_q = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_in_hw_q = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_channels_q = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_desc_version_q = 0U;
            }
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_desc_word) {
                if ((0x00000010U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q 
                                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata;
                                } else {
                                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_channels_q 
                                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata;
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                    if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                        if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                            if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_in_hw_q 
                                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata;
                            } else {
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_desc_version_q 
                                    = (0x000000ffU 
                                       & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata);
                            }
                        } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q 
                                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata 
                                   >> 0x10U);
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q 
                                = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata);
                        } else {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__scale_q 
                                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata;
                        }
                    } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                        if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q 
                                = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata);
                        } else {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q 
                                = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata);
                        }
                    } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q 
                            = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata);
                    } else {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q 
                            = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata);
                    }
                } else if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                    if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                        if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q 
                                = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata);
                        } else {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q 
                                = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata);
                        }
                    } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr_q 
                            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata;
                    } else {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr_q 
                            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata;
                    }
                } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q 
                            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata;
                    } else {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q 
                            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata;
                    }
                } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata;
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q 
                        = (0x000000ffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata);
                }
            }
            if ((((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
                  & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_conv_opcode)) 
                 & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_shape_ok))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q 
                    = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_m_calc);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_output_c;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q 
                    = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_k_calc);
            }
        }
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__scale_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_in_hw_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_channels_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_desc_version_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_start_q = 0U;
    }
    while (VL_GTS_III(32, 4U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk5__DOT__c)) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask 
            = (((~ ((IData)(1U) << (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk5__DOT__c))) 
                & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask)) 
               | (0x0fU & (((0x0000ffffU & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q) 
                                            + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk5__DOT__c)) 
                            < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n)) 
                           << (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk5__DOT__c))));
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_addr[(3U 
                                                                & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk5__DOT__c)] 
            = (0x000000ffU & (VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q), 2U) 
                              + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk5__DOT__c));
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_vec[(3U 
                                                            & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk5__DOT__c)] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_data
            [(3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk5__DOT__c)];
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk5__DOT__c 
            = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk5__DOT__c);
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_addr_mux 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n 
        = ((4U <= (IData)(__VdfgRegularize_h6e95ff9d_0_11))
            ? 4U : (IData)(__VdfgRegularize_h6e95ff9d_0_11));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_mask 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_vec;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scale 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__scale_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__shift 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__zero_point 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_stride_bytes 
        = ((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q))
            ? (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q)
            : 1U);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_start 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_start_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_base 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_q 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n) 
           && ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__soft_reset))) 
               && (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_d)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw_q;
    if (((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q 
          >> 1U) & VL_GTS_III(32, 0U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post = 0U;
    }
    if ((4U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)) {
        vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__17__x 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post;
        vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__17__Vfuncout 
            = (VL_GTS_III(32, 0xffffff80U, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__17__x)
                ? 0xffffff80U : (VL_LTS_III(32, 0x0000007fU, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__17__x)
                                  ? 0x0000007fU : vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__17__x));
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post 
            = vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__17__Vfuncout;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__flags 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__use_dst_i8 
        = (1U & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q 
                 >> 4U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_flags_ok 
        = (1U & (~ (3U == (3U & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q 
                                 >> 4U)))));
    __VdfgRegularize_h6e95ff9d_0_12 = (0x0000ffffU 
                                       & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q) 
                                          - (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__opcode 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q;
    if ((7U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_words_expected = 0x12U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_conv_opcode = 1U;
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_words_expected = 0x0eU;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_conv_opcode = 0U;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok 
        = ((7U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)) 
           | ((5U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)) 
              | ((4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)) 
                 | ((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)) 
                    | ((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)) 
                       | ((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)) 
                          | (6U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = ((3U 
                                                 == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)) 
                                                | (4U 
                                                   == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_output_c 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_channels_q 
           >> 0x00000010U);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_c 
        = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_channels_q);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_m_tiles 
        = ((0x0000ffffU & ((IData)(4U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q))) 
           < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q));
    __VdfgRegularize_h6e95ff9d_0_10 = (0x0000ffffU 
                                       & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q) 
                                          - (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9 = ((0U 
                                                 != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q)) 
                                                & (0U 
                                                   != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk4__DOT__r = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n)
            ? ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__soft_reset)
                ? 0U : (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_d))
            : 0U);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_stride_bytes 
        = ((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q))
            ? (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q)
            : 1U);
    while (VL_GTS_III(32, 4U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk4__DOT__r)) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask 
            = (((~ ((IData)(1U) << (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk4__DOT__r))) 
                & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask)) 
               | (0x0fU & (((0x0000ffffU & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q) 
                                            + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk4__DOT__r)) 
                            < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q)) 
                           << (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk4__DOT__r))));
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_addr[(3U 
                                                                & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk4__DOT__r)] 
            = (0x000000ffU & (VL_SHIFTL_III(8,32,32, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk4__DOT__r, 4U) 
                              + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q)));
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_vec[(3U 
                                                            & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk4__DOT__r)] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_data
            [(3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk4__DOT__r)];
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk4__DOT__r 
            = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk4__DOT__r);
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n)
            ? ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__soft_reset)
                ? 0U : (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d))
            : 0U);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_h 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_in_hw_q 
           >> 0x00000010U);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_w 
        = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_in_hw_q);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_row_stride 
        = ((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q))
            ? (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q)
            : ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_c) 
               * (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_w)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_stride_h 
        = (0x0000000fU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q 
                          >> 0x0000000cU));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_stride_w 
        = (0x0000000fU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q 
                          >> 8U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_h 
        = (0x0000000fU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q 
                          >> 4U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_pad_h 
        = (0x0000000fU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q 
                          >> 0x00000014U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_w 
        = (0x0000000fU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_pad_w 
        = (0x0000000fU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q 
                          >> 0x00000010U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_addr_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_addr_mux;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[0U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[1U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[2U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[3U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[0U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[1U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[2U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[3U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[0U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[1U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[2U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[3U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[0U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[1U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[2U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[3U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_b 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scale;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__zero_point_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__zero_point) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__zero_point));
    if ((8U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)) {
        if (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q)))) {
            vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__18__x 
                = (VL_SHIFTRS_III(32,32,16, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_scaled_q, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q)) 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_ext);
            vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__18__Vfuncout 
                = (VL_LTS_III(32, 0x0000007fU, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__18__x)
                    ? 0x0000007fU : (VL_GTS_III(32, 0xffffff80U, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__18__x)
                                      ? 0x00000080U
                                      : (0x000000ffU 
                                         & vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__18__x)));
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8 
                = vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__18__Vfuncout;
        } else {
            vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__19__x 
                = (VL_SHIFTL_III(32,32,16, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_scaled_q, 
                                 (0x0000ffffU & (- (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q)))) 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_ext);
            vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__19__Vfuncout 
                = (VL_LTS_III(32, 0x0000007fU, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__19__x)
                    ? 0x0000007fU : (VL_GTS_III(32, 0xffffff80U, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__19__x)
                                      ? 0x00000080U
                                      : (0x000000ffU 
                                         & vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__19__x)));
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8 
                = vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__19__Vfuncout;
        }
    } else {
        vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__20__x 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post_q;
        vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__20__Vfuncout 
            = (VL_LTS_III(32, 0x0000007fU, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__20__x)
                ? 0x0000007fU : (VL_GTS_III(32, 0xffffff80U, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__20__x)
                                  ? 0x00000080U : (0x000000ffU 
                                                   & vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__20__x)));
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8 
            = vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__20__Vfuncout;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_elem_addr 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q 
           + ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_stride_bytes) 
              * (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_start;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_elem_addr 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q 
           + ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_stride_bytes) 
              * (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_stride_bytes 
        = ((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q))
            ? (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q)
            : ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__use_dst_i8)
                ? 1U : 4U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k 
        = ((0x0010U <= (IData)(__VdfgRegularize_h6e95ff9d_0_12))
            ? 0x0010U : (IData)(__VdfgRegularize_h6e95ff9d_0_12));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__z_o = 0U;
    if ((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__opcode))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__z_o 
            = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_ext 
               + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__y_ext);
    } else if ((4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__opcode))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__z_o 
            = VL_MULS_III(32, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_ext, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__y_ext);
    } else if ((5U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__opcode))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__z_o 
            = (VL_GTS_III(32, 0U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_ext)
                ? 0U : vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_ext);
    } else if ((6U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__opcode))) {
        vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__29__x 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_ext;
        vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__29__Vfuncout 
            = (VL_GTS_III(32, 0xffffff80U, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__29__x)
                ? 0xffffff80U : (VL_LTS_III(32, 0x0000007fU, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__29__x)
                                  ? 0x0000007fU : vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__29__x));
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__z_o 
            = vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__29__Vfuncout;
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__z_o = 0U;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_needs_y 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8;
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_conv_opcode) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_eff 
            = ((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q))
                ? (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q)
                : (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_output_c));
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_eff 
            = (0x0000ffffU & ((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q))
                               ? (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q)
                               : ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__use_dst_i8)
                                   ? (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_output_c)
                                   : VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_output_c), 2U))));
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_eff 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_eff 
            = (0x0000ffffU & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q));
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_c 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_c;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m 
        = ((4U <= (IData)(__VdfgRegularize_h6e95ff9d_0_10))
            ? 4U : (IData)(__VdfgRegularize_h6e95ff9d_0_10));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_vec;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_mask 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__row_mask 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_h 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_h;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_w 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_w;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__stride_h 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_stride_h;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__stride_w 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_stride_w;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kernel_h 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_h;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__pad_h 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_pad_h;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16 = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_pad_h) 
                                                  << 1U) 
                                                 + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_h));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kernel_w 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_w;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_k_calc 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_h) 
           * ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_c) 
              * (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_w)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__pad_w 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_pad_w;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15 = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_pad_w) 
                                                  << 1U) 
                                                 + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_w));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_b 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_b;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_lane_sel 
        = (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_elem_addr);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_read_addr 
        = (0xfffffffcU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_elem_addr);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_lane_sel 
        = (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_elem_addr);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_read_addr 
        = (0xfffffffcU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_elem_addr);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_addr 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr_q 
           + ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q) 
              << 2U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr_q 
           + ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_stride_bytes) 
              * (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_k_tiles 
        = ((0x0000ffffU & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q) 
                           + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k))) 
           < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_k 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__z_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_last 
        = (((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q))) 
            >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m)) 
           & ((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q))) 
              >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_rows 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[0U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[0U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[0U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[0U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[1U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[1U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[1U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[1U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[2U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[2U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[2U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[2U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[3U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[3U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[3U];
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[3U];
    __VdfgRegularize_h6e95ff9d_0_2 = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__row_mask) 
                                      & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_row_stride 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_row_stride;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_h_calc 
        = ((IData)(1U) + VL_SHIFTR_III(32,32,32, (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16 
                                                  - (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_h)), 
                                       (1U & (- (IData)(
                                                        (2U 
                                                         == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_stride_h)))))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_w_calc 
        = ((IData)(1U) + VL_SHIFTR_III(32,32,32, (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15 
                                                  - (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_w)), 
                                       (1U & (- (IData)(
                                                        (2U 
                                                         == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_stride_w)))))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_bias_regs = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_cmd_n = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_store_cmd = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_cmd_n = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_raw = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_post = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_cmd_n = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_illegal_opcode = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd_addr = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_status = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_cmd_n = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_dma_cmd = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_cmd_n = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_cmd_n = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_cmd_n = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_cmd_done = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__done = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_busy 
        = ((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
           & ((0x16U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
              & (0x17U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_active 
        = ((7U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
           | ((0x0eU == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
              | ((0x0fU == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
                 | (0x10U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_cmd_start = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_we = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wstrb = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wdata = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_req = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_req = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_req = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__busy = 1U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__array_clear_acc = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_start = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__array_mac_en = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                  >> 4U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_bias_regs = 1U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__array_clear_acc = 1U;
                    }
                }
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__array_mac_en = 1U;
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok)))) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_illegal_opcode = 1U;
                        }
                    }
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__start) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd_addr = 1U;
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_cmd_start = 1U;
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_status = 1U;
                        } else {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_status = 0U;
                        }
                    }
                }
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q)))) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_req = 1U;
                        }
                    }
                }
            }
        }
        if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_cmd_n = 2U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_cmd_n = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_cmd_n 
                            = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__use_dst_i8)
                                ? 3U : 2U);
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_cmd_n 
                            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n;
                        if ((1U & ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                                   & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q))))) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_dma_cmd = 1U;
                        }
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_cmd_n 
                            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_cmd_n 
                            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_eff;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_cmd_n 
                            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_store_base_addr;
                        if ((1U & (~ ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                                      & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q)))))) {
                            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) {
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_start = 1U;
                            }
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        if ((1U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)) {
                            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_q)))) {
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_req = 1U;
                            }
                        }
                    }
                }
            }
            if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_raw = 1U;
                    }
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_post = 1U;
                    }
                }
            }
        } else if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_cmd_n = 1U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_cmd_n = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_cmd_n = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_cmd_n 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n;
                    if ((1U & ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                               & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q))))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_dma_cmd = 1U;
                    }
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_cmd_n 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_cmd_n 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_eff;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_cmd_n 
                        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_q 
                           + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_q);
                    if ((1U & (~ ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                                  & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q)))))) {
                        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_start = 1U;
                        }
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_cmd_n = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_cmd_n = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_cmd_n = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_cmd_n 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k;
                if ((1U & ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                           & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q))))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_dma_cmd = 1U;
                }
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_cmd_n 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_cmd_n 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_cmd_n 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_q 
                       + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q));
                if ((1U & (~ ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                              & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q)))))) {
                    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_start = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_bias 
        = (9U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_vec 
        = ((0x0dU == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
           | ((0x0cU == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
              | (0x12U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_desc 
        = (2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_conv 
        = (0x15U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_addr = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_addr_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_next = 0x0fU;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_next 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post_q;
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__use_dst_i8) {
        if ((0U == (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_next = 1U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_next 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8;
        } else if ((1U == (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_next = 2U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_next 
                = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8) 
                   << 8U);
        } else if ((2U == (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_next = 4U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_next 
                = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8) 
                   << 0x00000010U);
        } else {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_next = 8U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_next 
                = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8) 
                   << 0x00000018U);
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_aligned_addr 
            = (0xfffffffcU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr);
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_aligned_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q;
    if ((0x00000010U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_store_cmd = 1U;
                    }
                }
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_we = 1U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wstrb 
                            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_q;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wdata 
                            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_q;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_req = 1U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_addr 
                            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_addr_q;
                    }
                }
            }
            if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_d 
                            = (0x0000ffffU & ((IData)(4U) 
                                              + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q)));
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d = 0U;
                    }
                }
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_cmd_done = 1U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__done = 1U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__busy = 0U;
                }
            } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_d 
                        = (0x0000ffffU & ((IData)(4U) 
                                          + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q)));
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d = 0U;
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__busy = 0U;
                    }
                }
            }
            if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d 
                            = (((0x0000ffffU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q))) 
                                < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k))
                                ? (0x0000ffffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q)))
                                : 0U);
                    }
                } else if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d = 0U;
                }
            } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d = 0U;
                }
            } else if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d = 0U;
            }
        }
        if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_we = 0U;
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q)))) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_req = 1U;
                        }
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_addr 
                            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_read_addr;
                    } else {
                        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q)))) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_req = 1U;
                        }
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_addr 
                            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_read_addr;
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_k_tiles) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d 
                                = (0x0000ffffU & ((IData)(0x0010U) 
                                                  + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q)));
                        }
                    }
                }
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_q)))) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d 
                                = (((0x0000ffffU & 
                                     ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q))) 
                                    < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n))
                                    ? (0x0000ffffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q)))
                                    : 0U);
                            if (((0x0000ffffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q))) 
                                 >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n))) {
                                if (((0x0000ffffU & 
                                      ((IData)(1U) 
                                       + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q))) 
                                     < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m))) {
                                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d 
                                        = (0x0000ffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q)));
                                }
                            }
                            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_last) {
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d = 1U;
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d = 0U;
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d = 0U;
                            }
                        }
                    }
                } else if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_k_tiles)))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d = 0U;
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                             >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d = 0U;
                }
            } else if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d = 0U;
            }
        }
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__output_w 
        = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_w_calc);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_m_calc 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_h_calc 
           * vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_w_calc);
    vlSelfRef.tinygpu_top__DOT__cnt_cmd_done = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_cmd_done;
    vlSelfRef.tinygpu_top__DOT__ctrl_done = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__done;
    vlSelfRef.tinygpu_top__DOT__cnt_busy = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_busy;
    vlSelfRef.tinygpu_top__DOT__cnt_active = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_active;
    vlSelfRef.tinygpu_top__DOT__cnt_cmd_start = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_cmd_start;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_we_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_we;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_wstrb_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wstrb;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_wdata_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wdata;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_req_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_req;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_req_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_req;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_req_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_req;
    vlSelfRef.tinygpu_top__DOT__ctrl_busy = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__busy;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__array_clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__start 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_start;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__array_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_client_sel 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_desc)
            ? 1U : ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_conv)
                     ? 2U : ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_vec)
                              ? 3U : (4U & (- (IData)((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_bias)))))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_addr_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_addr_next 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_aligned_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product));
    vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cmd_done_i 
        = vlSelfRef.tinygpu_top__DOT__cnt_cmd_done;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_done_i 
        = vlSelfRef.tinygpu_top__DOT__ctrl_done;
    vlSelfRef.tinygpu_top__DOT__u_counters__DOT__busy_i 
        = vlSelfRef.tinygpu_top__DOT__cnt_busy;
    vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_i 
        = vlSelfRef.tinygpu_top__DOT__cnt_active;
    vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cmd_start_i 
        = vlSelfRef.tinygpu_top__DOT__cnt_cmd_start;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_busy_i 
        = vlSelfRef.tinygpu_top__DOT__ctrl_busy;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_2));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en) 
           & ((IData)(__VdfgRegularize_h6e95ff9d_0_2) 
              >> 1U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en) 
           & ((IData)(__VdfgRegularize_h6e95ff9d_0_2) 
              >> 2U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en) 
           & ((IData)(__VdfgRegularize_h6e95ff9d_0_2) 
              >> 3U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en) 
                                                & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__row_mask));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en) 
                                                & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__row_mask) 
                                                   >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en) 
                                                & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__row_mask) 
                                                   >> 2U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en) 
                                                & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__row_mask) 
                                                   >> 3U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_client_sel;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 1U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 2U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 3U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 2U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 3U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 1U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 3U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 1U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 2U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en;
}
