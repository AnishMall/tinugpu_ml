// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtinygpu_top.h for the primary calling header

#include "verilated.h"

#include "Vtinygpu_top___024root.h"

VL_ATTR_COLD void Vtinygpu_top___024root___initial__TOP__0(Vtinygpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinygpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinygpu_top___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->mmio_ready = 1U;
}

VL_ATTR_COLD void Vtinygpu_top___024root___settle__TOP__0(Vtinygpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinygpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinygpu_top___024root___settle__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__0__Vfuncout;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__0__oldv;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__0__newv;
    CData/*3:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__0__wstrb;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__1__Vfuncout;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__1__oldv;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__1__newv;
    CData/*3:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__1__wstrb;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__2__Vfuncout;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__2__oldv;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__2__newv;
    CData/*3:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__2__wstrb;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__3__Vfuncout;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__3__oldv;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__3__newv;
    CData/*3:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__3__wstrb;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__4__Vfuncout;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__4__oldv;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__4__newv;
    CData/*3:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__4__wstrb;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__5__Vfuncout;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__5__oldv;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__5__newv;
    CData/*3:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__5__wstrb;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__oldv;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__newv;
    CData/*3:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__wstrb;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__Vfuncout;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__oldv;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__newv;
    CData/*3:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__wstrb;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__Vfuncout;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__oldv;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__newv;
    CData/*3:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__wstrb;
    CData/*7:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__17__Vfuncout;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__17__x;
    CData/*7:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__18__Vfuncout;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__18__x;
    CData/*7:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__19__Vfuncout;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__19__x;
    CData/*7:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__21__Vfuncout;
    CData/*1:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__21__region;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__21__addr;
    CData/*7:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__22__Vfuncout;
    CData/*1:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__22__region;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__22__addr;
    CData/*7:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__23__Vfuncout;
    CData/*1:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__23__region;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__23__addr;
    CData/*7:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__24__Vfuncout;
    CData/*1:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__24__region;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__24__addr;
    // Body
    vlSelf->tinygpu_top__DOT__reg_start_pulse = ((((IData)(vlSelf->mmio_valid) 
                                                   & (IData)(vlSelf->mmio_we)) 
                                                  & (0U 
                                                     == 
                                                     (0xffU 
                                                      & vlSelf->mmio_addr))) 
                                                 & vlSelf->mmio_wdata);
    vlSelf->mem_addr = vlSelf->tinygpu_top__DOT__mem_cmd_addr_q;
    vlSelf->mem_wdata = vlSelf->tinygpu_top__DOT__mem_cmd_wdata_q;
    vlSelf->mem_wstrb = vlSelf->tinygpu_top__DOT__mem_cmd_wstrb_q;
    vlSelf->irq = ((IData)(vlSelf->tinygpu_top__DOT__reg_irq_enable) 
                   & (IData)(vlSelf->tinygpu_top__DOT__u_regs__DOT__irq_pending_q));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask 
        = ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask)) 
           | ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q) 
              < (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q)));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask 
        = ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask)) 
           | ((((IData)(1U) + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q)) 
               < (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q)) 
              << 1U));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_epilogue__bias[0U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec
        [0U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_epilogue__bias[1U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec
        [1U];
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__0__wstrb 
        = vlSelf->mmio_wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__0__newv 
        = vlSelf->mmio_wdata;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__0__oldv 
        = (((IData)(vlSelf->tinygpu_top__DOT__reg_direct_mode) 
            << 3U) | ((IData)(vlSelf->tinygpu_top__DOT__reg_irq_enable) 
                      << 2U));
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__0__Vfuncout 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__0__oldv;
    if ((1U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__0__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__0__Vfuncout 
            = ((0xffffff00U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__0__Vfuncout) 
               | (0xffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__0__newv));
    }
    if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__0__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__0__Vfuncout 
            = ((0xffff00ffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__0__Vfuncout) 
               | (0xff00U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__0__newv));
    }
    if ((4U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__0__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__0__Vfuncout 
            = ((0xff00ffffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__0__Vfuncout) 
               | (0xff0000U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__0__newv));
    }
    if ((8U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__0__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__0__Vfuncout 
            = ((0xffffffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__0__Vfuncout) 
               | (0xff000000U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__0__newv));
    }
    vlSelf->tinygpu_top__DOT__u_regs__DOT__ctrl_next_w 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__0__Vfuncout;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_epi_i8[0U][0U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8
        [0U][0U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_epi_i8[0U][1U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8
        [0U][1U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_epi_i8[1U][0U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8
        [1U][0U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_epi_i8[1U][1U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8
        [1U][1U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_epi_i32[0U][0U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i32
        [0U][0U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_epi_i32[0U][1U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i32
        [0U][1U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_epi_i32[1U][0U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i32
        [1U][0U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_epi_i32[1U][1U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i32
        [1U][1U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__elem_addr 
        = ((vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__base_addr_q 
            + ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q) 
               * (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__stride_bytes_q))) 
           + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__write_addr 
        = ((vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__base_addr_q 
            + ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q) 
               * (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__stride_bytes_q))) 
           + ((2U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind_q))
               ? ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q) 
                  << 2U) : (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q)));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__last_elem 
        = (((0xffffU & ((IData)(1U) + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q))) 
            >= (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows_q)) 
           & ((0xffffU & ((IData)(1U) + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q))) 
              >= (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols_q)));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_store_i32 
        = ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_base_q) 
           + ((((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q) 
                << 1U) + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q)) 
              << 2U));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n 
        = ((2U <= (0xffffU & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q) 
                              - (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q))))
            ? 2U : (0xffffU & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q) 
                               - (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q))));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_array4x4__c_tile[0U][0U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_o;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_array4x4__c_tile[0U][1U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_o;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_array4x4__c_tile[1U][0U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_o;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_array4x4__c_tile[1U][1U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_o;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_addr[0U] 
        = (0xffU & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_addr[1U] 
        = (0xffU & ((IData)(8U) + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q)));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_addr[0U] 
        = (0xfeU & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q) 
                    << 1U));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_addr[1U] 
        = (0xffU & ((IData)(1U) + (0x1feU & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q) 
                                             << 1U))));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wstrb = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_busy = 1U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wr_en = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask 
        = ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask)) 
           | ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q) 
              < (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q)));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask 
        = ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask)) 
           | ((((IData)(1U) + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q)) 
               < (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q)) 
              << 1U));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw_q;
    if (((vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q 
          >> 1U) & VL_GTS_III(32, 0U, vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post))) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post = 0U;
    }
    if ((4U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)) {
        vlSelf->__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__16__x 
            = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post;
        vlSelf->__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__16__Vfuncout 
            = (VL_GTS_III(32, 0xffffff80U, vlSelf->__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__16__x)
                ? 0xffffff80U : (VL_LTS_III(32, 0x7fU, vlSelf->__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__16__x)
                                  ? 0x7fU : vlSelf->__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__16__x));
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post 
            = vlSelf->__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__16__Vfuncout;
    }
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw = 0U;
    if ((3U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw 
            = (VL_EXTENDS_II(32,8, (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_x_q)) 
               + VL_EXTENDS_II(32,8, (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_y_q)));
    } else if ((4U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw 
            = VL_MULS_III(32, VL_EXTENDS_II(32,8, (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_x_q)), 
                          VL_EXTENDS_II(32,8, (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_y_q)));
    } else if ((5U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw 
            = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_x_q)))
                ? 0U : VL_EXTENDS_II(32,8, (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_x_q)));
    } else if ((6U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) {
        vlSelf->__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__28__x 
            = VL_EXTENDS_II(32,8, (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_x_q));
        vlSelf->__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__28__Vfuncout 
            = (VL_GTS_III(32, 0xffffff80U, vlSelf->__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__28__x)
                ? 0xffffff80U : (VL_LTS_III(32, 0x7fU, vlSelf->__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__28__x)
                                  ? 0x7fU : vlSelf->__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__28__x));
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw 
            = vlSelf->__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__28__Vfuncout;
    } else {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw = 0U;
    }
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_req = 0U;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__19__x 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post_q;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__19__Vfuncout 
        = (VL_LTS_III(32, 0x7fU, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__19__x)
            ? 0x7fU : (VL_GTS_III(32, 0xffffff80U, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__19__x)
                        ? 0x80U : (0xffU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__19__x)));
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__18__x 
        = (((0x1fU >= (0xffffU & (- (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q))))
             ? (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_scaled_q 
                << (0xffffU & (- (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q))))
             : 0U) + VL_EXTENDS_II(32,16, (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q)));
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__18__Vfuncout 
        = (VL_LTS_III(32, 0x7fU, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__18__x)
            ? 0x7fU : (VL_GTS_III(32, 0xffffff80U, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__18__x)
                        ? 0x80U : (0xffU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__18__x)));
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__17__x 
        = (((0x1fU >= (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q))
             ? VL_SHIFTRS_III(32,32,16, vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_scaled_q, (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q))
             : (- (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_scaled_q 
                   >> 0x1fU))) + VL_EXTENDS_II(32,16, (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q)));
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__17__Vfuncout 
        = (VL_LTS_III(32, 0x7fU, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__17__x)
            ? 0x7fU : (VL_GTS_III(32, 0xffffff80U, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__17__x)
                        ? 0x80U : (0xffU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__17__x)));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8 
        = ((8U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)
            ? (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q)))
                ? (IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__17__Vfuncout)
                : (IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__18__Vfuncout))
            : (IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__19__Vfuncout));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr 
        = (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr_q 
           + ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q) 
              * ((0U != (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q))
                  ? (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q)
                  : ((0x10U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)
                      ? 1U : 4U))));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_elem_addr 
        = (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q 
           + ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q) 
              * ((0U != (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q))
                  ? (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q)
                  : 1U)));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_elem_addr 
        = (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q 
           + ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q) 
              * ((0U != (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q))
                  ? (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q)
                  : 1U)));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_region 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m 
        = ((2U <= (0xffffU & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q) 
                              - (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q))))
            ? 2U : (0xffffU & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q) 
                               - (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q))));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_flags_ok 
        = (1U & (~ (IData)((0x30U == (0x30U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)))));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok 
        = ((1U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))
            ? (((0U != (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q)) 
                & (0U != (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q))) 
               & (0U != (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q)))
            : ((2U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))
                ? ((0U != (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q)) 
                   & (0U != (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q)))
                : (((((3U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)) 
                      | (4U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) 
                     | (5U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) 
                    | (6U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) 
                   & (0U != (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q)))));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok 
        = ((((((1U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)) 
               | (2U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) 
              | (3U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) 
             | (4U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) 
            | (5U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) 
           | (6U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k 
        = ((8U <= (0xffffU & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q) 
                              - (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q))))
            ? 8U : (0xffffU & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q) 
                               - (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q))));
    vlSelf->mem_req = vlSelf->tinygpu_top__DOT__mem_cmd_valid_q;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__1__wstrb 
        = vlSelf->mmio_wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__1__newv 
        = vlSelf->mmio_wdata;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__1__oldv 
        = vlSelf->tinygpu_top__DOT__reg_opcode;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__1__Vfuncout 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__1__oldv;
    if ((1U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__1__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__1__Vfuncout 
            = ((0xffffff00U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__1__Vfuncout) 
               | (0xffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__1__newv));
    }
    if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__1__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__1__Vfuncout 
            = ((0xffff00ffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__1__Vfuncout) 
               | (0xff00U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__1__newv));
    }
    if ((4U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__1__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__1__Vfuncout 
            = ((0xff00ffffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__1__Vfuncout) 
               | (0xff0000U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__1__newv));
    }
    if ((8U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__1__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__1__Vfuncout 
            = ((0xffffffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__1__Vfuncout) 
               | (0xff000000U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__1__newv));
    }
    vlSelf->tinygpu_top__DOT__u_regs__DOT__direct_op_next_w 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__1__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__2__wstrb 
        = vlSelf->mmio_wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__2__newv 
        = vlSelf->mmio_wdata;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__2__oldv 
        = vlSelf->tinygpu_top__DOT__reg_dim_m;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__2__Vfuncout 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__2__oldv;
    if ((1U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__2__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__2__Vfuncout 
            = ((0xffffff00U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__2__Vfuncout) 
               | (0xffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__2__newv));
    }
    if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__2__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__2__Vfuncout 
            = ((0xffff00ffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__2__Vfuncout) 
               | (0xff00U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__2__newv));
    }
    if ((4U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__2__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__2__Vfuncout 
            = ((0xff00ffffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__2__Vfuncout) 
               | (0xff0000U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__2__newv));
    }
    if ((8U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__2__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__2__Vfuncout 
            = ((0xffffffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__2__Vfuncout) 
               | (0xff000000U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__2__newv));
    }
    vlSelf->tinygpu_top__DOT__u_regs__DOT__dim_m_next_w 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__2__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__3__wstrb 
        = vlSelf->mmio_wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__3__newv 
        = vlSelf->mmio_wdata;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__3__oldv 
        = vlSelf->tinygpu_top__DOT__reg_dim_n;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__3__Vfuncout 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__3__oldv;
    if ((1U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__3__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__3__Vfuncout 
            = ((0xffffff00U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__3__Vfuncout) 
               | (0xffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__3__newv));
    }
    if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__3__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__3__Vfuncout 
            = ((0xffff00ffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__3__Vfuncout) 
               | (0xff00U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__3__newv));
    }
    if ((4U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__3__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__3__Vfuncout 
            = ((0xff00ffffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__3__Vfuncout) 
               | (0xff0000U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__3__newv));
    }
    if ((8U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__3__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__3__Vfuncout 
            = ((0xffffffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__3__Vfuncout) 
               | (0xff000000U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__3__newv));
    }
    vlSelf->tinygpu_top__DOT__u_regs__DOT__dim_n_next_w 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__3__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__4__wstrb 
        = vlSelf->mmio_wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__4__newv 
        = vlSelf->mmio_wdata;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__4__oldv 
        = vlSelf->tinygpu_top__DOT__reg_dim_k;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__4__Vfuncout 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__4__oldv;
    if ((1U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__4__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__4__Vfuncout 
            = ((0xffffff00U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__4__Vfuncout) 
               | (0xffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__4__newv));
    }
    if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__4__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__4__Vfuncout 
            = ((0xffff00ffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__4__Vfuncout) 
               | (0xff00U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__4__newv));
    }
    if ((4U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__4__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__4__Vfuncout 
            = ((0xff00ffffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__4__Vfuncout) 
               | (0xff0000U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__4__newv));
    }
    if ((8U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__4__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__4__Vfuncout 
            = ((0xffffffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__4__Vfuncout) 
               | (0xff000000U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__4__newv));
    }
    vlSelf->tinygpu_top__DOT__u_regs__DOT__dim_k_next_w 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__4__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__5__wstrb 
        = vlSelf->mmio_wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__5__newv 
        = vlSelf->mmio_wdata;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__5__oldv 
        = vlSelf->tinygpu_top__DOT__reg_stride0;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__5__Vfuncout 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__5__oldv;
    if ((1U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__5__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__5__Vfuncout 
            = ((0xffffff00U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__5__Vfuncout) 
               | (0xffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__5__newv));
    }
    if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__5__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__5__Vfuncout 
            = ((0xffff00ffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__5__Vfuncout) 
               | (0xff00U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__5__newv));
    }
    if ((4U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__5__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__5__Vfuncout 
            = ((0xff00ffffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__5__Vfuncout) 
               | (0xff0000U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__5__newv));
    }
    if ((8U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__5__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__5__Vfuncout 
            = ((0xffffffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__5__Vfuncout) 
               | (0xff000000U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__5__newv));
    }
    vlSelf->tinygpu_top__DOT__u_regs__DOT__stride0_next_w 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__5__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__wstrb 
        = vlSelf->mmio_wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__newv 
        = vlSelf->mmio_wdata;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__oldv 
        = vlSelf->tinygpu_top__DOT__reg_stride1;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__oldv;
    if ((1U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout 
            = ((0xffffff00U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout) 
               | (0xffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__newv));
    }
    if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout 
            = ((0xffff00ffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout) 
               | (0xff00U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__newv));
    }
    if ((4U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout 
            = ((0xff00ffffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout) 
               | (0xff0000U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__newv));
    }
    if ((8U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout 
            = ((0xffffffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout) 
               | (0xff000000U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__newv));
    }
    vlSelf->tinygpu_top__DOT__u_regs__DOT__stride1_next_w 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__wstrb 
        = vlSelf->mmio_wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__newv 
        = vlSelf->mmio_wdata;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__oldv 
        = vlSelf->tinygpu_top__DOT__reg_stride_dst;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__Vfuncout 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__oldv;
    if ((1U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__Vfuncout 
            = ((0xffffff00U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__Vfuncout) 
               | (0xffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__newv));
    }
    if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__Vfuncout 
            = ((0xffff00ffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__Vfuncout) 
               | (0xff00U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__newv));
    }
    if ((4U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__Vfuncout 
            = ((0xff00ffffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__Vfuncout) 
               | (0xff0000U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__newv));
    }
    if ((8U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__Vfuncout 
            = ((0xffffffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__Vfuncout) 
               | (0xff000000U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__newv));
    }
    vlSelf->tinygpu_top__DOT__u_regs__DOT__stride_dst_next_w 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__Vfuncout;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__wstrb 
        = vlSelf->mmio_wstrb;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__newv 
        = vlSelf->mmio_wdata;
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__oldv 
        = (((IData)(vlSelf->tinygpu_top__DOT__reg_shift) 
            << 0x10U) | (IData)(vlSelf->tinygpu_top__DOT__reg_zero_point));
    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__Vfuncout 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__oldv;
    if ((1U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__Vfuncout 
            = ((0xffffff00U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__Vfuncout) 
               | (0xffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__newv));
    }
    if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__Vfuncout 
            = ((0xffff00ffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__Vfuncout) 
               | (0xff00U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__newv));
    }
    if ((4U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__Vfuncout 
            = ((0xff00ffffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__Vfuncout) 
               | (0xff0000U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__newv));
    }
    if ((8U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__Vfuncout 
            = ((0xffffffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__Vfuncout) 
               | (0xff000000U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__newv));
    }
    vlSelf->tinygpu_top__DOT__u_regs__DOT__shiftzp_next_w 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__Vfuncout;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_we = 0U;
    vlSelf->tinygpu_top__DOT__mem_stage_ready = (1U 
                                                 & ((~ (IData)(vlSelf->tinygpu_top__DOT__mem_cmd_valid_q)) 
                                                    & (~ (IData)(vlSelf->tinygpu_top__DOT__mem_read_pending_q))));
    vlSelf->mem_we = vlSelf->tinygpu_top__DOT__mem_cmd_we_q;
    vlSelf->tinygpu_top__DOT__reg_soft_reset = ((((IData)(vlSelf->mmio_valid) 
                                                  & (IData)(vlSelf->mmio_we)) 
                                                 & (0U 
                                                    == 
                                                    (0xffU 
                                                     & vlSelf->mmio_addr))) 
                                                & (vlSelf->mmio_wdata 
                                                   >> 1U));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_we = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_bias_regs = 0U;
    vlSelf->tinygpu_top__DOT__ctrl_done = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__array_mac_en = 0U;
    vlSelf->tinygpu_top__DOT__cnt_cmd_done = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_store_cmd = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__array_clear_acc = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_en = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wstrb = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wdata = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_cmd_n = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_cmd_n = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__load_vec_y_reg = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_cmd_n = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__load_desc_word = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_start = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__load_vec_x_reg = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_addr = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__load_bias_reg = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_dma_cmd = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_cmd_n = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__set_memory_error = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q;
    vlSelf->tinygpu_top__DOT__cnt_stall = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_cmd_n = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_vec 
        = (((0xcU == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
            | (0xdU == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) 
           | (0x12U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_req = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_req = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_req = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_start = 0U;
    vlSelf->tinygpu_top__DOT__ctrl_busy = 1U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_status = 0U;
    vlSelf->tinygpu_top__DOT__cnt_cmd_start = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd_addr = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_cmd_fields = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_data = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wdata = 0U;
    if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
            if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wstrb = 1U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wr_en = 1U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wdata 
                    = (0xffU & ((0U == (3U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__elem_addr))
                                 ? vlSelf->tinygpu_top__DOT__mem_rdata_stage_q
                                 : ((1U == (3U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__elem_addr))
                                     ? (vlSelf->tinygpu_top__DOT__mem_rdata_stage_q 
                                        >> 8U) : ((2U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__elem_addr))
                                                   ? 
                                                  (vlSelf->tinygpu_top__DOT__mem_rdata_stage_q 
                                                   >> 0x10U)
                                                   : 
                                                  (vlSelf->tinygpu_top__DOT__mem_rdata_stage_q 
                                                   >> 0x18U)))));
            }
        }
    }
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_addr = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wstrb = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_addr = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_tile[0U][0U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_array4x4__c_tile
        [0U][0U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_tile[0U][1U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_array4x4__c_tile
        [0U][1U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_tile[1U][0U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_array4x4__c_tile
        [1U][0U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_tile[1U][1U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_array4x4__c_tile
        [1U][1U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_spm__a_rd_addr[0U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_addr
        [0U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_spm__a_rd_addr[1U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_addr
        [1U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_spm__b_rd_addr[0U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_addr
        [0U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_spm__b_rd_addr[1U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_addr
        [1U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_next = 0xfU;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_next 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post_q;
    if ((0x10U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)) {
        if ((0U == (3U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr))) {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_next = 1U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_next 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8_q;
        } else if ((1U == (3U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr))) {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_next = 2U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_next 
                = ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8_q) 
                   << 8U);
        } else if ((2U == (3U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr))) {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_next = 4U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_next 
                = ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8_q) 
                   << 0x10U);
        } else {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_next = 8U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_next 
                = ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8_q) 
                   << 0x18U);
        }
    }
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_load_byte 
        = (0xffU & ((0xdU == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))
                     ? ((0U == (3U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_elem_addr))
                         ? vlSelf->tinygpu_top__DOT__mem_rdata_stage_q
                         : ((1U == (3U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_elem_addr))
                             ? (vlSelf->tinygpu_top__DOT__mem_rdata_stage_q 
                                >> 8U) : ((2U == (3U 
                                                  & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_elem_addr))
                                           ? (vlSelf->tinygpu_top__DOT__mem_rdata_stage_q 
                                              >> 0x10U)
                                           : (vlSelf->tinygpu_top__DOT__mem_rdata_stage_q 
                                              >> 0x18U))))
                     : ((0U == (3U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_elem_addr))
                         ? vlSelf->tinygpu_top__DOT__mem_rdata_stage_q
                         : ((1U == (3U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_elem_addr))
                             ? (vlSelf->tinygpu_top__DOT__mem_rdata_stage_q 
                                >> 8U) : ((2U == (3U 
                                                  & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_elem_addr))
                                           ? (vlSelf->tinygpu_top__DOT__mem_rdata_stage_q 
                                              >> 0x10U)
                                           : (vlSelf->tinygpu_top__DOT__mem_rdata_stage_q 
                                              >> 0x18U))))));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_addr = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_last 
        = (((0xffffU & ((IData)(1U) + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q))) 
            >= (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m)) 
           & ((0xffffU & ((IData)(1U) + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q))) 
              >= (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n)));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__set_illegal_opcode = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__set_shape_error = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__set_unsupported_format = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__more_k_tiles 
        = ((0xffffU & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q) 
                       + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k))) 
           < (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_cmd_n = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_cmd_n = 0U;
    if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                  >> 4U)))) {
        if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_bias_regs = 1U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__array_clear_acc = 1U;
                    }
                }
                if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__array_mac_en = 1U;
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q) {
                            if (vlSelf->tinygpu_top__DOT__mem_rvalid_stage_q) {
                                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__load_desc_word = 1U;
                            }
                        }
                        if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q)))) {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_req = 1U;
                        }
                    }
                    if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_d = 0U;
                    } else if (((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q) 
                                & (IData)(vlSelf->tinygpu_top__DOT__mem_rvalid_stage_q))) {
                        if ((0xeU > (0x1fU & ((IData)(1U) 
                                              + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))))) {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_d 
                                = (0x1fU & ((IData)(1U) 
                                            + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q)));
                        }
                    }
                } else if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_d = 0U;
                }
                if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        if (vlSelf->tinygpu_top__DOT__reg_start_pulse) {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_status = 1U;
                            vlSelf->tinygpu_top__DOT__cnt_cmd_start = 1U;
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd_addr = 1U;
                            if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__reg_direct_mode)))) {
                                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_cmd_fields = 1U;
                            }
                            if (vlSelf->tinygpu_top__DOT__reg_direct_mode) {
                                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd = 1U;
                            }
                        } else {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_status = 0U;
                        }
                    }
                    if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok)))) {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__set_illegal_opcode = 1U;
                        }
                        if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok) {
                            if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok)))) {
                                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__set_shape_error = 1U;
                            }
                            if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok) {
                                if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_flags_ok)))) {
                                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__set_unsupported_format = 1U;
                                }
                            }
                        }
                        if ((((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok) 
                              & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok)) 
                             & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_flags_ok))) {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_d = 8U;
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_d 
                                = ((0x10U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)
                                    ? 2U : 8U);
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_d 
                                = ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q) 
                                   << 1U);
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_d 
                                = ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q) 
                                   << 3U);
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_d 
                                = ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q) 
                                   << 1U);
                        }
                    } else {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_d = 0U;
                    }
                }
            }
        }
        if ((8U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_q)))) {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_en = 1U;
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_addr 
                                = (0xffU & ((0xffffU 
                                             & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q) 
                                                << 1U)) 
                                            + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q)));
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_data 
                                = ((0x10U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)
                                    ? vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_epi_i8
                                   [(1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q))]
                                   [(1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q))]
                                    : vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_epi_i32
                                   [(1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q))]
                                   [(1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q))]);
                        }
                        if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_q) {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_cmd_n = 2U;
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_cmd_n = 0U;
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_cmd_n 
                                = ((0x10U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)
                                    ? 3U : 2U);
                            if ((1U & ((~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                                       & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q))))) {
                                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_dma_cmd = 1U;
                            }
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_cmd_n 
                                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q;
                            if ((1U & (~ ((~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                                          & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q)))))) {
                                if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)))) {
                                    if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q) {
                                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__set_memory_error = 1U;
                                    }
                                }
                                if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) {
                                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_start = 1U;
                                }
                            }
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_cmd_n 
                                = (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_q 
                                   + vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_q);
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_cmd_n 
                                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m;
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_cmd_n 
                                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n;
                        }
                    }
                    if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        if ((1U & ((~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_busy)) 
                                   & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_done))))) {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_start = 1U;
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        if ((1U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)) {
                            if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_q) {
                                if (vlSelf->tinygpu_top__DOT__mem_rvalid_stage_q) {
                                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__load_bias_reg = 1U;
                                }
                            }
                            if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_q)))) {
                                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_req = 1U;
                            }
                        }
                    }
                }
            }
            if ((4U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q) {
                            if (vlSelf->tinygpu_top__DOT__mem_rvalid_stage_q) {
                                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__load_vec_y_reg = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q) {
                            if (vlSelf->tinygpu_top__DOT__mem_rvalid_stage_q) {
                                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__load_vec_x_reg = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_cmd_n = 1U;
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_cmd_n = 0U;
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_cmd_n = 0U;
                    if ((1U & ((~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                               & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q))))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_dma_cmd = 1U;
                    }
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_cmd_n 
                        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q;
                    if ((1U & (~ ((~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                                  & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q)))))) {
                        if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)))) {
                            if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q) {
                                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__set_memory_error = 1U;
                            }
                        }
                        if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_start = 1U;
                        }
                    }
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_cmd_n 
                        = (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_q 
                           + vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_q);
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_cmd_n 
                        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k;
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_cmd_n 
                        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n;
                }
            } else if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_cmd_n = 0U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_cmd_n = 0U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_cmd_n = 0U;
                if ((1U & ((~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                           & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q))))) {
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_dma_cmd = 1U;
                }
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_cmd_n 
                    = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q;
                if ((1U & (~ ((~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                              & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q)))))) {
                    if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)))) {
                        if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q) {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__set_memory_error = 1U;
                        }
                    }
                    if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_start = 1U;
                    }
                }
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_cmd_n 
                    = (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_q 
                       + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q));
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_cmd_n 
                    = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_cmd_n 
                    = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k;
            }
        }
    }
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__advance_elem = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_q;
    if ((0x10U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_we = 1U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wstrb 
                            = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_q;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wdata 
                            = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_q;
                        vlSelf->tinygpu_top__DOT__cnt_stall = 1U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_req = 1U;
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_store_cmd = 1U;
                    }
                }
            }
            if ((4U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelf->tinygpu_top__DOT__ctrl_done = 1U;
                        vlSelf->tinygpu_top__DOT__cnt_cmd_done = 1U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                    }
                } else {
                    if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelf->tinygpu_top__DOT__ctrl_done = 1U;
                        vlSelf->tinygpu_top__DOT__cnt_cmd_done = 1U;
                    }
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                }
                if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_d 
                            = (0xffffU & ((IData)(2U) 
                                          + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q)));
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_d = 0U;
                    }
                }
            } else {
                if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_d 
                            = (0xffffU & ((IData)(2U) 
                                          + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q)));
                    }
                }
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
            }
        }
    } else {
        if ((8U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((4U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_we = 0U;
                    vlSelf->tinygpu_top__DOT__cnt_stall = 1U;
                    if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q)))) {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_req = 1U;
                        }
                    } else if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q)))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_req = 1U;
                    }
                }
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
            } else if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_q) {
                        if ((1U & (~ ((~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                                      & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q)))))) {
                            if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) {
                                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 1U;
                            } else if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q) {
                                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                            } else if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q) {
                                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                            }
                        }
                        if ((1U & ((~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                                   & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q))))) {
                            vlSelf->tinygpu_top__DOT__cnt_stall = 1U;
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 1U;
                        } else if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) {
                            vlSelf->tinygpu_top__DOT__cnt_stall = 1U;
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                        } else {
                            if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q)))) {
                                if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q)))) {
                                    vlSelf->tinygpu_top__DOT__cnt_stall = 1U;
                                }
                            }
                            if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q) {
                                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                            } else if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q) {
                                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                            }
                        }
                    }
                } else {
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                }
            } else {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    vlSelf->tinygpu_top__DOT__cnt_stall = 1U;
                }
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
            }
        } else if ((4U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                } else {
                    if ((1U & (~ ((~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                                  & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q)))))) {
                        if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 1U;
                        } else if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q) {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                        } else if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q) {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                        }
                    }
                    if ((1U & ((~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                               & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q))))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 1U;
                    } else if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                    } else if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                    } else if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                    }
                }
                if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                    if ((1U & ((~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                               & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q))))) {
                        vlSelf->tinygpu_top__DOT__cnt_stall = 1U;
                    } else if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) {
                        vlSelf->tinygpu_top__DOT__cnt_stall = 1U;
                    } else if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q)))) {
                        if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q)))) {
                            vlSelf->tinygpu_top__DOT__cnt_stall = 1U;
                        }
                    }
                }
            } else if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (~ ((~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                              & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q)))))) {
                    if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 1U;
                    } else if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                    } else if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                    }
                }
                if ((1U & ((~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                           & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q))))) {
                    vlSelf->tinygpu_top__DOT__cnt_stall = 1U;
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 1U;
                } else if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) {
                    vlSelf->tinygpu_top__DOT__cnt_stall = 1U;
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                } else {
                    if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q)))) {
                        if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q)))) {
                            vlSelf->tinygpu_top__DOT__cnt_stall = 1U;
                        }
                    }
                    if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                    } else if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                    }
                }
            } else {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
            }
        } else {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
            if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                    vlSelf->tinygpu_top__DOT__cnt_stall = 1U;
                }
                if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                }
            } else {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_d = 0U;
                    }
                }
            }
        }
    }
    if ((4U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
        if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_busy = 0U;
        }
        if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_req = 1U;
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q) 
                         >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q)))) {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_busy = 0U;
        }
        if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_req = 1U;
        }
    }
    vlSelf->tinygpu_top__DOT__mem_req_raw = ((2U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))
                                              ? (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_req)
                                              : ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_vec)
                                                  ? (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_req)
                                                  : 
                                                 ((9U 
                                                   == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))
                                                   ? (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_req)
                                                   : (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_req))));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q;
    vlSelf->mmio_rdata = 0U;
    if ((0x10U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelf->tinygpu_top__DOT__ctrl_busy = 0U;
                    }
                } else if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    vlSelf->tinygpu_top__DOT__ctrl_busy = 0U;
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                         >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                    vlSelf->tinygpu_top__DOT__ctrl_busy = 0U;
                }
            }
        }
    }
    vlSelf->mmio_rdata = ((0x80U & vlSelf->mmio_addr)
                           ? 0U : ((0x40U & vlSelf->mmio_addr)
                                    ? ((0x20U & vlSelf->mmio_addr)
                                        ? 0U : ((0x10U 
                                                 & vlSelf->mmio_addr)
                                                 ? 
                                                ((8U 
                                                  & vlSelf->mmio_addr)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->mmio_addr)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->mmio_addr)
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mmio_addr)
                                                     ? 0U
                                                     : (IData)(vlSelf->tinygpu_top__DOT__u_regs__DOT__irq_pending_q)))
                                                   : 
                                                  ((2U 
                                                    & vlSelf->mmio_addr)
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mmio_addr)
                                                     ? 0U
                                                     : vlSelf->tinygpu_top__DOT__cmd_count_total))))
                                                 : 
                                                ((8U 
                                                  & vlSelf->mmio_addr)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->mmio_addr)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->mmio_addr)
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mmio_addr)
                                                     ? 0U
                                                     : vlSelf->tinygpu_top__DOT__stall_count_last))
                                                   : 
                                                  ((2U 
                                                    & vlSelf->mmio_addr)
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mmio_addr)
                                                     ? 0U
                                                     : vlSelf->tinygpu_top__DOT__active_count_last)))
                                                  : 
                                                 ((4U 
                                                   & vlSelf->mmio_addr)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->mmio_addr)
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mmio_addr)
                                                     ? 0U
                                                     : vlSelf->tinygpu_top__DOT__cycle_count_last))
                                                   : 
                                                  ((2U 
                                                    & vlSelf->mmio_addr)
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mmio_addr)
                                                     ? 0U
                                                     : 
                                                    (((IData)(vlSelf->tinygpu_top__DOT__reg_shift) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelf->tinygpu_top__DOT__reg_zero_point))))))))
                                    : ((0x20U & vlSelf->mmio_addr)
                                        ? ((0x10U & vlSelf->mmio_addr)
                                            ? ((8U 
                                                & vlSelf->mmio_addr)
                                                ? (
                                                   (4U 
                                                    & vlSelf->mmio_addr)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->mmio_addr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelf->mmio_addr)
                                                      ? 0U
                                                      : vlSelf->tinygpu_top__DOT__reg_scale))
                                                    : 
                                                   ((2U 
                                                     & vlSelf->mmio_addr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelf->mmio_addr)
                                                      ? 0U
                                                      : vlSelf->tinygpu_top__DOT__reg_flags)))
                                                : (
                                                   (4U 
                                                    & vlSelf->mmio_addr)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->mmio_addr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelf->mmio_addr)
                                                      ? 0U
                                                      : (IData)(vlSelf->tinygpu_top__DOT__reg_stride_dst)))
                                                    : 
                                                   ((2U 
                                                     & vlSelf->mmio_addr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelf->mmio_addr)
                                                      ? 0U
                                                      : (IData)(vlSelf->tinygpu_top__DOT__reg_stride1)))))
                                            : ((8U 
                                                & vlSelf->mmio_addr)
                                                ? (
                                                   (4U 
                                                    & vlSelf->mmio_addr)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->mmio_addr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelf->mmio_addr)
                                                      ? 0U
                                                      : (IData)(vlSelf->tinygpu_top__DOT__reg_stride0)))
                                                    : 
                                                   ((2U 
                                                     & vlSelf->mmio_addr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelf->mmio_addr)
                                                      ? 0U
                                                      : (IData)(vlSelf->tinygpu_top__DOT__reg_dim_k))))
                                                : (
                                                   (4U 
                                                    & vlSelf->mmio_addr)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->mmio_addr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelf->mmio_addr)
                                                      ? 0U
                                                      : (IData)(vlSelf->tinygpu_top__DOT__reg_dim_n)))
                                                    : 
                                                   ((2U 
                                                     & vlSelf->mmio_addr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelf->mmio_addr)
                                                      ? 0U
                                                      : (IData)(vlSelf->tinygpu_top__DOT__reg_dim_m))))))
                                        : ((0x10U & vlSelf->mmio_addr)
                                            ? ((8U 
                                                & vlSelf->mmio_addr)
                                                ? (
                                                   (4U 
                                                    & vlSelf->mmio_addr)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->mmio_addr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelf->mmio_addr)
                                                      ? 0U
                                                      : vlSelf->tinygpu_top__DOT__reg_dst_addr))
                                                    : 
                                                   ((2U 
                                                     & vlSelf->mmio_addr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelf->mmio_addr)
                                                      ? 0U
                                                      : vlSelf->tinygpu_top__DOT__reg_bias_addr)))
                                                : (
                                                   (4U 
                                                    & vlSelf->mmio_addr)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->mmio_addr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelf->mmio_addr)
                                                      ? 0U
                                                      : vlSelf->tinygpu_top__DOT__reg_src1_addr))
                                                    : 
                                                   ((2U 
                                                     & vlSelf->mmio_addr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelf->mmio_addr)
                                                      ? 0U
                                                      : vlSelf->tinygpu_top__DOT__reg_src0_addr))))
                                            : ((8U 
                                                & vlSelf->mmio_addr)
                                                ? (
                                                   (4U 
                                                    & vlSelf->mmio_addr)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->mmio_addr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelf->mmio_addr)
                                                      ? 0U
                                                      : (IData)(vlSelf->tinygpu_top__DOT__reg_opcode)))
                                                    : 
                                                   ((2U 
                                                     & vlSelf->mmio_addr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelf->mmio_addr)
                                                      ? 0U
                                                      : vlSelf->tinygpu_top__DOT__reg_cmd_addr)))
                                                : (
                                                   (4U 
                                                    & vlSelf->mmio_addr)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->mmio_addr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelf->mmio_addr)
                                                      ? 0U
                                                      : 
                                                     ((0x40U 
                                                       & ((~ (IData)(vlSelf->tinygpu_top__DOT__ctrl_busy)) 
                                                          << 6U)) 
                                                      | (((IData)(vlSelf->tinygpu_top__DOT__ctrl_unsupported_format) 
                                                          << 5U) 
                                                         | (((IData)(vlSelf->tinygpu_top__DOT__ctrl_memory_error) 
                                                             << 4U) 
                                                            | (((IData)(vlSelf->tinygpu_top__DOT__ctrl_shape_error) 
                                                                << 3U) 
                                                               | (((IData)(vlSelf->tinygpu_top__DOT__ctrl_illegal_opcode) 
                                                                   << 2U) 
                                                                  | (((IData)(vlSelf->tinygpu_top__DOT__u_regs__DOT__done_sticky_q) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->tinygpu_top__DOT__ctrl_busy)))))))))
                                                    : 
                                                   ((2U 
                                                     & vlSelf->mmio_addr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelf->mmio_addr)
                                                      ? 0U
                                                      : 
                                                     (((IData)(vlSelf->tinygpu_top__DOT__reg_direct_mode) 
                                                       << 3U) 
                                                      | ((IData)(vlSelf->tinygpu_top__DOT__reg_irq_enable) 
                                                         << 2U))))))))));
    if ((4U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q) 
                      >> 1U)))) {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_region 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q;
            if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_we = 1U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_addr 
                    = (0xfffffffcU & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__write_addr);
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wstrb 
                    = ((2U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind_q))
                        ? 0xfU : ((0U == (3U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__write_addr))
                                   ? 1U : ((1U == (3U 
                                                   & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__write_addr))
                                            ? 2U : 
                                           ((2U == 
                                             (3U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__write_addr))
                                             ? 4U : 8U))));
            }
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_addr 
                = (0x1ffU & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_store_i32);
        }
    } else {
        if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
            if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_region 
                    = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_addr 
                    = (0x1ffU & ((0U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q))
                                  ? (((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_base_q) 
                                      + ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q) 
                                         << 3U)) + 
                                     (0x1ffU & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q)))
                                  : ((1U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q))
                                      ? (((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_base_q) 
                                          + ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q) 
                                             << 1U)) 
                                         + (0x1ffU 
                                            & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q)))
                                      : (((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_base_q) 
                                          + ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q) 
                                             << 1U)) 
                                         + (0x1ffU 
                                            & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q))))));
            }
        }
        if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_we = 0U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_addr 
                    = (0xfffffffcU & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__elem_addr);
            }
        }
    }
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__24__addr 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_addr;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__24__region 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_region;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__24__Vfuncout = 0U;
    if ((0U == (IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__24__region))) {
        if ((0x100U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__24__addr)) {
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__24__Vfuncout 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_mem
                [(0xffU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__24__addr)];
        }
    } else if ((1U == (IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__24__region))) {
        if ((0x100U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__24__addr)) {
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__24__Vfuncout 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_mem
                [(0xffU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__24__addr)];
        }
    } else if ((2U == (IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__24__region))) {
        if ((0x80U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__24__addr)) {
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__24__Vfuncout 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem
                [(0x7fU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__24__addr)];
        }
    } else {
        __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__24__Vfuncout = 0U;
    }
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__23__addr 
        = ((IData)(1U) + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_addr));
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__23__region 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_region;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__23__Vfuncout = 0U;
    if ((0U == (IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__23__region))) {
        if ((0x100U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__23__addr)) {
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__23__Vfuncout 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_mem
                [(0xffU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__23__addr)];
        }
    } else if ((1U == (IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__23__region))) {
        if ((0x100U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__23__addr)) {
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__23__Vfuncout 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_mem
                [(0xffU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__23__addr)];
        }
    } else if ((2U == (IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__23__region))) {
        if ((0x80U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__23__addr)) {
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__23__Vfuncout 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem
                [(0x7fU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__23__addr)];
        }
    } else {
        __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__23__Vfuncout = 0U;
    }
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__22__addr 
        = ((IData)(2U) + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_addr));
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__22__region 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_region;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__22__Vfuncout = 0U;
    if ((0U == (IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__22__region))) {
        if ((0x100U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__22__addr)) {
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__22__Vfuncout 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_mem
                [(0xffU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__22__addr)];
        }
    } else if ((1U == (IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__22__region))) {
        if ((0x100U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__22__addr)) {
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__22__Vfuncout 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_mem
                [(0xffU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__22__addr)];
        }
    } else if ((2U == (IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__22__region))) {
        if ((0x80U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__22__addr)) {
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__22__Vfuncout 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem
                [(0x7fU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__22__addr)];
        }
    } else {
        __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__22__Vfuncout = 0U;
    }
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__21__addr 
        = ((IData)(3U) + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_addr));
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__21__region 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_region;
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__21__Vfuncout = 0U;
    if ((0U == (IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__21__region))) {
        if ((0x100U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__21__addr)) {
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__21__Vfuncout 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_mem
                [(0xffU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__21__addr)];
        }
    } else if ((1U == (IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__21__region))) {
        if ((0x100U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__21__addr)) {
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__21__Vfuncout 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_mem
                [(0xffU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__21__addr)];
        }
    } else if ((2U == (IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__21__region))) {
        if ((0x80U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__21__addr)) {
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__21__Vfuncout 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem
                [(0x7fU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__21__addr)];
        }
    } else {
        __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__21__Vfuncout = 0U;
    }
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_rdata 
        = (((IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__21__Vfuncout) 
            << 0x18U) | (((IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__22__Vfuncout) 
                          << 0x10U) | (((IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__23__Vfuncout) 
                                        << 8U) | (IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__24__Vfuncout))));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_epilogue__c_in[0U][0U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_tile
        [0U][0U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_epilogue__c_in[0U][1U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_tile
        [0U][1U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_epilogue__c_in[1U][0U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_tile
        [1U][0U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_epilogue__c_in[1U][1U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_tile
        [1U][1U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_spm__a_rd_data[0U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_mem
        [vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_spm__a_rd_addr
        [0U]];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_spm__a_rd_data[1U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_mem
        [vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_spm__a_rd_addr
        [1U]];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_spm__b_rd_data[0U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_mem
        [vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_spm__b_rd_addr
        [0U]];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_spm__b_rd_data[1U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_mem
        [vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_spm__b_rd_addr
        [1U]];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q;
    if ((0x10U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_addr 
                            = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_addr_q;
                    }
                }
            }
            if ((4U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_d 
                            = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr_q;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_d 
                            = (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_q 
                               + vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_q);
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_d 
                            = (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_q 
                               + vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_q);
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_d 
                            = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q;
                    }
                }
                if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                    }
                } else {
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                }
            } else {
                if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_d 
                            = ((IData)(2U) + vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_q);
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_d 
                            = (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_q 
                               + vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_q);
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_d 
                            = (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q 
                               + vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_q);
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_d 
                            = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q;
                    } else if ((1U & (IData)(vlSelf->tinygpu_top__DOT__mem_stage_ready))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d 
                            = (((0xffffU & ((IData)(1U) 
                                            + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q))) 
                                < (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q))
                                ? (0xffffU & ((IData)(1U) 
                                              + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q)))
                                : 0U);
                    }
                }
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d 
                    = (1U & (IData)(((2U == (3U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) 
                                     & (~ (IData)(vlSelf->tinygpu_top__DOT__mem_stage_ready)))));
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
            }
        }
        if ((8U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0U;
        } else if ((4U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
                = ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))
                    ? 0U : ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))
                             ? 0U : 4U));
        } else if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 4U;
            } else if (vlSelf->tinygpu_top__DOT__mem_stage_ready) {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
                    = (((0xffffU & ((IData)(1U) + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q))) 
                        < (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q))
                        ? 0xcU : 0x15U);
            }
        } else {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
                = ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))
                    ? 0x12U : 0x11U);
        }
    } else {
        if ((8U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((4U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_addr 
                        = ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))
                            ? (0xfffffffcU & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_elem_addr)
                            : (0xfffffffcU & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_elem_addr));
                }
                if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
                        = ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))
                            ? 0x10U : 0xfU);
                } else if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q) {
                        if (vlSelf->tinygpu_top__DOT__mem_rvalid_stage_q) {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0xeU;
                        }
                    } else if (vlSelf->tinygpu_top__DOT__mem_stage_ready) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 1U;
                    }
                } else if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q) {
                    if (vlSelf->tinygpu_top__DOT__mem_rvalid_stage_q) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
                            = (((3U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)) 
                                | (4U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)))
                                ? 0xdU : 0xeU);
                    }
                } else if (vlSelf->tinygpu_top__DOT__mem_stage_ready) {
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 1U;
                }
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
            } else {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                    }
                    if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_q) {
                            if ((1U & (~ ((~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                                          & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q)))))) {
                                if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)))) {
                                    if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q) {
                                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x16U;
                                    } else if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q) {
                                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
                                            = (((0xffffU 
                                                 & ((IData)(2U) 
                                                    + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q))) 
                                                < (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q))
                                                ? 0x13U
                                                : (
                                                   ((0xffffU 
                                                     & ((IData)(2U) 
                                                        + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q))) 
                                                    < (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q))
                                                    ? 0x14U
                                                    : 0x15U));
                                    }
                                }
                            }
                        }
                    } else if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_done) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0xbU;
                    }
                } else if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)) {
                        if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_q) {
                            if (vlSelf->tinygpu_top__DOT__mem_rvalid_stage_q) {
                                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                                if (((0xffffU & ((IData)(1U) 
                                                 + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q))) 
                                     >= (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n))) {
                                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0xaU;
                                }
                            }
                        } else if (vlSelf->tinygpu_top__DOT__mem_stage_ready) {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 1U;
                        }
                    } else {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0xaU;
                    }
                } else {
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
                        = ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__more_k_tiles)
                            ? 5U : ((1U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)
                                     ? 9U : 0xaU));
                }
            }
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
            if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__more_k_tiles) {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d 
                                = (0xffffU & ((IData)(8U) 
                                              + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q)));
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_d 
                                = (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_q 
                                   + vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_q);
                        }
                    }
                    if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        if (((vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q 
                              & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_q)) 
                             & (IData)(vlSelf->tinygpu_top__DOT__mem_rvalid_stage_q))) {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d 
                                = (((0xffffU & ((IData)(1U) 
                                                + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q))) 
                                    < (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n))
                                    ? (0xffffU & ((IData)(1U) 
                                                  + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q)))
                                    : 0U);
                        }
                    } else if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__more_k_tiles)))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d = 0U;
                    }
                }
                if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_q)))) {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d 
                                = (((0xffffU & ((IData)(1U) 
                                                + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q))) 
                                    < (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n))
                                    ? (0xffffU & ((IData)(1U) 
                                                  + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q)))
                                    : 0U);
                            if (((0xffffU & ((IData)(1U) 
                                             + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q))) 
                                 >= (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n))) {
                                if (((0xffffU & ((IData)(1U) 
                                                 + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q))) 
                                     < (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m))) {
                                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d 
                                        = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q)));
                                }
                            }
                            if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_last) {
                                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d = 1U;
                                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d = 0U;
                                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d = 0U;
                            }
                        }
                    }
                } else if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                    if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__more_k_tiles)))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d = 0U;
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                        if (((0xffffU & ((IData)(1U) 
                                         + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q))) 
                             >= (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k))) {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 8U;
                        }
                    } else if ((1U & (~ ((~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                                         & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q)))))) {
                        if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)))) {
                            if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q) {
                                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x16U;
                            } else if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q) {
                                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 7U;
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                    }
                    if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        if ((1U & (~ ((~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                                      & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q)))))) {
                            if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)))) {
                                if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q) {
                                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x16U;
                                } else if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q) {
                                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 6U;
                                }
                            }
                        }
                    } else {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 5U;
                    }
                }
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
                if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d = 0U;
                    }
                }
            } else {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
                            = ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode_q)
                                ? 0xcU : 4U);
                    } else if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q) {
                        if (vlSelf->tinygpu_top__DOT__mem_rvalid_stage_q) {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
                            if ((0xeU <= (0x1fU & ((IData)(1U) 
                                                   + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))))) {
                                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 1U;
                            }
                        }
                    } else if (vlSelf->tinygpu_top__DOT__mem_stage_ready) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 1U;
                    }
                } else {
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
                    if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d = 0U;
                    }
                    if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
                            = ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok)
                                ? ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok)
                                    ? ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_flags_ok)
                                        ? 3U : 0x16U)
                                    : 0x16U) : 0x16U);
                    } else if (vlSelf->tinygpu_top__DOT__reg_start_pulse) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
                            = ((IData)(vlSelf->tinygpu_top__DOT__reg_direct_mode)
                                ? 1U : 2U);
                    }
                }
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
            }
            if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d = 0U;
                    }
                } else if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d = 0U;
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d = 0U;
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d = 0U;
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d = 0U;
                }
                if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        if ((((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok) 
                              & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok)) 
                             & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_flags_ok))) {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_d 
                                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q;
                        }
                    } else {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_d = 0U;
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        if ((((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok) 
                              & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok)) 
                             & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_flags_ok))) {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_d = 0U;
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_d = 0U;
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_d 
                                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr_q;
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_d 
                                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr_q;
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_d 
                                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q;
                        }
                    } else {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_d = 0U;
                    }
                }
            }
            if ((4U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d 
                            = (((0xffffU & ((IData)(1U) 
                                            + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q))) 
                                < (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k))
                                ? (0xffffU & ((IData)(1U) 
                                              + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q)))
                                : 0U);
                    }
                } else if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d = 0U;
                }
                if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d = 0U;
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d = 0U;
                }
            } else if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d = 0U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d = 0U;
            }
        }
    }
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q;
    if ((4U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
                if (vlSelf->tinygpu_top__DOT__mem_stage_ready) {
                    if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__last_elem)))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__advance_elem = 1U;
                    }
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__last_elem)))) {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__advance_elem = 1U;
            }
        }
    }
    if (((0U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q)) 
         & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_start))) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_d = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_d = 0U;
    } else if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__advance_elem) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_d 
            = (((0xffffU & ((IData)(1U) + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q))) 
                < (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols_q))
                ? (0xffffU & ((IData)(1U) + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q)))
                : 0U);
        if (((0xffffU & ((IData)(1U) + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q))) 
             >= (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols_q))) {
            if (((0xffffU & ((IData)(1U) + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q))) 
                 < (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows_q))) {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_d 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q)));
            }
        }
    }
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wdata = 0U;
    if ((4U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
        if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d = 0U;
        } else if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
            if (vlSelf->tinygpu_top__DOT__mem_stage_ready) {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d 
                    = ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__last_elem)
                        ? 6U : 4U);
            }
        } else {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d = 5U;
        }
        if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wdata 
                    = ((2U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind_q))
                        ? vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_rdata
                        : ((0U == (3U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__write_addr))
                            ? (0xffU & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_rdata)
                            : ((1U == (3U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__write_addr))
                                ? (0xff00U & (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_rdata 
                                              << 8U))
                                : ((2U == (3U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__write_addr))
                                    ? (0xff0000U & 
                                       (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_rdata 
                                        << 0x10U)) : 
                                   (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_rdata 
                                    << 0x18U)))));
            }
        }
    } else if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d 
                = ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__last_elem)
                    ? 6U : 1U);
        } else if (vlSelf->tinygpu_top__DOT__mem_rvalid_stage_q) {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d = 3U;
        }
    } else if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
        if (vlSelf->tinygpu_top__DOT__mem_stage_ready) {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d = 2U;
        }
    } else if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_start) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d 
            = (((0U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_q)) 
                | (0U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_q)))
                ? 6U : ((0U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_q))
                         ? 1U : (((2U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_q)) 
                                  | (3U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_q)))
                                  ? 4U : 7U)));
    }
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_data[0U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_spm__a_rd_data
        [0U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_data[1U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_spm__a_rd_data
        [1U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_data[0U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_spm__b_rd_data
        [0U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_data[1U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_spm__b_rd_data
        [1U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__a_vec[0U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_data
        [0U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__a_vec[1U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_data
        [1U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__b_vec[0U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_data
        [0U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__b_vec[1U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_data
        [1U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__a_vec[0U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__a_vec
        [0U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__a_vec[1U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__a_vec
        [1U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__b_vec[0U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__b_vec
        [0U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__b_vec[1U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__b_vec
        [1U];
}

VL_ATTR_COLD void Vtinygpu_top___024root___eval_initial(Vtinygpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinygpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinygpu_top___024root___eval_initial\n"); );
    // Body
    Vtinygpu_top___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

VL_ATTR_COLD void Vtinygpu_top___024root___eval_settle(Vtinygpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinygpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinygpu_top___024root___eval_settle\n"); );
    // Body
    Vtinygpu_top___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtinygpu_top___024root___final(Vtinygpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinygpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinygpu_top___024root___final\n"); );
}

VL_ATTR_COLD void Vtinygpu_top___024root___ctor_var_reset(Vtinygpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinygpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinygpu_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->mmio_valid = VL_RAND_RESET_I(1);
    vlSelf->mmio_we = VL_RAND_RESET_I(1);
    vlSelf->mmio_addr = VL_RAND_RESET_I(32);
    vlSelf->mmio_wdata = VL_RAND_RESET_I(32);
    vlSelf->mmio_wstrb = VL_RAND_RESET_I(4);
    vlSelf->mmio_rdata = VL_RAND_RESET_I(32);
    vlSelf->mmio_ready = VL_RAND_RESET_I(1);
    vlSelf->mem_req = VL_RAND_RESET_I(1);
    vlSelf->mem_we = VL_RAND_RESET_I(1);
    vlSelf->mem_addr = VL_RAND_RESET_I(32);
    vlSelf->mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->mem_wstrb = VL_RAND_RESET_I(4);
    vlSelf->mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->mem_ready = VL_RAND_RESET_I(1);
    vlSelf->mem_rvalid = VL_RAND_RESET_I(1);
    vlSelf->irq = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__reg_start_pulse = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__reg_soft_reset = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__reg_irq_enable = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__reg_direct_mode = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__reg_cmd_addr = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__reg_opcode = VL_RAND_RESET_I(8);
    vlSelf->tinygpu_top__DOT__reg_src0_addr = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__reg_src1_addr = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__reg_bias_addr = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__reg_dst_addr = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__reg_dim_m = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__reg_dim_n = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__reg_dim_k = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__reg_stride0 = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__reg_stride1 = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__reg_stride_dst = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__reg_flags = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__reg_scale = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__reg_shift = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__reg_zero_point = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__ctrl_busy = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__ctrl_done = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__ctrl_illegal_opcode = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__ctrl_shape_error = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__ctrl_memory_error = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__ctrl_unsupported_format = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__cnt_cmd_start = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__cnt_cmd_done = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__cnt_stall = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__cycle_count_last = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__active_count_last = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__stall_count_last = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__cmd_count_total = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__mem_req_raw = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__mem_rdata_stage_q = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__mem_rvalid_stage_q = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__mem_cmd_valid_q = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__mem_cmd_we_q = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__mem_cmd_addr_q = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__mem_cmd_wdata_q = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__mem_cmd_wstrb_q = VL_RAND_RESET_I(4);
    vlSelf->tinygpu_top__DOT__mem_read_pending_q = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__mem_stage_ready = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_regs__DOT__done_sticky_q = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_regs__DOT__irq_pending_q = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_regs__DOT__ctrl_next_w = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_regs__DOT__direct_op_next_w = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_regs__DOT__dim_m_next_w = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_regs__DOT__dim_n_next_w = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_regs__DOT__dim_k_next_w = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_regs__DOT__stride0_next_w = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_regs__DOT__stride1_next_w = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_regs__DOT__stride_dst_next_w = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_regs__DOT__shiftzp_next_w = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q = VL_RAND_RESET_I(5);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = VL_RAND_RESET_I(5);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q = VL_RAND_RESET_I(8);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr_q = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr_q = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr_q = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__scale_q = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_d = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_d = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q = VL_RAND_RESET_I(5);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_d = VL_RAND_RESET_I(5);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_q = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_q = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask = VL_RAND_RESET_I(2);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_addr[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_addr[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__a_vec[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__b_vec[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_tile[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__array_clear_acc = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__array_mac_en = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_region = VL_RAND_RESET_I(2);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_addr = VL_RAND_RESET_I(9);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wdata = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wstrb = VL_RAND_RESET_I(4);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_rdata = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_addr = VL_RAND_RESET_I(8);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_data = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_start = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_busy = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_done = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_epi_i32[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_epi_i8[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_x_q = VL_RAND_RESET_I(8);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_y_q = VL_RAND_RESET_I(8);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8 = VL_RAND_RESET_I(8);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_addr_q = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_q = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_q = VL_RAND_RESET_I(4);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw_q = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post_q = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_scaled_q = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8_q = VL_RAND_RESET_I(8);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_start = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_busy = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_req = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_we = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_addr = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wstrb = VL_RAND_RESET_I(4);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_req = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_req = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_we = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_addr = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wstrb = VL_RAND_RESET_I(4);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_req = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_q = VL_RAND_RESET_I(2);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_q = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_q = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_q = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_q = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_q = VL_RAND_RESET_I(2);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_q = VL_RAND_RESET_I(9);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd_addr = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_cmd_fields = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__load_desc_word = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_store_cmd = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_dma_cmd = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_status = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__set_illegal_opcode = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__set_shape_error = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__set_memory_error = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__set_unsupported_format = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_flags_ok = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__more_k_tiles = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_last = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_bias_regs = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__load_bias_reg = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__load_vec_x_reg = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__load_vec_y_reg = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode_q = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_vec = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_q = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_d = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_q = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_d = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_q = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_d = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_q = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_d = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_q = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_d = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_d = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_q = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_d = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_q = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_d = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_q = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_d = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_q = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_d = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_q = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_d = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_elem_addr = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_elem_addr = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_load_byte = VL_RAND_RESET_I(8);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_next = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_next = VL_RAND_RESET_I(4);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_cmd_n = VL_RAND_RESET_I(2);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_cmd_n = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_cmd_n = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_cmd_n = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_cmd_n = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_cmd_n = VL_RAND_RESET_I(2);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_cmd_n = VL_RAND_RESET_I(9);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_spm__b_rd_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_spm__b_rd_addr[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_spm__a_rd_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_spm__a_rd_addr[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_array4x4__c_tile[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__b_vec[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__a_vec[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i32[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_epilogue__bias[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_epilogue__c_in[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk2__DOT__c = 0;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk3__DOT__c = 0;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk1__DOT__c = 0;
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk4__DOT__byte_idx = 0;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q = VL_RAND_RESET_I(3);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d = VL_RAND_RESET_I(3);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind_q = VL_RAND_RESET_I(2);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__base_addr_q = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows_q = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols_q = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__stride_bytes_q = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q = VL_RAND_RESET_I(2);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_base_q = VL_RAND_RESET_I(9);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_d = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_d = VL_RAND_RESET_I(16);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__elem_addr = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__write_addr = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_store_i32 = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__advance_elem = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__last_elem = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_o = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_o = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_o = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_o = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk3__DOT__r = 0;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c = 0;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__valid_elem = VL_RAND_RESET_I(1);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__x_post = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk6__DOT__r = 0;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk6__DOT__unnamedblk7__DOT__c = 0;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk8__DOT__r = 0;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk8__DOT__unnamedblk9__DOT__c = 0;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__x_shifted = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk1__DOT__r = 0;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk1__DOT__unnamedblk2__DOT__c = 0;
    vlSelf->tinygpu_top__DOT__u_counters__DOT__cycle_cur_q = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_counters__DOT__active_cur_q = VL_RAND_RESET_I(32);
    vlSelf->tinygpu_top__DOT__u_counters__DOT__stall_cur_q = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__16__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__16__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__28__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__28__x = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
