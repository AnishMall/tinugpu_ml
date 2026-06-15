// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___eval_triggers_vec__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[1U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_addr__0.neq(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_addr) 
                                                      << 1U) 
                                                     | vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_addr__0.neq(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_addr))));
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_addr__0.assign(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_addr);
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_addr__0.assign(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_addr);
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
        vlSelfRef.__VicoDidInit = 1U;
        vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
    }
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
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
    } while ((2U > n));
    return (0U);
}

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
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
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_5;
    __VdfgRegularize_h6e95ff9d_0_5 = 0;
    // Body
    if ((vlSelfRef.tinygpu_top__DOT__mem_rdata_stage_q 
         ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_rdata_stage_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1762, vlSelfRef.tinygpu_top__DOT__mem_rdata_stage_q, vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_rdata_stage_q);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_rdata_stage_q 
            = vlSelfRef.tinygpu_top__DOT__mem_rdata_stage_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__mem_rvalid_stage_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_rvalid_stage_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1826, vlSelfRef.tinygpu_top__DOT__mem_rvalid_stage_q, vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_rvalid_stage_q);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_rvalid_stage_q 
            = vlSelfRef.tinygpu_top__DOT__mem_rvalid_stage_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__mem_cmd_valid_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_cmd_valid_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1828, vlSelfRef.tinygpu_top__DOT__mem_cmd_valid_q, vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_cmd_valid_q);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_cmd_valid_q 
            = vlSelfRef.tinygpu_top__DOT__mem_cmd_valid_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__mem_cmd_we_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_cmd_we_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1830, vlSelfRef.tinygpu_top__DOT__mem_cmd_we_q, vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_cmd_we_q);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_cmd_we_q 
            = vlSelfRef.tinygpu_top__DOT__mem_cmd_we_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__mem_cmd_addr_q 
         ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_cmd_addr_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1832, vlSelfRef.tinygpu_top__DOT__mem_cmd_addr_q, vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_cmd_addr_q);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_cmd_addr_q 
            = vlSelfRef.tinygpu_top__DOT__mem_cmd_addr_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__mem_cmd_wdata_q 
         ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_cmd_wdata_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1896, vlSelfRef.tinygpu_top__DOT__mem_cmd_wdata_q, vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_cmd_wdata_q);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_cmd_wdata_q 
            = vlSelfRef.tinygpu_top__DOT__mem_cmd_wdata_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__mem_cmd_wstrb_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_cmd_wstrb_q))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 1960, vlSelfRef.tinygpu_top__DOT__mem_cmd_wstrb_q, vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_cmd_wstrb_q);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_cmd_wstrb_q 
            = vlSelfRef.tinygpu_top__DOT__mem_cmd_wstrb_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__mem_read_pending_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_read_pending_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1968, vlSelfRef.tinygpu_top__DOT__mem_read_pending_q, vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_read_pending_q);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_read_pending_q 
            = vlSelfRef.tinygpu_top__DOT__mem_read_pending_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_enable_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__irq_enable_o))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2480, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_enable_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__irq_enable_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__irq_enable_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_enable_o;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_mode_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__direct_mode_o))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2482, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_mode_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__direct_mode_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__direct_mode_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_mode_o;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_addr_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__cmd_addr_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2486, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_addr_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__cmd_addr_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__cmd_addr_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_addr_o;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__opcode_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__opcode_o))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 2550, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__opcode_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__opcode_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__opcode_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__opcode_o;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src0_addr_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__src0_addr_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2566, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src0_addr_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__src0_addr_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__src0_addr_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src0_addr_o;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src1_addr_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__src1_addr_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2630, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src1_addr_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__src1_addr_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__src1_addr_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src1_addr_o;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__bias_addr_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__bias_addr_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2694, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__bias_addr_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__bias_addr_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__bias_addr_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__bias_addr_o;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dst_addr_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dst_addr_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2758, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dst_addr_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dst_addr_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dst_addr_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dst_addr_o;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_m_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_m_o))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 2822, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_m_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_m_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_m_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_m_o;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_n_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_n_o))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 2854, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_n_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_n_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_n_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_n_o;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_k_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_k_o))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 2886, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_k_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_k_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_k_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_k_o;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride0_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride0_o))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 2918, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride0_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride0_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride0_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride0_o;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride1_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride1_o))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 2950, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride1_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride1_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride1_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride1_o;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride_dst_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride_dst_o))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 2982, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride_dst_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride_dst_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride_dst_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride_dst_o;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__flags_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__flags_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 3014, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__flags_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__flags_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__flags_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__flags_o;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__scale_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__scale_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 3078, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__scale_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__scale_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__scale_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__scale_o;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shift_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__shift_o))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 3142, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shift_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__shift_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__shift_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shift_o;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__zero_point_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__zero_point_o))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 3174, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__zero_point_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__zero_point_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__zero_point_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__zero_point_o;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_in_hw_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__conv_in_hw_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 3206, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_in_hw_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__conv_in_hw_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__conv_in_hw_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_in_hw_o;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_channels_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__conv_channels_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 3270, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_channels_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__conv_channels_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__conv_channels_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_channels_o;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_cfg_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__conv_cfg_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 3334, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_cfg_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__conv_cfg_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__conv_cfg_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_cfg_o;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__done_sticky_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__done_sticky_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3398, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__done_sticky_q, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__done_sticky_q);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__done_sticky_q 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__done_sticky_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__irq_pending_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3400, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_q, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__irq_pending_q);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__irq_pending_q 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__illegal_opcode) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__illegal_opcode))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 4707, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__illegal_opcode, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__illegal_opcode);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__illegal_opcode 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__illegal_opcode;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shape_error) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shape_error))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 4709, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shape_error, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shape_error);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shape_error 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shape_error;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__memory_error) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__memory_error))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 4711, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__memory_error, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__memory_error);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__memory_error 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__memory_error;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unsupported_format) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__unsupported_format))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 4713, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unsupported_format, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__unsupported_format);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__unsupported_format 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unsupported_format;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__state_q))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 4933, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__state_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__state_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__opcode_q))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 4953, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__opcode_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__opcode_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__flags_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 4969, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__flags_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__flags_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__cmd_addr_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 5033, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__cmd_addr_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__cmd_addr_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src0_addr_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 5097, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src0_addr_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src0_addr_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src1_addr_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 5161, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src1_addr_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src1_addr_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_addr_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 5225, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_addr_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_addr_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_addr_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 5289, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_addr_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_addr_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__M_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 5353, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__M_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__M_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__N_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 5385, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__N_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__N_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__K_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 5417, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__K_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__K_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride0_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 5449, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride0_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride0_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride1_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 5481, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride1_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride1_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride_dst_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 5513, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride_dst_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride_dst_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__scale_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__scale_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 5545, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__scale_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__scale_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__scale_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__scale_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shift_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 5609, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shift_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shift_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__zero_point_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 5641, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__zero_point_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__zero_point_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_in_hw_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_in_hw_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 5673, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_in_hw_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_in_hw_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_in_hw_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_in_hw_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_channels_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_channels_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 5737, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_channels_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_channels_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_channels_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_channels_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_cfg_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 5801, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_cfg_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_cfg_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_desc_version_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_desc_version_q))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 5865, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_desc_version_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_desc_version_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_desc_version_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_desc_version_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__m0_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 5881, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__m0_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__m0_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__n0_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 5945, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__n0_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__n0_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__k0_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 6009, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__k0_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__k0_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__kk_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 6073, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__kk_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__kk_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__store_row_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 6137, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__store_row_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__store_row_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__store_col_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 6201, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__store_col_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__store_col_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_col_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 6265, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_col_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_col_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_idx_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 6329, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_idx_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_idx_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_word_idx_q))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 6393, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_word_idx_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_word_idx_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__store_stage_done_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 6413, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__store_stage_done_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__store_stage_done_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_inflight_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 6417, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_inflight_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_inflight_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_inflight_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 6421, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_inflight_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_inflight_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_inflight_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 6425, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_inflight_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_inflight_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_inflight_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 6429, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_inflight_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_inflight_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_out_y_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 6433, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_out_y_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_out_y_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_out_x_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 6497, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_out_x_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_out_x_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_kh_q))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 6561, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_kh_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_kh_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_kw_q))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 6577, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_kw_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_kw_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_ic_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 6593, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_ic_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_ic_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_rd_addr) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__c_rd_addr))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 7399, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_rd_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__c_rd_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__c_rd_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_rd_addr;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_x_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_x_q))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 8225, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_x_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_x_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_x_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_x_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_y_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_y_q))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 8241, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_y_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_y_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_y_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_y_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_addr_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_store_addr_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 8465, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_addr_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_store_addr_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_store_addr_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_addr_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_store_wdata_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 8529, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_store_wdata_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_store_wdata_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_store_wstrb_q))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 8593, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_store_wstrb_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_store_wstrb_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_result_raw_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 8601, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_result_raw_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_result_raw_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_result_post_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 8665, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_result_post_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_result_post_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_scaled_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_scaled_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 8729, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_scaled_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_scaled_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_scaled_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_scaled_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_we) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_mem_we))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9211, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_we, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_mem_we);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_mem_we 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_we;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_wdata 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_mem_wdata)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 9277, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_wdata, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_mem_wdata);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_mem_wdata 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_wdata;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_wstrb) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_mem_wstrb))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 9341, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_wstrb, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_mem_wstrb);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_mem_wstrb 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_wstrb;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_we) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_mem_we))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9491, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_we, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_mem_we);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_mem_we 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_we;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_wdata 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_mem_wdata)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 9557, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_wdata, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_mem_wdata);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_mem_wdata 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_wdata;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_wstrb) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_mem_wstrb))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 9621, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_wstrb, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_mem_wstrb);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_mem_wstrb 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_wstrb;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_launch_pending_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9629, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_launch_pending_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_launch_pending_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_op_kind_q))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 9633, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_op_kind_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_op_kind_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_base_addr_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 9637, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_base_addr_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_base_addr_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_rows_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 9701, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_rows_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_rows_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_cols_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 9733, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_cols_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_cols_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_stride_bytes_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 9765, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_stride_bytes_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_stride_bytes_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_spm_region_q))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 9797, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_spm_region_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_spm_region_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_spm_base_q))) {
        VL_COV_TOGGLE_CHG_ST_I(9, vlSymsp->__Vcoverage + 9801, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_spm_base_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_spm_base_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_start_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_start_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9821, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_start_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_start_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_start_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_start_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_inflight_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9829, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_inflight_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_inflight_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__is_vector_opcode_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10241, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__is_vector_opcode_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__is_vector_opcode_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__effective_n_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 10293, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__effective_n_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__effective_n_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src0_row_base_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 10325, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src0_row_base_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src0_row_base_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src1_k_base_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 10453, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src1_k_base_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src1_k_base_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src1_n_offset_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 10581, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src1_n_offset_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src1_n_offset_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_row_base_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 10709, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_row_base_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_row_base_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_n_offset_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 10837, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_n_offset_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_n_offset_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_base_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 10965, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_base_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_base_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src0_m_step_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 11093, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src0_m_step_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src0_m_step_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride1_k_step_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 11221, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride1_k_step_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride1_k_step_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_m_step_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 11349, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_m_step_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_m_step_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_n_step_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 11477, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_n_step_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_n_step_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_n_step_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 11605, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_n_step_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_n_step_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_out_y) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__next_out_y))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 15824, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_out_y, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__next_out_y);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__next_out_y 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_out_y;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_out_x) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__next_out_x))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 15856, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_out_x, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__next_out_x);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__next_out_x 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_out_x;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_kh) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__next_kh))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 15888, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_kh, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__next_kh);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__next_kh 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_kh;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_kw) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__next_kw))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 15896, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_kw, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__next_kw);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__next_kw 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_kw;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_ic) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__next_ic))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 15904, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_ic, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__next_ic);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__next_ic 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_ic;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_wstrb) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__spm_wstrb))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 16154, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_wstrb, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__spm_wstrb);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__spm_wstrb 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_wstrb;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__state_q))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 16162, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__state_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__state_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__row_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 16174, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__row_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__row_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__k_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 16238, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__k_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__k_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_y_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__out_y_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 16302, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_y_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__out_y_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__out_y_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_y_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__out_x_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 16366, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__out_x_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__out_x_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__kh_q))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 16430, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__kh_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__kh_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__kw_q))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 16446, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__kw_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__kw_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__ic_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 16462, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__ic_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__ic_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__first_kh_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__first_kh_q))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 16526, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__first_kh_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__first_kh_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__first_kh_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__first_kh_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__first_kw_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__first_kw_q))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 16534, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__first_kw_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__first_kw_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__first_kw_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__first_kw_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__first_ic_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__first_ic_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 16542, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__first_ic_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__first_ic_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__first_ic_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__first_ic_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__sample_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__sample_q))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 16574, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__sample_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__sample_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__sample_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__sample_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__sample_valid_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__sample_valid_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 16590, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__sample_valid_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__sample_valid_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__sample_valid_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__sample_valid_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__read_outstanding_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__read_outstanding_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 16986, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__read_outstanding_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__read_outstanding_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__read_outstanding_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__read_outstanding_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__state_q))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 17596, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__state_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__state_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__done_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 17608, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__done_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__done_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__error_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 17610, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__error_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__error_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__op_kind_q))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 17612, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__op_kind_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__op_kind_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__rows_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 17616, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__rows_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__rows_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__cols_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 17648, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__cols_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__cols_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__stride_bytes_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__stride_bytes_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 17680, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__stride_bytes_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__stride_bytes_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__stride_bytes_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__stride_bytes_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_region_q))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 17712, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_region_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_region_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__row_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 17716, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__row_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__row_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__col_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 17780, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__col_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__col_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_row_base_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__ext_row_base_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 17844, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_row_base_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__ext_row_base_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__ext_row_base_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_row_base_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__ext_addr_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 17972, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__ext_addr_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__ext_addr_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_row_base_q))) {
        VL_COV_TOGGLE_CHG_ST_I(9, vlSymsp->__Vcoverage + 18100, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_row_base_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_row_base_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_addr_q))) {
        VL_COV_TOGGLE_CHG_ST_I(9, vlSymsp->__Vcoverage + 18136, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_addr_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_addr_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__store_word_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__store_word_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 18324, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__store_word_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__store_word_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__store_word_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__store_word_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_req_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__held_req_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 18466, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_req_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__held_req_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__held_req_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_req_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__read_outstanding_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__read_outstanding_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 18468, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__read_outstanding_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__read_outstanding_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__read_outstanding_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__read_outstanding_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_we_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__held_we_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 18470, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_we_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__held_we_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__held_we_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_we_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_addr_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__held_addr_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 18472, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_addr_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__held_addr_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__held_addr_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_addr_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_wdata_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__held_wdata_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 18536, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_wdata_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__held_wdata_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__held_wdata_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_wdata_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_wstrb_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__held_wstrb_q))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 18600, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_wstrb_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__held_wstrb_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__held_wstrb_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_wstrb_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 18867, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 19074, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 19281, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 19488, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 19695, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 19902, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 20109, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 20316, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 20523, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 20730, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 20937, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 21144, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 21351, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 21558, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 21765, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 21972, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i32 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i32;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__busy) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__busy))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 22145, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__busy, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__busy);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__busy 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__busy;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__done) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 22147, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__done, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__done);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__done 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__done;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_start) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__mul_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 22613, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_start, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__mul_start);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__mul_start 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_start;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_valid) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__out_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 22809, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_valid, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__out_valid);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__out_valid 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_valid;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_index) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__out_index))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 22811, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_index, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__out_index);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__out_index 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_index;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_i32 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__out_i32)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 22827, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_i32, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__out_i32);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__out_i32 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_i32;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_i8) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__out_i8))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 22891, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_i8, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__out_i8);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__out_i8 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_i8;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__state_q))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 23163, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__state_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__state_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__row_q))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 23169, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__row_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__row_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__col_q))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 23173, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__col_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__col_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__post_elem_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 23177, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__post_elem_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__post_elem_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_elem_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__scaled_elem_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 23241, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_elem_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__scaled_elem_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__scaled_elem_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_elem_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__busy))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 23938, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__busy);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__busy 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__done) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 23940, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__done, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__done);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__done 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__done;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__product_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__product_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 23942, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__product_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__product_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__product_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__product_o;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cycle_count_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__cycle_count_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 24031, vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cycle_count_o, vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__cycle_count_o);
        vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__cycle_count_o 
            = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cycle_count_o;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_count_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__active_count_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 24095, vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_count_o, vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__active_count_o);
        vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__active_count_o 
            = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_count_o;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_count_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__stall_count_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 24159, vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_count_o, vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__stall_count_o);
        vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__stall_count_o 
            = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_count_o;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cmd_count_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__cmd_count_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 24223, vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cmd_count_o, vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__cmd_count_o);
        vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__cmd_count_o 
            = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cmd_count_o;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cycle_cur_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__cycle_cur_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 24287, vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cycle_cur_q, vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__cycle_cur_q);
        vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__cycle_cur_q 
            = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cycle_cur_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_cur_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__active_cur_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 24351, vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_cur_q, vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__active_cur_q);
        vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__active_cur_q 
            = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_cur_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_cur_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__stall_cur_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 24415, vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_cur_q, vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__stall_cur_q);
        vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__stall_cur_q 
            = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_cur_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec[0U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_vec[0U])) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 7615, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec[0U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_vec[0U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_vec[0U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec[0U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec[1U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_vec[1U])) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 7679, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec[1U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_vec[1U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_vec[1U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec[1U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec[2U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_vec[2U])) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 7743, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec[2U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_vec[2U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_vec[2U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec[2U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec[3U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_vec[3U])) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 7807, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec[3U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_vec[3U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_vec[3U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec[3U];
    }
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
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__last_elem 
        = ((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q)) 
           & (3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q)));
    vlSelfRef.tinygpu_top__DOT__mem_req = vlSelfRef.tinygpu_top__DOT__mem_cmd_valid_q;
    vlSelfRef.tinygpu_top__DOT__mem_we = vlSelfRef.tinygpu_top__DOT__mem_cmd_we_q;
    vlSelfRef.tinygpu_top__DOT__mem_addr = vlSelfRef.tinygpu_top__DOT__mem_cmd_addr_q;
    vlSelfRef.tinygpu_top__DOT__mem_wdata = vlSelfRef.tinygpu_top__DOT__mem_cmd_wdata_q;
    vlSelfRef.tinygpu_top__DOT__mem_wstrb = vlSelfRef.tinygpu_top__DOT__mem_cmd_wstrb_q;
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
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_wstrb 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_wstrb;
    vlSelfRef.tinygpu_top__DOT__reg_irq_enable = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_enable_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__shift 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[0U][0U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[0U][0U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 22907, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[0U][0U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[0U][0U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[0U][0U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[0U][0U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[0U][1U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[0U][1U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 22923, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[0U][1U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[0U][1U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[0U][1U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[0U][1U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[0U][2U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[0U][2U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 22939, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[0U][2U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[0U][2U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[0U][2U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[0U][2U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[0U][3U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[0U][3U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 22955, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[0U][3U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[0U][3U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[0U][3U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[0U][3U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[1U][0U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[1U][0U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 22971, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[1U][0U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[1U][0U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[1U][0U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[1U][0U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[1U][1U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[1U][1U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 22987, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[1U][1U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[1U][1U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[1U][1U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[1U][1U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[1U][2U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[1U][2U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 23003, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[1U][2U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[1U][2U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[1U][2U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[1U][2U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[1U][3U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[1U][3U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 23019, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[1U][3U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[1U][3U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[1U][3U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[1U][3U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[2U][0U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[2U][0U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 23035, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[2U][0U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[2U][0U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[2U][0U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[2U][0U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[2U][1U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[2U][1U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 23051, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[2U][1U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[2U][1U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[2U][1U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[2U][1U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[2U][2U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[2U][2U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 23067, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[2U][2U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[2U][2U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[2U][2U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[2U][2U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[2U][3U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[2U][3U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 23083, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[2U][3U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[2U][3U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[2U][3U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[2U][3U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[3U][0U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[3U][0U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 23099, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[3U][0U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[3U][0U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[3U][0U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[3U][0U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[3U][1U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[3U][1U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 23115, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[3U][1U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[3U][1U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[3U][1U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[3U][1U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[3U][2U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[3U][2U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 23131, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[3U][2U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[3U][2U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[3U][2U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[3U][2U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[3U][3U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[3U][3U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 23147, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[3U][3U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[3U][3U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__c_out_i8[3U][3U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8[3U][3U];
    }
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
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_o 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__zero_point 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_a 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__opcode 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_wdata_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_wdata;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_wdata_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_wdata;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_wstrb_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_wstrb;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_wstrb_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_wstrb;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scale 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__scale_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_we_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_we;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_we_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_we;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_x_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__y_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_y_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_addr 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr_q 
           + ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q) 
              << 2U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_addr 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q 
           + ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q) 
              << 2U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__flags 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_start 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_start;
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
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__bias 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec;
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
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_base 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q;
    vlSelfRef.tinygpu_top__DOT__clk = vlSelfRef.clk;
    vlSelfRef.tinygpu_top__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_kh 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_kh;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_kw 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_kw;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_ic 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_ic;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_out_y 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_out_y;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_out_x 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_out_x;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_rd_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_rd_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_addr 
        = (0x000001ffU & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_q) 
                          + (0x000001f0U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_q) 
                                            << 4U))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__aligned_read_addr 
        = (0xfffffffcU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__aligned_write_addr 
        = (0xfffffffcU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__last_elem 
        = (((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q))) 
            >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows_q)) 
           & ((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q))) 
              >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols_q)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__load_lane_sel 
        = (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_rdata 
        = vlSelfRef.tinygpu_top__DOT__mem_rdata_stage_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_needs_y 
        = ((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)) 
           | (4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_busy 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__busy;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_done 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__done;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_valid 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_valid;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_index 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_index;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i8 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_i8;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i32 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_i32;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_m_tiles 
        = ((0x0000ffffU & ((IData)(4U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q))) 
           < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_store_base_addr 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_q 
           + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_q);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_busy 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_done 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__done;
    if ((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q))) {
        ++(vlSymsp->__Vcoverage[13277]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_4 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q;
    } else {
        ++(vlSymsp->__Vcoverage[13278]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_4 = 1U;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_stride_bytes 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_4;
    if ((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q))) {
        ++(vlSymsp->__Vcoverage[13279]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_5 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q;
    } else {
        ++(vlSymsp->__Vcoverage[13280]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_5 = 1U;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_stride_bytes 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_5;
    vlSelfRef.tinygpu_top__DOT__mmio_wstrb = vlSelfRef.mmio_wstrb;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_flags_ok 
        = (1U & (~ (3U == (3U & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q 
                                 >> 4U)))));
    if ((7U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) {
        ++(vlSymsp->__Vcoverage[13299]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_11 = 0x12U;
    } else {
        ++(vlSymsp->__Vcoverage[13300]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_11 = 0x0eU;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_words_expected 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_11;
    vlSelfRef.tinygpu_top__DOT__mmio_valid = vlSelfRef.mmio_valid;
    vlSelfRef.tinygpu_top__DOT__mmio_we = vlSelfRef.mmio_we;
    vlSelfRef.tinygpu_top__DOT__mmio_addr = vlSelfRef.mmio_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__tile_out_y 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__tile_out_x 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_kh 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_kw 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_ic 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_start 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_start_q;
    vlSelfRef.tinygpu_top__DOT__reg_direct_mode = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_mode_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__use_dst_i8 
        = (1U & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q 
                 >> 4U));
    vlSelfRef.tinygpu_top__DOT__mmio_wdata = vlSelfRef.mmio_wdata;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_conv_opcode 
        = (7U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_output_c 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_channels_q 
           >> 0x00000010U);
    vlSelfRef.tinygpu_top__DOT__mem_stage_ready = (1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.tinygpu_top__DOT__mem_cmd_valid_q) 
                                                       | (IData)(vlSelfRef.tinygpu_top__DOT__mem_read_pending_q))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_rvalid 
        = vlSelfRef.tinygpu_top__DOT__mem_rvalid_stage_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_stride_h 
        = (0x0000000fU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q 
                          >> 0x0000000cU));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_h 
        = (0x0000000fU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q 
                          >> 4U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_h 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_in_hw_q 
           >> 0x00000010U);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_stride_w 
        = (0x0000000fU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q 
                          >> 8U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_pad_h 
        = (0x0000000fU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q 
                          >> 0x00000014U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_pad_w 
        = (0x0000000fU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q 
                          >> 0x00000010U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_w 
        = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_in_hw_q);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_bias 
        = (9U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_vec 
        = ((0x0cU == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
           | ((0x0dU == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
              | (0x12U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_desc 
        = (2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_c 
        = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_channels_q);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_conv 
        = (0x15U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_w 
        = (0x0000000fU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q);
    if ((vlSelfRef.tinygpu_top__DOT__mem_rdata ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_rdata)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 350, vlSelfRef.tinygpu_top__DOT__mem_rdata, vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_rdata);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_rdata 
            = vlSelfRef.tinygpu_top__DOT__mem_rdata;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__mem_ready) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 414, vlSelfRef.tinygpu_top__DOT__mem_ready, vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_ready);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_ready 
            = vlSelfRef.tinygpu_top__DOT__mem_ready;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__mem_rvalid) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_rvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 416, vlSelfRef.tinygpu_top__DOT__mem_rvalid, vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_rvalid);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_rvalid 
            = vlSelfRef.tinygpu_top__DOT__mem_rvalid;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__base_addr 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__base_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 17046, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__base_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__base_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__base_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__base_addr;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__stride_bytes) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__stride_bytes))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 17174, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__stride_bytes, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__stride_bytes);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__stride_bytes 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__stride_bytes;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_region))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 17206, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_region);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_region 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_base) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_base))) {
        VL_COV_TOGGLE_CHG_ST_I(9, vlSymsp->__Vcoverage + 17210, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_base, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_base);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_base 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_base;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__last_elem) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__last_elem))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 23307, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__last_elem, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__last_elem);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__last_elem 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__last_elem;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__mem_req) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_req))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 210, vlSelfRef.tinygpu_top__DOT__mem_req, vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_req);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_req 
            = vlSelfRef.tinygpu_top__DOT__mem_req;
    }
    vlSelfRef.mem_req = vlSelfRef.tinygpu_top__DOT__mem_req;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__mem_we) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_we))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 212, vlSelfRef.tinygpu_top__DOT__mem_we, vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_we);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_we 
            = vlSelfRef.tinygpu_top__DOT__mem_we;
    }
    vlSelfRef.mem_we = vlSelfRef.tinygpu_top__DOT__mem_we;
    if ((vlSelfRef.tinygpu_top__DOT__mem_addr ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 214, vlSelfRef.tinygpu_top__DOT__mem_addr, vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_addr);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_addr 
            = vlSelfRef.tinygpu_top__DOT__mem_addr;
    }
    vlSelfRef.mem_addr = vlSelfRef.tinygpu_top__DOT__mem_addr;
    if ((vlSelfRef.tinygpu_top__DOT__mem_wdata ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_wdata)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 278, vlSelfRef.tinygpu_top__DOT__mem_wdata, vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_wdata);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_wdata 
            = vlSelfRef.tinygpu_top__DOT__mem_wdata;
    }
    vlSelfRef.mem_wdata = vlSelfRef.tinygpu_top__DOT__mem_wdata;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__mem_wstrb) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_wstrb))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 342, vlSelfRef.tinygpu_top__DOT__mem_wstrb, vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_wstrb);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_wstrb 
            = vlSelfRef.tinygpu_top__DOT__mem_wstrb;
    }
    vlSelfRef.mem_wstrb = vlSelfRef.tinygpu_top__DOT__mem_wstrb;
    if ((vlSelfRef.tinygpu_top__DOT__reg_cmd_addr ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_cmd_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 432, vlSelfRef.tinygpu_top__DOT__reg_cmd_addr, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_cmd_addr);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_cmd_addr 
            = vlSelfRef.tinygpu_top__DOT__reg_cmd_addr;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr 
        = vlSelfRef.tinygpu_top__DOT__reg_cmd_addr;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__reg_opcode) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_opcode))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 496, vlSelfRef.tinygpu_top__DOT__reg_opcode, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_opcode);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_opcode 
            = vlSelfRef.tinygpu_top__DOT__reg_opcode;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode 
        = vlSelfRef.tinygpu_top__DOT__reg_opcode;
    if ((vlSelfRef.tinygpu_top__DOT__reg_src0_addr 
         ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_src0_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 512, vlSelfRef.tinygpu_top__DOT__reg_src0_addr, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_src0_addr);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_src0_addr 
            = vlSelfRef.tinygpu_top__DOT__reg_src0_addr;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr 
        = vlSelfRef.tinygpu_top__DOT__reg_src0_addr;
    if ((vlSelfRef.tinygpu_top__DOT__reg_src1_addr 
         ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_src1_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 576, vlSelfRef.tinygpu_top__DOT__reg_src1_addr, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_src1_addr);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_src1_addr 
            = vlSelfRef.tinygpu_top__DOT__reg_src1_addr;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr 
        = vlSelfRef.tinygpu_top__DOT__reg_src1_addr;
    if ((vlSelfRef.tinygpu_top__DOT__reg_bias_addr 
         ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_bias_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 640, vlSelfRef.tinygpu_top__DOT__reg_bias_addr, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_bias_addr);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_bias_addr 
            = vlSelfRef.tinygpu_top__DOT__reg_bias_addr;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr 
        = vlSelfRef.tinygpu_top__DOT__reg_bias_addr;
    if ((vlSelfRef.tinygpu_top__DOT__reg_dst_addr ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_dst_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 704, vlSelfRef.tinygpu_top__DOT__reg_dst_addr, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_dst_addr);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_dst_addr 
            = vlSelfRef.tinygpu_top__DOT__reg_dst_addr;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr 
        = vlSelfRef.tinygpu_top__DOT__reg_dst_addr;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__reg_dim_m) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_dim_m))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 768, vlSelfRef.tinygpu_top__DOT__reg_dim_m, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_dim_m);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_dim_m 
            = vlSelfRef.tinygpu_top__DOT__reg_dim_m;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M 
        = vlSelfRef.tinygpu_top__DOT__reg_dim_m;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__reg_dim_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_dim_n))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 800, vlSelfRef.tinygpu_top__DOT__reg_dim_n, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_dim_n);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_dim_n 
            = vlSelfRef.tinygpu_top__DOT__reg_dim_n;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__N 
        = vlSelfRef.tinygpu_top__DOT__reg_dim_n;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__reg_dim_k) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_dim_k))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 832, vlSelfRef.tinygpu_top__DOT__reg_dim_k, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_dim_k);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_dim_k 
            = vlSelfRef.tinygpu_top__DOT__reg_dim_k;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K 
        = vlSelfRef.tinygpu_top__DOT__reg_dim_k;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__reg_stride0) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_stride0))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 864, vlSelfRef.tinygpu_top__DOT__reg_stride0, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_stride0);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_stride0 
            = vlSelfRef.tinygpu_top__DOT__reg_stride0;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0 
        = vlSelfRef.tinygpu_top__DOT__reg_stride0;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__reg_stride1) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_stride1))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 896, vlSelfRef.tinygpu_top__DOT__reg_stride1, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_stride1);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_stride1 
            = vlSelfRef.tinygpu_top__DOT__reg_stride1;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1 
        = vlSelfRef.tinygpu_top__DOT__reg_stride1;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__reg_stride_dst) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_stride_dst))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 928, vlSelfRef.tinygpu_top__DOT__reg_stride_dst, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_stride_dst);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_stride_dst 
            = vlSelfRef.tinygpu_top__DOT__reg_stride_dst;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst 
        = vlSelfRef.tinygpu_top__DOT__reg_stride_dst;
    if ((vlSelfRef.tinygpu_top__DOT__reg_flags ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_flags)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 960, vlSelfRef.tinygpu_top__DOT__reg_flags, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_flags);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_flags 
            = vlSelfRef.tinygpu_top__DOT__reg_flags;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags 
        = vlSelfRef.tinygpu_top__DOT__reg_flags;
    if ((vlSelfRef.tinygpu_top__DOT__reg_scale ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_scale)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1024, vlSelfRef.tinygpu_top__DOT__reg_scale, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_scale);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_scale 
            = vlSelfRef.tinygpu_top__DOT__reg_scale;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__scale 
        = vlSelfRef.tinygpu_top__DOT__reg_scale;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__reg_shift) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_shift))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 1088, vlSelfRef.tinygpu_top__DOT__reg_shift, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_shift);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_shift 
            = vlSelfRef.tinygpu_top__DOT__reg_shift;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shift 
        = vlSelfRef.tinygpu_top__DOT__reg_shift;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__reg_zero_point) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_zero_point))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 1120, vlSelfRef.tinygpu_top__DOT__reg_zero_point, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_zero_point);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_zero_point 
            = vlSelfRef.tinygpu_top__DOT__reg_zero_point;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point 
        = vlSelfRef.tinygpu_top__DOT__reg_zero_point;
    if ((vlSelfRef.tinygpu_top__DOT__reg_conv_in_hw 
         ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_conv_in_hw)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1152, vlSelfRef.tinygpu_top__DOT__reg_conv_in_hw, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_conv_in_hw);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_conv_in_hw 
            = vlSelfRef.tinygpu_top__DOT__reg_conv_in_hw;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_in_hw 
        = vlSelfRef.tinygpu_top__DOT__reg_conv_in_hw;
    if ((vlSelfRef.tinygpu_top__DOT__reg_conv_channels 
         ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_conv_channels)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1216, vlSelfRef.tinygpu_top__DOT__reg_conv_channels, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_conv_channels);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_conv_channels 
            = vlSelfRef.tinygpu_top__DOT__reg_conv_channels;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_channels 
        = vlSelfRef.tinygpu_top__DOT__reg_conv_channels;
    if ((vlSelfRef.tinygpu_top__DOT__reg_conv_cfg ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_conv_cfg)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1280, vlSelfRef.tinygpu_top__DOT__reg_conv_cfg, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_conv_cfg);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_conv_cfg 
            = vlSelfRef.tinygpu_top__DOT__reg_conv_cfg;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg 
        = vlSelfRef.tinygpu_top__DOT__reg_conv_cfg;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_wstrb) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_spm_wstrb))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 10073, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_wstrb, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_spm_wstrb);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_spm_wstrb 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_wstrb;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__reg_irq_enable) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_irq_enable))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 426, vlSelfRef.tinygpu_top__DOT__reg_irq_enable, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_irq_enable);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_irq_enable 
            = vlSelfRef.tinygpu_top__DOT__reg_irq_enable;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__shift) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__shift))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 22277, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__shift, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__shift);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__shift 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__shift;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_busy) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__cnt_busy))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 4719, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_busy, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__cnt_busy);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__cnt_busy 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_busy;
    }
    vlSelfRef.tinygpu_top__DOT__cnt_busy = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_busy;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_active) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__cnt_active))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 4721, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_active, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__cnt_active);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__cnt_active 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_active;
    }
    vlSelfRef.tinygpu_top__DOT__cnt_active = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_active;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_product 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shared_mul_product)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 8869, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_product, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shared_mul_product);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shared_mul_product 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_product;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_product 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_product;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_product 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_product;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__irq_pending_o))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2484, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__irq_pending_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__irq_pending_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_o;
    }
    vlSelfRef.tinygpu_top__DOT__reg_irq_pending = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_o;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__zero_point) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__zero_point))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 22309, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__zero_point, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__zero_point);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__zero_point 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__zero_point;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__zero_point_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__zero_point) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__zero_point));
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_a 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__mul_a)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 22615, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_a, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__mul_a);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__mul_a 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_a;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_a 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_a;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__opcode) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT____Vtogcov__opcode))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 23550, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__opcode, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT____Vtogcov__opcode);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT____Vtogcov__opcode 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__opcode;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_wdata_i 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__desc_wdata_i)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 14574, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_wdata_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__desc_wdata_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__desc_wdata_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_wdata_i;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_wdata_i 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__bias_wdata_i)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 14920, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_wdata_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__bias_wdata_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__bias_wdata_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_wdata_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_wstrb_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__bias_wstrb_i))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 14984, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_wstrb_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__bias_wstrb_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__bias_wstrb_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_wstrb_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_wstrb_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__desc_wstrb_i))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 14638, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_wstrb_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__desc_wstrb_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__desc_wstrb_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_wstrb_i;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scale 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__scale)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 22213, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scale, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__scale);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__scale 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scale;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_b 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scale;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_we_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__bias_we_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 14854, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_we_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__bias_we_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__bias_we_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_we_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_we_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__desc_we_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 14508, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_we_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__desc_we_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__desc_we_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_we_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT____Vtogcov__x_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 23566, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT____Vtogcov__x_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT____Vtogcov__x_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_i;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_i) 
                              >> 7U)))) << 8U) | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_i));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__y_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT____Vtogcov__y_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 23582, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__y_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT____Vtogcov__y_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT____Vtogcov__y_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__y_i;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__y_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__y_i) 
                              >> 7U)))) << 8U) | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__y_i));
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_addr 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_mem_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 9493, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_mem_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_mem_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_addr;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_addr_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_addr;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_addr 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_mem_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 11797, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_mem_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_mem_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_addr;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_addr_mux 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_addr;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__flags 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__flags)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 22149, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__flags, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__flags);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__flags 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__flags;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_start) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_mul_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 7485, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_start, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_mul_start);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_mul_start 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_start;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_tile 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_ext 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__zero_point_ext)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 8401, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_ext, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__zero_point_ext);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__zero_point_ext 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_ext;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw_q;
    if (((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q 
          >> 1U) & VL_GTS_III(32, 0U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post = 0U;
        ++(vlSymsp->__Vcoverage[13323]);
    } else {
        ++(vlSymsp->__Vcoverage[13324]);
    }
    if ((4U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)) {
        vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__17__hi = 0x0000007fU;
        vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__17__lo = 0xffffff80U;
        vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__17__x 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post;
        vlSelf->__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__17__Vfuncout = 0;
        if (VL_GTS_III(32, 0xffffff80U, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__17__x)) {
            vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__17__Vfuncout 
                = vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__17__lo;
            ++(vlSymsp->__Vcoverage[13267]);
        } else if (VL_GTS_III(32, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__17__x, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__17__hi)) {
            vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__17__Vfuncout 
                = vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__17__hi;
            ++(vlSymsp->__Vcoverage[13265]);
        } else {
            vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__17__Vfuncout 
                = vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__17__x;
            ++(vlSymsp->__Vcoverage[13266]);
        }
        ++(vlSymsp->__Vcoverage[13268]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post 
            = vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__clamp32__17__Vfuncout;
        ++(vlSymsp->__Vcoverage[13328]);
    } else {
        ++(vlSymsp->__Vcoverage[13329]);
    }
    if ((8U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)) {
        if (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q)))) {
            vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__18__x 
                = (VL_SHIFTRS_III(32,32,16, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_scaled_q, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q)) 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_ext);
            vlSelf->__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__18__Vfuncout = 0;
            if (VL_LTS_III(32, 0x0000007fU, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__18__x)) {
                vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__18__Vfuncout = 0x7fU;
                ++(vlSymsp->__Vcoverage[13263]);
            } else if (VL_GTS_III(32, 0xffffff80U, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__18__x)) {
                vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__18__Vfuncout = 0x80U;
                ++(vlSymsp->__Vcoverage[13261]);
            } else {
                vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__18__Vfuncout 
                    = (0x000000ffU & vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__18__x);
                ++(vlSymsp->__Vcoverage[13262]);
            }
            ++(vlSymsp->__Vcoverage[13264]);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8 
                = vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__18__Vfuncout;
            ++(vlSymsp->__Vcoverage[13330]);
        } else {
            vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__19__x 
                = (VL_SHIFTL_III(32,32,16, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_scaled_q, 
                                 (0x0000ffffU & (- (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q)))) 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_ext);
            vlSelf->__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__19__Vfuncout = 0;
            if (VL_LTS_III(32, 0x0000007fU, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__19__x)) {
                vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__19__Vfuncout = 0x7fU;
                ++(vlSymsp->__Vcoverage[13263]);
            } else if (VL_GTS_III(32, 0xffffff80U, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__19__x)) {
                vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__19__Vfuncout = 0x80U;
                ++(vlSymsp->__Vcoverage[13261]);
            } else {
                vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__19__Vfuncout 
                    = (0x000000ffU & vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__19__x);
                ++(vlSymsp->__Vcoverage[13262]);
            }
            ++(vlSymsp->__Vcoverage[13264]);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8 
                = vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__19__Vfuncout;
            ++(vlSymsp->__Vcoverage[13331]);
        }
        ++(vlSymsp->__Vcoverage[13332]);
    } else {
        vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__20__x 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post_q;
        vlSelf->__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__20__Vfuncout = 0;
        if (VL_LTS_III(32, 0x0000007fU, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__20__x)) {
            vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__20__Vfuncout = 0x7fU;
            ++(vlSymsp->__Vcoverage[13263]);
        } else if (VL_GTS_III(32, 0xffffff80U, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__20__x)) {
            vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__20__Vfuncout = 0x80U;
            ++(vlSymsp->__Vcoverage[13261]);
        } else {
            vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__20__Vfuncout 
                = (0x000000ffU & vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__20__x);
            ++(vlSymsp->__Vcoverage[13262]);
        }
        ++(vlSymsp->__Vcoverage[13264]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8 
            = vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__20__Vfuncout;
        ++(vlSymsp->__Vcoverage[13333]);
    }
    if (((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q 
          >> 1U) & VL_GTS_III(32, 0U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post))) {
        ++(vlSymsp->__Vcoverage[13325]);
    }
    if (VL_LTES_III(32, 0U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post)) {
        ++(vlSymsp->__Vcoverage[13326]);
    }
    if ((1U & (~ (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q 
                  >> 1U)))) {
        ++(vlSymsp->__Vcoverage[13327]);
    }
    ++(vlSymsp->__Vcoverage[13334]);
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__bias[0U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__bias[0U])) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 22341, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__bias[0U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__bias[0U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__bias[0U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__bias[0U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__bias[1U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__bias[1U])) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 22405, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__bias[1U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__bias[1U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__bias[1U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__bias[1U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__bias[2U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__bias[2U])) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 22469, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__bias[2U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__bias[2U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__bias[2U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__bias[2U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__bias[3U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__bias[3U])) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 22533, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__bias[3U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__bias[3U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__bias[3U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__bias[3U];
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__ctrl_illegal_opcode) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__ctrl_illegal_opcode))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1348, vlSelfRef.tinygpu_top__DOT__ctrl_illegal_opcode, vlSelfRef.tinygpu_top__DOT____Vtogcov__ctrl_illegal_opcode);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__ctrl_illegal_opcode 
            = vlSelfRef.tinygpu_top__DOT__ctrl_illegal_opcode;
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__illegal_opcode_i 
        = vlSelfRef.tinygpu_top__DOT__ctrl_illegal_opcode;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__ctrl_shape_error) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__ctrl_shape_error))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1350, vlSelfRef.tinygpu_top__DOT__ctrl_shape_error, vlSelfRef.tinygpu_top__DOT____Vtogcov__ctrl_shape_error);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__ctrl_shape_error 
            = vlSelfRef.tinygpu_top__DOT__ctrl_shape_error;
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shape_error_i 
        = vlSelfRef.tinygpu_top__DOT__ctrl_shape_error;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__ctrl_memory_error) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__ctrl_memory_error))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1352, vlSelfRef.tinygpu_top__DOT__ctrl_memory_error, vlSelfRef.tinygpu_top__DOT____Vtogcov__ctrl_memory_error);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__ctrl_memory_error 
            = vlSelfRef.tinygpu_top__DOT__ctrl_memory_error;
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__memory_error_i 
        = vlSelfRef.tinygpu_top__DOT__ctrl_memory_error;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__ctrl_unsupported_format) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__ctrl_unsupported_format))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1354, vlSelfRef.tinygpu_top__DOT__ctrl_unsupported_format, vlSelfRef.tinygpu_top__DOT____Vtogcov__ctrl_unsupported_format);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__ctrl_unsupported_format 
            = vlSelfRef.tinygpu_top__DOT__ctrl_unsupported_format;
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__unsupported_fmt_i 
        = vlSelfRef.tinygpu_top__DOT__ctrl_unsupported_format;
    if ((vlSelfRef.tinygpu_top__DOT__cycle_count_last 
         ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__cycle_count_last)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1366, vlSelfRef.tinygpu_top__DOT__cycle_count_last, vlSelfRef.tinygpu_top__DOT____Vtogcov__cycle_count_last);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__cycle_count_last 
            = vlSelfRef.tinygpu_top__DOT__cycle_count_last;
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cycle_count_i 
        = vlSelfRef.tinygpu_top__DOT__cycle_count_last;
    if ((vlSelfRef.tinygpu_top__DOT__active_count_last 
         ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__active_count_last)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1430, vlSelfRef.tinygpu_top__DOT__active_count_last, vlSelfRef.tinygpu_top__DOT____Vtogcov__active_count_last);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__active_count_last 
            = vlSelfRef.tinygpu_top__DOT__active_count_last;
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__active_count_i 
        = vlSelfRef.tinygpu_top__DOT__active_count_last;
    if ((vlSelfRef.tinygpu_top__DOT__stall_count_last 
         ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__stall_count_last)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1494, vlSelfRef.tinygpu_top__DOT__stall_count_last, vlSelfRef.tinygpu_top__DOT____Vtogcov__stall_count_last);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__stall_count_last 
            = vlSelfRef.tinygpu_top__DOT__stall_count_last;
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stall_count_i 
        = vlSelfRef.tinygpu_top__DOT__stall_count_last;
    if ((vlSelfRef.tinygpu_top__DOT__cmd_count_total 
         ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__cmd_count_total)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1558, vlSelfRef.tinygpu_top__DOT__cmd_count_total, vlSelfRef.tinygpu_top__DOT____Vtogcov__cmd_count_total);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__cmd_count_total 
            = vlSelfRef.tinygpu_top__DOT__cmd_count_total;
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_count_i 
        = vlSelfRef.tinygpu_top__DOT__cmd_count_total;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_base 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_base)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 15344, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_base, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_base);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_base 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_base;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__clk) ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 0, vlSelfRef.tinygpu_top__DOT__clk, vlSelfRef.tinygpu_top__DOT____Vtogcov__clk);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__clk 
            = vlSelfRef.tinygpu_top__DOT__clk;
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__clk = vlSelfRef.tinygpu_top__DOT__clk;
    vlSelfRef.tinygpu_top__DOT__u_counters__DOT__clk 
        = vlSelfRef.tinygpu_top__DOT__clk;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clk 
        = vlSelfRef.tinygpu_top__DOT__clk;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__rst_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2, vlSelfRef.tinygpu_top__DOT__rst_n, vlSelfRef.tinygpu_top__DOT____Vtogcov__rst_n);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__rst_n 
            = vlSelfRef.tinygpu_top__DOT__rst_n;
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__rst_n 
        = vlSelfRef.tinygpu_top__DOT__rst_n;
    vlSelfRef.tinygpu_top__DOT__u_counters__DOT__rst_n 
        = vlSelfRef.tinygpu_top__DOT__rst_n;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n 
        = vlSelfRef.tinygpu_top__DOT__rst_n;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_kh) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_next_kh))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 10145, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_kh, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_next_kh);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_next_kh 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_kh;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_kw) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_next_kw))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 10153, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_kw, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_next_kw);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_next_kw 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_kw;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_ic) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_next_ic))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 10161, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_ic, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_next_ic);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_next_ic 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_ic;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_out_y) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_next_out_y))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 10081, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_out_y, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_next_out_y);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_next_out_y 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_out_y;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_out_x) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_next_out_x))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 10113, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_out_x, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_next_out_x);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_next_out_x 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_out_x;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[0U][0U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[0U][0U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 7969, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[0U][0U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[0U][0U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[0U][0U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[0U][0U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[0U][1U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[0U][1U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 7985, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[0U][1U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[0U][1U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[0U][1U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[0U][1U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[0U][2U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[0U][2U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 8001, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[0U][2U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[0U][2U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[0U][2U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[0U][2U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[0U][3U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[0U][3U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 8017, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[0U][3U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[0U][3U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[0U][3U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[0U][3U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[1U][0U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[1U][0U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 8033, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[1U][0U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[1U][0U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[1U][0U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[1U][0U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[1U][1U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[1U][1U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 8049, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[1U][1U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[1U][1U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[1U][1U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[1U][1U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[1U][2U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[1U][2U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 8065, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[1U][2U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[1U][2U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[1U][2U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[1U][2U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[1U][3U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[1U][3U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 8081, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[1U][3U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[1U][3U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[1U][3U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[1U][3U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[2U][0U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[2U][0U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 8097, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[2U][0U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[2U][0U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[2U][0U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[2U][0U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[2U][1U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[2U][1U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 8113, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[2U][1U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[2U][1U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[2U][1U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[2U][1U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[2U][2U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[2U][2U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 8129, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[2U][2U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[2U][2U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[2U][2U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[2U][2U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[2U][3U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[2U][3U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 8145, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[2U][3U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[2U][3U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[2U][3U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[2U][3U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[3U][0U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[3U][0U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 8161, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[3U][0U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[3U][0U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[3U][0U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[3U][0U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[3U][1U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[3U][1U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 8177, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[3U][1U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[3U][1U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[3U][1U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[3U][1U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[3U][2U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[3U][2U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 8193, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[3U][2U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[3U][2U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[3U][2U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[3U][2U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[3U][3U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[3U][3U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 8209, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[3U][3U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[3U][3U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_shadow_i8[3U][3U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8[3U][3U];
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_rd_addr) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__c_rd_addr))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 14213, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_rd_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__c_rd_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__c_rd_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_rd_addr;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_addr) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__spm_addr))) {
        VL_COV_TOGGLE_CHG_ST_I(9, vlSymsp->__Vcoverage + 16072, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__spm_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__spm_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_addr;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_addr;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__op_kind))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 17042, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__op_kind);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__op_kind 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__rows))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 17110, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__rows);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__rows 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__cols))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 17142, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__cols);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__cols 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__aligned_read_addr 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__aligned_read_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 18172, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__aligned_read_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__aligned_read_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__aligned_read_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__aligned_read_addr;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__aligned_write_addr 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__aligned_write_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 18236, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__aligned_write_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__aligned_write_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__aligned_write_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__aligned_write_addr;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__last_elem) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__last_elem))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 18322, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__last_elem, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__last_elem);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__last_elem 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__last_elem;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__load_lane_sel) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__load_lane_sel))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 18316, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__load_lane_sel, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__load_lane_sel);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__load_lane_sel 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__load_lane_sel;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_rdata 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__mem_rdata)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 4865, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_rdata, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__mem_rdata);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__mem_rdata 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_rdata;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_rdata_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_rdata;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__is_vector_opcode))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10239, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__is_vector_opcode);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__is_vector_opcode 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_needs_y) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_needs_y))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10245, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_needs_y, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_needs_y);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_needs_y 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_needs_y;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_busy) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_busy))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 7481, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_busy, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_busy);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_busy 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_busy;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_done) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 7483, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_done, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_done);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_done 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_done;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_valid) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_out_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 7871, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_valid, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_out_valid);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_out_valid 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_valid;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_index) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_out_index))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 7873, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_index, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_out_index);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_out_index 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_index;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i8) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_out_i8))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 7953, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i8, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_out_i8);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_out_i8 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i8;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i32 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_out_i32)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 7889, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i32, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_out_i32);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_out_i32 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i32;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_m_tiles) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__more_m_tiles))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10225, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_m_tiles, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__more_m_tiles);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__more_m_tiles 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_m_tiles;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_store_base_addr 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_store_base_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 11733, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_store_base_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_store_base_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_store_base_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_store_base_addr;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_busy) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shared_mul_busy))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 8865, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_busy, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shared_mul_busy);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shared_mul_busy 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_busy;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_busy 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_busy;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__error))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 17040, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__error);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__error 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_error 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 17038, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__done);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__done 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_done 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_done) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shared_mul_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 8867, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_done, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shared_mul_done);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shared_mul_done 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_done;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_done 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_done;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_done 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_done;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_stride_bytes) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_src0_stride_bytes))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 11861, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_stride_bytes, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_src0_stride_bytes);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_src0_stride_bytes 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_stride_bytes;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_elem_addr 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q 
           + ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_stride_bytes) 
              * (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q)));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_stride_bytes) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_src1_stride_bytes))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 11893, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_stride_bytes, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_src1_stride_bytes);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_src1_stride_bytes 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_stride_bytes;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_elem_addr 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q 
           + ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_stride_bytes) 
              * (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q)));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__mmio_wstrb) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__mmio_wstrb))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 136, vlSelfRef.tinygpu_top__DOT__mmio_wstrb, vlSelfRef.tinygpu_top__DOT____Vtogcov__mmio_wstrb);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mmio_wstrb 
            = vlSelfRef.tinygpu_top__DOT__mmio_wstrb;
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb 
        = vlSelfRef.tinygpu_top__DOT__mmio_wstrb;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_flags_ok) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_flags_ok))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10217, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_flags_ok, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_flags_ok);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_flags_ok 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_flags_ok;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_words_expected) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_words_expected))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 13249, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_words_expected, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_words_expected);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_words_expected 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_words_expected;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__mmio_valid) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__mmio_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 4, vlSelfRef.tinygpu_top__DOT__mmio_valid, vlSelfRef.tinygpu_top__DOT____Vtogcov__mmio_valid);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mmio_valid 
            = vlSelfRef.tinygpu_top__DOT__mmio_valid;
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_valid 
        = vlSelfRef.tinygpu_top__DOT__mmio_valid;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__mmio_we) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__mmio_we))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 6, vlSelfRef.tinygpu_top__DOT__mmio_we, vlSelfRef.tinygpu_top__DOT____Vtogcov__mmio_we);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mmio_we 
            = vlSelfRef.tinygpu_top__DOT__mmio_we;
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_we 
        = vlSelfRef.tinygpu_top__DOT__mmio_we;
    if ((vlSelfRef.tinygpu_top__DOT__mmio_addr ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__mmio_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 8, vlSelfRef.tinygpu_top__DOT__mmio_addr, vlSelfRef.tinygpu_top__DOT____Vtogcov__mmio_addr);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mmio_addr 
            = vlSelfRef.tinygpu_top__DOT__mmio_addr;
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_addr 
        = vlSelfRef.tinygpu_top__DOT__mmio_addr;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__tile_out_y) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__tile_out_y))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 15616, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__tile_out_y, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__tile_out_y);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__tile_out_y 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__tile_out_y;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__tile_out_x) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__tile_out_x))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 15648, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__tile_out_x, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__tile_out_x);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__tile_out_x 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__tile_out_x;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_kh) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__start_kh))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 15776, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_kh, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__start_kh);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__start_kh 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_kh;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_kw) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__start_kw))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 15784, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_kw, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__start_kw);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__start_kw 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_kw;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_ic) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__start_ic))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 15792, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_ic, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__start_ic);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__start_ic 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_ic;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_start) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9819, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_start, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_start);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_start 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_start;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_start;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__reg_direct_mode) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_direct_mode))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 428, vlSelfRef.tinygpu_top__DOT__reg_direct_mode, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_direct_mode);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_direct_mode 
            = vlSelfRef.tinygpu_top__DOT__reg_direct_mode;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__direct_mode 
        = vlSelfRef.tinygpu_top__DOT__reg_direct_mode;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__use_dst_i8) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__use_dst_i8))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10227, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__use_dst_i8, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__use_dst_i8);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__use_dst_i8 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__use_dst_i8;
    }
    if ((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q))) {
        ++(vlSymsp->__Vcoverage[13281]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_6 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q;
    } else {
        ++(vlSymsp->__Vcoverage[13284]);
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__use_dst_i8) {
            ++(vlSymsp->__Vcoverage[13282]);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_6 = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[13283]);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_6 = 4U;
        }
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_stride_bytes 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_6;
    if ((vlSelfRef.tinygpu_top__DOT__mmio_wdata ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__mmio_wdata)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 72, vlSelfRef.tinygpu_top__DOT__mmio_wdata, vlSelfRef.tinygpu_top__DOT____Vtogcov__mmio_wdata);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mmio_wdata 
            = vlSelfRef.tinygpu_top__DOT__mmio_wdata;
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata 
        = vlSelfRef.tinygpu_top__DOT__mmio_wdata;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_conv_opcode) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__is_conv_opcode))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10243, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_conv_opcode, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__is_conv_opcode);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__is_conv_opcode 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_conv_opcode;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_output_c) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_output_c))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 12783, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_output_c, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_output_c);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_output_c 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_output_c;
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_conv_opcode) {
        ++(vlSymsp->__Vcoverage[13291]);
        if ((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q))) {
            ++(vlSymsp->__Vcoverage[13289]);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_9 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q;
        } else {
            ++(vlSymsp->__Vcoverage[13290]);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_9 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_output_c;
        }
    } else {
        ++(vlSymsp->__Vcoverage[13292]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_9 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_eff 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_9;
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_conv_opcode) {
        ++(vlSymsp->__Vcoverage[13297]);
        if ((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q))) {
            ++(vlSymsp->__Vcoverage[13293]);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_10 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q;
        } else {
            ++(vlSymsp->__Vcoverage[13296]);
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__use_dst_i8) {
                ++(vlSymsp->__Vcoverage[13294]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_10 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_output_c;
            } else {
                ++(vlSymsp->__Vcoverage[13295]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_10 
                    = (0x0000ffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_output_c), 2U));
            }
        }
    } else {
        ++(vlSymsp->__Vcoverage[13298]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_10 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_eff 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_10;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__mem_stage_ready) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_stage_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1970, vlSelfRef.tinygpu_top__DOT__mem_stage_ready, vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_stage_ready);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_stage_ready 
            = vlSelfRef.tinygpu_top__DOT__mem_stage_ready;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_ready 
        = vlSelfRef.tinygpu_top__DOT__mem_stage_ready;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_rvalid) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__mem_rvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 4931, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_rvalid, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__mem_rvalid);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__mem_rvalid 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_rvalid;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_rvalid_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_rvalid;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_stride_h) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_stride_h))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 12831, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_stride_h, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_stride_h);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_stride_h 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_stride_h;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__stride_h 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_stride_h;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_h) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_kernel_h))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 12815, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_h, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_kernel_h);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_kernel_h 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_h;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kernel_h 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_h;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_h) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_input_h))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 12687, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_h, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_input_h);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_input_h 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_h;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_h 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_h;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_stride_w) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_stride_w))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 12839, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_stride_w, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_stride_w);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_stride_w 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_stride_w;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__stride_w 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_stride_w;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_pad_h) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_pad_h))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 12847, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_pad_h, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_pad_h);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_pad_h 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_pad_h;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__pad_h 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_pad_h;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_pad_h) 
                                                 << 1U) 
                                                + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_h));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_pad_w) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_pad_w))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 12855, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_pad_w, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_pad_w);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_pad_w 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_pad_w;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__pad_w 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_pad_w;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_w) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_input_w))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 12719, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_w, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_input_w);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_input_w 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_w;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_w 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_w;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_pad_w) 
                                                 << 1U) 
                                                + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_w));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_bias) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__state_is_bias))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10253, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_bias, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__state_is_bias);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__state_is_bias 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_bias;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_vec) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__state_is_vec))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10255, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_vec, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__state_is_vec);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__state_is_vec 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_vec;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_desc) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__state_is_desc))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10257, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_desc, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__state_is_desc);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__state_is_desc 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_desc;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_c) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_input_c))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 12751, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_c, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_input_c);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_input_c 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_c;
    }
    if ((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q))) {
        ++(vlSymsp->__Vcoverage[13287]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_8 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q;
    } else {
        ++(vlSymsp->__Vcoverage[13288]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_8 
            = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_w) 
               * (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_c));
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_row_stride 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_8;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_c 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_c;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_conv) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__state_is_conv))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10259, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_conv, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__state_is_conv);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__state_is_conv 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_conv;
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_desc) {
        ++(vlSymsp->__Vcoverage[13269]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_3 = 1U;
    } else {
        ++(vlSymsp->__Vcoverage[13276]);
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_conv) {
            ++(vlSymsp->__Vcoverage[13270]);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_2 = 2U;
        } else {
            ++(vlSymsp->__Vcoverage[13275]);
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_vec) {
                ++(vlSymsp->__Vcoverage[13271]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_1 = 3U;
            } else {
                ++(vlSymsp->__Vcoverage[13274]);
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_bias) {
                    ++(vlSymsp->__Vcoverage[13272]);
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_0 = 4U;
                } else {
                    ++(vlSymsp->__Vcoverage[13273]);
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_0 = 0U;
                }
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_1 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_0;
            }
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_2 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_1;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_3 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_2;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_client_sel 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_3;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__effective_n))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 10261, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__effective_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__effective_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_n_tiles 
        = ((0x0000ffffU & ((IData)(4U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q))) 
           < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n));
    if ((4U <= (0x0000ffffU & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q) 
                               - (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q))))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m = 4U;
        ++(vlSymsp->__Vcoverage[13442]);
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m 
            = (0x0000ffffU & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q) 
                              - (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q)));
        ++(vlSymsp->__Vcoverage[13443]);
    }
    if ((4U <= (0x0000ffffU & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n) 
                               - (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q))))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n = 4U;
        ++(vlSymsp->__Vcoverage[13444]);
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n 
            = (0x0000ffffU & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n) 
                              - (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q)));
        ++(vlSymsp->__Vcoverage[13445]);
    }
    if ((0x0010U <= (0x0000ffffU & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q) 
                                    - (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q))))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k = 0x0010U;
        ++(vlSymsp->__Vcoverage[13446]);
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k 
            = (0x0000ffffU & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q) 
                              - (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q)));
        ++(vlSymsp->__Vcoverage[13447]);
    }
    ++(vlSymsp->__Vcoverage[13448]);
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_w) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_kernel_w))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 12823, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_w, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_kernel_w);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_kernel_w 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_w;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_k_calc 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_h) 
           * ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_c) 
              * (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_w)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kernel_w 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_w;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__cmd_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 3791, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__cmd_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__cmd_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__opcode))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 3855, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__opcode);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__opcode 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src0_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 3935, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src0_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src0_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src1_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 3999, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src1_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src1_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 4063, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 4127, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__M))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 4191, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__M);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__M 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__N) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__N))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 4223, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__N, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__N);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__N 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__N;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__K))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 4255, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__K);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__K 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride0))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 4287, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride0);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride0 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride1))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 4319, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride1);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride1 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride_dst))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 4351, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride_dst);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride_dst 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__flags)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 3871, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__flags);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__flags 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__scale 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__scale)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 4383, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__scale, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__scale);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__scale 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__scale;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shift) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shift))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 4447, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shift, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shift);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shift 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shift;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__zero_point))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 4479, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__zero_point);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__zero_point 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_in_hw 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_in_hw)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 4511, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_in_hw, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_in_hw);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_in_hw 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_in_hw;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_channels 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_channels)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 4575, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_channels, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_channels);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_channels 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_channels;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_cfg)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 4639, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_cfg);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_cfg 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__cnt_busy) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__cnt_busy))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1360, vlSelfRef.tinygpu_top__DOT__cnt_busy, vlSelfRef.tinygpu_top__DOT____Vtogcov__cnt_busy);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__cnt_busy 
            = vlSelfRef.tinygpu_top__DOT__cnt_busy;
    }
    vlSelfRef.tinygpu_top__DOT__u_counters__DOT__busy_i 
        = vlSelfRef.tinygpu_top__DOT__cnt_busy;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__cnt_active) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__cnt_active))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1362, vlSelfRef.tinygpu_top__DOT__cnt_active, vlSelfRef.tinygpu_top__DOT____Vtogcov__cnt_active);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__cnt_active 
            = vlSelfRef.tinygpu_top__DOT__cnt_active;
    }
    vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_i 
        = vlSelfRef.tinygpu_top__DOT__cnt_active;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_product 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mul_product)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 8799, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_product, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mul_product);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mul_product 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_product;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_product 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__mul_product)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 22745, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_product, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__mul_product);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__mul_product 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_product;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__reg_irq_pending) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_irq_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 430, vlSelfRef.tinygpu_top__DOT__reg_irq_pending, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_irq_pending);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_irq_pending 
            = vlSelfRef.tinygpu_top__DOT__reg_irq_pending;
    }
    vlSelfRef.tinygpu_top__DOT__irq = ((IData)(vlSelfRef.tinygpu_top__DOT__reg_irq_enable) 
                                       & (IData)(vlSelfRef.tinygpu_top__DOT__reg_irq_pending));
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__zero_point_ext 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__zero_point_ext)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 23437, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__zero_point_ext, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__zero_point_ext);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__zero_point_ext 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__zero_point_ext;
    }
    if ((8U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__flags)) {
        if (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__shift)))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__x_shifted 
                = (VL_SHIFTRS_III(32,32,16, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_elem_q, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__shift)) 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__zero_point_ext);
            ++(vlSymsp->__Vcoverage[23521]);
        } else {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__x_shifted 
                = (VL_SHIFTL_III(32,32,16, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_elem_q, 
                                 (0x0000ffffU & (- (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__shift)))) 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__zero_point_ext);
            ++(vlSymsp->__Vcoverage[23522]);
        }
        ++(vlSymsp->__Vcoverage[23523]);
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__x_shifted 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_q;
        ++(vlSymsp->__Vcoverage[23524]);
    }
    ++(vlSymsp->__Vcoverage[23525]);
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_a 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_mul_a)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 7487, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_a, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_mul_a);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_mul_a 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_a;
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_start) {
        ++(vlSymsp->__Vcoverage[13308]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_12 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_a;
    } else {
        ++(vlSymsp->__Vcoverage[13309]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_12 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_a 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_12;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_b 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__mul_b)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 22679, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_b, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__mul_b);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__mul_b 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_b;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_b 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_b;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_ext 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT____Vtogcov__x_ext)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 23662, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_ext, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT____Vtogcov__x_ext);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT____Vtogcov__x_ext 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_ext;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__y_ext 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT____Vtogcov__y_ext)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 23726, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__y_ext, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT____Vtogcov__y_ext);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT____Vtogcov__y_ext 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__y_ext;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__z_o = 0U;
    if ((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__opcode))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__z_o 
            = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_ext 
               + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__y_ext);
        ++(vlSymsp->__Vcoverage[23794]);
    } else if ((4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__opcode))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__z_o 
            = VL_MULS_III(32, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_ext, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__y_ext);
        ++(vlSymsp->__Vcoverage[23795]);
    } else if ((5U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__opcode))) {
        if (VL_GTS_III(32, 0U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_ext)) {
            ++(vlSymsp->__Vcoverage[23798]);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT____VlemCond_0 = 0U;
        } else {
            ++(vlSymsp->__Vcoverage[23799]);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT____VlemCond_0 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_ext;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__z_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT____VlemCond_0;
        ++(vlSymsp->__Vcoverage[23800]);
    } else if ((6U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__opcode))) {
        vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__29__hi = 0x0000007fU;
        vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__29__lo = 0xffffff80U;
        vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__29__x 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_ext;
        vlSelf->__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__29__Vfuncout = 0;
        if (VL_GTS_III(32, 0xffffff80U, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__29__x)) {
            vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__29__Vfuncout 
                = vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__29__lo;
            ++(vlSymsp->__Vcoverage[23792]);
        } else if (VL_GTS_III(32, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__29__x, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__29__hi)) {
            vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__29__Vfuncout 
                = vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__29__hi;
            ++(vlSymsp->__Vcoverage[23790]);
        } else {
            vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__29__Vfuncout 
                = vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__29__x;
            ++(vlSymsp->__Vcoverage[23791]);
        }
        ++(vlSymsp->__Vcoverage[23793]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__z_o 
            = vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__clamp32__29__Vfuncout;
        ++(vlSymsp->__Vcoverage[23801]);
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__z_o = 0U;
        ++(vlSymsp->__Vcoverage[23802]);
    }
    if (VL_GTS_III(32, 0U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_ext)) {
        ++(vlSymsp->__Vcoverage[23796]);
    }
    if (VL_LTES_III(32, 0U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_ext)) {
        ++(vlSymsp->__Vcoverage[23797]);
    }
    ++(vlSymsp->__Vcoverage[23803]);
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_addr_i 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__desc_addr_i)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 14510, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_addr_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__desc_addr_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__desc_addr_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_addr_i;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_addr_mux 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_mem_addr_mux)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 9213, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_addr_mux, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_mem_addr_mux);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_mem_addr_mux 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_addr_mux;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_addr_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_addr_mux;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_in 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_tile;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_result_post)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 8321, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_result_post);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_result_post 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_result_i8))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 8385, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_result_i8);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_result_i8 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__illegal_opcode_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__illegal_opcode_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2210, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__illegal_opcode_i, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__illegal_opcode_i);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__illegal_opcode_i 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__illegal_opcode_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shape_error_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__shape_error_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2212, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shape_error_i, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__shape_error_i);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__shape_error_i 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shape_error_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__memory_error_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__memory_error_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2214, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__memory_error_i, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__memory_error_i);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__memory_error_i 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__memory_error_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__unsupported_fmt_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__unsupported_fmt_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2216, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__unsupported_fmt_i, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__unsupported_fmt_i);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__unsupported_fmt_i 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__unsupported_fmt_i;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cycle_count_i 
         ^ vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__cycle_count_i)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2218, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cycle_count_i, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__cycle_count_i);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__cycle_count_i 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cycle_count_i;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__active_count_i 
         ^ vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__active_count_i)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2282, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__active_count_i, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__active_count_i);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__active_count_i 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__active_count_i;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stall_count_i 
         ^ vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stall_count_i)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2346, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stall_count_i, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stall_count_i);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stall_count_i 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stall_count_i;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_count_i 
         ^ vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__cmd_count_i)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2410, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_count_i, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__cmd_count_i);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__cmd_count_i 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_count_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__clk) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1998, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__clk, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__clk);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__clk 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__clk;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_counters__DOT__clk) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 24017, vlSelfRef.tinygpu_top__DOT__u_counters__DOT__clk, vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__clk);
        vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__clk 
            = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__clk;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clk) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3779, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clk, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__clk);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__clk 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clk;
    }
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__rst_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2000, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__rst_n, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__rst_n);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__rst_n 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_counters__DOT__rst_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 24019, vlSelfRef.tinygpu_top__DOT__u_counters__DOT__rst_n, vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__rst_n);
        vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__rst_n 
            = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3781, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__rst_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__rst_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n;
    }
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_addr) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_spm_addr))) {
        VL_COV_TOGGLE_CHG_ST_I(9, vlSymsp->__Vcoverage + 9991, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_spm_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_spm_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_addr;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_rdata_i 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__mem_rdata_i)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 15132, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_rdata_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__mem_rdata_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__mem_rdata_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_rdata_i;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__client_rdata_o 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_rdata_i;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_busy) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mul_busy))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 8795, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_busy, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mul_busy);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mul_busy 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_busy;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_error) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_error))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9067, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_error, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_error);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_error 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_error;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_done) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9065, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_done, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_done);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_done 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_done;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_done) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__mul_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 22743, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_done, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__mul_done);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__mul_done 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_done;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_done) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mul_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 8797, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_done, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mul_done);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mul_done 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_done;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_elem_addr 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_src0_elem_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 11957, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_elem_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_src0_elem_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_src0_elem_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_elem_addr;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_lane_sel 
        = (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_elem_addr);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_read_addr 
        = (0xfffffffcU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_elem_addr);
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_elem_addr 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_src1_elem_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 12021, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_elem_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_src1_elem_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_src1_elem_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_elem_addr;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_lane_sel 
        = (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_elem_addr);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_read_addr 
        = (0xfffffffcU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_elem_addr);
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__mmio_wstrb))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 2134, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__mmio_wstrb);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__mmio_wstrb 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_valid) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__mmio_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2002, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_valid, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__mmio_valid);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__mmio_valid 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_valid;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_we) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__mmio_we))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2004, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_we, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__mmio_we);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__mmio_we 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_we;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_addr 
         ^ vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__mmio_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2006, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_addr, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__mmio_addr);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__mmio_addr 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_addr;
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__unused_mmio_addr 
        = (1U & VL_REDXOR_32((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_addr 
                              >> 8U)));
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo 
        = (0x000000ffU & vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_addr);
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 15336, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__start);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__start 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__direct_mode) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__direct_mode))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3789, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__direct_mode, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__direct_mode);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__direct_mode 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__direct_mode;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_stride_bytes) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_dst_stride_bytes))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 11925, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_stride_bytes, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_dst_stride_bytes);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_dst_stride_bytes 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_stride_bytes;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr_q 
           + ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_stride_bytes) 
              * (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q)));
    if ((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata 
         ^ vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__mmio_wdata)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2070, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__mmio_wdata);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__mmio_wdata 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata;
    }
    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb))) {
        ++(vlSymsp->__Vcoverage[3709]);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____VlemCond_2 
            = (0x000000ffU & vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata);
    } else {
        ++(vlSymsp->__Vcoverage[3710]);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____VlemCond_2 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__opcode_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_op_next_w 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT____VlemCond_2;
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
        ++(vlSymsp->__Vcoverage[3700]);
    } else {
        ++(vlSymsp->__Vcoverage[3701]);
    }
    if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__Vfuncout 
            = ((0x00ffU & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__Vfuncout)) 
               | (0x0000ff00U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__0__newv)));
        ++(vlSymsp->__Vcoverage[3702]);
    } else {
        ++(vlSymsp->__Vcoverage[3703]);
    }
    ++(vlSymsp->__Vcoverage[3704]);
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
        ++(vlSymsp->__Vcoverage[3700]);
    } else {
        ++(vlSymsp->__Vcoverage[3701]);
    }
    if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__Vfuncout 
            = ((0x00ffU & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__Vfuncout)) 
               | (0x0000ff00U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__1__newv)));
        ++(vlSymsp->__Vcoverage[3702]);
    } else {
        ++(vlSymsp->__Vcoverage[3703]);
    }
    ++(vlSymsp->__Vcoverage[3704]);
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
        ++(vlSymsp->__Vcoverage[3700]);
    } else {
        ++(vlSymsp->__Vcoverage[3701]);
    }
    if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__Vfuncout 
            = ((0x00ffU & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__Vfuncout)) 
               | (0x0000ff00U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__2__newv)));
        ++(vlSymsp->__Vcoverage[3702]);
    } else {
        ++(vlSymsp->__Vcoverage[3703]);
    }
    ++(vlSymsp->__Vcoverage[3704]);
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
        ++(vlSymsp->__Vcoverage[3700]);
    } else {
        ++(vlSymsp->__Vcoverage[3701]);
    }
    if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__Vfuncout 
            = ((0x00ffU & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__Vfuncout)) 
               | (0x0000ff00U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__3__newv)));
        ++(vlSymsp->__Vcoverage[3702]);
    } else {
        ++(vlSymsp->__Vcoverage[3703]);
    }
    ++(vlSymsp->__Vcoverage[3704]);
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
        ++(vlSymsp->__Vcoverage[3700]);
    } else {
        ++(vlSymsp->__Vcoverage[3701]);
    }
    if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__Vfuncout 
            = ((0x00ffU & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__Vfuncout)) 
               | (0x0000ff00U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__4__newv)));
        ++(vlSymsp->__Vcoverage[3702]);
    } else {
        ++(vlSymsp->__Vcoverage[3703]);
    }
    ++(vlSymsp->__Vcoverage[3704]);
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
        ++(vlSymsp->__Vcoverage[3700]);
    } else {
        ++(vlSymsp->__Vcoverage[3701]);
    }
    if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__Vfuncout 
            = ((0x00ffU & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__Vfuncout)) 
               | (0x0000ff00U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb16__5__newv)));
        ++(vlSymsp->__Vcoverage[3702]);
    } else {
        ++(vlSymsp->__Vcoverage[3703]);
    }
    ++(vlSymsp->__Vcoverage[3704]);
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
        ++(vlSymsp->__Vcoverage[3696]);
    } else {
        ++(vlSymsp->__Vcoverage[3697]);
    }
    ++(vlSymsp->__Vcoverage[3698]);
    if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout 
            = ((0xffff00ffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout) 
               | (0x0000ff00U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__newv));
        ++(vlSymsp->__Vcoverage[3696]);
    } else {
        ++(vlSymsp->__Vcoverage[3697]);
    }
    ++(vlSymsp->__Vcoverage[3698]);
    if ((4U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout 
            = ((0xff00ffffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout) 
               | (0x00ff0000U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__newv));
        ++(vlSymsp->__Vcoverage[3696]);
    } else {
        ++(vlSymsp->__Vcoverage[3697]);
    }
    ++(vlSymsp->__Vcoverage[3698]);
    if ((8U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__wstrb))) {
        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout 
            = ((0x00ffffffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout) 
               | (0xff000000U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__newv));
        ++(vlSymsp->__Vcoverage[3696]);
    } else {
        ++(vlSymsp->__Vcoverage[3697]);
    }
    ++(vlSymsp->__Vcoverage[3698]);
    ++(vlSymsp->__Vcoverage[3699]);
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shiftzp_next_w 
        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__6__Vfuncout;
    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb))) {
        ++(vlSymsp->__Vcoverage[3707]);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____VlemCond_1 
            = (3U & (vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata 
                     >> 2U));
    } else {
        ++(vlSymsp->__Vcoverage[3708]);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____VlemCond_1 
            = (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_mode_o) 
                << 1U) | (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_enable_o));
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__ctrl_mode_next_w 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT____VlemCond_1;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_eff) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride1_eff))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 13183, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_eff, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride1_eff);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride1_eff 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_eff;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_eff) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride_dst_eff))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 13215, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_eff, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride_dst_eff);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride_dst_eff 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_eff;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_ready) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__mem_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 4929, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_ready, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__mem_ready);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__mem_ready 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_ready;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_ready_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_ready;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_rvalid_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__mem_rvalid_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 15198, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_rvalid_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__mem_rvalid_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__mem_rvalid_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_rvalid_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__stride_h) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__stride_h))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 15584, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__stride_h, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__stride_h);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__stride_h 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__stride_h;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kernel_h) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__kernel_h))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 15568, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kernel_h, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__kernel_h);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__kernel_h 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kernel_h;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_h) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_h))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 15408, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_h, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_h);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_h 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_h;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__stride_w) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__stride_w))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 15592, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__stride_w, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__stride_w);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__stride_w 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__stride_w;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__pad_h) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__pad_h))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 15600, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__pad_h, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__pad_h);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__pad_h 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__pad_h;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_y 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_q) 
            + VL_MULS_III(32, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__stride_h), (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_y_q))) 
           - (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__pad_h));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_h_calc 
        = ((IData)(1U) + VL_SHIFTR_III(32,32,32, (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                                  - (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_h)), 
                                       (1U & (- (IData)(
                                                        (2U 
                                                         == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_stride_h)))))));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__pad_w) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__pad_w))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 15608, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__pad_w, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__pad_w);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__pad_w 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__pad_w;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_x 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_q) 
            + VL_MULS_III(32, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__stride_w), (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_q))) 
           - (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__pad_w));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_w) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_w))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 15440, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_w, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_w);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_w 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_w;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_w_calc 
        = ((IData)(1U) + VL_SHIFTR_III(32,32,32, (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 
                                                  - (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_w)), 
                                       (1U & (- (IData)(
                                                        (2U 
                                                         == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_stride_w)))))));
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_row_stride 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_input_row_stride)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 13119, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_row_stride, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_input_row_stride);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_input_row_stride 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_row_stride;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_row_stride 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_row_stride;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_c) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_c))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 15472, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_c, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_c);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_c 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_c;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_client_sel) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__mem_client_sel))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 9899, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_client_sel, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__mem_client_sel);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__mem_client_sel 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_client_sel;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_client_sel;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_n_tiles) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__more_n_tiles))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10223, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_n_tiles, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__more_n_tiles);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__more_n_tiles 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_n_tiles;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__active_tile_n))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 6689, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__active_tile_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__active_tile_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__active_tile_m))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 6657, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__active_tile_m);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__active_tile_m 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_last 
        = (((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q))) 
            >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m)) 
           & ((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q))) 
              >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_rows 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__active_tile_k))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 6721, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__active_tile_k);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__active_tile_k 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_k_tiles 
        = ((0x0000ffffU & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q) 
                           + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k))) 
           < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_k 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_k_calc 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_k_calc)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 13055, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_k_calc, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_k_calc);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_k_calc 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_k_calc;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kernel_w) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__kernel_w))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 15576, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kernel_w, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__kernel_w);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__kernel_w 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kernel_w;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_kh 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_kw 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_ic 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_q;
    if (((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_q))) 
         < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_c))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_ic 
            = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_q)));
        ++(vlSymsp->__Vcoverage[16908]);
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_ic = 0U;
        if (((0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_q))) 
             < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kernel_w))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_kw 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_q)));
            ++(vlSymsp->__Vcoverage[16906]);
        } else {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_kw = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_kh 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_q)));
            ++(vlSymsp->__Vcoverage[16907]);
        }
        ++(vlSymsp->__Vcoverage[16909]);
    }
    ++(vlSymsp->__Vcoverage[16910]);
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_counters__DOT__busy_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__busy_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 24025, vlSelfRef.tinygpu_top__DOT__u_counters__DOT__busy_i, vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__busy_i);
        vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__busy_i 
            = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__busy_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__active_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 24027, vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_i, vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__active_i);
        vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__active_i 
            = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__irq) ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__irq))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 418, vlSelfRef.tinygpu_top__DOT__irq, vlSelfRef.tinygpu_top__DOT____Vtogcov__irq);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__irq 
            = vlSelfRef.tinygpu_top__DOT__irq;
    }
    vlSelfRef.irq = vlSelfRef.tinygpu_top__DOT__irq;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__x_shifted 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__x_shifted)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 23373, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__x_shifted, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__x_shifted);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__x_shifted 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__x_shifted;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_a 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shared_mul_a)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 8933, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_a, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shared_mul_a);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shared_mul_a 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_a;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_a;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_b 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_mul_b)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 7551, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_b, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_mul_b);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_mul_b 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_b;
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_start) {
        ++(vlSymsp->__Vcoverage[13310]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_13 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_b;
    } else {
        ++(vlSymsp->__Vcoverage[13311]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_13 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__scale_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_b 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_13;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__z_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT____Vtogcov__z_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 23598, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__z_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT____Vtogcov__z_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT____Vtogcov__z_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__z_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__z_o;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_addr_i 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__bias_addr_i)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 14856, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_addr_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__bias_addr_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__bias_addr_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_addr_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__clk) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 13711, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__clk, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__clk);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__clk 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__clk;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__clk) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 15332, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__clk, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__clk);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__clk 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__clk;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__clk) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 17030, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__clk, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__clk);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__clk 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__clk;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clk) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 22139, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clk, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__clk);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__clk 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clk;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__clk) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 23804, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__clk, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__clk);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__clk 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__clk;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clk) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 18643, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clk, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__clk);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__clk 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clk;
    }
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__rst_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 13713, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__rst_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__rst_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__rst_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__rst_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 15334, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__rst_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__rst_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__rst_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rst_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 17032, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rst_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__rst_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__rst_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__rst_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 22141, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__rst_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__rst_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__rst_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__rst_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 23806, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__rst_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__rst_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__rst_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__rst_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 18645, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__rst_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__rst_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__rst_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__rst_n;
    }
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
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__client_rdata_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__client_rdata_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 15200, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__client_rdata_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__client_rdata_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__client_rdata_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__client_rdata_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__client_rdata_o;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_lane_sel) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_src0_lane_sel))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 12341, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_lane_sel, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_src0_lane_sel);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_src0_lane_sel 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_lane_sel;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_read_addr 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_src0_read_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 12213, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_read_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_src0_read_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_src0_read_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_read_addr;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_lane_sel) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_src1_lane_sel))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 12345, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_lane_sel, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_src1_lane_sel);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_src1_lane_sel 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_lane_sel;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_read_addr 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_src1_read_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 12277, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_read_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_src1_read_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_src1_read_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_read_addr;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__unused_mmio_addr) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__unused_mmio_addr))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3694, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__unused_mmio_addr, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__unused_mmio_addr);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__unused_mmio_addr 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__unused_mmio_addr;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__addr_lo))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 3402, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__addr_lo);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__addr_lo 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo;
    }
    __VdfgRegularize_h6e95ff9d_0_5 = ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_valid) 
                                      & ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_we) 
                                         & (0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))));
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_dst_elem_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 12085, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_dst_elem_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_dst_elem_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_next 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_next = 0x0fU;
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__use_dst_i8) {
        if ((0U == (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_next 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_next = 1U;
            ++(vlSymsp->__Vcoverage[13301]);
        } else if ((1U == (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_next 
                = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8) 
                   << 8U);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_next = 2U;
            ++(vlSymsp->__Vcoverage[13302]);
        } else if ((2U == (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_next 
                = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8) 
                   << 0x00000010U);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_next = 4U;
            ++(vlSymsp->__Vcoverage[13303]);
        } else {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_next 
                = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8) 
                   << 0x00000018U);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_next = 8U;
            ++(vlSymsp->__Vcoverage[13304]);
        }
        ++(vlSymsp->__Vcoverage[13305]);
    } else {
        ++(vlSymsp->__Vcoverage[13306]);
    }
    ++(vlSymsp->__Vcoverage[13307]);
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__use_dst_i8) {
        ++(vlSymsp->__Vcoverage[13285]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_7 
            = (0xfffffffcU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr);
    } else {
        ++(vlSymsp->__Vcoverage[13286]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_7 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_aligned_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_7;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_op_next_w) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__direct_op_next_w))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 3422, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_op_next_w, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__direct_op_next_w);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__direct_op_next_w 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_op_next_w;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_m_next_w) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_m_next_w))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 3438, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_m_next_w, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_m_next_w);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_m_next_w 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_m_next_w;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_n_next_w) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_n_next_w))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 3470, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_n_next_w, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_n_next_w);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_n_next_w 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_n_next_w;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_k_next_w) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_k_next_w))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 3502, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_k_next_w, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_k_next_w);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_k_next_w 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_k_next_w;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride0_next_w) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride0_next_w))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 3534, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride0_next_w, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride0_next_w);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride0_next_w 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride0_next_w;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride1_next_w) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride1_next_w))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 3566, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride1_next_w, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride1_next_w);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride1_next_w 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride1_next_w;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride_dst_next_w) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride_dst_next_w))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 3598, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride_dst_next_w, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride_dst_next_w);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride_dst_next_w 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride_dst_next_w;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shiftzp_next_w 
         ^ vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__shiftzp_next_w)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 3630, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shiftzp_next_w, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__shiftzp_next_w);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__shiftzp_next_w 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shiftzp_next_w;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__ctrl_mode_next_w) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__ctrl_mode_next_w))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 3418, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__ctrl_mode_next_w, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__ctrl_mode_next_w);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__ctrl_mode_next_w 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__ctrl_mode_next_w;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_ready_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__mem_ready_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 15196, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_ready_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__mem_ready_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__mem_ready_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_ready_i;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_y 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_y)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 16592, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_y, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_y);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_y 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_y;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_h_calc 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_out_h_calc)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 12863, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_h_calc, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_out_h_calc);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_out_h_calc 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_h_calc;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_x 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_x)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 16656, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_x, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_x);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_x 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_x;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__coord_valid 
        = (VL_LTES_III(32, 0U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_y) 
           & (VL_LTES_III(32, 0U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_x) 
              & (VL_LTS_III(32, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_y, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_h)) 
                 & VL_LTS_III(32, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_x, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_w)))));
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_w_calc 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_out_w_calc)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 12927, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_w_calc, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_out_w_calc);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_out_w_calc 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_w_calc;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__output_w 
        = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_w_calc);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_m_calc 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_h_calc 
           * vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_w_calc);
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_row_stride 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_row_stride)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 15504, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_row_stride, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_row_stride);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_row_stride 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_row_stride;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__elem_addr 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_base 
           + ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_row_stride 
               * vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_y) 
              + ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_x 
                  * (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_c)) 
                 + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_q))));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__select_i))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 14360, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__select_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__select_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_ready_o 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_ready_i) 
           & (0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_rvalid_o 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_rvalid_i) 
           & (0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_ready_o 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_ready_i) 
           & (1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_rvalid_o 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_rvalid_i) 
           & (3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_ready_o 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_ready_i) 
           & (4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_rvalid_o 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_rvalid_i) 
           & (1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_ready_o 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_ready_i) 
           & (3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_rvalid_o 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_rvalid_i) 
           & (4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_ready_o 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_ready_i) 
           & (2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_rvalid_o 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_rvalid_i) 
           & (2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i)));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_last) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__store_stage_last))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10229, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_last, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__store_stage_last);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__store_stage_last 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_last;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_rows) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__active_rows))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 15712, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_rows, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__active_rows);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__active_rows 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_rows;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_row 
        = ((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_q))) 
           >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_rows));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_k_tiles) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__more_k_tiles))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10221, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_k_tiles, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__more_k_tiles);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__more_k_tiles 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_k_tiles;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_k) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__active_k))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 15744, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_k, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__active_k);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__active_k 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_k;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_k 
        = ((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_q))) 
           >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_k));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_kh) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__step_kh))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 16858, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_kh, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__step_kh);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__step_kh 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_kh;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_kw) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__step_kw))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 16866, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_kw, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__step_kw);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__step_kw 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_kw;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_ic) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__step_ic))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 16874, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_ic, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__step_ic);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__step_ic 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_ic;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__a_i 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__a_i)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 23810, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__a_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__a_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__a_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__a_i;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_b 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shared_mul_b)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 8997, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_b, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shared_mul_b);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shared_mul_b 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_b;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_b;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_result_raw)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 8257, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_result_raw);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_result_raw 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clk) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 18827, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clk, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__clk);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__clk 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clk;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clk) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 19034, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clk, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__clk);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__clk 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clk;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clk) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 19241, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clk, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__clk);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__clk 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clk;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clk) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 19448, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clk, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__clk);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__clk 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clk;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clk) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 19655, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clk, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__clk);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__clk 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clk;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clk) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 19862, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clk, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__clk);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__clk 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clk;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clk) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 20069, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clk, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__clk);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__clk 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clk;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clk) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 20276, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clk, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__clk);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__clk 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clk;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clk) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 20483, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clk, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__clk);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__clk 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clk;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clk) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 20690, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clk, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__clk);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__clk 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clk;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clk) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 20897, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clk, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__clk);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__clk 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clk;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clk) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 21104, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clk, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__clk);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__clk 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clk;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clk) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 21311, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clk, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__clk);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__clk 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clk;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clk) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 21518, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clk, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__clk);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__clk 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clk;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clk) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 21725, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clk, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__clk);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__clk 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clk;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clk) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 21932, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clk, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__clk);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__clk 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clk;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 18829, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__rst_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__rst_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 19036, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__rst_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__rst_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 19243, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__rst_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__rst_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 19450, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__rst_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__rst_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 19657, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__rst_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__rst_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 19864, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__rst_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__rst_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 20071, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__rst_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__rst_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 20278, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__rst_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__rst_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 20485, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__rst_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__rst_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 20692, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__rst_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__rst_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 20899, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__rst_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__rst_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 21106, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__rst_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__rst_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 21313, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__rst_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__rst_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 21520, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__rst_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__rst_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 21727, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__rst_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__rst_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 21934, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__rst_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__rst_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__client_mem_rdata)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 9905, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__client_mem_rdata);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__client_mem_rdata 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rdata 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata;
    if ((0x0dU == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        if ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_lane_sel))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_load_byte 
                = (0x000000ffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata);
            ++(vlSymsp->__Vcoverage[13312]);
        } else if ((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_lane_sel))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_load_byte 
                = (0x000000ffU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata 
                                  >> 8U));
            ++(vlSymsp->__Vcoverage[13313]);
        } else if ((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_lane_sel))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_load_byte 
                = (0x000000ffU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata 
                                  >> 0x10U));
            ++(vlSymsp->__Vcoverage[13314]);
        } else {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_load_byte 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata 
                   >> 0x18U);
            ++(vlSymsp->__Vcoverage[13315]);
        }
        ++(vlSymsp->__Vcoverage[13316]);
    } else {
        if ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_lane_sel))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_load_byte 
                = (0x000000ffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata);
            ++(vlSymsp->__Vcoverage[13317]);
        } else if ((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_lane_sel))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_load_byte 
                = (0x000000ffU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata 
                                  >> 8U));
            ++(vlSymsp->__Vcoverage[13318]);
        } else if ((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_lane_sel))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_load_byte 
                = (0x000000ffU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata 
                                  >> 0x10U));
            ++(vlSymsp->__Vcoverage[13319]);
        } else {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_load_byte 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata 
                   >> 0x18U);
            ++(vlSymsp->__Vcoverage[13320]);
        }
        ++(vlSymsp->__Vcoverage[13321]);
    }
    ++(vlSymsp->__Vcoverage[13322]);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rdata 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__soft_reset_o 
        = ((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata 
            >> 1U) & (IData)(__VdfgRegularize_h6e95ff9d_0_5));
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__start_pulse_o 
        = (vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_5));
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_next 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_store_wdata_next)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 12429, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_next, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_store_wdata_next);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_store_wdata_next 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_next;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_next) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_store_wstrb_next))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 12493, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_next, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_store_wstrb_next);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_store_wstrb_next 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_next;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_aligned_addr 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_store_aligned_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 12149, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_aligned_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_store_aligned_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_store_aligned_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_aligned_addr;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_addr_next 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_aligned_addr;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__coord_valid) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__coord_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 16852, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__coord_valid, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__coord_valid);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__coord_valid 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__coord_valid;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__output_w) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__output_w))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 15680, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__output_w, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__output_w);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__output_w 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__output_w;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_m_calc 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_m_calc)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 12991, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_m_calc, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_m_calc);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_m_calc 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_m_calc;
    }
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
                                      & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                          >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_h)) 
                                         & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 
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
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__elem_addr 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__elem_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 16720, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__elem_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__elem_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__elem_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__elem_addr;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__lane_sel 
        = (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__elem_addr);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__aligned_addr 
        = (0xfffffffcU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__elem_addr);
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_ready_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__dma_ready_o))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 15264, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_ready_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__dma_ready_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__dma_ready_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_ready_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_ready 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_ready_o;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_rvalid_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__dma_rvalid_o))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 15266, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_rvalid_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__dma_rvalid_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__dma_rvalid_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_rvalid_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_rvalid 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_rvalid_o;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_ready_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__desc_ready_o))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 15268, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_ready_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__desc_ready_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__desc_ready_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_ready_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_ready 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_ready_o;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_rvalid_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__vec_rvalid_o))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 15278, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_rvalid_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__vec_rvalid_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__vec_rvalid_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_rvalid_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_rvalid 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_rvalid_o;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_ready_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__bias_ready_o))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 15280, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_ready_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__bias_ready_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__bias_ready_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_ready_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_ready 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_ready_o;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_rvalid_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__desc_rvalid_o))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 15270, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_rvalid_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__desc_rvalid_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__desc_rvalid_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_rvalid_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_rvalid 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_rvalid_o;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_ready_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__vec_ready_o))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 15276, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_ready_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__vec_ready_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__vec_ready_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_ready_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_ready 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_ready_o;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_rvalid_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__bias_rvalid_o))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 15282, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_rvalid_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__bias_rvalid_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__bias_rvalid_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_rvalid_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_rvalid 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_rvalid_o;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_ready_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__conv_ready_o))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 15272, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_ready_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__conv_ready_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__conv_ready_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_ready_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_ready 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_ready_o;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_rvalid_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__conv_rvalid_o))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 15274, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_rvalid_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__conv_rvalid_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__conv_rvalid_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_rvalid_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_rvalid 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_rvalid_o;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_row) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__last_row))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 16856, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_row, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__last_row);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__last_row 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_row;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_k) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__last_k))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 16854, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_k, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__last_k);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__last_k 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_k;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__b_i 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__b_i)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 23874, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__b_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__b_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__b_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__b_i;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rdata 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__mem_rdata)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 16002, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rdata, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__mem_rdata);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__mem_rdata 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rdata;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_load_byte) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_load_byte))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 12349, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_load_byte, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_load_byte);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_load_byte 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_load_byte;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rdata 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__mem_rdata)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 17368, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rdata, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__mem_rdata);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__mem_rdata 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rdata;
    }
    if ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__load_lane_sel))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__load_byte 
            = (0x000000ffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rdata);
        ++(vlSymsp->__Vcoverage[18388]);
    } else if ((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__load_lane_sel))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__load_byte 
            = (0x000000ffU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rdata 
                              >> 8U));
        ++(vlSymsp->__Vcoverage[18389]);
    } else if ((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__load_lane_sel))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__load_byte 
            = (0x000000ffU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rdata 
                              >> 0x10U));
        ++(vlSymsp->__Vcoverage[18390]);
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__load_byte 
            = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rdata 
               >> 0x18U);
        ++(vlSymsp->__Vcoverage[18391]);
    }
    ++(vlSymsp->__Vcoverage[18392]);
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__soft_reset_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__soft_reset_o))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2478, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__soft_reset_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__soft_reset_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__soft_reset_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__soft_reset_o;
    }
    vlSelfRef.tinygpu_top__DOT__reg_soft_reset = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__soft_reset_o;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__start_pulse_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__start_pulse_o))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2474, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__start_pulse_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__start_pulse_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__start_pulse_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__start_pulse_o;
    }
    vlSelfRef.tinygpu_top__DOT__reg_start_pulse = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__start_pulse_o;
    if (vlSelfRef.tinygpu_top__DOT__u_regs__DOT__start_pulse_o) {
        ++(vlSymsp->__Vcoverage[3705]);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____VlemCond_0 
            = (1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__ctrl_mode_next_w) 
                     >> 1U));
    } else {
        ++(vlSymsp->__Vcoverage[3706]);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____VlemCond_0 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_mode_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__start_direct_mode_o 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT____VlemCond_0;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_addr_next 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_store_addr_next)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 12365, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_addr_next, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_store_addr_next);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_store_addr_next 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_addr_next;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_shape_ok) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_shape_ok))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 13247, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_shape_ok, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_shape_ok);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_shape_ok 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_shape_ok;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok = 0U;
    if (((((((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)) 
             || (2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) 
            || (3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) 
           || (4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) 
          || (5U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) 
         || (6U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok = 1U;
        ++(vlSymsp->__Vcoverage[13423]);
    } else if ((7U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok = 1U;
        ++(vlSymsp->__Vcoverage[13424]);
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok = 0U;
        ++(vlSymsp->__Vcoverage[13425]);
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok = 1U;
    if ((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok 
            = (((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q)) 
                & (0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q))) 
               & (0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q)));
        ++(vlSymsp->__Vcoverage[13433]);
    } else if ((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok 
            = ((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q)) 
               & (0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q)));
        ++(vlSymsp->__Vcoverage[13437]);
    } else if ((7U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_shape_ok;
        ++(vlSymsp->__Vcoverage[13438]);
    } else if (((((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)) 
                  || (4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) 
                 || (5U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) 
                || (6U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok 
            = (0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q));
        ++(vlSymsp->__Vcoverage[13439]);
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok = 0U;
        ++(vlSymsp->__Vcoverage[13440]);
    }
    if ((1U & (~ (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q 
                  >> 5U)))) {
        ++(vlSymsp->__Vcoverage[13426]);
    }
    if ((1U & (~ (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q 
                  >> 4U)))) {
        ++(vlSymsp->__Vcoverage[13427]);
    }
    if ((IData)((0x00000030U == (0x00000030U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)))) {
        ++(vlSymsp->__Vcoverage[13428]);
    }
    if ((((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q)) 
          & (0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q))) 
         & (0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q)))) {
        ++(vlSymsp->__Vcoverage[13429]);
    }
    if ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q))) {
        ++(vlSymsp->__Vcoverage[13430]);
    }
    if ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q))) {
        ++(vlSymsp->__Vcoverage[13431]);
    }
    if ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q))) {
        ++(vlSymsp->__Vcoverage[13432]);
    }
    if (((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q)) 
         & (0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q)))) {
        ++(vlSymsp->__Vcoverage[13434]);
    }
    if ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q))) {
        ++(vlSymsp->__Vcoverage[13435]);
    }
    if ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q))) {
        ++(vlSymsp->__Vcoverage[13436]);
    }
    ++(vlSymsp->__Vcoverage[13441]);
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__lane_sel) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__lane_sel))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 16848, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__lane_sel, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__lane_sel);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__lane_sel 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__lane_sel;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__aligned_addr 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__aligned_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 16784, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__aligned_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__aligned_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__aligned_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__aligned_addr;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__aligned_addr;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_ready) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_mem_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9969, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_ready, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_mem_ready);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_mem_ready 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_ready;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_ready 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_ready;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_rvalid) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_mem_rvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9971, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_rvalid, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_mem_rvalid);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_mem_rvalid 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_rvalid;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rvalid 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_rvalid;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_ready) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_mem_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9973, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_ready, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_mem_ready);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_mem_ready 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_ready;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_rvalid) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mem_rvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9983, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_rvalid, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mem_rvalid);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mem_rvalid 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_rvalid;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_ready) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_mem_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9985, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_ready, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_mem_ready);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_mem_ready 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_ready;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_rvalid) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_mem_rvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9975, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_rvalid, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_mem_rvalid);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_mem_rvalid 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_rvalid;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_ready) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mem_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9981, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_ready, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mem_ready);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mem_ready 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_ready;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_rvalid) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_mem_rvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9987, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_rvalid, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_mem_rvalid);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_mem_rvalid 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_rvalid;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_ready) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_mem_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9977, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_ready, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_mem_ready);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_mem_ready 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_ready;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_ready 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_ready;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_rvalid) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_mem_rvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9979, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_rvalid, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_mem_rvalid);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_mem_rvalid 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_rvalid;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rvalid 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_rvalid;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__load_byte) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__load_byte))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 18300, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__load_byte, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__load_byte);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__load_byte 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__load_byte;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__reg_soft_reset) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_soft_reset))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 424, vlSelfRef.tinygpu_top__DOT__reg_soft_reset, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_soft_reset);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_soft_reset 
            = vlSelfRef.tinygpu_top__DOT__reg_soft_reset;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__soft_reset 
        = vlSelfRef.tinygpu_top__DOT__reg_soft_reset;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__reg_start_pulse) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_start_pulse))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 420, vlSelfRef.tinygpu_top__DOT__reg_start_pulse, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_start_pulse);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_start_pulse 
            = vlSelfRef.tinygpu_top__DOT__reg_start_pulse;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__start 
        = vlSelfRef.tinygpu_top__DOT__reg_start_pulse;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__start_direct_mode_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__start_direct_mode_o))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2476, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__start_direct_mode_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__start_direct_mode_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__start_direct_mode_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__start_direct_mode_o;
    }
    vlSelfRef.tinygpu_top__DOT__reg_start_direct_mode 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__start_direct_mode_o;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__opcode_ok))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10215, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__opcode_ok);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__opcode_ok 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dims_ok))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10219, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dims_ok);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dims_ok 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_addr 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__mem_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 15938, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__mem_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__mem_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_addr;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_addr;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_ready) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__mem_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 17432, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_ready, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__mem_ready);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__mem_ready 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_ready;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rvalid) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__mem_rvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 17434, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rvalid, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__mem_rvalid);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__mem_rvalid 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rvalid;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_ready) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__mem_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 16066, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_ready, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__mem_ready);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__mem_ready 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_ready;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rvalid) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__mem_rvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 16068, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rvalid, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__mem_rvalid);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__mem_rvalid 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rvalid;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_y_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_y_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__busy = 1U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__done = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__error = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_req = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_wr_en = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_wdata 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__sample_q;
    if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__busy = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__error = 1U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_d = 0U;
                ++(vlSymsp->__Vcoverage[16947]);
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__busy = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__done = 1U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_d = 0U;
                ++(vlSymsp->__Vcoverage[16946]);
            }
        } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_k) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_d 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__first_kh_q;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_d 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__first_kw_q;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_d 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__first_ic_q;
                if (((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_q))) 
                     < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__output_w))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_d 
                        = (0x0000ffffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_q)));
                    ++(vlSymsp->__Vcoverage[16939]);
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_y_d 
                        = (0x0000ffffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_y_q)));
                    ++(vlSymsp->__Vcoverage[16940]);
                }
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_row) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_d = 6U;
                    ++(vlSymsp->__Vcoverage[16941]);
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_d 
                        = (0x0000ffffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_q)));
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_d = 1U;
                    ++(vlSymsp->__Vcoverage[16942]);
                }
                ++(vlSymsp->__Vcoverage[16943]);
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_d 
                    = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_q)));
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_d 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_kh;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_d 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_kw;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_d 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_ic;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_d = 1U;
                ++(vlSymsp->__Vcoverage[16944]);
            }
            ++(vlSymsp->__Vcoverage[16945]);
        } else {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_wr_en = 1U;
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__sample_valid_q) {
                ++(vlSymsp->__Vcoverage[16935]);
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_wdata = 0U;
                ++(vlSymsp->__Vcoverage[16934]);
            }
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_d = 5U;
            ++(vlSymsp->__Vcoverage[16938]);
        }
    } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rvalid) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_d = 4U;
                ++(vlSymsp->__Vcoverage[16931]);
            } else {
                ++(vlSymsp->__Vcoverage[16932]);
            }
            ++(vlSymsp->__Vcoverage[16933]);
        } else {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_req = 1U;
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_ready) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_d = 3U;
                ++(vlSymsp->__Vcoverage[16928]);
            } else {
                ++(vlSymsp->__Vcoverage[16929]);
            }
            ++(vlSymsp->__Vcoverage[16930]);
        }
    } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__coord_valid) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_d = 2U;
            ++(vlSymsp->__Vcoverage[16925]);
        } else {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_d = 4U;
            ++(vlSymsp->__Vcoverage[16926]);
        }
        ++(vlSymsp->__Vcoverage[16927]);
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__busy = 0U;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_y_d 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__tile_out_y;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_d 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__tile_out_x;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_d 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_kh;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_d 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_kw;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_d 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_ic;
            if (((((((((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_rows)) 
                       | (4U < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_rows))) 
                      | (0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_k))) 
                     | (0x0010U < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_k))) 
                    | (0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__output_w))) 
                   | (0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_c))) 
                  | (0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kernel_h))) 
                 | (0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kernel_w)))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_d = 7U;
                ++(vlSymsp->__Vcoverage[16911]);
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_d = 1U;
                ++(vlSymsp->__Vcoverage[16912]);
            }
            if ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kernel_w))) {
                ++(vlSymsp->__Vcoverage[16913]);
            }
            if ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kernel_h))) {
                ++(vlSymsp->__Vcoverage[16914]);
            }
            if ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_c))) {
                ++(vlSymsp->__Vcoverage[16915]);
            }
            if ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__output_w))) {
                ++(vlSymsp->__Vcoverage[16916]);
            }
            if ((0x0010U < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_k))) {
                ++(vlSymsp->__Vcoverage[16917]);
            }
            if ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_k))) {
                ++(vlSymsp->__Vcoverage[16918]);
            }
            if ((4U < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_rows))) {
                ++(vlSymsp->__Vcoverage[16919]);
            }
            if ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_rows))) {
                ++(vlSymsp->__Vcoverage[16920]);
            }
            if (((((((((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_rows)) 
                       & (4U >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_rows))) 
                      & (0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_k))) 
                     & (0x0010U >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_k))) 
                    & (0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__output_w))) 
                   & (0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_c))) 
                  & (0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kernel_h))) 
                 & (0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kernel_w)))) {
                ++(vlSymsp->__Vcoverage[16921]);
            }
            ++(vlSymsp->__Vcoverage[16922]);
        } else {
            ++(vlSymsp->__Vcoverage[16923]);
        }
        ++(vlSymsp->__Vcoverage[16924]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__sample_valid_q)))) {
        ++(vlSymsp->__Vcoverage[16936]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__sample_valid_q) {
        ++(vlSymsp->__Vcoverage[16937]);
    }
    ++(vlSymsp->__Vcoverage[16948]);
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__soft_reset) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__soft_reset))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3787, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__soft_reset, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__soft_reset);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__soft_reset 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__soft_reset;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__start) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3783, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__start, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__start);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__start 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__start;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__reg_start_direct_mode) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_start_direct_mode))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 422, vlSelfRef.tinygpu_top__DOT__reg_start_direct_mode, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_start_direct_mode);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_start_direct_mode 
            = vlSelfRef.tinygpu_top__DOT__reg_start_direct_mode;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__start_direct_mode 
        = vlSelfRef.tinygpu_top__DOT__reg_start_direct_mode;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_addr 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_mem_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 9835, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_mem_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_mem_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_addr;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_addr_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_addr;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__state_d))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 16168, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__state_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__state_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__row_d))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 16206, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__row_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__row_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__k_d))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 16270, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__k_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__k_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_y_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__out_y_d))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 16334, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_y_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__out_y_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__out_y_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_y_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__out_x_d))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 16398, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__out_x_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__out_x_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__kh_d))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 16438, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__kh_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__kh_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__kw_d))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 16454, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__kw_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__kw_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__ic_d))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 16494, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__ic_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__ic_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__busy) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__busy))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 15338, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__busy, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__busy);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__busy 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__busy;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_busy_status 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__busy;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_wr_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__spm_wr_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 16070, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_wr_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__spm_wr_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__spm_wr_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_wr_en;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_wr_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_wr_en;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_wdata 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__spm_wdata)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 16090, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_wdata, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__spm_wdata);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__spm_wdata 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_wdata;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_wdata 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_wdata;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_req) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__mem_req))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 15936, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_req, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__mem_req);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__mem_req 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_req;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_req 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_req;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__error) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__error))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 15342, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__error, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__error);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__error 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__error;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_error 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__error;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__done) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 15340, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__done, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__done);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__done 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__done;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_done 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__done;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__start_direct_mode) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__start_direct_mode))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3785, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__start_direct_mode, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__start_direct_mode);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__start_direct_mode 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__start_direct_mode;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_addr_i 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__conv_addr_i)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 14648, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_addr_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__conv_addr_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__conv_addr_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_addr_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_busy_status) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_busy_status))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9823, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_busy_status, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_busy_status);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_busy_status 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_busy_status;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_wr_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_spm_wr_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9989, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_wr_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_spm_wr_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_spm_wr_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_wr_en;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_wdata 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_spm_wdata)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 10009, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_wdata, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_spm_wdata);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_spm_wdata 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_wdata;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_req) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_mem_req))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9833, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_req, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_mem_req);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_mem_req 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_req;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_req_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_req;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_error) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_error))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9827, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_error, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_error);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_error 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_error;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_done) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9825, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_done, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_done);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_done 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_done;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_q;
    if ((0x00000010U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            ++(vlSymsp->__Vcoverage[13515]);
        } else if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                ++(vlSymsp->__Vcoverage[13515]);
            } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_done) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_d 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_kh;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_d 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_kw;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_d 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_ic;
                    ++(vlSymsp->__Vcoverage[13489]);
                } else {
                    ++(vlSymsp->__Vcoverage[13490]);
                }
                ++(vlSymsp->__Vcoverage[13491]);
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_d 
                    = (0x0000ffffU & ((IData)(4U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q)));
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_d 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_q 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_q);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_d 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_d 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_q 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_q);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_d 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr_q;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_d 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_out_y;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_d 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_out_x;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_d = 0U;
                ++(vlSymsp->__Vcoverage[13514]);
            }
        } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_d 
                    = (0x0000ffffU & ((IData)(4U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q)));
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_d 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_d 
                    = ((IData)(4U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_q);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_d 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_q 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_q);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_d 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_q);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_d = 0U;
                ++(vlSymsp->__Vcoverage[13513]);
            } else {
                if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_ready))) {
                    if (((0x0000ffffU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q))) 
                         < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d 
                            = (0x0000ffffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q)));
                        ++(vlSymsp->__Vcoverage[13492]);
                    } else {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d = 0U;
                        ++(vlSymsp->__Vcoverage[13493]);
                    }
                    ++(vlSymsp->__Vcoverage[13494]);
                } else {
                    ++(vlSymsp->__Vcoverage[13495]);
                }
                ++(vlSymsp->__Vcoverage[13501]);
            }
        } else {
            ++(vlSymsp->__Vcoverage[13515]);
        }
    } else if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            ++(vlSymsp->__Vcoverage[13515]);
        } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_q) {
                    ++(vlSymsp->__Vcoverage[13509]);
                } else {
                    if (((0x0000ffffU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q))) 
                         < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d 
                            = (0x0000ffffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q)));
                        ++(vlSymsp->__Vcoverage[13504]);
                    } else {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d = 0U;
                        if (((0x0000ffffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q))) 
                             < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m))) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d 
                                = (0x0000ffffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q)));
                            ++(vlSymsp->__Vcoverage[13502]);
                        } else {
                            ++(vlSymsp->__Vcoverage[13503]);
                        }
                        ++(vlSymsp->__Vcoverage[13505]);
                    }
                    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_last) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d = 1U;
                        ++(vlSymsp->__Vcoverage[13506]);
                    } else {
                        ++(vlSymsp->__Vcoverage[13507]);
                    }
                    ++(vlSymsp->__Vcoverage[13508]);
                }
                ++(vlSymsp->__Vcoverage[13512]);
            } else {
                ++(vlSymsp->__Vcoverage[13515]);
            }
        } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if (((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q 
                  & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_q)) 
                 & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_rvalid))) {
                if (((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q))) 
                     < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d 
                        = (0x0000ffffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q)));
                    ++(vlSymsp->__Vcoverage[13480]);
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d = 0U;
                    ++(vlSymsp->__Vcoverage[13481]);
                }
                ++(vlSymsp->__Vcoverage[13482]);
            } else {
                ++(vlSymsp->__Vcoverage[13483]);
            }
            ++(vlSymsp->__Vcoverage[13488]);
        } else {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_k_tiles) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d 
                    = (0x0000ffffU & ((IData)(0x0010U) 
                                      + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q)));
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_d 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_q 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_q);
                ++(vlSymsp->__Vcoverage[13477]);
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d = 0U;
                ++(vlSymsp->__Vcoverage[13478]);
            }
            ++(vlSymsp->__Vcoverage[13479]);
        }
    } else if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if (((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q))) 
                     < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d 
                        = (0x0000ffffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q)));
                    ++(vlSymsp->__Vcoverage[13474]);
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d = 0U;
                    ++(vlSymsp->__Vcoverage[13475]);
                }
                ++(vlSymsp->__Vcoverage[13476]);
            } else {
                ++(vlSymsp->__Vcoverage[13515]);
            }
        } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            ++(vlSymsp->__Vcoverage[13515]);
        } else {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d = 0U;
            ++(vlSymsp->__Vcoverage[13473]);
        }
    } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_d = 0U;
            ++(vlSymsp->__Vcoverage[13453]);
        } else {
            if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q) 
                 & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_rvalid))) {
                if (((0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) 
                     < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_words_expected))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_d 
                        = (0x0000001fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q)));
                    ++(vlSymsp->__Vcoverage[13465]);
                } else {
                    ++(vlSymsp->__Vcoverage[13466]);
                }
                ++(vlSymsp->__Vcoverage[13467]);
            } else {
                ++(vlSymsp->__Vcoverage[13468]);
            }
            ++(vlSymsp->__Vcoverage[13472]);
        }
    } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        if ((((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok) 
              & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok)) 
             & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_flags_ok))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_d 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_d 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_d 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr_q;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_d 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr_q;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_d 
                = VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q), 2U);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_d 
                = VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_eff), 4U);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_d 
                = VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_eff), 2U);
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__use_dst_i8) {
                ++(vlSymsp->__Vcoverage[13456]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_15 = 4U;
            } else {
                ++(vlSymsp->__Vcoverage[13457]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_15 = 0x00000010U;
            }
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_d = 0x00000010U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_d 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_15;
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__use_dst_i8) {
                ++(vlSymsp->__Vcoverage[13454]);
            }
            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__use_dst_i8)))) {
                ++(vlSymsp->__Vcoverage[13455]);
            }
            ++(vlSymsp->__Vcoverage[13458]);
        } else {
            ++(vlSymsp->__Vcoverage[13459]);
        }
        ++(vlSymsp->__Vcoverage[13464]);
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_d = 0U;
        ++(vlSymsp->__Vcoverage[13452]);
    }
    if ((((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok) 
          & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok)) 
         & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_flags_ok))) {
        ++(vlSymsp->__Vcoverage[13460]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_flags_ok)))) {
        ++(vlSymsp->__Vcoverage[13461]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok)))) {
        ++(vlSymsp->__Vcoverage[13462]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok)))) {
        ++(vlSymsp->__Vcoverage[13463]);
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q) 
         & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_rvalid))) {
        ++(vlSymsp->__Vcoverage[13469]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_rvalid)))) {
        ++(vlSymsp->__Vcoverage[13470]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q)))) {
        ++(vlSymsp->__Vcoverage[13471]);
    }
    if (((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q 
          & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_q)) 
         & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_rvalid))) {
        ++(vlSymsp->__Vcoverage[13484]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_rvalid)))) {
        ++(vlSymsp->__Vcoverage[13485]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_q)))) {
        ++(vlSymsp->__Vcoverage[13486]);
    }
    if ((1U & (~ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q))) {
        ++(vlSymsp->__Vcoverage[13487]);
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q) 
         & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_ready))) {
        ++(vlSymsp->__Vcoverage[13496]);
    }
    if (((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q)) 
         & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_ready))) {
        ++(vlSymsp->__Vcoverage[13497]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_ready)))) {
        ++(vlSymsp->__Vcoverage[13498]);
    }
    if ((1U & ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_ready)) 
               & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q))))) {
        ++(vlSymsp->__Vcoverage[13499]);
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q) 
         & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_ready)))) {
        ++(vlSymsp->__Vcoverage[13500]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_q)))) {
        ++(vlSymsp->__Vcoverage[13510]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_q) {
        ++(vlSymsp->__Vcoverage[13511]);
    }
    ++(vlSymsp->__Vcoverage[13516]);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd_addr = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_cmd_fields = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_desc_word = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_status = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_illegal_opcode = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_shape_error = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_memory_error = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_unsupported_format = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__busy = 1U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__done = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_cmd_start = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_cmd_done = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_bias_regs = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_bias_reg = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_vec_x_reg = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_vec_y_reg = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_store_cmd = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_dma_cmd = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_raw = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_post = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_scaled = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__array_clear_acc = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__array_mac_en = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_start = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_start = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_start = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_en = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_addr = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_data = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_req = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_req = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_we = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_addr = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wdata = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wstrb = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_req = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_cmd_n = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_cmd_n = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_cmd_n = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_cmd_n = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_cmd_n = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_cmd_n = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_cmd_n = 0U;
    if ((0x00000010U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0U;
            ++(vlSymsp->__Vcoverage[13676]);
        } else if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__busy = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__done = 1U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_cmd_done = 1U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0U;
                    ++(vlSymsp->__Vcoverage[13675]);
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__busy = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__done = 1U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_cmd_done = 1U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0U;
                    ++(vlSymsp->__Vcoverage[13674]);
                }
            } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_q) {
                    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_error) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_memory_error = 1U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x17U;
                        ++(vlSymsp->__Vcoverage[13560]);
                    } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_done) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 6U;
                        ++(vlSymsp->__Vcoverage[13558]);
                    } else {
                        ++(vlSymsp->__Vcoverage[13559]);
                    }
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_d = 1U;
                    ++(vlSymsp->__Vcoverage[13561]);
                }
                ++(vlSymsp->__Vcoverage[13564]);
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 4U;
                ++(vlSymsp->__Vcoverage[13673]);
            }
        } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 4U;
                ++(vlSymsp->__Vcoverage[13672]);
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_req = 1U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_we = 1U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_addr 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_addr_q;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wdata 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_q;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wstrb 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_q;
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_ready) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                    if (((0x0000ffffU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q))) 
                         < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x0cU;
                        ++(vlSymsp->__Vcoverage[13667]);
                    } else {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x16U;
                        ++(vlSymsp->__Vcoverage[13668]);
                    }
                    ++(vlSymsp->__Vcoverage[13669]);
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 1U;
                    ++(vlSymsp->__Vcoverage[13670]);
                }
                ++(vlSymsp->__Vcoverage[13671]);
            }
        } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_store_cmd = 1U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x12U;
            ++(vlSymsp->__Vcoverage[13666]);
        } else {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
            if ((8U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
                if ((1U & ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_busy)) 
                           & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_done))))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_start = 1U;
                    ++(vlSymsp->__Vcoverage[13659]);
                } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_done) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_scaled = 1U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x11U;
                    ++(vlSymsp->__Vcoverage[13657]);
                } else {
                    ++(vlSymsp->__Vcoverage[13658]);
                }
                if ((1U & ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_busy)) 
                           & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_done))))) {
                    ++(vlSymsp->__Vcoverage[13660]);
                }
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_done) {
                    ++(vlSymsp->__Vcoverage[13661]);
                }
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_busy) {
                    ++(vlSymsp->__Vcoverage[13662]);
                }
                ++(vlSymsp->__Vcoverage[13663]);
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x11U;
                ++(vlSymsp->__Vcoverage[13664]);
            }
            ++(vlSymsp->__Vcoverage[13665]);
        }
    } else if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_post = 1U;
                    if ((8U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x10U;
                        ++(vlSymsp->__Vcoverage[13654]);
                    } else {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x11U;
                        ++(vlSymsp->__Vcoverage[13655]);
                    }
                    ++(vlSymsp->__Vcoverage[13656]);
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_raw = 1U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x0fU;
                    ++(vlSymsp->__Vcoverage[13653]);
                }
            } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_we = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_addr 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_read_addr;
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q) {
                    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_rvalid) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_vec_y_reg = 1U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x0eU;
                        ++(vlSymsp->__Vcoverage[13647]);
                    } else {
                        ++(vlSymsp->__Vcoverage[13648]);
                    }
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_req = 1U;
                    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_ready) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 1U;
                        ++(vlSymsp->__Vcoverage[13645]);
                    } else {
                        ++(vlSymsp->__Vcoverage[13646]);
                    }
                    ++(vlSymsp->__Vcoverage[13649]);
                }
                ++(vlSymsp->__Vcoverage[13652]);
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_we = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_addr 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_read_addr;
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q) {
                    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_rvalid) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_vec_x_reg = 1U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_needs_y) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x0dU;
                            ++(vlSymsp->__Vcoverage[13637]);
                        } else {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x0eU;
                            ++(vlSymsp->__Vcoverage[13638]);
                        }
                        ++(vlSymsp->__Vcoverage[13639]);
                    } else {
                        ++(vlSymsp->__Vcoverage[13640]);
                    }
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_req = 1U;
                    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_ready) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 1U;
                        ++(vlSymsp->__Vcoverage[13635]);
                    } else {
                        ++(vlSymsp->__Vcoverage[13636]);
                    }
                    ++(vlSymsp->__Vcoverage[13641]);
                }
                ++(vlSymsp->__Vcoverage[13644]);
            }
        } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__use_dst_i8) {
                    ++(vlSymsp->__Vcoverage[13621]);
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_17 = 3U;
                } else {
                    ++(vlSymsp->__Vcoverage[13622]);
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_17 = 2U;
                }
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_cmd_n 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_store_base_addr;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_cmd_n 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_cmd_n 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_cmd_n 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_eff;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_cmd_n = 2U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_cmd_n = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_cmd_n 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_17;
                if ((1U & ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                           & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q))))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_dma_cmd = 1U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 1U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
                    ++(vlSymsp->__Vcoverage[13630]);
                } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_start = 1U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 1U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
                    ++(vlSymsp->__Vcoverage[13629]);
                } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_error) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_memory_error = 1U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x17U;
                    ++(vlSymsp->__Vcoverage[13628]);
                } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_done) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_n_tiles) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x13U;
                        ++(vlSymsp->__Vcoverage[13625]);
                    } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_m_tiles) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x14U;
                        ++(vlSymsp->__Vcoverage[13623]);
                    } else {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x16U;
                        ++(vlSymsp->__Vcoverage[13624]);
                    }
                    ++(vlSymsp->__Vcoverage[13626]);
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
                    ++(vlSymsp->__Vcoverage[13627]);
                }
                ++(vlSymsp->__Vcoverage[13634]);
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                if ((1U & ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_busy)) 
                           & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_done))))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_start = 1U;
                    ++(vlSymsp->__Vcoverage[13605]);
                } else {
                    ++(vlSymsp->__Vcoverage[13606]);
                }
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_valid) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_en = 1U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_addr 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_index;
                    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__use_dst_i8) {
                        ++(vlSymsp->__Vcoverage[13612]);
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_16 
                            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i8;
                    } else {
                        ++(vlSymsp->__Vcoverage[13613]);
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_16 
                            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i32;
                    }
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_data 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_16;
                    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__use_dst_i8) {
                        ++(vlSymsp->__Vcoverage[13610]);
                    }
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__use_dst_i8)))) {
                        ++(vlSymsp->__Vcoverage[13611]);
                    }
                    ++(vlSymsp->__Vcoverage[13614]);
                } else {
                    ++(vlSymsp->__Vcoverage[13615]);
                }
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_done) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x0bU;
                    ++(vlSymsp->__Vcoverage[13616]);
                } else {
                    ++(vlSymsp->__Vcoverage[13617]);
                }
                ++(vlSymsp->__Vcoverage[13618]);
            }
        } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
            if ((1U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)) {
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_q) {
                    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_rvalid) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_bias_reg = 1U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                        if (((0x0000ffffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q))) 
                             >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n))) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x0aU;
                            ++(vlSymsp->__Vcoverage[13594]);
                        } else {
                            ++(vlSymsp->__Vcoverage[13595]);
                        }
                        ++(vlSymsp->__Vcoverage[13596]);
                    } else {
                        ++(vlSymsp->__Vcoverage[13597]);
                    }
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_req = 1U;
                    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_ready) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 1U;
                        ++(vlSymsp->__Vcoverage[13592]);
                    } else {
                        ++(vlSymsp->__Vcoverage[13593]);
                    }
                    ++(vlSymsp->__Vcoverage[13598]);
                }
                if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_q)))) {
                    ++(vlSymsp->__Vcoverage[13599]);
                }
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_q) {
                    ++(vlSymsp->__Vcoverage[13600]);
                }
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x0aU;
                ++(vlSymsp->__Vcoverage[13601]);
            }
            ++(vlSymsp->__Vcoverage[13604]);
        } else {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_k_tiles) {
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_conv_opcode) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x15U;
                    ++(vlSymsp->__Vcoverage[13586]);
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 5U;
                    ++(vlSymsp->__Vcoverage[13587]);
                }
                ++(vlSymsp->__Vcoverage[13590]);
            } else if ((1U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 9U;
                ++(vlSymsp->__Vcoverage[13588]);
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x0aU;
                ++(vlSymsp->__Vcoverage[13589]);
            }
            ++(vlSymsp->__Vcoverage[13591]);
        }
    } else if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__array_mac_en = 1U;
                if (((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q))) 
                     >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 8U;
                    ++(vlSymsp->__Vcoverage[13583]);
                } else {
                    ++(vlSymsp->__Vcoverage[13584]);
                }
                ++(vlSymsp->__Vcoverage[13585]);
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_cmd_n = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_cmd_n 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_q 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_q);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_cmd_n 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_cmd_n 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_cmd_n 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_eff;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_cmd_n = 1U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_cmd_n = 0U;
                if ((1U & ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                           & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q))))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_dma_cmd = 1U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 1U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
                    ++(vlSymsp->__Vcoverage[13578]);
                } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_start = 1U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 1U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
                    ++(vlSymsp->__Vcoverage[13577]);
                } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_error) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_memory_error = 1U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x17U;
                    ++(vlSymsp->__Vcoverage[13576]);
                } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_done) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 7U;
                    ++(vlSymsp->__Vcoverage[13574]);
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
                    ++(vlSymsp->__Vcoverage[13575]);
                }
                ++(vlSymsp->__Vcoverage[13582]);
            }
        } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_cmd_n = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_cmd_n 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_q 
                   + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q));
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_cmd_n 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_cmd_n 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_cmd_n 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_cmd_n = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_cmd_n = 0U;
            if ((1U & ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                       & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q))))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_dma_cmd = 1U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 1U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
                ++(vlSymsp->__Vcoverage[13569]);
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_start = 1U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 1U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
                ++(vlSymsp->__Vcoverage[13568]);
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_error) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_memory_error = 1U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x17U;
                ++(vlSymsp->__Vcoverage[13567]);
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_done) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 6U;
                ++(vlSymsp->__Vcoverage[13565]);
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
                ++(vlSymsp->__Vcoverage[13566]);
            }
            ++(vlSymsp->__Vcoverage[13573]);
        } else {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_bias_regs = 1U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__array_clear_acc = 1U;
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_conv_opcode) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x15U;
                ++(vlSymsp->__Vcoverage[13555]);
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 5U;
                ++(vlSymsp->__Vcoverage[13556]);
            }
            ++(vlSymsp->__Vcoverage[13557]);
        }
    } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x0cU;
                ++(vlSymsp->__Vcoverage[13552]);
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 4U;
                ++(vlSymsp->__Vcoverage[13553]);
            }
            ++(vlSymsp->__Vcoverage[13554]);
        } else {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q) {
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_rvalid) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_desc_word = 1U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
                    if (((0x0000001fU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) 
                         >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_words_expected))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 1U;
                        ++(vlSymsp->__Vcoverage[13533]);
                    } else {
                        ++(vlSymsp->__Vcoverage[13534]);
                    }
                    ++(vlSymsp->__Vcoverage[13535]);
                } else {
                    ++(vlSymsp->__Vcoverage[13536]);
                }
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_req = 1U;
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_ready) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 1U;
                    ++(vlSymsp->__Vcoverage[13531]);
                } else {
                    ++(vlSymsp->__Vcoverage[13532]);
                }
                ++(vlSymsp->__Vcoverage[13537]);
            }
            ++(vlSymsp->__Vcoverage[13540]);
        }
    } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok) {
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_flags_ok) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 3U;
                    ++(vlSymsp->__Vcoverage[13542]);
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_unsupported_format = 1U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x17U;
                    ++(vlSymsp->__Vcoverage[13541]);
                }
                if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_flags_ok)))) {
                    ++(vlSymsp->__Vcoverage[13543]);
                }
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_flags_ok) {
                    ++(vlSymsp->__Vcoverage[13544]);
                }
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_shape_error = 1U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x17U;
                ++(vlSymsp->__Vcoverage[13545]);
            }
            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok)))) {
                ++(vlSymsp->__Vcoverage[13546]);
            }
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok) {
                ++(vlSymsp->__Vcoverage[13547]);
            }
        } else {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_illegal_opcode = 1U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x17U;
            ++(vlSymsp->__Vcoverage[13548]);
        }
        ++(vlSymsp->__Vcoverage[13551]);
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__busy = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_status 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__start;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__start) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd_addr = 1U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_cmd_start = 1U;
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__start_direct_mode) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd = 1U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 1U;
                ++(vlSymsp->__Vcoverage[13526]);
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_cmd_fields = 1U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 2U;
                ++(vlSymsp->__Vcoverage[13527]);
            }
            ++(vlSymsp->__Vcoverage[13528]);
        } else {
            ++(vlSymsp->__Vcoverage[13529]);
        }
        ++(vlSymsp->__Vcoverage[13530]);
    }
    if ((((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
          & (0x16U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) 
         & (0x17U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
        ++(vlSymsp->__Vcoverage[13517]);
    }
    if ((0x17U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        ++(vlSymsp->__Vcoverage[13518]);
    }
    if ((0x16U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        ++(vlSymsp->__Vcoverage[13519]);
    }
    if ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        ++(vlSymsp->__Vcoverage[13520]);
    }
    if ((0x10U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        ++(vlSymsp->__Vcoverage[13521]);
    }
    if ((0x0fU == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        ++(vlSymsp->__Vcoverage[13522]);
    }
    if ((0x0eU == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        ++(vlSymsp->__Vcoverage[13523]);
    }
    if ((7U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        ++(vlSymsp->__Vcoverage[13524]);
    }
    if (((((7U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
           & (0x0eU != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) 
          & (0x0fU != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) 
         & (0x10U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
        ++(vlSymsp->__Vcoverage[13525]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q)))) {
        ++(vlSymsp->__Vcoverage[13538]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q) {
        ++(vlSymsp->__Vcoverage[13539]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok)))) {
        ++(vlSymsp->__Vcoverage[13549]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok) {
        ++(vlSymsp->__Vcoverage[13550]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_q)))) {
        ++(vlSymsp->__Vcoverage[13562]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_q) {
        ++(vlSymsp->__Vcoverage[13563]);
    }
    if ((1U & ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
               & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q))))) {
        ++(vlSymsp->__Vcoverage[13570]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q) {
        ++(vlSymsp->__Vcoverage[13571]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) {
        ++(vlSymsp->__Vcoverage[13572]);
    }
    if ((1U & ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
               & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q))))) {
        ++(vlSymsp->__Vcoverage[13579]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q) {
        ++(vlSymsp->__Vcoverage[13580]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) {
        ++(vlSymsp->__Vcoverage[13581]);
    }
    if ((1U & (~ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q))) {
        ++(vlSymsp->__Vcoverage[13602]);
    }
    if ((1U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)) {
        ++(vlSymsp->__Vcoverage[13603]);
    }
    if ((1U & ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_busy)) 
               & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_done))))) {
        ++(vlSymsp->__Vcoverage[13607]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_done) {
        ++(vlSymsp->__Vcoverage[13608]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_busy) {
        ++(vlSymsp->__Vcoverage[13609]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__use_dst_i8) {
        ++(vlSymsp->__Vcoverage[13619]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__use_dst_i8)))) {
        ++(vlSymsp->__Vcoverage[13620]);
    }
    if ((1U & ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
               & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q))))) {
        ++(vlSymsp->__Vcoverage[13631]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q) {
        ++(vlSymsp->__Vcoverage[13632]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) {
        ++(vlSymsp->__Vcoverage[13633]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q)))) {
        ++(vlSymsp->__Vcoverage[13642]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q) {
        ++(vlSymsp->__Vcoverage[13643]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q)))) {
        ++(vlSymsp->__Vcoverage[13650]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q) {
        ++(vlSymsp->__Vcoverage[13651]);
    }
    ++(vlSymsp->__Vcoverage[13677]);
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_req_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__conv_req_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 14646, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_req_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__conv_req_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__conv_req_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_req_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__m0_d))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 5913, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__m0_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__m0_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__n0_d))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 5977, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__n0_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__n0_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__k0_d))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 6041, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__k0_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__k0_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__kk_d))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 6105, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__kk_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__kk_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__store_row_d))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 6169, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__store_row_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__store_row_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__store_col_d))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 6233, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__store_col_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__store_col_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_col_d))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 6297, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_col_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_col_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_idx_d))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 6361, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_idx_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_idx_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_word_idx_d))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 6403, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_word_idx_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_word_idx_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__store_stage_done_d))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 6415, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__store_stage_done_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__store_stage_done_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_d 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src0_row_base_d)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 10389, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src0_row_base_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src0_row_base_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_d;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_d 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src1_k_base_d)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 10517, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src1_k_base_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src1_k_base_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_d;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_d 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src1_n_offset_d)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 10645, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src1_n_offset_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src1_n_offset_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_d;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_d 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_row_base_d)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 10773, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_row_base_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_row_base_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_d;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_d 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_n_offset_d)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 10901, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_n_offset_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_n_offset_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_d;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_d 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_base_d)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 11029, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_base_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_base_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_d;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_d 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src0_m_step_d)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 11157, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src0_m_step_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src0_m_step_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_d;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_d 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride1_k_step_d)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 11285, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride1_k_step_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride1_k_step_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_d;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_d 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_m_step_d)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 11413, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_m_step_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_m_step_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_d;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_d 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_n_step_d)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 11541, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_n_step_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_n_step_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_d;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_d 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_n_step_d)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 11669, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_n_step_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_n_step_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_out_y_d))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 6465, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_out_y_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_out_y_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_out_x_d))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 6529, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_out_x_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_out_x_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_kh_d))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 6569, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_kh_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_kh_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_kw_d))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 6585, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_kw_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_kw_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_ic_d))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 6625, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_ic_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_ic_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__state_d))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 4943, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__state_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__state_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__latch_cmd))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10193, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__latch_cmd);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__latch_cmd 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd_addr) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__latch_cmd_addr))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10195, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__latch_cmd_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__latch_cmd_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd_addr;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_cmd_fields) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__clear_cmd_fields))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10197, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_cmd_fields, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__clear_cmd_fields);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__clear_cmd_fields 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_cmd_fields;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_desc_word) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__load_desc_word))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10199, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_desc_word, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__load_desc_word);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__load_desc_word 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_desc_word;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_status) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__clear_status))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10205, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_status, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__clear_status);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__clear_status 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_status;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_illegal_opcode) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__set_illegal_opcode))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10207, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_illegal_opcode, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__set_illegal_opcode);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__set_illegal_opcode 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_illegal_opcode;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_shape_error) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__set_shape_error))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10209, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_shape_error, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__set_shape_error);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__set_shape_error 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_shape_error;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_memory_error) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__set_memory_error))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10211, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_memory_error, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__set_memory_error);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__set_memory_error 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_memory_error;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_unsupported_format) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__set_unsupported_format))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10213, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_unsupported_format, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__set_unsupported_format);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__set_unsupported_format 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_unsupported_format;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_inflight_d))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 6419, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_inflight_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_inflight_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_inflight_d))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 6423, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_inflight_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_inflight_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_inflight_d))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 6427, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_inflight_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_inflight_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_inflight_d))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 6431, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_inflight_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_inflight_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_inflight_d))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9831, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_inflight_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_inflight_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_launch_pending_d))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9631, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_launch_pending_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_launch_pending_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_bias_regs) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__clear_bias_regs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10231, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_bias_regs, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__clear_bias_regs);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__clear_bias_regs 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_bias_regs;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_bias_reg) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__load_bias_reg))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10233, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_bias_reg, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__load_bias_reg);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__load_bias_reg 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_bias_reg;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_vec_x_reg) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__load_vec_x_reg))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10235, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_vec_x_reg, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__load_vec_x_reg);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__load_vec_x_reg 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_vec_x_reg;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_vec_y_reg) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__load_vec_y_reg))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10237, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_vec_y_reg, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__load_vec_y_reg);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__load_vec_y_reg 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_vec_y_reg;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_store_cmd) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__latch_vec_store_cmd))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10201, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_store_cmd, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__latch_vec_store_cmd);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__latch_vec_store_cmd 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_store_cmd;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_dma_cmd) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__latch_dma_cmd))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10203, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_dma_cmd, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__latch_dma_cmd);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__latch_dma_cmd 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_dma_cmd;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_raw) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__latch_vec_raw))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10247, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_raw, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__latch_vec_raw);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__latch_vec_raw 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_raw;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_post) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__latch_vec_post))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10249, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_post, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__latch_vec_post);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__latch_vec_post 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_post;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_scaled) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__latch_vec_scaled))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10251, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_scaled, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__latch_vec_scaled);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__latch_vec_scaled 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_scaled;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_cmd_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_op_kind_cmd_n))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 12501, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_cmd_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_op_kind_cmd_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_op_kind_cmd_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_cmd_n;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_cmd_n 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_base_addr_cmd_n)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 12505, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_cmd_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_base_addr_cmd_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_base_addr_cmd_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_cmd_n;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_cmd_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_rows_cmd_n))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 12569, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_cmd_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_rows_cmd_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_rows_cmd_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_cmd_n;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_cmd_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_cols_cmd_n))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 12601, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_cmd_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_cols_cmd_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_cols_cmd_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_cmd_n;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_cmd_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_stride_bytes_cmd_n))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 12633, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_cmd_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_stride_bytes_cmd_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_stride_bytes_cmd_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_cmd_n;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_cmd_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_spm_region_cmd_n))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 12665, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_cmd_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_spm_region_cmd_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_spm_region_cmd_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_cmd_n;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_cmd_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_spm_base_cmd_n))) {
        VL_COV_TOGGLE_CHG_ST_I(9, vlSymsp->__Vcoverage + 12669, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_cmd_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_spm_base_cmd_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_spm_base_cmd_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_cmd_n;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_start) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 7479, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_start, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_start);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_start 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_start;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__start 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_start;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__c_wr_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 7317, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__c_wr_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__c_wr_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_en;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_wr_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_en;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_addr) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__c_wr_addr))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 7319, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__c_wr_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__c_wr_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_addr;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_wr_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_addr;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_data 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__c_wr_data)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 7335, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_data, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__c_wr_data);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__c_wr_data 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_data;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_wr_data 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_data;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__done) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 4705, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__done, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__done);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__done 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__done;
    }
    vlSelfRef.tinygpu_top__DOT__ctrl_done = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__done;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_cmd_start) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__cnt_cmd_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 4715, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_cmd_start, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__cnt_cmd_start);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__cnt_cmd_start 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_cmd_start;
    }
    vlSelfRef.tinygpu_top__DOT__cnt_cmd_start = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_cmd_start;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_cmd_done) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__cnt_cmd_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 4717, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_cmd_done, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__cnt_cmd_done);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__cnt_cmd_done 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_cmd_done;
    }
    vlSelfRef.tinygpu_top__DOT__cnt_cmd_done = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_cmd_done;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__cnt_stall))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 4723, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__cnt_stall);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__cnt_stall 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall;
    }
    vlSelfRef.tinygpu_top__DOT__cnt_stall = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_start) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mul_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 8793, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_start, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mul_start);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mul_start 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_start;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_start 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_start) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_start));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_req) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_mem_req))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9209, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_req, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_mem_req);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_mem_req 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_req;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_req_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_req;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_req) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mem_req))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9349, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_req, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mem_req);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mem_req 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_req;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_req_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_req;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_addr 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mem_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 9353, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mem_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mem_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_addr;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_addr_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_addr;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_req) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_mem_req))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9489, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_req, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_mem_req);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_mem_req 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_req;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_req_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_req;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wdata 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mem_wdata)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 9417, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wdata, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mem_wdata);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mem_wdata 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wdata;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_wdata_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wdata;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wstrb) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mem_wstrb))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 9481, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wstrb, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mem_wstrb);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mem_wstrb 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wstrb;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_wstrb_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wstrb;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_we) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mem_we))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9351, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_we, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mem_we);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mem_we 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_we;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_we_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_we;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__busy) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__busy))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 4703, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__busy, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__busy);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__busy 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__busy;
    }
    vlSelfRef.tinygpu_top__DOT__ctrl_busy = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__busy;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__array_clear_acc) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__array_clear_acc))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 7153, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__array_clear_acc, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__array_clear_acc);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__array_clear_acc 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__array_clear_acc;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__array_clear_acc;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__array_mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__array_mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 7155, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__array_mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__array_mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__array_mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__array_mac_en;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__array_mac_en;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_start) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9061, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_start, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_start);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_start 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_start;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__start 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_start;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__start) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 22143, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__start, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__start);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__start 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__start;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_wr_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__c_wr_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 14131, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_wr_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__c_wr_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__c_wr_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_wr_en;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_wr_addr) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__c_wr_addr))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 14133, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_wr_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__c_wr_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__c_wr_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_wr_addr;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_wr_data 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__c_wr_data)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 14149, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_wr_data, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__c_wr_data);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__c_wr_data 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_wr_data;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__ctrl_done) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__ctrl_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1346, vlSelfRef.tinygpu_top__DOT__ctrl_done, vlSelfRef.tinygpu_top__DOT____Vtogcov__ctrl_done);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__ctrl_done 
            = vlSelfRef.tinygpu_top__DOT__ctrl_done;
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_done_i 
        = vlSelfRef.tinygpu_top__DOT__ctrl_done;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__cnt_cmd_start) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__cnt_cmd_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1356, vlSelfRef.tinygpu_top__DOT__cnt_cmd_start, vlSelfRef.tinygpu_top__DOT____Vtogcov__cnt_cmd_start);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__cnt_cmd_start 
            = vlSelfRef.tinygpu_top__DOT__cnt_cmd_start;
    }
    vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cmd_start_i 
        = vlSelfRef.tinygpu_top__DOT__cnt_cmd_start;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__cnt_cmd_done) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__cnt_cmd_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1358, vlSelfRef.tinygpu_top__DOT__cnt_cmd_done, vlSelfRef.tinygpu_top__DOT____Vtogcov__cnt_cmd_done);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__cnt_cmd_done 
            = vlSelfRef.tinygpu_top__DOT__cnt_cmd_done;
    }
    vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cmd_done_i 
        = vlSelfRef.tinygpu_top__DOT__cnt_cmd_done;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__cnt_stall) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__cnt_stall))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1364, vlSelfRef.tinygpu_top__DOT__cnt_stall, vlSelfRef.tinygpu_top__DOT____Vtogcov__cnt_stall);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__cnt_stall 
            = vlSelfRef.tinygpu_top__DOT__cnt_stall;
    }
    vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_i 
        = vlSelfRef.tinygpu_top__DOT__cnt_stall;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_start) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shared_mul_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 8863, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_start, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shared_mul_start);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shared_mul_start 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_start;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__start 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_start;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_req_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__bias_req_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 14852, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_req_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__bias_req_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__bias_req_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_req_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_req_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__vec_req_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 14712, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_req_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__vec_req_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__vec_req_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_req_i;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_addr_i 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__vec_addr_i)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 14716, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_addr_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__vec_addr_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__vec_addr_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_addr_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_req_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__desc_req_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 14506, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_req_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__desc_req_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__desc_req_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_req_i;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_wdata_i 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__vec_wdata_i)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 14780, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_wdata_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__vec_wdata_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__vec_wdata_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_wdata_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_wstrb_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__vec_wstrb_i))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 14844, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_wstrb_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__vec_wstrb_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__vec_wstrb_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_wstrb_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_we_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__vec_we_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 14714, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_we_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__vec_we_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__vec_we_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_we_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__ctrl_busy) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__ctrl_busy))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1344, vlSelfRef.tinygpu_top__DOT__ctrl_busy, vlSelfRef.tinygpu_top__DOT____Vtogcov__ctrl_busy);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__ctrl_busy 
            = vlSelfRef.tinygpu_top__DOT__ctrl_busy;
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_busy_i 
        = vlSelfRef.tinygpu_top__DOT__ctrl_busy;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__clear_acc))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 18647, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__clear_acc);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__clear_acc 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__clear_acc;
    }
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 18649, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__start) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 17034, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__start, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__start);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__start 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__start;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__busy = 1U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__advance_elem = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_req = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_we = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_addr = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wdata = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wstrb = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wr_en = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_o 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wdata = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wstrb = 0U;
    if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__busy = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d = 0U;
                ++(vlSymsp->__Vcoverage[18463]);
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__busy = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d = 0U;
                ++(vlSymsp->__Vcoverage[18462]);
            }
        } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_req = 1U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_we = 1U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_addr 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__aligned_write_addr;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_o 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_q;
            if ((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wdata 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__store_word_q;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wstrb = 0x0fU;
                ++(vlSymsp->__Vcoverage[18455]);
            } else {
                if ((0U == (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wdata 
                        = (0x000000ffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__store_word_q);
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wstrb = 1U;
                    ++(vlSymsp->__Vcoverage[18451]);
                } else if ((1U == (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wdata 
                        = (0x0000ff00U & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__store_word_q 
                                          << 8U));
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wstrb = 2U;
                    ++(vlSymsp->__Vcoverage[18452]);
                } else if ((2U == (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wdata 
                        = (0x00ff0000U & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__store_word_q 
                                          << 0x00000010U));
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wstrb = 4U;
                    ++(vlSymsp->__Vcoverage[18453]);
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wdata 
                        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__store_word_q 
                           << 0x00000018U);
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wstrb = 8U;
                    ++(vlSymsp->__Vcoverage[18454]);
                }
                ++(vlSymsp->__Vcoverage[18456]);
            }
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_ready) {
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__last_elem) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d = 6U;
                    ++(vlSymsp->__Vcoverage[18457]);
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__advance_elem = 1U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d = 4U;
                    ++(vlSymsp->__Vcoverage[18458]);
                }
                ++(vlSymsp->__Vcoverage[18459]);
            } else {
                ++(vlSymsp->__Vcoverage[18460]);
            }
            ++(vlSymsp->__Vcoverage[18461]);
        } else {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_o 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_q;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d = 5U;
            ++(vlSymsp->__Vcoverage[18450]);
        }
    } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wr_en = 1U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_o 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_q;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wdata 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__load_byte;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wstrb = 1U;
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__last_elem) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d = 6U;
                ++(vlSymsp->__Vcoverage[18447]);
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__advance_elem = 1U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d = 1U;
                ++(vlSymsp->__Vcoverage[18448]);
            }
            ++(vlSymsp->__Vcoverage[18449]);
        } else {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rvalid) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d = 3U;
                ++(vlSymsp->__Vcoverage[18444]);
            } else {
                ++(vlSymsp->__Vcoverage[18445]);
            }
            ++(vlSymsp->__Vcoverage[18446]);
        }
    } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_req = 1U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_we = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__aligned_read_addr;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_ready) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d = 2U;
            ++(vlSymsp->__Vcoverage[18441]);
        } else {
            ++(vlSymsp->__Vcoverage[18442]);
        }
        ++(vlSymsp->__Vcoverage[18443]);
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__busy = 0U;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__start) {
            if (((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows)) 
                 | (0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols)))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d = 6U;
                ++(vlSymsp->__Vcoverage[18434]);
            } else if ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d = 1U;
                ++(vlSymsp->__Vcoverage[18433]);
            } else {
                if (((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind)) 
                     | (3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind)))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d = 4U;
                    ++(vlSymsp->__Vcoverage[18428]);
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d = 7U;
                    ++(vlSymsp->__Vcoverage[18429]);
                }
                if ((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind))) {
                    ++(vlSymsp->__Vcoverage[18430]);
                }
                if ((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind))) {
                    ++(vlSymsp->__Vcoverage[18431]);
                }
                if (((2U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind)) 
                     & (3U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind)))) {
                    ++(vlSymsp->__Vcoverage[18432]);
                }
            }
            if ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols))) {
                ++(vlSymsp->__Vcoverage[18435]);
            }
            if ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows))) {
                ++(vlSymsp->__Vcoverage[18436]);
            }
            if (((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows)) 
                 & (0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols)))) {
                ++(vlSymsp->__Vcoverage[18437]);
            }
            ++(vlSymsp->__Vcoverage[18438]);
        } else {
            ++(vlSymsp->__Vcoverage[18439]);
        }
        ++(vlSymsp->__Vcoverage[18440]);
    }
    ++(vlSymsp->__Vcoverage[18465]);
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_done_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__cmd_done_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2208, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_done_i, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__cmd_done_i);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__cmd_done_i 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_done_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cmd_start_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__cmd_start_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 24021, vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cmd_start_i, vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__cmd_start_i);
        vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__cmd_start_i 
            = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cmd_start_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cmd_done_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__cmd_done_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 24023, vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cmd_done_i, vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__cmd_done_i);
        vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__cmd_done_i 
            = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cmd_done_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__stall_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 24029, vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_i, vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__stall_i);
        vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__stall_i 
            = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__start) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 23808, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__start, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__start);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__start 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__start;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_busy_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__cmd_busy_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2206, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_busy_i, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__cmd_busy_i);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__cmd_busy_i 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_busy_i;
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
    if ((0x00000080U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
        ++(vlSymsp->__Vcoverage[3777]);
    } else if ((0x00000040U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
        if ((0x00000020U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
            if ((0x00000010U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                ++(vlSymsp->__Vcoverage[3777]);
            } else if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                ++(vlSymsp->__Vcoverage[3777]);
            } else if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                    ++(vlSymsp->__Vcoverage[3777]);
                } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                    ++(vlSymsp->__Vcoverage[3777]);
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0x011f1044U;
                    ++(vlSymsp->__Vcoverage[3776]);
                }
            } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                ++(vlSymsp->__Vcoverage[3777]);
            } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                ++(vlSymsp->__Vcoverage[3777]);
            } else {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata 
                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_cfg_o;
                ++(vlSymsp->__Vcoverage[3775]);
            }
        } else if ((0x00000010U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
            if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                    if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                        ++(vlSymsp->__Vcoverage[3777]);
                    } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                        ++(vlSymsp->__Vcoverage[3777]);
                    } else {
                        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata 
                            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_channels_o;
                        ++(vlSymsp->__Vcoverage[3774]);
                    }
                } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                    ++(vlSymsp->__Vcoverage[3777]);
                } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                    ++(vlSymsp->__Vcoverage[3777]);
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata 
                        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_in_hw_o;
                    ++(vlSymsp->__Vcoverage[3773]);
                }
            } else if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                    ++(vlSymsp->__Vcoverage[3777]);
                } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                    ++(vlSymsp->__Vcoverage[3777]);
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata 
                        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_q;
                    ++(vlSymsp->__Vcoverage[3772]);
                }
            } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                ++(vlSymsp->__Vcoverage[3777]);
            } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                ++(vlSymsp->__Vcoverage[3777]);
            } else {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata 
                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_count_i;
                ++(vlSymsp->__Vcoverage[3771]);
            }
        } else if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
            if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                    ++(vlSymsp->__Vcoverage[3777]);
                } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                    ++(vlSymsp->__Vcoverage[3777]);
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata 
                        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stall_count_i;
                    ++(vlSymsp->__Vcoverage[3770]);
                }
            } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                ++(vlSymsp->__Vcoverage[3777]);
            } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                ++(vlSymsp->__Vcoverage[3777]);
            } else {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata 
                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__active_count_i;
                ++(vlSymsp->__Vcoverage[3769]);
            }
        } else if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
            if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                ++(vlSymsp->__Vcoverage[3777]);
            } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                ++(vlSymsp->__Vcoverage[3777]);
            } else {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata 
                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cycle_count_i;
                ++(vlSymsp->__Vcoverage[3768]);
            }
        } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
            ++(vlSymsp->__Vcoverage[3777]);
        } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
            ++(vlSymsp->__Vcoverage[3777]);
        } else {
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata 
                = (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shift_o) 
                    << 0x00000010U) | (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__zero_point_o));
            ++(vlSymsp->__Vcoverage[3767]);
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
        if ((0x00000010U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
            if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                    if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                        ++(vlSymsp->__Vcoverage[3777]);
                    } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                        ++(vlSymsp->__Vcoverage[3777]);
                    } else {
                        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata 
                            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__scale_o;
                        ++(vlSymsp->__Vcoverage[3766]);
                    }
                } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                    ++(vlSymsp->__Vcoverage[3777]);
                } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                    ++(vlSymsp->__Vcoverage[3777]);
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata 
                        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__flags_o;
                    ++(vlSymsp->__Vcoverage[3765]);
                }
            } else if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                    ++(vlSymsp->__Vcoverage[3777]);
                } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                    ++(vlSymsp->__Vcoverage[3777]);
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata 
                        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride_dst_o;
                    ++(vlSymsp->__Vcoverage[3764]);
                }
            } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                ++(vlSymsp->__Vcoverage[3777]);
            } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                ++(vlSymsp->__Vcoverage[3777]);
            } else {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata 
                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride1_o;
                ++(vlSymsp->__Vcoverage[3763]);
            }
        } else if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
            if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                    ++(vlSymsp->__Vcoverage[3777]);
                } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                    ++(vlSymsp->__Vcoverage[3777]);
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata 
                        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride0_o;
                    ++(vlSymsp->__Vcoverage[3762]);
                }
            } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                ++(vlSymsp->__Vcoverage[3777]);
            } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                ++(vlSymsp->__Vcoverage[3777]);
            } else {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata 
                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_k_o;
                ++(vlSymsp->__Vcoverage[3761]);
            }
        } else if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
            if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                ++(vlSymsp->__Vcoverage[3777]);
            } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                ++(vlSymsp->__Vcoverage[3777]);
            } else {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata 
                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_n_o;
                ++(vlSymsp->__Vcoverage[3760]);
            }
        } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
            ++(vlSymsp->__Vcoverage[3777]);
        } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
            ++(vlSymsp->__Vcoverage[3777]);
        } else {
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata 
                = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_m_o;
            ++(vlSymsp->__Vcoverage[3759]);
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
        if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
            if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                    ++(vlSymsp->__Vcoverage[3777]);
                } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                    ++(vlSymsp->__Vcoverage[3777]);
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata 
                        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dst_addr_o;
                    ++(vlSymsp->__Vcoverage[3758]);
                }
            } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                ++(vlSymsp->__Vcoverage[3777]);
            } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                ++(vlSymsp->__Vcoverage[3777]);
            } else {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata 
                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__bias_addr_o;
                ++(vlSymsp->__Vcoverage[3757]);
            }
        } else if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
            if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                ++(vlSymsp->__Vcoverage[3777]);
            } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                ++(vlSymsp->__Vcoverage[3777]);
            } else {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata 
                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src1_addr_o;
                ++(vlSymsp->__Vcoverage[3756]);
            }
        } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
            ++(vlSymsp->__Vcoverage[3777]);
        } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
            ++(vlSymsp->__Vcoverage[3777]);
        } else {
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata 
                = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src0_addr_o;
            ++(vlSymsp->__Vcoverage[3755]);
        }
    } else if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
        if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
            if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                ++(vlSymsp->__Vcoverage[3777]);
            } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
                ++(vlSymsp->__Vcoverage[3777]);
            } else {
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata 
                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__opcode_o;
                ++(vlSymsp->__Vcoverage[3754]);
            }
        } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
            ++(vlSymsp->__Vcoverage[3777]);
        } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
            ++(vlSymsp->__Vcoverage[3777]);
        } else {
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata 
                = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_addr_o;
            ++(vlSymsp->__Vcoverage[3753]);
        }
    } else if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
        if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
            ++(vlSymsp->__Vcoverage[3777]);
        } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
            ++(vlSymsp->__Vcoverage[3777]);
        } else {
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata 
                = (((((2U & ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_busy_i)) 
                             << 1U)) | (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__unsupported_fmt_i)) 
                     << 5U) | (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__memory_error_i) 
                                << 4U) | ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shape_error_i) 
                                          << 3U))) 
                   | (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__illegal_opcode_i) 
                       << 2U) | (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__done_sticky_q) 
                                  << 1U) | (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_busy_i))));
            ++(vlSymsp->__Vcoverage[3752]);
        }
    } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
        ++(vlSymsp->__Vcoverage[3777]);
    } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata = 0U;
        ++(vlSymsp->__Vcoverage[3777]);
    } else {
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata 
            = (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_mode_o) 
                << 3U) | ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_enable_o) 
                          << 2U));
        ++(vlSymsp->__Vcoverage[3749]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_busy_i)))) {
        ++(vlSymsp->__Vcoverage[3750]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_busy_i) {
        ++(vlSymsp->__Vcoverage[3751]);
    }
    ++(vlSymsp->__Vcoverage[3778]);
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clear_acc) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__clear_acc))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 18831, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clear_acc, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__clear_acc);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__clear_acc 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clear_acc;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clear_acc) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__clear_acc))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 19038, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clear_acc, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__clear_acc);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__clear_acc 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clear_acc;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clear_acc) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__clear_acc))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 19245, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clear_acc, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__clear_acc);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__clear_acc 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clear_acc;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clear_acc) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__clear_acc))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 19452, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clear_acc, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__clear_acc);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__clear_acc 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clear_acc;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clear_acc) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__clear_acc))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 19659, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clear_acc, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__clear_acc);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__clear_acc 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clear_acc;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clear_acc) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__clear_acc))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 19866, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clear_acc, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__clear_acc);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__clear_acc 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clear_acc;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clear_acc) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__clear_acc))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 20073, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clear_acc, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__clear_acc);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__clear_acc 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clear_acc;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clear_acc) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__clear_acc))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 20280, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clear_acc, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__clear_acc);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__clear_acc 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clear_acc;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clear_acc) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__clear_acc))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 20487, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clear_acc, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__clear_acc);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__clear_acc 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clear_acc;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clear_acc) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__clear_acc))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 20694, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clear_acc, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__clear_acc);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__clear_acc 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clear_acc;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clear_acc) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__clear_acc))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 20901, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clear_acc, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__clear_acc);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__clear_acc 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clear_acc;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clear_acc) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__clear_acc))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 21108, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clear_acc, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__clear_acc);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__clear_acc 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clear_acc;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clear_acc) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__clear_acc))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 21315, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clear_acc, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__clear_acc);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__clear_acc 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clear_acc;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clear_acc) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__clear_acc))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 21522, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clear_acc, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__clear_acc);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__clear_acc 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clear_acc;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clear_acc) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__clear_acc))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 21729, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clear_acc, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__clear_acc);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__clear_acc 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clear_acc;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clear_acc) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__clear_acc))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 21936, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clear_acc, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__clear_acc);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__clear_acc 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clear_acc;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__state_d))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 17602, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__state_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__state_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__busy) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__busy))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 17036, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__busy, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__busy);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__busy 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__busy;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_busy_status 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__busy;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wr_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_wr_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 17436, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wr_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_wr_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_wr_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wr_en;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wr_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wr_en;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wdata 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_wdata)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 17460, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wdata, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_wdata);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_wdata 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wdata;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wdata 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wdata;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wstrb) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_wstrb))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 17524, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wstrb, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_wstrb);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_wstrb 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wstrb;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wstrb 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wstrb;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_req) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__mem_req))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 17228, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_req, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__mem_req);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__mem_req 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_req;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_req 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_req;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_addr 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__mem_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 17232, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__mem_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__mem_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_addr;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_addr;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wdata 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__mem_wdata)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 17296, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wdata, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__mem_wdata);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__mem_wdata 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wdata;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wdata 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wdata;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wstrb) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__mem_wstrb))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 17360, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wstrb, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__mem_wstrb);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__mem_wstrb 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wstrb;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wstrb 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wstrb;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_we) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__mem_we))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 17230, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_we, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__mem_we);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__mem_we 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_we;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_we 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_we;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__advance_elem) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__advance_elem))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 18320, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__advance_elem, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__advance_elem);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__advance_elem 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__advance_elem;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_row_base_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_row_base_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_q;
    if (((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q)) 
         & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__start))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_d = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_d = 0U;
        ++(vlSymsp->__Vcoverage[18423]);
    } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__advance_elem) {
        if (((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q))) 
             < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols_q))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_d 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q)));
            if ((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_d 
                    = ((IData)(4U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q);
                ++(vlSymsp->__Vcoverage[18405]);
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_d 
                    = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q);
                ++(vlSymsp->__Vcoverage[18406]);
            }
            if ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_d 
                    = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_q)));
                ++(vlSymsp->__Vcoverage[18407]);
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_d 
                    = (0x000001ffU & ((IData)(4U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_q)));
                ++(vlSymsp->__Vcoverage[18408]);
            }
            ++(vlSymsp->__Vcoverage[18419]);
        } else {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_d = 0U;
            if (((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q))) 
                 < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_d 
                    = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q)));
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_row_base_d 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_row_base_q 
                       + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__stride_bytes_q));
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_d 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_row_base_q 
                       + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__stride_bytes_q));
                if ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind_q))) {
                    if ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_d 
                            = (0x000001ffU & ((IData)(0x0010U) 
                                              + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_q)));
                        ++(vlSymsp->__Vcoverage[18409]);
                    } else {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_d 
                            = (0x000001ffU & ((IData)(4U) 
                                              + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_q)));
                        ++(vlSymsp->__Vcoverage[18410]);
                    }
                    ++(vlSymsp->__Vcoverage[18411]);
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_d 
                        = (0x000001ffU & ((IData)(0x0010U) 
                                          + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_q)));
                    ++(vlSymsp->__Vcoverage[18412]);
                }
                if ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind_q))) {
                    if ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_d 
                            = (0x000001ffU & ((IData)(0x0010U) 
                                              + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_q)));
                        ++(vlSymsp->__Vcoverage[18413]);
                    } else {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_d 
                            = (0x000001ffU & ((IData)(4U) 
                                              + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_q)));
                        ++(vlSymsp->__Vcoverage[18414]);
                    }
                    ++(vlSymsp->__Vcoverage[18415]);
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_d 
                        = (0x000001ffU & ((IData)(0x0010U) 
                                          + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_q)));
                    ++(vlSymsp->__Vcoverage[18416]);
                }
                ++(vlSymsp->__Vcoverage[18417]);
            } else {
                ++(vlSymsp->__Vcoverage[18418]);
            }
            ++(vlSymsp->__Vcoverage[18420]);
        }
        ++(vlSymsp->__Vcoverage[18421]);
    } else {
        ++(vlSymsp->__Vcoverage[18422]);
    }
    if (((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q)) 
         & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__start))) {
        ++(vlSymsp->__Vcoverage[18424]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__start)))) {
        ++(vlSymsp->__Vcoverage[18425]);
    }
    if ((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
        ++(vlSymsp->__Vcoverage[18426]);
    }
    ++(vlSymsp->__Vcoverage[18427]);
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_region_o))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 17438, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_region_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_region_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_region 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_o;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_addr))) {
        VL_COV_TOGGLE_CHG_ST_I(9, vlSymsp->__Vcoverage + 17442, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr;
    if ((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata 
         ^ vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__mmio_rdata)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2142, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__mmio_rdata);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__mmio_rdata 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata;
    }
    vlSelfRef.tinygpu_top__DOT__mmio_rdata = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_busy_status) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_busy_status))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9063, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_busy_status, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_busy_status);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_busy_status 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_busy_status;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wr_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__spm_dma_wr_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 7157, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wr_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__spm_dma_wr_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__spm_dma_wr_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wr_en;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_wr_en 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_conv)
            ? (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_wr_en)
            : (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wr_en));
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wdata 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__spm_dma_wdata)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 7181, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wdata, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__spm_dma_wdata);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__spm_dma_wdata 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wdata;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_wdata 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_conv)
            ? vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_wdata
            : vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wdata);
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wstrb) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__spm_dma_wstrb))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 7245, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wstrb, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__spm_dma_wstrb);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__spm_dma_wstrb 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wstrb;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_wstrb 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_conv)
            ? (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_wstrb)
            : (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wstrb));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_req) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_mem_req))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9069, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_req, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_mem_req);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_mem_req 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_req;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_req_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_req;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_addr 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_mem_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 9073, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_mem_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_mem_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_addr;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_addr_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_addr;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wdata 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_mem_wdata)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 9137, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wdata, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_mem_wdata);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_mem_wdata 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wdata;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_wdata_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wdata;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wstrb) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_mem_wstrb))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 9201, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wstrb, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_mem_wstrb);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_mem_wstrb 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wstrb;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_wstrb_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wstrb;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_we) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_mem_we))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9071, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_we, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_mem_we);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_mem_we 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_we;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_we_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_we;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__row_d))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 17748, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__row_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__row_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__col_d))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 17812, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__col_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__col_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_d;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_row_base_d 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__ext_row_base_d)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 17908, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_row_base_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__ext_row_base_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__ext_row_base_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_row_base_d;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_d 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__ext_addr_d)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 18036, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__ext_addr_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__ext_addr_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_row_base_d))) {
        VL_COV_TOGGLE_CHG_ST_I(9, vlSymsp->__Vcoverage + 18118, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_row_base_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_row_base_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_d) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_addr_d))) {
        VL_COV_TOGGLE_CHG_ST_I(9, vlSymsp->__Vcoverage + 18154, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_d, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_addr_d);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_addr_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_d;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_region) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__spm_dma_region))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 7159, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_region, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__spm_dma_region);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__spm_dma_region 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_region;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_region 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_region) 
           & (- (IData)((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_conv))))));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_addr) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__spm_dma_addr))) {
        VL_COV_TOGGLE_CHG_ST_I(9, vlSymsp->__Vcoverage + 7163, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__spm_dma_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__spm_dma_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_addr;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_addr 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_conv)
            ? (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_addr)
            : (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_addr));
    if ((vlSelfRef.tinygpu_top__DOT__mmio_rdata ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__mmio_rdata)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 144, vlSelfRef.tinygpu_top__DOT__mmio_rdata, vlSelfRef.tinygpu_top__DOT____Vtogcov__mmio_rdata);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mmio_rdata 
            = vlSelfRef.tinygpu_top__DOT__mmio_rdata;
    }
    vlSelfRef.mmio_rdata = vlSelfRef.tinygpu_top__DOT__mmio_rdata;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_wr_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__dma_wr_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 13715, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_wr_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__dma_wr_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__dma_wr_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_wr_en;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_wdata 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__dma_wdata)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 13739, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_wdata, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__dma_wdata);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__dma_wdata 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_wdata;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_wstrb) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__dma_wstrb))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 13803, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_wstrb, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__dma_wstrb);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__dma_wstrb 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_wstrb;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_req_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__dma_req_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 14366, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_req_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__dma_req_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__dma_req_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_req_i;
    }
    if ((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))) {
        ++(vlSymsp->__Vcoverage[15284]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_0 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_req_i;
    } else {
        ++(vlSymsp->__Vcoverage[15291]);
        if ((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))) {
            ++(vlSymsp->__Vcoverage[15285]);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_0 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_req_i;
        } else {
            ++(vlSymsp->__Vcoverage[15290]);
            if ((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))) {
                ++(vlSymsp->__Vcoverage[15286]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_0 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_req_i;
            } else {
                ++(vlSymsp->__Vcoverage[15289]);
                if ((4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))) {
                    ++(vlSymsp->__Vcoverage[15287]);
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_0 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_req_i;
                } else {
                    ++(vlSymsp->__Vcoverage[15288]);
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_0 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_req_i;
                }
            }
        }
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_req_o 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_0;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_addr_i 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__dma_addr_i)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 14370, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_addr_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__dma_addr_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__dma_addr_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_addr_i;
    }
    if ((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))) {
        ++(vlSymsp->__Vcoverage[15300]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_3 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_addr_i;
    } else {
        ++(vlSymsp->__Vcoverage[15307]);
        if ((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))) {
            ++(vlSymsp->__Vcoverage[15301]);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_3 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_addr_i;
        } else {
            ++(vlSymsp->__Vcoverage[15306]);
            if ((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))) {
                ++(vlSymsp->__Vcoverage[15302]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_3 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_addr_i;
            } else {
                ++(vlSymsp->__Vcoverage[15305]);
                if ((4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))) {
                    ++(vlSymsp->__Vcoverage[15303]);
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_3 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_addr_i;
                } else {
                    ++(vlSymsp->__Vcoverage[15304]);
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_3 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_addr_i;
                }
            }
        }
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_addr_o 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_3;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_wdata_i 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__dma_wdata_i)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 14434, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_wdata_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__dma_wdata_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__dma_wdata_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_wdata_i;
    }
    if ((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))) {
        ++(vlSymsp->__Vcoverage[15308]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_5 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_wdata_i;
    } else {
        ++(vlSymsp->__Vcoverage[15315]);
        if ((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))) {
            ++(vlSymsp->__Vcoverage[15309]);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_5 = 0U;
        } else {
            ++(vlSymsp->__Vcoverage[15314]);
            if ((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))) {
                ++(vlSymsp->__Vcoverage[15310]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_4 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_wdata_i;
            } else {
                ++(vlSymsp->__Vcoverage[15313]);
                if ((4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))) {
                    ++(vlSymsp->__Vcoverage[15311]);
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_4 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_wdata_i;
                } else {
                    ++(vlSymsp->__Vcoverage[15312]);
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_4 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_wdata_i;
                }
            }
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_5 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_4;
        }
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_wdata_o 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_5;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_wstrb_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__dma_wstrb_i))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 14498, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_wstrb_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__dma_wstrb_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__dma_wstrb_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_wstrb_i;
    }
    if ((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))) {
        ++(vlSymsp->__Vcoverage[15316]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_7 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_wstrb_i;
    } else {
        ++(vlSymsp->__Vcoverage[15323]);
        if ((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))) {
            ++(vlSymsp->__Vcoverage[15317]);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_7 = 0U;
        } else {
            ++(vlSymsp->__Vcoverage[15322]);
            if ((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))) {
                ++(vlSymsp->__Vcoverage[15318]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_6 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_wstrb_i;
            } else {
                ++(vlSymsp->__Vcoverage[15321]);
                if ((4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))) {
                    ++(vlSymsp->__Vcoverage[15319]);
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_6 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_wstrb_i;
                } else {
                    ++(vlSymsp->__Vcoverage[15320]);
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_6 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_wstrb_i;
                }
            }
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_7 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_6;
        }
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_wstrb_o 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_7;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_we_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__dma_we_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 14368, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_we_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__dma_we_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__dma_we_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_we_i;
    }
    if ((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))) {
        ++(vlSymsp->__Vcoverage[15292]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_2 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_we_i;
    } else {
        ++(vlSymsp->__Vcoverage[15299]);
        if ((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))) {
            ++(vlSymsp->__Vcoverage[15293]);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_2 = 0U;
        } else {
            ++(vlSymsp->__Vcoverage[15298]);
            if ((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))) {
                ++(vlSymsp->__Vcoverage[15294]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_1 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_we_i;
            } else {
                ++(vlSymsp->__Vcoverage[15297]);
                if ((4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))) {
                    ++(vlSymsp->__Vcoverage[15295]);
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_1 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_we_i;
                } else {
                    ++(vlSymsp->__Vcoverage[15296]);
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_1 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_we_i;
                }
            }
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_2 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_1;
        }
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_we_o 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____VlemCond_2;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_region) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__dma_region))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 13717, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_region, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__dma_region);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__dma_region 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_region;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_addr) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__dma_addr))) {
        VL_COV_TOGGLE_CHG_ST_I(9, vlSymsp->__Vcoverage + 13721, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__dma_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__dma_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_addr;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_req_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__mem_req_o))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 14992, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_req_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__mem_req_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__mem_req_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_req_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_req 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_req_o;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_addr_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__mem_addr_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 14996, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_addr_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__mem_addr_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__mem_addr_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_addr_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_addr_o;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_wdata_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__mem_wdata_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 15060, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_wdata_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__mem_wdata_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__mem_wdata_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_wdata_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_wdata 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_wdata_o;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_wstrb_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__mem_wstrb_o))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 15124, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_wstrb_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__mem_wstrb_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__mem_wstrb_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_wstrb_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_wstrb 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_wstrb_o;
    if (((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i)) 
         & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_req_i))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_we_o))) {
                VL_WRITEF_NX("[%0t] %%Error: tinygpu_mem_arbiter.sv:95: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl.u_mem_arbiter", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_mem_arbiter.sv", 95, "");
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_we_o)))) {
            ++(vlSymsp->__Vcoverage[15324]);
        }
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_we_o) {
            ++(vlSymsp->__Vcoverage[15325]);
        }
        ++(vlSymsp->__Vcoverage[15326]);
    } else {
        ++(vlSymsp->__Vcoverage[15327]);
    }
    if (((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i)) 
         & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_req_i))) {
        ++(vlSymsp->__Vcoverage[15328]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_req_i)))) {
        ++(vlSymsp->__Vcoverage[15329]);
    }
    if ((2U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))) {
        ++(vlSymsp->__Vcoverage[15330]);
    }
    ++(vlSymsp->__Vcoverage[15331]);
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_we_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__mem_we_o))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 14994, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_we_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__mem_we_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__mem_we_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_we_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_we 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_we_o;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_req) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__mem_req))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 4725, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_req, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__mem_req);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__mem_req 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_req;
    }
    vlSelfRef.tinygpu_top__DOT__mem_req_raw = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_req;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_addr 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__mem_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 4729, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__mem_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__mem_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_addr;
    }
    vlSelfRef.tinygpu_top__DOT__mem_addr_raw = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_addr;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_wdata 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__mem_wdata)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 4793, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_wdata, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__mem_wdata);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__mem_wdata 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_wdata;
    }
    vlSelfRef.tinygpu_top__DOT__mem_wdata_raw = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_wdata;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_wstrb) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__mem_wstrb))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 4857, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_wstrb, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__mem_wstrb);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__mem_wstrb 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_wstrb;
    }
    vlSelfRef.tinygpu_top__DOT__mem_wstrb_raw = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_wstrb;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_we) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__mem_we))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 4727, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_we, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__mem_we);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__mem_we 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_we;
    }
    vlSelfRef.tinygpu_top__DOT__mem_we_raw = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_we;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__mem_req_raw) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_req_raw))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1622, vlSelfRef.tinygpu_top__DOT__mem_req_raw, vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_req_raw);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_req_raw 
            = vlSelfRef.tinygpu_top__DOT__mem_req_raw;
    }
    if ((vlSelfRef.tinygpu_top__DOT__mem_addr_raw ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_addr_raw)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1626, vlSelfRef.tinygpu_top__DOT__mem_addr_raw, vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_addr_raw);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_addr_raw 
            = vlSelfRef.tinygpu_top__DOT__mem_addr_raw;
    }
    if ((vlSelfRef.tinygpu_top__DOT__mem_wdata_raw 
         ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_wdata_raw)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1690, vlSelfRef.tinygpu_top__DOT__mem_wdata_raw, vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_wdata_raw);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_wdata_raw 
            = vlSelfRef.tinygpu_top__DOT__mem_wdata_raw;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__mem_wstrb_raw) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_wstrb_raw))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 1754, vlSelfRef.tinygpu_top__DOT__mem_wstrb_raw, vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_wstrb_raw);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_wstrb_raw 
            = vlSelfRef.tinygpu_top__DOT__mem_wstrb_raw;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__mem_we_raw) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_we_raw))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1624, vlSelfRef.tinygpu_top__DOT__mem_we_raw, vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_we_raw);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_we_raw 
            = vlSelfRef.tinygpu_top__DOT__mem_we_raw;
    }
}

void Vtop___024root___ico_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_3__read_linear_byte;
    CData/*7:0*/ tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_2__read_linear_byte;
    CData/*7:0*/ tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_1__read_linear_byte;
    CData/*7:0*/ tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_0__read_linear_byte;
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
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    __VdfgRegularize_h6e95ff9d_0_0 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1;
    __VdfgRegularize_h6e95ff9d_0_1 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    __VdfgRegularize_h6e95ff9d_0_2 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_3;
    __VdfgRegularize_h6e95ff9d_0_3 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_4;
    __VdfgRegularize_h6e95ff9d_0_4 = 0;
    // Body
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
            ++(vlSymsp->__Vcoverage[14293]);
        } else {
            ++(vlSymsp->__Vcoverage[14294]);
        }
        ++(vlSymsp->__Vcoverage[14298]);
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
            ++(vlSymsp->__Vcoverage[14299]);
        } else {
            ++(vlSymsp->__Vcoverage[14300]);
        }
        ++(vlSymsp->__Vcoverage[14305]);
    } else if ((2U == (IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__region))) {
        __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__word_index 
            = VL_SHIFTR_III(32,32,32, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__addr, 2U);
        if ((0x00000010U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__word_index)) {
            if ((0U == (3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__addr))) {
                tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_0__read_linear_byte 
                    = (0x000000ffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
                       [(0x0000000fU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__word_index)]);
                ++(vlSymsp->__Vcoverage[14306]);
            } else if ((1U == (3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__addr))) {
                tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_0__read_linear_byte 
                    = (0x000000ffU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
                                      [(0x0000000fU 
                                        & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__word_index)] 
                                      >> 8U));
                ++(vlSymsp->__Vcoverage[14307]);
            } else if ((2U == (3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__addr))) {
                tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_0__read_linear_byte 
                    = (0x000000ffU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
                                      [(0x0000000fU 
                                        & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__word_index)] 
                                      >> 0x10U));
                ++(vlSymsp->__Vcoverage[14308]);
            } else {
                tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_0__read_linear_byte 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
                       [(0x0000000fU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__word_index)] 
                       >> 0x18U);
                ++(vlSymsp->__Vcoverage[14309]);
            }
            ++(vlSymsp->__Vcoverage[14310]);
        } else {
            ++(vlSymsp->__Vcoverage[14311]);
        }
        ++(vlSymsp->__Vcoverage[14312]);
    } else {
        tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_0__read_linear_byte = 0U;
        ++(vlSymsp->__Vcoverage[14313]);
    }
    if (((0x00000040U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__addr) 
         & (4U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__bank))) {
        ++(vlSymsp->__Vcoverage[14295]);
    }
    if ((4U <= __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__bank)) {
        ++(vlSymsp->__Vcoverage[14296]);
    }
    if ((0x00000040U <= __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__addr)) {
        ++(vlSymsp->__Vcoverage[14297]);
    }
    if ((((0x00000040U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__addr) 
          & (4U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__bank)) 
         & (0x00000010U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__offset))) {
        ++(vlSymsp->__Vcoverage[14301]);
    }
    if ((0x00000010U <= __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__offset)) {
        ++(vlSymsp->__Vcoverage[14302]);
    }
    if ((4U <= __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__bank)) {
        ++(vlSymsp->__Vcoverage[14303]);
    }
    if ((0x00000040U <= __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__21__addr)) {
        ++(vlSymsp->__Vcoverage[14304]);
    }
    ++(vlSymsp->__Vcoverage[14314]);
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
            ++(vlSymsp->__Vcoverage[14293]);
        } else {
            ++(vlSymsp->__Vcoverage[14294]);
        }
        ++(vlSymsp->__Vcoverage[14298]);
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
            ++(vlSymsp->__Vcoverage[14299]);
        } else {
            ++(vlSymsp->__Vcoverage[14300]);
        }
        ++(vlSymsp->__Vcoverage[14305]);
    } else if ((2U == (IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__region))) {
        __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__word_index 
            = VL_SHIFTR_III(32,32,32, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__addr, 2U);
        if ((0x00000010U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__word_index)) {
            if ((0U == (3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__addr))) {
                tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_1__read_linear_byte 
                    = (0x000000ffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
                       [(0x0000000fU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__word_index)]);
                ++(vlSymsp->__Vcoverage[14306]);
            } else if ((1U == (3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__addr))) {
                tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_1__read_linear_byte 
                    = (0x000000ffU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
                                      [(0x0000000fU 
                                        & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__word_index)] 
                                      >> 8U));
                ++(vlSymsp->__Vcoverage[14307]);
            } else if ((2U == (3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__addr))) {
                tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_1__read_linear_byte 
                    = (0x000000ffU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
                                      [(0x0000000fU 
                                        & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__word_index)] 
                                      >> 0x10U));
                ++(vlSymsp->__Vcoverage[14308]);
            } else {
                tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_1__read_linear_byte 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
                       [(0x0000000fU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__word_index)] 
                       >> 0x18U);
                ++(vlSymsp->__Vcoverage[14309]);
            }
            ++(vlSymsp->__Vcoverage[14310]);
        } else {
            ++(vlSymsp->__Vcoverage[14311]);
        }
        ++(vlSymsp->__Vcoverage[14312]);
    } else {
        tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_1__read_linear_byte = 0U;
        ++(vlSymsp->__Vcoverage[14313]);
    }
    if (((0x00000040U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__addr) 
         & (4U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__bank))) {
        ++(vlSymsp->__Vcoverage[14295]);
    }
    if ((4U <= __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__bank)) {
        ++(vlSymsp->__Vcoverage[14296]);
    }
    if ((0x00000040U <= __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__addr)) {
        ++(vlSymsp->__Vcoverage[14297]);
    }
    if ((((0x00000040U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__addr) 
          & (4U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__bank)) 
         & (0x00000010U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__offset))) {
        ++(vlSymsp->__Vcoverage[14301]);
    }
    if ((0x00000010U <= __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__offset)) {
        ++(vlSymsp->__Vcoverage[14302]);
    }
    if ((4U <= __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__bank)) {
        ++(vlSymsp->__Vcoverage[14303]);
    }
    if ((0x00000040U <= __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__22__addr)) {
        ++(vlSymsp->__Vcoverage[14304]);
    }
    ++(vlSymsp->__Vcoverage[14314]);
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
            ++(vlSymsp->__Vcoverage[14293]);
        } else {
            ++(vlSymsp->__Vcoverage[14294]);
        }
        ++(vlSymsp->__Vcoverage[14298]);
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
            ++(vlSymsp->__Vcoverage[14299]);
        } else {
            ++(vlSymsp->__Vcoverage[14300]);
        }
        ++(vlSymsp->__Vcoverage[14305]);
    } else if ((2U == (IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__region))) {
        __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__word_index 
            = VL_SHIFTR_III(32,32,32, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__addr, 2U);
        if ((0x00000010U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__word_index)) {
            if ((0U == (3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__addr))) {
                tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_2__read_linear_byte 
                    = (0x000000ffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
                       [(0x0000000fU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__word_index)]);
                ++(vlSymsp->__Vcoverage[14306]);
            } else if ((1U == (3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__addr))) {
                tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_2__read_linear_byte 
                    = (0x000000ffU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
                                      [(0x0000000fU 
                                        & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__word_index)] 
                                      >> 8U));
                ++(vlSymsp->__Vcoverage[14307]);
            } else if ((2U == (3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__addr))) {
                tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_2__read_linear_byte 
                    = (0x000000ffU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
                                      [(0x0000000fU 
                                        & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__word_index)] 
                                      >> 0x10U));
                ++(vlSymsp->__Vcoverage[14308]);
            } else {
                tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_2__read_linear_byte 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
                       [(0x0000000fU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__word_index)] 
                       >> 0x18U);
                ++(vlSymsp->__Vcoverage[14309]);
            }
            ++(vlSymsp->__Vcoverage[14310]);
        } else {
            ++(vlSymsp->__Vcoverage[14311]);
        }
        ++(vlSymsp->__Vcoverage[14312]);
    } else {
        tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_2__read_linear_byte = 0U;
        ++(vlSymsp->__Vcoverage[14313]);
    }
    if (((0x00000040U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__addr) 
         & (4U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__bank))) {
        ++(vlSymsp->__Vcoverage[14295]);
    }
    if ((4U <= __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__bank)) {
        ++(vlSymsp->__Vcoverage[14296]);
    }
    if ((0x00000040U <= __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__addr)) {
        ++(vlSymsp->__Vcoverage[14297]);
    }
    if ((((0x00000040U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__addr) 
          & (4U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__bank)) 
         & (0x00000010U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__offset))) {
        ++(vlSymsp->__Vcoverage[14301]);
    }
    if ((0x00000010U <= __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__offset)) {
        ++(vlSymsp->__Vcoverage[14302]);
    }
    if ((4U <= __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__bank)) {
        ++(vlSymsp->__Vcoverage[14303]);
    }
    if ((0x00000040U <= __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__23__addr)) {
        ++(vlSymsp->__Vcoverage[14304]);
    }
    ++(vlSymsp->__Vcoverage[14314]);
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
            ++(vlSymsp->__Vcoverage[14293]);
        } else {
            ++(vlSymsp->__Vcoverage[14294]);
        }
        ++(vlSymsp->__Vcoverage[14298]);
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
            ++(vlSymsp->__Vcoverage[14299]);
        } else {
            ++(vlSymsp->__Vcoverage[14300]);
        }
        ++(vlSymsp->__Vcoverage[14305]);
    } else if ((2U == (IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__region))) {
        __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__word_index 
            = VL_SHIFTR_III(32,32,32, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__addr, 2U);
        if ((0x00000010U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__word_index)) {
            if ((0U == (3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__addr))) {
                tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_3__read_linear_byte 
                    = (0x000000ffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
                       [(0x0000000fU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__word_index)]);
                ++(vlSymsp->__Vcoverage[14306]);
            } else if ((1U == (3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__addr))) {
                tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_3__read_linear_byte 
                    = (0x000000ffU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
                                      [(0x0000000fU 
                                        & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__word_index)] 
                                      >> 8U));
                ++(vlSymsp->__Vcoverage[14307]);
            } else if ((2U == (3U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__addr))) {
                tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_3__read_linear_byte 
                    = (0x000000ffU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
                                      [(0x0000000fU 
                                        & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__word_index)] 
                                      >> 0x10U));
                ++(vlSymsp->__Vcoverage[14308]);
            } else {
                tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_3__read_linear_byte 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
                       [(0x0000000fU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__word_index)] 
                       >> 0x18U);
                ++(vlSymsp->__Vcoverage[14309]);
            }
            ++(vlSymsp->__Vcoverage[14310]);
        } else {
            ++(vlSymsp->__Vcoverage[14311]);
        }
        ++(vlSymsp->__Vcoverage[14312]);
    } else {
        tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_3__read_linear_byte = 0U;
        ++(vlSymsp->__Vcoverage[14313]);
    }
    if (((0x00000040U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__addr) 
         & (4U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__bank))) {
        ++(vlSymsp->__Vcoverage[14295]);
    }
    if ((4U <= __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__bank)) {
        ++(vlSymsp->__Vcoverage[14296]);
    }
    if ((0x00000040U <= __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__addr)) {
        ++(vlSymsp->__Vcoverage[14297]);
    }
    if ((((0x00000040U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__addr) 
          & (4U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__bank)) 
         & (0x00000010U > __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__offset))) {
        ++(vlSymsp->__Vcoverage[14301]);
    }
    if ((0x00000010U <= __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__offset)) {
        ++(vlSymsp->__Vcoverage[14302]);
    }
    if ((4U <= __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__bank)) {
        ++(vlSymsp->__Vcoverage[14303]);
    }
    if ((0x00000040U <= __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_linear_byte__24__addr)) {
        ++(vlSymsp->__Vcoverage[14304]);
    }
    ++(vlSymsp->__Vcoverage[14314]);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_rdata 
        = ((((IData)(tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_0__read_linear_byte) 
             << 0x00000018U) | ((IData)(tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_1__read_linear_byte) 
                                << 0x00000010U)) | 
           (((IData)(tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_2__read_linear_byte) 
             << 8U) | (IData)(tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____VlemCall_3__read_linear_byte)));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk7__DOT__r = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk7__DOT__r)) {
        if (VL_GTS_III(32, 0x00000040U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_addr
                       [(3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk7__DOT__r)])) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_data[(3U 
                                                                                & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk7__DOT__r)] 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_bank
                [(3U & VL_DIVS_III(32, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_addr
                                   [(3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk7__DOT__r)], (IData)(0x00000010U)))]
                [(0x0000000fU & VL_MODDIVS_III(32, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_addr
                                               [(3U 
                                                 & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk7__DOT__r)], (IData)(0x00000010U)))];
            ++(vlSymsp->__Vcoverage[14345]);
        } else {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_data[(3U 
                                                                                & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk7__DOT__r)] = 0U;
            ++(vlSymsp->__Vcoverage[14346]);
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk7__DOT__r 
            = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk7__DOT__r);
        ++(vlSymsp->__Vcoverage[14347]);
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk8__DOT__c = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk8__DOT__c)) {
        if (VL_GTS_III(32, 0x00000040U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_addr
                       [(3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk8__DOT__c)])) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_data[(3U 
                                                                                & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk8__DOT__c)] 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_bank
                [(3U & VL_MODDIVS_III(32, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_addr
                                      [(3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk8__DOT__c)], (IData)(4U)))]
                [(0x0000000fU & VL_DIVS_III(32, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_addr
                                            [(3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk8__DOT__c)], (IData)(4U)))];
            ++(vlSymsp->__Vcoverage[14348]);
        } else {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_data[(3U 
                                                                                & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk8__DOT__c)] = 0U;
            ++(vlSymsp->__Vcoverage[14349]);
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk8__DOT__c 
            = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk8__DOT__c);
        ++(vlSymsp->__Vcoverage[14350]);
    }
    if (VL_GTS_III(32, 0x00000010U, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_rd_addr))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_rd_data 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
            [(0x0000000fU & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_rd_addr))];
        ++(vlSymsp->__Vcoverage[14351]);
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_rd_data = 0U;
        ++(vlSymsp->__Vcoverage[14352]);
    }
    ++(vlSymsp->__Vcoverage[14353]);
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_rdata 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__dma_rdata)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 13811, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_rdata, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__dma_rdata);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__dma_rdata 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_rdata;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_rdata 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_rdata;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_rd_data 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__c_rd_data)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 14229, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_rd_data, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__c_rd_data);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__c_rd_data 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_rd_data;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_rd_data 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_rd_data;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_data[0U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__a_rd_data[0U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 13939, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_data[0U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__a_rd_data[0U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__a_rd_data[0U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_data[0U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_data[1U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__a_rd_data[1U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 13955, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_data[1U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__a_rd_data[1U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__a_rd_data[1U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_data[1U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_data[2U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__a_rd_data[2U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 13971, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_data[2U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__a_rd_data[2U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__a_rd_data[2U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_data[2U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_data[3U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__a_rd_data[3U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 13987, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_data[3U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__a_rd_data[3U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__a_rd_data[3U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_data[3U];
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_data 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_data;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_data[0U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__b_rd_data[0U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 14067, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_data[0U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__b_rd_data[0U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__b_rd_data[0U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_data[0U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_data[1U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__b_rd_data[1U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 14083, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_data[1U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__b_rd_data[1U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__b_rd_data[1U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_data[1U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_data[2U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__b_rd_data[2U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 14099, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_data[2U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__b_rd_data[2U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__b_rd_data[2U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_data[2U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_data[3U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__b_rd_data[3U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 14115, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_data[3U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__b_rd_data[3U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__b_rd_data[3U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_data[3U];
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_data 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_data;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_rdata 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__spm_dma_rdata)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 7253, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_rdata, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__spm_dma_rdata);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__spm_dma_rdata 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_rdata;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_rdata 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_rdata;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_rd_data 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__c_rd_data)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 7415, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_rd_data, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__c_rd_data);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__c_rd_data 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_rd_data;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unused_c_rd_data 
        = (1U & VL_REDXOR_32(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_rd_data));
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_data[0U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_rd_data[0U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 6833, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_data[0U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_rd_data[0U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_rd_data[0U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_data[0U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_data[1U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_rd_data[1U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 6849, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_data[1U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_rd_data[1U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_rd_data[1U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_data[1U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_data[2U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_rd_data[2U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 6865, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_data[2U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_rd_data[2U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_rd_data[2U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_data[2U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_data[3U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_rd_data[3U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 6881, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_data[3U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_rd_data[3U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_rd_data[3U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_data[3U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_data[0U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_rd_data[0U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 6961, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_data[0U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_rd_data[0U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_rd_data[0U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_data[0U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_data[1U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_rd_data[1U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 6977, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_data[1U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_rd_data[1U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_rd_data[1U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_data[1U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_data[2U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_rd_data[2U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 6993, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_data[2U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_rd_data[2U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_rd_data[2U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_data[2U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_data[3U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_rd_data[3U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 7009, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_data[3U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_rd_data[3U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_rd_data[3U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_data[3U];
    }
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
        ++(vlSymsp->__Vcoverage[13449]);
    }
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
        ++(vlSymsp->__Vcoverage[13450]);
    }
    ++(vlSymsp->__Vcoverage[13451]);
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_rdata 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_rdata)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 17532, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_rdata, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_rdata);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_rdata 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_rdata;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unused_c_rd_data) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__unused_c_rd_data))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 13259, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unused_c_rd_data, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__unused_c_rd_data);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__unused_c_rd_data 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unused_c_rd_data;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_addr[0U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_rd_addr[0U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 6769, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_addr[0U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_rd_addr[0U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_rd_addr[0U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_addr[0U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_addr[1U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_rd_addr[1U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 6785, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_addr[1U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_rd_addr[1U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_rd_addr[1U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_addr[1U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_addr[2U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_rd_addr[2U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 6801, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_addr[2U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_rd_addr[2U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_rd_addr[2U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_addr[2U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_addr[3U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_rd_addr[3U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 6817, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_addr[3U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_rd_addr[3U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_rd_addr[3U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_addr[3U];
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_addr;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_addr[0U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_rd_addr[0U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 6897, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_addr[0U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_rd_addr[0U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_rd_addr[0U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_addr[0U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_addr[1U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_rd_addr[1U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 6913, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_addr[1U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_rd_addr[1U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_rd_addr[1U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_addr[1U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_addr[2U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_rd_addr[2U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 6929, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_addr[2U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_rd_addr[2U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_rd_addr[2U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_addr[2U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_addr[3U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_rd_addr[3U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 6945, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_addr[3U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_rd_addr[3U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_rd_addr[3U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_addr[3U];
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_addr;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__col_mask))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 6761, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__col_mask);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__col_mask 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_mask 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__row_mask))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 6753, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__row_mask);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__row_mask 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_mask 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__row_mask 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_vec[0U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_vec[0U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 7025, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_vec[0U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_vec[0U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_vec[0U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_vec[0U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_vec[1U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_vec[1U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 7041, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_vec[1U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_vec[1U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_vec[1U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_vec[1U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_vec[2U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_vec[2U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 7057, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_vec[2U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_vec[2U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_vec[2U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_vec[2U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_vec[3U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_vec[3U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 7073, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_vec[3U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_vec[3U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__a_vec[3U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_vec[3U];
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__a_vec;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_vec[0U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_vec[0U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 7089, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_vec[0U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_vec[0U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_vec[0U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_vec[0U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_vec[1U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_vec[1U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 7105, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_vec[1U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_vec[1U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_vec[1U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_vec[1U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_vec[2U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_vec[2U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 7121, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_vec[2U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_vec[2U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_vec[2U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_vec[2U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_vec[3U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_vec[3U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 7137, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_vec[3U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_vec[3U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__b_vec[3U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_vec[3U];
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__b_vec;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_addr[0U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__a_rd_addr[0U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 13875, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_addr[0U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__a_rd_addr[0U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__a_rd_addr[0U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_addr[0U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_addr[1U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__a_rd_addr[1U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 13891, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_addr[1U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__a_rd_addr[1U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__a_rd_addr[1U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_addr[1U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_addr[2U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__a_rd_addr[2U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 13907, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_addr[2U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__a_rd_addr[2U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__a_rd_addr[2U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_addr[2U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_addr[3U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__a_rd_addr[3U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 13923, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_addr[3U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__a_rd_addr[3U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__a_rd_addr[3U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_addr[3U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_addr[0U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__b_rd_addr[0U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 14003, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_addr[0U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__b_rd_addr[0U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__b_rd_addr[0U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_addr[0U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_addr[1U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__b_rd_addr[1U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 14019, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_addr[1U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__b_rd_addr[1U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__b_rd_addr[1U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_addr[1U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_addr[2U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__b_rd_addr[2U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 14035, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_addr[2U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__b_rd_addr[2U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__b_rd_addr[2U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_addr[2U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_addr[3U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__b_rd_addr[3U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 14051, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_addr[3U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__b_rd_addr[3U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT____Vtogcov__b_rd_addr[3U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_addr[3U];
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_mask) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__col_mask))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 22605, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_mask, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__col_mask);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__col_mask 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_mask;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__col_mask))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 18787, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__col_mask);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__col_mask 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_mask) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__row_mask))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 22597, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_mask, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__row_mask);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__row_mask 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_mask;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__elem_valid 
        = (1U & (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_mask) 
                  >> (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q)) 
                 & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_mask) 
                    >> (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q))));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__row_mask) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__row_mask))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 18779, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__row_mask, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__row_mask);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__row_mask 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__row_mask;
    }
    __VdfgRegularize_h6e95ff9d_0_1 = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en) 
                                      & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__row_mask));
    __VdfgRegularize_h6e95ff9d_0_2 = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en) 
                                      & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__row_mask) 
                                         >> 1U));
    __VdfgRegularize_h6e95ff9d_0_3 = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en) 
                                      & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__row_mask) 
                                         >> 2U));
    __VdfgRegularize_h6e95ff9d_0_4 = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en) 
                                      & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__row_mask) 
                                         >> 3U));
    __VdfgRegularize_h6e95ff9d_0_0 = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__row_mask) 
                                      & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask));
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[0U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__a_vec[0U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 18651, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[0U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__a_vec[0U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__a_vec[0U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[0U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[1U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__a_vec[1U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 18667, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[1U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__a_vec[1U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__a_vec[1U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[1U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[2U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__a_vec[2U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 18683, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[2U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__a_vec[2U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__a_vec[2U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[2U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[3U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__a_vec[3U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 18699, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[3U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__a_vec[3U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__a_vec[3U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__a_vec[3U];
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
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[0U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__b_vec[0U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 18715, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[0U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__b_vec[0U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__b_vec[0U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[0U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[1U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__b_vec[1U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 18731, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[1U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__b_vec[1U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__b_vec[1U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[1U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[2U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__b_vec[2U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 18747, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[2U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__b_vec[2U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__b_vec[2U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[2U];
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[3U] 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__b_vec[3U])) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 18763, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[3U], vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__b_vec[3U]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__b_vec[3U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__b_vec[3U];
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__elem_valid) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__elem_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 23305, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__elem_valid, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__elem_valid);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__elem_valid 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__elem_valid;
    }
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
            ++(vlSymsp->__Vcoverage[23509]);
        } else {
            ++(vlSymsp->__Vcoverage[23510]);
        }
        if (((__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__flags_in 
              >> 1U) & VL_GTS_III(32, 0U, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x))) {
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x = 0U;
            ++(vlSymsp->__Vcoverage[23511]);
        } else {
            ++(vlSymsp->__Vcoverage[23512]);
        }
        if ((4U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__flags_in)) {
            vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__hi = 0x0000007fU;
            vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__lo = 0xffffff80U;
            vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__x 
                = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x;
            vlSelf->__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__Vfuncout = 0;
            if (VL_GTS_III(32, 0xffffff80U, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__x)) {
                vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__Vfuncout 
                    = vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__lo;
                ++(vlSymsp->__Vcoverage[23507]);
            } else if (VL_GTS_III(32, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__x, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__hi)) {
                vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__Vfuncout 
                    = vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__hi;
                ++(vlSymsp->__Vcoverage[23505]);
            } else {
                vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__Vfuncout 
                    = vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__x;
                ++(vlSymsp->__Vcoverage[23506]);
            }
            ++(vlSymsp->__Vcoverage[23508]);
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x 
                = vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__Vfuncout;
            ++(vlSymsp->__Vcoverage[23516]);
        } else {
            ++(vlSymsp->__Vcoverage[23517]);
        }
        if (((__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__flags_in 
              >> 1U) & VL_GTS_III(32, 0U, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x))) {
            ++(vlSymsp->__Vcoverage[23513]);
        }
        if (VL_LTES_III(32, 0U, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x)) {
            ++(vlSymsp->__Vcoverage[23514]);
        }
        if ((1U & (~ (__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__flags_in 
                      >> 1U)))) {
            ++(vlSymsp->__Vcoverage[23515]);
        }
        ++(vlSymsp->__Vcoverage[23518]);
    } else {
        __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x = 0U;
        ++(vlSymsp->__Vcoverage[23519]);
    }
    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__Vfuncout 
        = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x;
    ++(vlSymsp->__Vcoverage[23520]);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_n 
        = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__Vfuncout;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 1U) & (IData)(__VdfgRegularize_h6e95ff9d_0_1));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 2U) & (IData)(__VdfgRegularize_h6e95ff9d_0_1));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 3U) & (IData)(__VdfgRegularize_h6e95ff9d_0_1));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_2));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 2U) & (IData)(__VdfgRegularize_h6e95ff9d_0_2));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 3U) & (IData)(__VdfgRegularize_h6e95ff9d_0_2));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_3));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 1U) & (IData)(__VdfgRegularize_h6e95ff9d_0_3));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 3U) & (IData)(__VdfgRegularize_h6e95ff9d_0_3));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_4));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 1U) & (IData)(__VdfgRegularize_h6e95ff9d_0_4));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__col_mask) 
            >> 2U) & (IData)(__VdfgRegularize_h6e95ff9d_0_4));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_0));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en) 
           & ((IData)(__VdfgRegularize_h6e95ff9d_0_0) 
              >> 1U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en) 
           & ((IData)(__VdfgRegularize_h6e95ff9d_0_0) 
              >> 2U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__mac_en) 
           & ((IData)(__VdfgRegularize_h6e95ff9d_0_0) 
              >> 3U));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__a_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 18835, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__a_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__a_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__a_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 19042, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__a_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__a_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__a_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 19249, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__a_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__a_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__a_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 19456, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__a_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__a_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__a_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 19663, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__a_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__a_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__a_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 19870, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__a_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__a_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__a_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 20077, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__a_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__a_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__a_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 20284, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__a_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__a_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__a_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 20491, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__a_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__a_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__a_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 20698, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__a_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__a_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__a_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 20905, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__a_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__a_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__a_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 21112, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__a_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__a_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__a_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 21319, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__a_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__a_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__a_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 21526, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__a_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__a_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__a_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 21733, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__a_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__a_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__a_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 21940, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__a_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__a_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__b_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 18851, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__b_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__b_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i)))));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__b_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 19058, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__b_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__b_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i)))));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__b_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 19265, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__b_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__b_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i)))));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__b_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 19472, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__b_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__b_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i)))));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__b_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 19679, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__b_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__b_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i)))));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__b_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 19886, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__b_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__b_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i)))));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__b_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 20093, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__b_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__b_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i)))));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__b_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 20300, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__b_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__b_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i)))));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__b_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 20507, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__b_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__b_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i)))));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__b_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 20714, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__b_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__b_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i)))));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__b_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 20921, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__b_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__b_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i)))));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__b_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 21128, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__b_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__b_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i)))));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__b_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 21335, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__b_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__b_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_i)))));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__b_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 21542, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__b_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__b_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_i)))));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__b_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 21749, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__b_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__b_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_i)))));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__b_i))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 21956, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__b_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__b_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_i))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_i)))));
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_n 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__post_elem_n)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 23309, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__post_elem_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__post_elem_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_n;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET__pe_mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 18797, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET__pe_mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET__pe_mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET__pe_mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 18799, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET__pe_mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET__pe_mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET__pe_mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 18801, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET__pe_mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET__pe_mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET__pe_mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 18803, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET__pe_mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET__pe_mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET__pe_mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 18807, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET__pe_mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET__pe_mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET__pe_mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 18809, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET__pe_mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET__pe_mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET__pe_mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 18811, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET__pe_mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET__pe_mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET__pe_mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 18813, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET__pe_mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET__pe_mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET__pe_mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 18817, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET__pe_mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET__pe_mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET__pe_mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 18819, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET__pe_mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET__pe_mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET__pe_mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 18821, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET__pe_mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET__pe_mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET__pe_mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 18823, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET__pe_mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET__pe_mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET__pe_mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 18795, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET__pe_mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET__pe_mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_mac_en;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET__pe_mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 18805, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET__pe_mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET__pe_mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_mac_en;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET__pe_mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 18815, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET__pe_mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET__pe_mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_mac_en;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET__pe_mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 18825, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET__pe_mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vtogcov__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET__pe_mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_mac_en;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__product))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 18931, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__product);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__product 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__product))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 19138, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__product);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__product 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__product))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 19345, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__product);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__product 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__product))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 19552, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__product);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__product 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__product))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 19759, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__product);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__product 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__product))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 19966, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__product);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__product 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__product))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 20173, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__product);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__product 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__product))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 20380, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__product);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__product 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__product))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 20587, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__product);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__product 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__product))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 20794, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__product);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__product 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__product))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 21001, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__product);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__product 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__product))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 21208, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__product);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__product 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__product))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 21415, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__product);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__product 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__product))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 21622, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__product);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__product 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__product))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 21829, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__product);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__product 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__product))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 22036, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__product);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__product 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 19040, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 19247, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 19454, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 19661, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 20075, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 20282, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 20489, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 20696, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 21110, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 21317, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 21524, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 21731, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 18833, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 19868, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 20903, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__mac_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 21938, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__mac_en);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__mac_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__product_ext)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 18963, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__product_ext);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__product_ext 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__product_ext)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 19170, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__product_ext);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__product_ext 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__product_ext)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 19377, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__product_ext);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__product_ext 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__product_ext)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 19584, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__product_ext);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__product_ext 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__product_ext)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 19791, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__product_ext);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__product_ext 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__product_ext)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 19998, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__product_ext);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__product_ext 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__product_ext)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 20205, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__product_ext);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__product_ext 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__product_ext)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 20412, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__product_ext);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__product_ext 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__product_ext)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 20619, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__product_ext);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__product_ext 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__product_ext)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 20826, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__product_ext);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__product_ext 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__product_ext)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 21033, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__product_ext);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__product_ext 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__product_ext)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 21240, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__product_ext);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__product_ext 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__product_ext)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 21447, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__product_ext);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__product_ext 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__product_ext)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 21654, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__product_ext);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__product_ext 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__product_ext)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 21861, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__product_ext);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__product_ext 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__product_ext)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 22068, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__product_ext);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__product_ext 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext;
    }
}
