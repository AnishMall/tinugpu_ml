// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtinygpu_top.h for the primary calling header

#include "verilated.h"

#include "Vtinygpu_top___024root.h"

extern const VlUnpacked<CData/*3:0*/, 128> Vtinygpu_top__ConstPool__TABLE_h05cb3c31_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtinygpu_top__ConstPool__TABLE_hd1999c55_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtinygpu_top__ConstPool__TABLE_h678df398_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtinygpu_top__ConstPool__TABLE_hdb2c2e4e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtinygpu_top__ConstPool__TABLE_h98b377a8_0;

VL_INLINE_OPT void Vtinygpu_top___024root___sequent__TOP__0(Vtinygpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinygpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinygpu_top___024root___sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m;
    IData/*31:0*/ tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_rdata;
    CData/*0:0*/ tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_req;
    CData/*0:0*/ tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_req;
    CData/*0:0*/ tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_req;
    CData/*0:0*/ tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_req;
    CData/*0:0*/ tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_last;
    IData/*31:0*/ tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_elem_addr;
    IData/*31:0*/ tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_elem_addr;
    IData/*31:0*/ tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__elem_addr;
    IData/*31:0*/ tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__write_addr;
    IData/*31:0*/ tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_store_i32;
    CData/*0:0*/ tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__advance_elem;
    CData/*0:0*/ tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__last_elem;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__Vfuncout;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__oldv;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__newv;
    CData/*3:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__wstrb;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__Vfuncout;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__oldv;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__newv;
    CData/*3:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__wstrb;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__Vfuncout;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__oldv;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__newv;
    CData/*3:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__wstrb;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__Vfuncout;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__oldv;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__newv;
    CData/*3:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__wstrb;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__Vfuncout;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__oldv;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__newv;
    CData/*3:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__wstrb;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__Vfuncout;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__oldv;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__newv;
    CData/*3:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__wstrb;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__Vfuncout;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__oldv;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__newv;
    CData/*3:0*/ __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__wstrb;
    CData/*7:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__17__Vfuncout;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__17__x;
    CData/*7:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__18__Vfuncout;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__18__x;
    CData/*7:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__19__Vfuncout;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__sat_i8__19__x;
    CData/*1:0*/ __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__region;
    IData/*31:0*/ __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__addr;
    CData/*7:0*/ __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__data;
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
    CData/*7:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__25__Vfuncout;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__25__x;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__Vfuncout;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x_in;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__bias_in;
    CData/*0:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__valid_elem;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__flags_in;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__27__Vfuncout;
    IData/*31:0*/ __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__27__x;
    CData/*6:0*/ __Vtableidx1;
    CData/*0:0*/ __Vdly__tinygpu_top__DOT__mem_cmd_valid_q;
    CData/*0:0*/ __Vdly__tinygpu_top__DOT__mem_read_pending_q;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__reg_bias_addr;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__reg_src0_addr;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__reg_dst_addr;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__reg_cmd_addr;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__reg_flags;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__reg_scale;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__reg_src1_addr;
    CData/*0:0*/ __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v0;
    CData/*0:0*/ __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v2;
    CData/*0:0*/ __Vdlyvdim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v4;
    IData/*31:0*/ __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v4;
    CData/*0:0*/ __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v4;
    CData/*0:0*/ __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v5;
    CData/*6:0*/ __Vdlyvdim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem__v0;
    CData/*7:0*/ __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem__v0;
    CData/*0:0*/ __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem__v0;
    CData/*6:0*/ __Vdlyvdim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem__v1;
    CData/*7:0*/ __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem__v1;
    CData/*6:0*/ __Vdlyvdim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem__v2;
    CData/*7:0*/ __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem__v2;
    CData/*6:0*/ __Vdlyvdim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem__v3;
    CData/*7:0*/ __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem__v3;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_o;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_o;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_o;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_o;
    CData/*1:0*/ __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q;
    CData/*7:0*/ __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8__v0;
    CData/*0:0*/ __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8__v0;
    CData/*7:0*/ __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8__v1;
    CData/*0:0*/ __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8__v1;
    CData/*7:0*/ __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8__v2;
    CData/*0:0*/ __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8__v2;
    CData/*7:0*/ __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8__v3;
    CData/*0:0*/ __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8__v3;
    IData/*31:0*/ __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q__v0;
    CData/*0:0*/ __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q__v0;
    IData/*31:0*/ __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q__v1;
    CData/*0:0*/ __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q__v1;
    IData/*31:0*/ __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q__v2;
    IData/*31:0*/ __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q__v3;
    IData/*31:0*/ __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q__v0;
    CData/*0:0*/ __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q__v0;
    IData/*31:0*/ __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i32__v0;
    IData/*31:0*/ __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q__v1;
    CData/*0:0*/ __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q__v1;
    IData/*31:0*/ __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i32__v1;
    IData/*31:0*/ __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q__v2;
    CData/*0:0*/ __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q__v2;
    IData/*31:0*/ __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i32__v2;
    IData/*31:0*/ __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q__v3;
    CData/*0:0*/ __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q__v3;
    IData/*31:0*/ __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i32__v3;
    CData/*0:0*/ __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q__v4;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_counters__DOT__cycle_cur_q;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_counters__DOT__active_cur_q;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_counters__DOT__stall_cur_q;
    // Body
    __Vdly__tinygpu_top__DOT__u_counters__DOT__stall_cur_q 
        = vlSelf->tinygpu_top__DOT__u_counters__DOT__stall_cur_q;
    __Vdly__tinygpu_top__DOT__reg_src1_addr = vlSelf->tinygpu_top__DOT__reg_src1_addr;
    __Vdly__tinygpu_top__DOT__reg_scale = vlSelf->tinygpu_top__DOT__reg_scale;
    __Vdly__tinygpu_top__DOT__reg_flags = vlSelf->tinygpu_top__DOT__reg_flags;
    __Vdly__tinygpu_top__DOT__reg_cmd_addr = vlSelf->tinygpu_top__DOT__reg_cmd_addr;
    __Vdly__tinygpu_top__DOT__reg_dst_addr = vlSelf->tinygpu_top__DOT__reg_dst_addr;
    __Vdly__tinygpu_top__DOT__reg_src0_addr = vlSelf->tinygpu_top__DOT__reg_src0_addr;
    __Vdly__tinygpu_top__DOT__reg_bias_addr = vlSelf->tinygpu_top__DOT__reg_bias_addr;
    __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem__v0 = 0U;
    __Vdly__tinygpu_top__DOT__u_counters__DOT__active_cur_q 
        = vlSelf->tinygpu_top__DOT__u_counters__DOT__active_cur_q;
    __Vdly__tinygpu_top__DOT__u_counters__DOT__cycle_cur_q 
        = vlSelf->tinygpu_top__DOT__u_counters__DOT__cycle_cur_q;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_o 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_o;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_o 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_o;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_o 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_o;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_o 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_o;
    __Vdly__tinygpu_top__DOT__mem_read_pending_q = vlSelf->tinygpu_top__DOT__mem_read_pending_q;
    __Vdly__tinygpu_top__DOT__mem_cmd_valid_q = vlSelf->tinygpu_top__DOT__mem_cmd_valid_q;
    __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v0 = 0U;
    __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v2 = 0U;
    __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v4 = 0U;
    __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v5 = 0U;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q;
    __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q__v0 = 0U;
    __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q__v1 = 0U;
    __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8__v0 = 0U;
    __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8__v1 = 0U;
    __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8__v2 = 0U;
    __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8__v3 = 0U;
    __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q__v0 = 0U;
    __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q__v1 = 0U;
    __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q__v2 = 0U;
    __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q__v3 = 0U;
    __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q__v4 = 0U;
    if (vlSelf->rst_n) {
        if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wr_en) {
            if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wstrb))) {
                __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__data 
                    = (0xffU & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wdata);
                __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__addr 
                    = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_addr;
                __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__region 
                    = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_region;
                if ((0U == (IData)(__Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__region))) {
                    if ((0x100U > __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__addr)) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_mem[(0xffU 
                                                                                & __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__addr)] 
                            = __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__data;
                    }
                } else if ((1U == (IData)(__Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__region))) {
                    if ((0x100U > __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__addr)) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_mem[(0xffU 
                                                                                & __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__addr)] 
                            = __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__data;
                    }
                } else if ((2U == (IData)(__Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__region))) {
                    if ((0x80U > __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__addr)) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem[(0x7fU 
                                                                                & __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__addr)] 
                            = __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__data;
                    }
                }
            }
            if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wstrb))) {
                __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__data 
                    = (0xffU & (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wdata 
                                >> 8U));
                __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__addr 
                    = ((IData)(1U) + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_addr));
                __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__region 
                    = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_region;
                if ((0U == (IData)(__Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__region))) {
                    if ((0x100U > __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__addr)) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_mem[(0xffU 
                                                                                & __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__addr)] 
                            = __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__data;
                    }
                } else if ((1U == (IData)(__Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__region))) {
                    if ((0x100U > __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__addr)) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_mem[(0xffU 
                                                                                & __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__addr)] 
                            = __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__data;
                    }
                } else if ((2U == (IData)(__Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__region))) {
                    if ((0x80U > __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__addr)) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem[(0x7fU 
                                                                                & __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__addr)] 
                            = __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__data;
                    }
                }
            }
            if ((4U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wstrb))) {
                __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__data 
                    = (0xffU & (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wdata 
                                >> 0x10U));
                __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__addr 
                    = ((IData)(2U) + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_addr));
                __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__region 
                    = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_region;
                if ((0U == (IData)(__Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__region))) {
                    if ((0x100U > __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__addr)) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_mem[(0xffU 
                                                                                & __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__addr)] 
                            = __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__data;
                    }
                } else if ((1U == (IData)(__Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__region))) {
                    if ((0x100U > __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__addr)) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_mem[(0xffU 
                                                                                & __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__addr)] 
                            = __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__data;
                    }
                } else if ((2U == (IData)(__Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__region))) {
                    if ((0x80U > __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__addr)) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem[(0x7fU 
                                                                                & __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__addr)] 
                            = __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__data;
                    }
                }
            }
            if ((8U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wstrb))) {
                __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__data 
                    = (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wdata 
                       >> 0x18U);
                __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__addr 
                    = ((IData)(3U) + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_addr));
                __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__region 
                    = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_region;
                if ((0U == (IData)(__Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__region))) {
                    if ((0x100U > __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__addr)) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_mem[(0xffU 
                                                                                & __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__addr)] 
                            = __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__data;
                    }
                } else if ((1U == (IData)(__Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__region))) {
                    if ((0x100U > __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__addr)) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_mem[(0xffU 
                                                                                & __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__addr)] 
                            = __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__data;
                    }
                } else if ((2U == (IData)(__Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__region))) {
                    if ((0x80U > __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__addr)) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem[(0x7fU 
                                                                                & __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__addr)] 
                            = __Vtask_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__write_byte_region__20__data;
                    }
                }
            }
        }
        if (vlSelf->tinygpu_top__DOT__cnt_cmd_start) {
            __Vdly__tinygpu_top__DOT__u_counters__DOT__stall_cur_q = 0U;
            __Vdly__tinygpu_top__DOT__u_counters__DOT__active_cur_q = 0U;
            __Vdly__tinygpu_top__DOT__u_counters__DOT__cycle_cur_q = 0U;
        } else {
            if (vlSelf->tinygpu_top__DOT__cnt_stall) {
                __Vdly__tinygpu_top__DOT__u_counters__DOT__stall_cur_q 
                    = ((IData)(1U) + vlSelf->tinygpu_top__DOT__u_counters__DOT__stall_cur_q);
            }
            if (((((7U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
                   | (0xeU == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) 
                  | (0xfU == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) 
                 | (0x10U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                __Vdly__tinygpu_top__DOT__u_counters__DOT__active_cur_q 
                    = ((IData)(1U) + vlSelf->tinygpu_top__DOT__u_counters__DOT__active_cur_q);
            }
            if ((((0U != (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
                  & (0x15U != (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) 
                 & (0x16U != (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                __Vdly__tinygpu_top__DOT__u_counters__DOT__cycle_cur_q 
                    = ((IData)(1U) + vlSelf->tinygpu_top__DOT__u_counters__DOT__cycle_cur_q);
            }
        }
        if (vlSelf->tinygpu_top__DOT__cnt_cmd_done) {
            vlSelf->tinygpu_top__DOT__stall_count_last 
                = vlSelf->tinygpu_top__DOT__u_counters__DOT__stall_cur_q;
            vlSelf->tinygpu_top__DOT__cmd_count_total 
                = ((IData)(1U) + vlSelf->tinygpu_top__DOT__cmd_count_total);
            vlSelf->tinygpu_top__DOT__active_count_last 
                = vlSelf->tinygpu_top__DOT__u_counters__DOT__active_cur_q;
            vlSelf->tinygpu_top__DOT__cycle_count_last 
                = vlSelf->tinygpu_top__DOT__u_counters__DOT__cycle_cur_q;
        }
        if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_en) {
            if ((0x80U > ((IData)(3U) + ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_addr) 
                                         << 2U)))) {
                __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem__v0 
                    = (0xffU & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_data);
                __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem__v0 = 1U;
                __Vdlyvdim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem__v0 
                    = (0x7fU & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_addr) 
                                << 2U));
                __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem__v1 
                    = (0xffU & (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_data 
                                >> 8U));
                __Vdlyvdim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem__v1 
                    = (0x7fU & ((IData)(1U) + ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_addr) 
                                               << 2U)));
                __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem__v2 
                    = (0xffU & (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_data 
                                >> 0x10U));
                __Vdlyvdim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem__v2 
                    = (0x7fU & ((IData)(2U) + ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_addr) 
                                               << 2U)));
                __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem__v3 
                    = (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_data 
                       >> 0x18U);
                __Vdlyvdim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem__v3 
                    = (0x7fU & ((IData)(3U) + ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_addr) 
                                               << 2U)));
            }
        }
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q 
            = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_d;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q 
            = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_d;
        if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__array_clear_acc) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_o = 0U;
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_o = 0U;
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_o = 0U;
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_o = 0U;
        } else {
            if ((((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__array_mac_en) 
                  & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask) 
                     >> 1U)) & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask) 
                                >> 1U))) {
                __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_o 
                    = (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_o 
                       + VL_EXTENDS_II(32,16, (0xffffU 
                                               & VL_MULS_III(16, 
                                                             (0xffffU 
                                                              & VL_EXTENDS_II(16,8, 
                                                                              vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__a_vec
                                                                              [1U])), 
                                                             (0xffffU 
                                                              & VL_EXTENDS_II(16,8, 
                                                                              vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__b_vec
                                                                              [1U]))))));
            }
            if ((((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__array_mac_en) 
                  & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask) 
                     >> 1U)) & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask))) {
                __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_o 
                    = (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_o 
                       + VL_EXTENDS_II(32,16, (0xffffU 
                                               & VL_MULS_III(16, 
                                                             (0xffffU 
                                                              & VL_EXTENDS_II(16,8, 
                                                                              vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__a_vec
                                                                              [1U])), 
                                                             (0xffffU 
                                                              & VL_EXTENDS_II(16,8, 
                                                                              vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__b_vec
                                                                              [0U]))))));
            }
            if ((((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__array_mac_en) 
                  & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask)) 
                 & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask) 
                    >> 1U))) {
                __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_o 
                    = (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_o 
                       + VL_EXTENDS_II(32,16, (0xffffU 
                                               & VL_MULS_III(16, 
                                                             (0xffffU 
                                                              & VL_EXTENDS_II(16,8, 
                                                                              vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__a_vec
                                                                              [0U])), 
                                                             (0xffffU 
                                                              & VL_EXTENDS_II(16,8, 
                                                                              vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__b_vec
                                                                              [1U]))))));
            }
            if ((((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__array_mac_en) 
                  & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask)) 
                 & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask))) {
                __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_o 
                    = (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_o 
                       + VL_EXTENDS_II(32,16, (0xffffU 
                                               & VL_MULS_III(16, 
                                                             (0xffffU 
                                                              & VL_EXTENDS_II(16,8, 
                                                                              vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__a_vec
                                                                              [0U])), 
                                                             (0xffffU 
                                                              & VL_EXTENDS_II(16,8, 
                                                                              vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__b_vec
                                                                              [0U]))))));
            }
        }
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q 
            = (6U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q));
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q 
            = (7U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q));
        if (((0U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q)) 
             & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_start))) {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind_q 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_q;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__base_addr_q 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_q;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows_q 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_q;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols_q 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_q;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__stride_bytes_q 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_q;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_q;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_base_q 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_q;
        }
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_done = 0U;
        if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q))) {
            if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q))) {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__x_shifted 
                    = ((8U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)
                        ? (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q)))
                            ? (((0x1fU >= (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q))
                                 ? VL_SHIFTRS_III(32,32,16, 
                                                  vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q
                                                  [0U]
                                                  [0U], (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q))
                                 : (- (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q
                                       [0U][0U] >> 0x1fU))) 
                               + VL_EXTENDS_II(32,16, (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q)))
                            : (((0x1fU >= (0xffffU 
                                           & (- (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q))))
                                 ? (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q
                                    [0U][0U] << (0xffffU 
                                                 & (- (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q))))
                                 : 0U) + VL_EXTENDS_II(32,16, (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q))))
                        : vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q
                       [0U][0U]);
                __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__25__x 
                    = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__x_shifted;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_busy = 0U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_done = 1U;
                __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q = 0U;
                __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__25__Vfuncout 
                    = (VL_LTS_III(32, 0x7fU, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__25__x)
                        ? 0x7fU : (VL_GTS_III(32, 0xffffff80U, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__25__x)
                                    ? 0x80U : (0xffU 
                                               & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__25__x)));
                __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8__v0 
                    = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__25__Vfuncout;
                __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8__v0 = 1U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__x_shifted 
                    = ((8U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)
                        ? (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q)))
                            ? (((0x1fU >= (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q))
                                 ? VL_SHIFTRS_III(32,32,16, 
                                                  vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q
                                                  [0U]
                                                  [1U], (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q))
                                 : (- (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q
                                       [0U][1U] >> 0x1fU))) 
                               + VL_EXTENDS_II(32,16, (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q)))
                            : (((0x1fU >= (0xffffU 
                                           & (- (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q))))
                                 ? (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q
                                    [0U][1U] << (0xffffU 
                                                 & (- (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q))))
                                 : 0U) + VL_EXTENDS_II(32,16, (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q))))
                        : vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q
                       [0U][1U]);
                __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__25__x 
                    = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__x_shifted;
                __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__25__Vfuncout 
                    = (VL_LTS_III(32, 0x7fU, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__25__x)
                        ? 0x7fU : (VL_GTS_III(32, 0xffffff80U, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__25__x)
                                    ? 0x80U : (0xffU 
                                               & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__25__x)));
                __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8__v1 
                    = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__25__Vfuncout;
                __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8__v1 = 1U;
                if ((8U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)) {
                    if (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q)))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__x_shifted 
                            = (((0x1fU >= (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q))
                                 ? VL_SHIFTRS_III(32,32,16, 
                                                  vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q
                                                  [1U]
                                                  [0U], (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q))
                                 : (- (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q
                                       [1U][0U] >> 0x1fU))) 
                               + VL_EXTENDS_II(32,16, (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q)));
                        __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__25__x 
                            = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__x_shifted;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__x_shifted 
                            = (((0x1fU >= (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q))
                                 ? VL_SHIFTRS_III(32,32,16, 
                                                  vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q
                                                  [1U]
                                                  [1U], (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q))
                                 : (- (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q
                                       [1U][1U] >> 0x1fU))) 
                               + VL_EXTENDS_II(32,16, (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q)));
                    } else {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__x_shifted 
                            = (((0x1fU >= (0xffffU 
                                           & (- (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q))))
                                 ? (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q
                                    [1U][0U] << (0xffffU 
                                                 & (- (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q))))
                                 : 0U) + VL_EXTENDS_II(32,16, (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q)));
                        __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__25__x 
                            = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__x_shifted;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__x_shifted 
                            = (((0x1fU >= (0xffffU 
                                           & (- (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q))))
                                 ? (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q
                                    [1U][1U] << (0xffffU 
                                                 & (- (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q))))
                                 : 0U) + VL_EXTENDS_II(32,16, (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q)));
                    }
                } else {
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__x_shifted 
                        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q
                        [1U][0U];
                    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__25__x 
                        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__x_shifted;
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__x_shifted 
                        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q
                        [1U][1U];
                }
                __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__25__Vfuncout 
                    = (VL_LTS_III(32, 0x7fU, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__25__x)
                        ? 0x7fU : (VL_GTS_III(32, 0xffffff80U, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__25__x)
                                    ? 0x80U : (0xffU 
                                               & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__25__x)));
                __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8__v2 
                    = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__25__Vfuncout;
                __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8__v2 = 1U;
                __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__25__x 
                    = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__x_shifted;
                __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__25__Vfuncout 
                    = (VL_LTS_III(32, 0x7fU, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__25__x)
                        ? 0x7fU : (VL_GTS_III(32, 0xffffff80U, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__25__x)
                                    ? 0x80U : (0xffU 
                                               & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__25__x)));
                __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8__v3 
                    = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__25__Vfuncout;
                __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8__v3 = 1U;
            } else {
                if ((8U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)) {
                    __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q__v0 
                        = VL_MULS_III(32, vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q
                                      [0U][0U], vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__scale_q);
                    __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q__v1 
                        = VL_MULS_III(32, vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q
                                      [0U][1U], vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__scale_q);
                    __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q__v2 
                        = VL_MULS_III(32, vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q
                                      [1U][0U], vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__scale_q);
                    __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q__v3 
                        = VL_MULS_III(32, vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q
                                      [1U][1U], vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__scale_q);
                } else {
                    __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q__v0 
                        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q
                        [0U][0U];
                    __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q__v1 
                        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q
                        [0U][1U];
                    __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q__v2 
                        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q
                        [1U][0U];
                    __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q__v3 
                        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q
                        [1U][1U];
                }
                __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q__v0 = 1U;
                __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q = 3U;
                __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q__v1 = 1U;
            }
        } else if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q))) {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__valid_elem 
                = (1U & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask) 
                         & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask)));
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__flags_in 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q;
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q = 2U;
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__valid_elem 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__valid_elem;
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__bias_in 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_epilogue__bias
                [0U];
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x_in 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_epilogue__c_in
                [0U][0U];
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x 
                = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x_in;
            if (__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__valid_elem) {
                if ((1U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__flags_in)) {
                    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x 
                        = (__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x 
                           + __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__bias_in);
                }
                if (((__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__flags_in 
                      >> 1U) & VL_GTS_III(32, 0U, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x))) {
                    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x = 0U;
                }
                if ((4U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__flags_in)) {
                    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__27__x 
                        = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x;
                    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__27__Vfuncout 
                        = (VL_GTS_III(32, 0xffffff80U, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__27__x)
                            ? 0xffffff80U : (VL_LTS_III(32, 0x7fU, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__27__x)
                                              ? 0x7fU
                                              : __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__27__x));
                    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x 
                        = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__27__Vfuncout;
                }
            } else {
                __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x = 0U;
            }
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__Vfuncout 
                = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__x_post 
                = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__Vfuncout;
            __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q__v0 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__x_post;
            __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q__v0 = 1U;
            __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i32__v0 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__x_post;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__valid_elem 
                = ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask) 
                   & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask) 
                      >> 1U));
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__flags_in 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q;
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__valid_elem 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__valid_elem;
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__bias_in 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_epilogue__bias
                [1U];
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x_in 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_epilogue__c_in
                [0U][1U];
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x 
                = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x_in;
            if (__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__valid_elem) {
                if ((1U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__flags_in)) {
                    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x 
                        = (__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x 
                           + __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__bias_in);
                }
                if (((__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__flags_in 
                      >> 1U) & VL_GTS_III(32, 0U, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x))) {
                    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x = 0U;
                }
                if ((4U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__flags_in)) {
                    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__27__x 
                        = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x;
                    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__27__Vfuncout 
                        = (VL_GTS_III(32, 0xffffff80U, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__27__x)
                            ? 0xffffff80U : (VL_LTS_III(32, 0x7fU, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__27__x)
                                              ? 0x7fU
                                              : __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__27__x));
                    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x 
                        = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__27__Vfuncout;
                }
            } else {
                __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x = 0U;
            }
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__Vfuncout 
                = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__x_post 
                = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__Vfuncout;
            __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q__v1 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__x_post;
            __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q__v1 = 1U;
            __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i32__v1 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__x_post;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__valid_elem 
                = (IData)((((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask) 
                            >> 1U) & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask)));
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__flags_in 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q;
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__valid_elem 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__valid_elem;
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__bias_in 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_epilogue__bias
                [0U];
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x_in 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_epilogue__c_in
                [1U][0U];
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x 
                = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x_in;
            if (__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__valid_elem) {
                if ((1U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__flags_in)) {
                    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x 
                        = (__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x 
                           + __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__bias_in);
                }
                if (((__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__flags_in 
                      >> 1U) & VL_GTS_III(32, 0U, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x))) {
                    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x = 0U;
                }
                if ((4U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__flags_in)) {
                    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__27__x 
                        = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x;
                    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__27__Vfuncout 
                        = (VL_GTS_III(32, 0xffffff80U, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__27__x)
                            ? 0xffffff80U : (VL_LTS_III(32, 0x7fU, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__27__x)
                                              ? 0x7fU
                                              : __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__27__x));
                    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x 
                        = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__27__Vfuncout;
                }
            } else {
                __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x = 0U;
            }
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__Vfuncout 
                = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__x_post 
                = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__Vfuncout;
            __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q__v2 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__x_post;
            __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q__v2 = 1U;
            __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i32__v2 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__x_post;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__valid_elem 
                = (1U & (((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask) 
                          & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask)) 
                         >> 1U));
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__flags_in 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q;
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__valid_elem 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__valid_elem;
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__bias_in 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_epilogue__bias
                [1U];
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x_in 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_epilogue__c_in
                [1U][1U];
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x 
                = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x_in;
            if (__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__valid_elem) {
                if ((1U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__flags_in)) {
                    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x 
                        = (__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x 
                           + __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__bias_in);
                }
                if (((__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__flags_in 
                      >> 1U) & VL_GTS_III(32, 0U, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x))) {
                    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x = 0U;
                }
                if ((4U & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__flags_in)) {
                    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__27__x 
                        = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x;
                    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__27__Vfuncout 
                        = (VL_GTS_III(32, 0xffffff80U, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__27__x)
                            ? 0xffffff80U : (VL_LTS_III(32, 0x7fU, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__27__x)
                                              ? 0x7fU
                                              : __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__27__x));
                    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x 
                        = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__27__Vfuncout;
                }
            } else {
                __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x = 0U;
            }
            __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__Vfuncout 
                = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__x;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__x_post 
                = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__26__Vfuncout;
            __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q__v3 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__x_post;
            __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q__v3 = 1U;
            __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i32__v3 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__x_post;
        } else {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_busy = 0U;
            if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_start) {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_busy = 1U;
                __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q = 1U;
            }
        }
        if (((IData)(vlSelf->tinygpu_top__DOT__mem_stage_ready) 
             & (IData)(vlSelf->tinygpu_top__DOT__mem_req_raw))) {
            if ((2U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                vlSelf->tinygpu_top__DOT__mem_cmd_wstrb_q = 0U;
                vlSelf->tinygpu_top__DOT__mem_cmd_wdata_q = 0U;
                vlSelf->tinygpu_top__DOT__mem_cmd_addr_q 
                    = (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr_q 
                       + ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q) 
                          << 2U));
            } else if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_vec) {
                vlSelf->tinygpu_top__DOT__mem_cmd_wstrb_q 
                    = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wstrb;
                vlSelf->tinygpu_top__DOT__mem_cmd_wdata_q 
                    = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wdata;
                vlSelf->tinygpu_top__DOT__mem_cmd_addr_q 
                    = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_addr;
            } else if ((9U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                vlSelf->tinygpu_top__DOT__mem_cmd_wstrb_q = 0U;
                vlSelf->tinygpu_top__DOT__mem_cmd_wdata_q = 0U;
                vlSelf->tinygpu_top__DOT__mem_cmd_addr_q 
                    = (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q 
                       + ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q) 
                          << 2U));
            } else {
                vlSelf->tinygpu_top__DOT__mem_cmd_wstrb_q 
                    = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wstrb;
                vlSelf->tinygpu_top__DOT__mem_cmd_wdata_q 
                    = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wdata;
                vlSelf->tinygpu_top__DOT__mem_cmd_addr_q 
                    = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_addr;
            }
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d;
            vlSelf->tinygpu_top__DOT__mem_rvalid_stage_q = 0U;
            __Vdly__tinygpu_top__DOT__mem_cmd_valid_q = 1U;
        } else {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d;
            vlSelf->tinygpu_top__DOT__mem_rvalid_stage_q = 0U;
        }
        if (((IData)(vlSelf->tinygpu_top__DOT__mem_cmd_valid_q) 
             & (IData)(vlSelf->mem_ready))) {
            __Vdly__tinygpu_top__DOT__mem_cmd_valid_q = 0U;
            if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__mem_cmd_we_q)))) {
                __Vdly__tinygpu_top__DOT__mem_read_pending_q = 1U;
            }
        }
        if (((IData)(vlSelf->tinygpu_top__DOT__mem_stage_ready) 
             & (IData)(vlSelf->tinygpu_top__DOT__mem_req_raw))) {
            vlSelf->tinygpu_top__DOT__mem_cmd_we_q 
                = ((2U != (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
                   & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_vec)
                       ? (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_we)
                       : ((9U != (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
                          & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_we))));
        }
        if (vlSelf->tinygpu_top__DOT__reg_soft_reset) {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_y_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_x_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_q = 0U;
            vlSelf->tinygpu_top__DOT__u_regs__DOT__irq_pending_q = 0U;
            __Vdly__tinygpu_top__DOT__reg_src1_addr = 0U;
            __Vdly__tinygpu_top__DOT__reg_scale = 0U;
            __Vdly__tinygpu_top__DOT__reg_flags = 0U;
            __Vdly__tinygpu_top__DOT__reg_cmd_addr = 0U;
            __Vdly__tinygpu_top__DOT__reg_dst_addr = 0U;
            __Vdly__tinygpu_top__DOT__reg_src0_addr = 0U;
            __Vdly__tinygpu_top__DOT__reg_bias_addr = 0U;
            vlSelf->tinygpu_top__DOT__u_regs__DOT__done_sticky_q = 0U;
            vlSelf->tinygpu_top__DOT__reg_irq_enable = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q = 0U;
            vlSelf->tinygpu_top__DOT__reg_direct_mode = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_scaled_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_addr_q = 0U;
            __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v0 = 1U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__scale_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q = 0U;
            vlSelf->tinygpu_top__DOT__reg_opcode = 0U;
            vlSelf->tinygpu_top__DOT__reg_dim_m = 0U;
            vlSelf->tinygpu_top__DOT__reg_dim_n = 0U;
            vlSelf->tinygpu_top__DOT__reg_dim_k = 0U;
            vlSelf->tinygpu_top__DOT__reg_stride0 = 0U;
            vlSelf->tinygpu_top__DOT__reg_stride1 = 0U;
            vlSelf->tinygpu_top__DOT__reg_stride_dst = 0U;
            vlSelf->tinygpu_top__DOT__reg_shift = 0U;
            vlSelf->tinygpu_top__DOT__reg_zero_point = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q = 0U;
        } else {
            if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_store_cmd) {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_q 
                    = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_next;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_q 
                    = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_next;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_addr_q 
                    = ((0x10U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)
                        ? (0xfffffffcU & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr)
                        : vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr);
            }
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw_q 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8_q 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8;
            if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__load_vec_y_reg) {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_y_q 
                    = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_load_byte;
            }
            if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__load_vec_x_reg) {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_x_q 
                    = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_load_byte;
            }
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_q 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_d;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_q 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_d;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_q 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_d;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_q 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_d;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_q 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_d;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_q 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_d;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_q 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_d;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_q 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_d;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_q 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_d;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_q 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_d;
            if (vlSelf->tinygpu_top__DOT__ctrl_done) {
                vlSelf->tinygpu_top__DOT__u_regs__DOT__irq_pending_q = 1U;
                vlSelf->tinygpu_top__DOT__u_regs__DOT__done_sticky_q = 1U;
            }
            if (vlSelf->tinygpu_top__DOT__reg_start_pulse) {
                vlSelf->tinygpu_top__DOT__u_regs__DOT__done_sticky_q = 0U;
            }
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_d;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_d;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_scaled_q 
                = VL_MULS_III(32, vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post_q, vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__scale_q);
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d;
            if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_bias_regs) {
                __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v2 = 1U;
            } else if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__load_bias_reg) {
                __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v4 
                    = vlSelf->tinygpu_top__DOT__mem_rdata_stage_q;
                __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v4 = 1U;
                __Vdlyvdim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v4 
                    = (1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q));
            }
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode_q 
                = ((((3U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)) 
                     | (4U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) 
                    | (5U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) 
                   | (6U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)));
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q 
                = ((2U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))
                    ? 1U : (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q));
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_d;
            if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd_addr) {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr_q 
                    = vlSelf->tinygpu_top__DOT__reg_cmd_addr;
            }
            if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_dma_cmd) {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_q 
                    = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_cmd_n;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_q 
                    = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_cmd_n;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_q 
                    = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_cmd_n;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_q 
                    = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_cmd_n;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_q 
                    = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_cmd_n;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_q 
                    = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_cmd_n;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_q 
                    = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_cmd_n;
            }
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post_q 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d;
            if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd) {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q 
                    = vlSelf->tinygpu_top__DOT__reg_opcode;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q 
                    = vlSelf->tinygpu_top__DOT__reg_flags;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q 
                    = vlSelf->tinygpu_top__DOT__reg_src0_addr;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q 
                    = vlSelf->tinygpu_top__DOT__reg_src1_addr;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr_q 
                    = vlSelf->tinygpu_top__DOT__reg_bias_addr;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr_q 
                    = vlSelf->tinygpu_top__DOT__reg_dst_addr;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q 
                    = vlSelf->tinygpu_top__DOT__reg_dim_m;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q 
                    = vlSelf->tinygpu_top__DOT__reg_dim_n;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q 
                    = vlSelf->tinygpu_top__DOT__reg_dim_k;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q 
                    = vlSelf->tinygpu_top__DOT__reg_stride0;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q 
                    = vlSelf->tinygpu_top__DOT__reg_stride1;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q 
                    = vlSelf->tinygpu_top__DOT__reg_stride_dst;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__scale_q 
                    = vlSelf->tinygpu_top__DOT__reg_scale;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q 
                    = vlSelf->tinygpu_top__DOT__reg_shift;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q 
                    = vlSelf->tinygpu_top__DOT__reg_zero_point;
            }
            if (((IData)(vlSelf->mmio_valid) & (IData)(vlSelf->mmio_we))) {
                if ((1U & (~ (vlSelf->mmio_addr >> 7U)))) {
                    if ((0x40U & vlSelf->mmio_addr)) {
                        if ((1U & (~ (vlSelf->mmio_addr 
                                      >> 5U)))) {
                            if ((0x10U & vlSelf->mmio_addr)) {
                                if ((1U & (~ (vlSelf->mmio_addr 
                                              >> 3U)))) {
                                    if ((4U & vlSelf->mmio_addr)) {
                                        if ((1U & (~ 
                                                   (vlSelf->mmio_addr 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ vlSelf->mmio_addr))) {
                                                if (
                                                    (1U 
                                                     & vlSelf->mmio_wdata)) {
                                                    vlSelf->tinygpu_top__DOT__u_regs__DOT__irq_pending_q = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((1U & (~ (vlSelf->mmio_addr 
                                          >> 4U)))) {
                                if ((1U & (~ (vlSelf->mmio_addr 
                                              >> 3U)))) {
                                    if ((1U & (~ (vlSelf->mmio_addr 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->mmio_addr 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ vlSelf->mmio_addr))) {
                                                vlSelf->tinygpu_top__DOT__reg_shift 
                                                    = 
                                                    (vlSelf->tinygpu_top__DOT__u_regs__DOT__shiftzp_next_w 
                                                     >> 0x10U);
                                                vlSelf->tinygpu_top__DOT__reg_zero_point 
                                                    = 
                                                    (0xffffU 
                                                     & vlSelf->tinygpu_top__DOT__u_regs__DOT__shiftzp_next_w);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((1U & (~ (vlSelf->mmio_addr 
                                  >> 6U)))) {
                        if ((1U & (~ (vlSelf->mmio_addr 
                                      >> 5U)))) {
                            if ((0x10U & vlSelf->mmio_addr)) {
                                if ((1U & (~ (vlSelf->mmio_addr 
                                              >> 3U)))) {
                                    if ((4U & vlSelf->mmio_addr)) {
                                        if ((1U & (~ 
                                                   (vlSelf->mmio_addr 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ vlSelf->mmio_addr))) {
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__wstrb 
                                                    = vlSelf->mmio_wstrb;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__newv 
                                                    = vlSelf->mmio_wdata;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__oldv 
                                                    = vlSelf->tinygpu_top__DOT__reg_src1_addr;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__Vfuncout 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__oldv;
                                                if (
                                                    (1U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__Vfuncout 
                                                        = 
                                                        ((0xffffff00U 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__Vfuncout) 
                                                         | (0xffU 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__newv));
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__Vfuncout 
                                                        = 
                                                        ((0xffff00ffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__Vfuncout) 
                                                         | (0xff00U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__newv));
                                                }
                                                if (
                                                    (4U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__Vfuncout 
                                                        = 
                                                        ((0xff00ffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__Vfuncout) 
                                                         | (0xff0000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__newv));
                                                }
                                                if (
                                                    (8U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__Vfuncout 
                                                        = 
                                                        ((0xffffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__Vfuncout) 
                                                         | (0xff000000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__newv));
                                                }
                                                __Vdly__tinygpu_top__DOT__reg_src1_addr 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__Vfuncout;
                                            }
                                        }
                                    }
                                    if ((1U & (~ (vlSelf->mmio_addr 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->mmio_addr 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ vlSelf->mmio_addr))) {
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__wstrb 
                                                    = vlSelf->mmio_wstrb;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__newv 
                                                    = vlSelf->mmio_wdata;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__oldv 
                                                    = vlSelf->tinygpu_top__DOT__reg_src0_addr;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__Vfuncout 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__oldv;
                                                if (
                                                    (1U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__Vfuncout 
                                                        = 
                                                        ((0xffffff00U 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__Vfuncout) 
                                                         | (0xffU 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__newv));
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__Vfuncout 
                                                        = 
                                                        ((0xffff00ffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__Vfuncout) 
                                                         | (0xff00U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__newv));
                                                }
                                                if (
                                                    (4U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__Vfuncout 
                                                        = 
                                                        ((0xff00ffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__Vfuncout) 
                                                         | (0xff0000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__newv));
                                                }
                                                if (
                                                    (8U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__Vfuncout 
                                                        = 
                                                        ((0xffffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__Vfuncout) 
                                                         | (0xff000000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__newv));
                                                }
                                                __Vdly__tinygpu_top__DOT__reg_src0_addr 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__Vfuncout;
                                            }
                                        }
                                    }
                                }
                                if ((8U & vlSelf->mmio_addr)) {
                                    if ((4U & vlSelf->mmio_addr)) {
                                        if ((1U & (~ 
                                                   (vlSelf->mmio_addr 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ vlSelf->mmio_addr))) {
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__wstrb 
                                                    = vlSelf->mmio_wstrb;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__newv 
                                                    = vlSelf->mmio_wdata;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__oldv 
                                                    = vlSelf->tinygpu_top__DOT__reg_dst_addr;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__Vfuncout 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__oldv;
                                                if (
                                                    (1U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__Vfuncout 
                                                        = 
                                                        ((0xffffff00U 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__Vfuncout) 
                                                         | (0xffU 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__newv));
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__Vfuncout 
                                                        = 
                                                        ((0xffff00ffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__Vfuncout) 
                                                         | (0xff00U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__newv));
                                                }
                                                if (
                                                    (4U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__Vfuncout 
                                                        = 
                                                        ((0xff00ffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__Vfuncout) 
                                                         | (0xff0000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__newv));
                                                }
                                                if (
                                                    (8U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__Vfuncout 
                                                        = 
                                                        ((0xffffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__Vfuncout) 
                                                         | (0xff000000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__newv));
                                                }
                                                __Vdly__tinygpu_top__DOT__reg_dst_addr 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__Vfuncout;
                                            }
                                        }
                                    }
                                    if ((1U & (~ (vlSelf->mmio_addr 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->mmio_addr 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ vlSelf->mmio_addr))) {
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__wstrb 
                                                    = vlSelf->mmio_wstrb;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__newv 
                                                    = vlSelf->mmio_wdata;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__oldv 
                                                    = vlSelf->tinygpu_top__DOT__reg_bias_addr;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__Vfuncout 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__oldv;
                                                if (
                                                    (1U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__Vfuncout 
                                                        = 
                                                        ((0xffffff00U 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__Vfuncout) 
                                                         | (0xffU 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__newv));
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__Vfuncout 
                                                        = 
                                                        ((0xffff00ffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__Vfuncout) 
                                                         | (0xff00U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__newv));
                                                }
                                                if (
                                                    (4U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__Vfuncout 
                                                        = 
                                                        ((0xff00ffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__Vfuncout) 
                                                         | (0xff0000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__newv));
                                                }
                                                if (
                                                    (8U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__Vfuncout 
                                                        = 
                                                        ((0xffffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__Vfuncout) 
                                                         | (0xff000000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__newv));
                                                }
                                                __Vdly__tinygpu_top__DOT__reg_bias_addr 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__Vfuncout;
                                            }
                                        }
                                    }
                                }
                            }
                            if ((1U & (~ (vlSelf->mmio_addr 
                                          >> 4U)))) {
                                if ((8U & vlSelf->mmio_addr)) {
                                    if ((1U & (~ (vlSelf->mmio_addr 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->mmio_addr 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ vlSelf->mmio_addr))) {
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__wstrb 
                                                    = vlSelf->mmio_wstrb;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__newv 
                                                    = vlSelf->mmio_wdata;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__oldv 
                                                    = vlSelf->tinygpu_top__DOT__reg_cmd_addr;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__Vfuncout 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__oldv;
                                                if (
                                                    (1U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__Vfuncout 
                                                        = 
                                                        ((0xffffff00U 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__Vfuncout) 
                                                         | (0xffU 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__newv));
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__Vfuncout 
                                                        = 
                                                        ((0xffff00ffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__Vfuncout) 
                                                         | (0xff00U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__newv));
                                                }
                                                if (
                                                    (4U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__Vfuncout 
                                                        = 
                                                        ((0xff00ffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__Vfuncout) 
                                                         | (0xff0000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__newv));
                                                }
                                                if (
                                                    (8U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__Vfuncout 
                                                        = 
                                                        ((0xffffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__Vfuncout) 
                                                         | (0xff000000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__newv));
                                                }
                                                __Vdly__tinygpu_top__DOT__reg_cmd_addr 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__Vfuncout;
                                            }
                                        }
                                    }
                                    if ((4U & vlSelf->mmio_addr)) {
                                        if ((1U & (~ 
                                                   (vlSelf->mmio_addr 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ vlSelf->mmio_addr))) {
                                                vlSelf->tinygpu_top__DOT__reg_opcode 
                                                    = 
                                                    (0xffU 
                                                     & vlSelf->tinygpu_top__DOT__u_regs__DOT__direct_op_next_w);
                                            }
                                        }
                                    }
                                }
                                if ((1U & (~ (vlSelf->mmio_addr 
                                              >> 3U)))) {
                                    if ((1U & (~ (vlSelf->mmio_addr 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->mmio_addr 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ vlSelf->mmio_addr))) {
                                                vlSelf->tinygpu_top__DOT__reg_irq_enable 
                                                    = 
                                                    (1U 
                                                     & (vlSelf->tinygpu_top__DOT__u_regs__DOT__ctrl_next_w 
                                                        >> 2U));
                                                vlSelf->tinygpu_top__DOT__reg_direct_mode 
                                                    = 
                                                    (1U 
                                                     & (vlSelf->tinygpu_top__DOT__u_regs__DOT__ctrl_next_w 
                                                        >> 3U));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((0x20U & vlSelf->mmio_addr)) {
                            if ((0x10U & vlSelf->mmio_addr)) {
                                if ((8U & vlSelf->mmio_addr)) {
                                    if ((4U & vlSelf->mmio_addr)) {
                                        if ((1U & (~ 
                                                   (vlSelf->mmio_addr 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ vlSelf->mmio_addr))) {
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__wstrb 
                                                    = vlSelf->mmio_wstrb;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__newv 
                                                    = vlSelf->mmio_wdata;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__oldv 
                                                    = vlSelf->tinygpu_top__DOT__reg_scale;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__Vfuncout 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__oldv;
                                                if (
                                                    (1U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__Vfuncout 
                                                        = 
                                                        ((0xffffff00U 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__Vfuncout) 
                                                         | (0xffU 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__newv));
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__Vfuncout 
                                                        = 
                                                        ((0xffff00ffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__Vfuncout) 
                                                         | (0xff00U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__newv));
                                                }
                                                if (
                                                    (4U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__Vfuncout 
                                                        = 
                                                        ((0xff00ffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__Vfuncout) 
                                                         | (0xff0000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__newv));
                                                }
                                                if (
                                                    (8U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__Vfuncout 
                                                        = 
                                                        ((0xffffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__Vfuncout) 
                                                         | (0xff000000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__newv));
                                                }
                                                __Vdly__tinygpu_top__DOT__reg_scale 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__Vfuncout;
                                            }
                                        }
                                    }
                                    if ((1U & (~ (vlSelf->mmio_addr 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->mmio_addr 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ vlSelf->mmio_addr))) {
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__wstrb 
                                                    = vlSelf->mmio_wstrb;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__newv 
                                                    = vlSelf->mmio_wdata;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__oldv 
                                                    = vlSelf->tinygpu_top__DOT__reg_flags;
                                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__Vfuncout 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__oldv;
                                                if (
                                                    (1U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__Vfuncout 
                                                        = 
                                                        ((0xffffff00U 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__Vfuncout) 
                                                         | (0xffU 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__newv));
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__Vfuncout 
                                                        = 
                                                        ((0xffff00ffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__Vfuncout) 
                                                         | (0xff00U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__newv));
                                                }
                                                if (
                                                    (4U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__Vfuncout 
                                                        = 
                                                        ((0xff00ffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__Vfuncout) 
                                                         | (0xff0000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__newv));
                                                }
                                                if (
                                                    (8U 
                                                     & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__wstrb))) {
                                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__Vfuncout 
                                                        = 
                                                        ((0xffffffU 
                                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__Vfuncout) 
                                                         | (0xff000000U 
                                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__newv));
                                                }
                                                __Vdly__tinygpu_top__DOT__reg_flags 
                                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__Vfuncout;
                                            }
                                        }
                                    }
                                }
                                if ((1U & (~ (vlSelf->mmio_addr 
                                              >> 3U)))) {
                                    if ((1U & (~ (vlSelf->mmio_addr 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->mmio_addr 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ vlSelf->mmio_addr))) {
                                                vlSelf->tinygpu_top__DOT__reg_stride1 
                                                    = 
                                                    (0xffffU 
                                                     & vlSelf->tinygpu_top__DOT__u_regs__DOT__stride1_next_w);
                                            }
                                        }
                                    }
                                    if ((4U & vlSelf->mmio_addr)) {
                                        if ((1U & (~ 
                                                   (vlSelf->mmio_addr 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ vlSelf->mmio_addr))) {
                                                vlSelf->tinygpu_top__DOT__reg_stride_dst 
                                                    = 
                                                    (0xffffU 
                                                     & vlSelf->tinygpu_top__DOT__u_regs__DOT__stride_dst_next_w);
                                            }
                                        }
                                    }
                                }
                            }
                            if ((1U & (~ (vlSelf->mmio_addr 
                                          >> 4U)))) {
                                if ((1U & (~ (vlSelf->mmio_addr 
                                              >> 3U)))) {
                                    if ((1U & (~ (vlSelf->mmio_addr 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->mmio_addr 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ vlSelf->mmio_addr))) {
                                                vlSelf->tinygpu_top__DOT__reg_dim_m 
                                                    = 
                                                    (0xffffU 
                                                     & vlSelf->tinygpu_top__DOT__u_regs__DOT__dim_m_next_w);
                                            }
                                        }
                                    }
                                    if ((4U & vlSelf->mmio_addr)) {
                                        if ((1U & (~ 
                                                   (vlSelf->mmio_addr 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ vlSelf->mmio_addr))) {
                                                vlSelf->tinygpu_top__DOT__reg_dim_n 
                                                    = 
                                                    (0xffffU 
                                                     & vlSelf->tinygpu_top__DOT__u_regs__DOT__dim_n_next_w);
                                            }
                                        }
                                    }
                                }
                                if ((8U & vlSelf->mmio_addr)) {
                                    if ((1U & (~ (vlSelf->mmio_addr 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->mmio_addr 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ vlSelf->mmio_addr))) {
                                                vlSelf->tinygpu_top__DOT__reg_dim_k 
                                                    = 
                                                    (0xffffU 
                                                     & vlSelf->tinygpu_top__DOT__u_regs__DOT__dim_k_next_w);
                                            }
                                        }
                                    }
                                    if ((4U & vlSelf->mmio_addr)) {
                                        if ((1U & (~ 
                                                   (vlSelf->mmio_addr 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ vlSelf->mmio_addr))) {
                                                vlSelf->tinygpu_top__DOT__reg_stride0 
                                                    = 
                                                    (0xffffU 
                                                     & vlSelf->tinygpu_top__DOT__u_regs__DOT__stride0_next_w);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_cmd_fields) {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q = 0U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q = 0U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q = 0U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q = 0U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr_q = 0U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr_q = 0U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q = 0U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q = 0U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q = 0U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q = 0U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q = 0U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q = 0U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__scale_q = 0U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q = 0U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q = 0U;
            }
            if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__load_desc_word) {
                if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q) 
                              >> 4U)))) {
                    if ((8U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                        if ((4U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                            if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q 
                                        = (vlSelf->tinygpu_top__DOT__mem_rdata_stage_q 
                                           >> 0x10U);
                                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q 
                                        = (0xffffU 
                                           & vlSelf->tinygpu_top__DOT__mem_rdata_stage_q);
                                } else {
                                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__scale_q 
                                        = vlSelf->tinygpu_top__DOT__mem_rdata_stage_q;
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                            if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q 
                                    = (0xffffU & vlSelf->tinygpu_top__DOT__mem_rdata_stage_q);
                            } else {
                                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q 
                                    = (0xffffU & vlSelf->tinygpu_top__DOT__mem_rdata_stage_q);
                            }
                        } else if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q 
                                = (0xffffU & vlSelf->tinygpu_top__DOT__mem_rdata_stage_q);
                        } else {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q 
                                = (0xffffU & vlSelf->tinygpu_top__DOT__mem_rdata_stage_q);
                        }
                    } else if ((4U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                        if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                            if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q 
                                    = (0xffffU & vlSelf->tinygpu_top__DOT__mem_rdata_stage_q);
                            } else {
                                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q 
                                    = (0xffffU & vlSelf->tinygpu_top__DOT__mem_rdata_stage_q);
                            }
                        } else if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr_q 
                                = vlSelf->tinygpu_top__DOT__mem_rdata_stage_q;
                        } else {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr_q 
                                = vlSelf->tinygpu_top__DOT__mem_rdata_stage_q;
                        }
                    } else if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                        if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q 
                                = vlSelf->tinygpu_top__DOT__mem_rdata_stage_q;
                        } else {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q 
                                = vlSelf->tinygpu_top__DOT__mem_rdata_stage_q;
                        }
                    } else if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q 
                            = vlSelf->tinygpu_top__DOT__mem_rdata_stage_q;
                    } else {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q 
                            = (0xffU & vlSelf->tinygpu_top__DOT__mem_rdata_stage_q);
                    }
                }
            }
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_d;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d;
        }
        if (((IData)(vlSelf->tinygpu_top__DOT__mem_read_pending_q) 
             & (IData)(vlSelf->mem_rvalid))) {
            __Vdly__tinygpu_top__DOT__mem_read_pending_q = 0U;
            vlSelf->tinygpu_top__DOT__mem_rdata_stage_q 
                = vlSelf->mem_rdata;
            vlSelf->tinygpu_top__DOT__mem_rvalid_stage_q = 1U;
        }
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q 
            = ((~ (IData)(vlSelf->tinygpu_top__DOT__reg_soft_reset)) 
               & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d));
    } else {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk1__DOT__i = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk2__DOT__i = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk3__DOT__i = 0U;
        while (VL_GTS_III(32, 0x100U, vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk1__DOT__i)) {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_mem[(0xffU 
                                                                          & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk1__DOT__i)] = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk1__DOT__i);
        }
        while (VL_GTS_III(32, 0x100U, vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk2__DOT__i)) {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_mem[(0xffU 
                                                                          & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk2__DOT__i)] = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk2__DOT__i);
        }
        while (VL_GTS_III(32, 0x80U, vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk3__DOT__i)) {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem[(0x7fU 
                                                                          & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk3__DOT__i)] = 0U;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk3__DOT__i);
        }
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_y_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_x_q = 0U;
        __Vdly__tinygpu_top__DOT__u_counters__DOT__stall_cur_q = 0U;
        vlSelf->tinygpu_top__DOT__stall_count_last = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_q = 0U;
        vlSelf->tinygpu_top__DOT__cmd_count_total = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_q = 0U;
        vlSelf->tinygpu_top__DOT__u_regs__DOT__irq_pending_q = 0U;
        __Vdly__tinygpu_top__DOT__reg_src1_addr = 0U;
        __Vdly__tinygpu_top__DOT__reg_scale = 0U;
        __Vdly__tinygpu_top__DOT__reg_flags = 0U;
        __Vdly__tinygpu_top__DOT__reg_cmd_addr = 0U;
        __Vdly__tinygpu_top__DOT__reg_dst_addr = 0U;
        __Vdly__tinygpu_top__DOT__reg_src0_addr = 0U;
        __Vdly__tinygpu_top__DOT__reg_bias_addr = 0U;
        vlSelf->tinygpu_top__DOT__u_regs__DOT__done_sticky_q = 0U;
        vlSelf->tinygpu_top__DOT__reg_irq_enable = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q = 0U;
        vlSelf->tinygpu_top__DOT__reg_direct_mode = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q = 0U;
        __Vdly__tinygpu_top__DOT__u_counters__DOT__active_cur_q = 0U;
        vlSelf->tinygpu_top__DOT__active_count_last = 0U;
        __Vdly__tinygpu_top__DOT__u_counters__DOT__cycle_cur_q = 0U;
        vlSelf->tinygpu_top__DOT__cycle_count_last = 0U;
        vlSelf->tinygpu_top__DOT__mem_cmd_wstrb_q = 0U;
        vlSelf->tinygpu_top__DOT__mem_cmd_wdata_q = 0U;
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_o = 0U;
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_o = 0U;
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_o = 0U;
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_o = 0U;
        vlSelf->tinygpu_top__DOT__mem_cmd_addr_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__base_addr_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__stride_bytes_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_base_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_scaled_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_addr_q = 0U;
        __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v5 = 1U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode_q = 0U;
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_busy = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_done = 0U;
        __Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q__v4 = 1U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__scale_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q = 0U;
        vlSelf->tinygpu_top__DOT__reg_opcode = 0U;
        vlSelf->tinygpu_top__DOT__reg_dim_m = 0U;
        vlSelf->tinygpu_top__DOT__reg_dim_n = 0U;
        vlSelf->tinygpu_top__DOT__reg_dim_k = 0U;
        vlSelf->tinygpu_top__DOT__reg_stride0 = 0U;
        vlSelf->tinygpu_top__DOT__reg_stride1 = 0U;
        vlSelf->tinygpu_top__DOT__reg_stride_dst = 0U;
        vlSelf->tinygpu_top__DOT__reg_shift = 0U;
        vlSelf->tinygpu_top__DOT__reg_zero_point = 0U;
        __Vdly__tinygpu_top__DOT__mem_cmd_valid_q = 0U;
        __Vdly__tinygpu_top__DOT__mem_read_pending_q = 0U;
        vlSelf->tinygpu_top__DOT__mem_rdata_stage_q = 0U;
        vlSelf->tinygpu_top__DOT__mem_rvalid_stage_q = 0U;
        vlSelf->tinygpu_top__DOT__mem_cmd_we_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q = 0U;
    }
    __Vtableidx1 = (((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__set_unsupported_format) 
                     << 6U) | (((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__set_memory_error) 
                                << 5U) | (((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__set_shape_error) 
                                           << 4U) | 
                                          (((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__set_illegal_opcode) 
                                            << 3U) 
                                           | (((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_status) 
                                               << 2U) 
                                              | (((IData)(vlSelf->tinygpu_top__DOT__reg_soft_reset) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->rst_n)))))));
    if ((1U & Vtinygpu_top__ConstPool__TABLE_h05cb3c31_0
         [__Vtableidx1])) {
        vlSelf->tinygpu_top__DOT__ctrl_illegal_opcode 
            = Vtinygpu_top__ConstPool__TABLE_hd1999c55_0
            [__Vtableidx1];
    }
    if ((2U & Vtinygpu_top__ConstPool__TABLE_h05cb3c31_0
         [__Vtableidx1])) {
        vlSelf->tinygpu_top__DOT__ctrl_shape_error 
            = Vtinygpu_top__ConstPool__TABLE_h678df398_0
            [__Vtableidx1];
    }
    if ((4U & Vtinygpu_top__ConstPool__TABLE_h05cb3c31_0
         [__Vtableidx1])) {
        vlSelf->tinygpu_top__DOT__ctrl_memory_error 
            = Vtinygpu_top__ConstPool__TABLE_hdb2c2e4e_0
            [__Vtableidx1];
    }
    if ((8U & Vtinygpu_top__ConstPool__TABLE_h05cb3c31_0
         [__Vtableidx1])) {
        vlSelf->tinygpu_top__DOT__ctrl_unsupported_format 
            = Vtinygpu_top__ConstPool__TABLE_h98b377a8_0
            [__Vtableidx1];
    }
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_q 
        = ((IData)(vlSelf->rst_n) & ((~ (IData)(vlSelf->tinygpu_top__DOT__reg_soft_reset)) 
                                     & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d)));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q 
        = ((IData)(vlSelf->rst_n) & ((~ (IData)(vlSelf->tinygpu_top__DOT__reg_soft_reset)) 
                                     & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d)));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q 
        = ((IData)(vlSelf->rst_n) & ((~ (IData)(vlSelf->tinygpu_top__DOT__reg_soft_reset)) 
                                     & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d)));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q 
        = ((IData)(vlSelf->rst_n) & ((~ (IData)(vlSelf->tinygpu_top__DOT__reg_soft_reset)) 
                                     & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d)));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_q 
        = ((IData)(vlSelf->rst_n) & ((~ (IData)(vlSelf->tinygpu_top__DOT__reg_soft_reset)) 
                                     & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d)));
    vlSelf->tinygpu_top__DOT__u_counters__DOT__stall_cur_q 
        = __Vdly__tinygpu_top__DOT__u_counters__DOT__stall_cur_q;
    if (__Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem__v0) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem[__Vdlyvdim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem__v0] 
            = __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem__v0;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem[__Vdlyvdim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem__v1] 
            = __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem__v1;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem[__Vdlyvdim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem__v2] 
            = __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem__v2;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem[__Vdlyvdim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem__v3] 
            = __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem__v3;
    }
    vlSelf->tinygpu_top__DOT__u_counters__DOT__active_cur_q 
        = __Vdly__tinygpu_top__DOT__u_counters__DOT__active_cur_q;
    vlSelf->tinygpu_top__DOT__u_counters__DOT__cycle_cur_q 
        = __Vdly__tinygpu_top__DOT__u_counters__DOT__cycle_cur_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_o;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_o;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_o;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_o;
    if (__Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v0) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec[0U] = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec[1U] = 0U;
    }
    if (__Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v2) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec[0U] = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec[1U] = 0U;
    }
    if (__Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v4) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec[__Vdlyvdim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v4] 
            = __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v4;
    }
    if (__Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v5) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec[0U] = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec[1U] = 0U;
    }
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q;
    if (__Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q__v0) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q[0U][0U] 
            = __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q__v0;
    }
    if (__Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q__v1) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q[0U][1U] 
            = __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q__v1;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q[1U][0U] 
            = __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q__v2;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q[1U][1U] 
            = __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q__v3;
    }
    if (__Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q__v0) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q[0U][0U] 
            = __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q__v0;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i32[0U][0U] 
            = __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i32__v0;
    }
    if (__Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q__v1) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q[0U][1U] 
            = __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q__v1;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i32[0U][1U] 
            = __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i32__v1;
    }
    if (__Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q__v2) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q[1U][0U] 
            = __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q__v2;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i32[1U][0U] 
            = __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i32__v2;
    }
    if (__Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q__v3) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q[1U][1U] 
            = __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q__v3;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i32[1U][1U] 
            = __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i32__v3;
    }
    if (__Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8__v0) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8[0U][0U] 
            = __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8__v0;
    }
    if (__Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8__v1) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8[0U][1U] 
            = __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8__v1;
    }
    if (__Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8__v2) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8[1U][0U] 
            = __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8__v2;
    }
    if (__Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8__v3) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8[1U][1U] 
            = __Vdlyvval__tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8__v3;
    }
    if (__Vdlyvset__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q__v4) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q[0U][0U] = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q[0U][1U] = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q[1U][0U] = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q[1U][1U] = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q[0U][0U] = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q[0U][1U] = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q[1U][0U] = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q[1U][1U] = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i32[0U][0U] = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i32[0U][1U] = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i32[1U][0U] = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i32[1U][1U] = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8[0U][0U] = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8[0U][1U] = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8[1U][0U] = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8[1U][1U] = 0U;
    }
    vlSelf->irq = ((IData)(vlSelf->tinygpu_top__DOT__reg_irq_enable) 
                   & (IData)(vlSelf->tinygpu_top__DOT__u_regs__DOT__irq_pending_q));
    vlSelf->mem_wstrb = vlSelf->tinygpu_top__DOT__mem_cmd_wstrb_q;
    vlSelf->mem_wdata = vlSelf->tinygpu_top__DOT__mem_cmd_wdata_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_array4x4__c_tile[1U][1U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_o;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_array4x4__c_tile[1U][0U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_o;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_array4x4__c_tile[0U][1U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_o;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_array4x4__c_tile[0U][0U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_o;
    vlSelf->mem_addr = vlSelf->tinygpu_top__DOT__mem_cmd_addr_q;
    tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__elem_addr 
        = ((vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__base_addr_q 
            + ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q) 
               * (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__stride_bytes_q))) 
           + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q));
    tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__last_elem 
        = (((0xffffU & ((IData)(1U) + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q))) 
            >= (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows_q)) 
           & ((0xffffU & ((IData)(1U) + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q))) 
              >= (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols_q)));
    tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__write_addr 
        = ((vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__base_addr_q 
            + ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q) 
               * (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__stride_bytes_q))) 
           + ((2U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind_q))
               ? ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q) 
                  << 2U) : (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q)));
    tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_store_i32 
        = ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_base_q) 
           + ((((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q) 
                << 1U) + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q)) 
              << 2U));
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
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_epilogue__bias[0U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec
        [0U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_epilogue__bias[1U] 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec
        [1U];
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask 
        = ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask)) 
           | ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q) 
              < (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q)));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask 
        = ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask)) 
           | ((((IData)(1U) + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q)) 
               < (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q)) 
              << 1U));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n 
        = ((2U <= (0xffffU & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q) 
                              - (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q))))
            ? 2U : (0xffffU & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q) 
                               - (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q))));
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
    vlSelf->tinygpu_top__DOT__reg_cmd_addr = __Vdly__tinygpu_top__DOT__reg_cmd_addr;
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
    vlSelf->tinygpu_top__DOT__reg_flags = __Vdly__tinygpu_top__DOT__reg_flags;
    vlSelf->tinygpu_top__DOT__reg_src0_addr = __Vdly__tinygpu_top__DOT__reg_src0_addr;
    vlSelf->tinygpu_top__DOT__reg_src1_addr = __Vdly__tinygpu_top__DOT__reg_src1_addr;
    vlSelf->tinygpu_top__DOT__reg_bias_addr = __Vdly__tinygpu_top__DOT__reg_bias_addr;
    vlSelf->tinygpu_top__DOT__reg_dst_addr = __Vdly__tinygpu_top__DOT__reg_dst_addr;
    vlSelf->tinygpu_top__DOT__reg_scale = __Vdly__tinygpu_top__DOT__reg_scale;
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
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wstrb = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wr_en = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_addr = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wstrb = 0U;
    tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_req = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_region 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_addr = 0U;
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
    tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_elem_addr 
        = (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q 
           + ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q) 
              * ((0U != (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q))
                  ? (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q)
                  : 1U)));
    tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_elem_addr 
        = (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q 
           + ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q) 
              * ((0U != (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q))
                  ? (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q)
                  : 1U)));
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
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_flags_ok 
        = (1U & (~ (IData)((0x30U == (0x30U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)))));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask 
        = ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask)) 
           | ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q) 
              < (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q)));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask 
        = ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask)) 
           | ((((IData)(1U) + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q)) 
               < (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q)) 
              << 1U));
    tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m 
        = ((2U <= (0xffffU & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q) 
                              - (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q))))
            ? 2U : (0xffffU & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q) 
                               - (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q))));
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
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok 
        = ((((((1U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)) 
               | (2U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) 
              | (3U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) 
             | (4U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) 
            | (5U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) 
           | (6U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)));
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
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k 
        = ((8U <= (0xffffU & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q) 
                              - (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q))))
            ? 8U : (0xffffU & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q) 
                               - (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q))));
    if ((4U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_addr 
                    = (0xfffffffcU & tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__write_addr);
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wstrb 
                    = ((2U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind_q))
                        ? 0xfU : ((0U == (3U & tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__write_addr))
                                   ? 1U : ((1U == (3U 
                                                   & tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__write_addr))
                                            ? 2U : 
                                           ((2U == 
                                             (3U & tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__write_addr))
                                             ? 4U : 8U))));
                tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_req = 1U;
            }
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_region 
                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q;
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_addr 
                = (0x1ffU & tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_store_i32);
        }
    } else {
        if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_addr 
                    = (0xfffffffcU & tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__elem_addr);
                tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_req = 1U;
            }
        }
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
    tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_rdata 
        = (((IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__21__Vfuncout) 
            << 0x18U) | (((IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__22__Vfuncout) 
                          << 0x10U) | (((IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__23__Vfuncout) 
                                        << 8U) | (IData)(__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__read_byte_region__24__Vfuncout))));
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
    tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_last 
        = (((0xffffU & ((IData)(1U) + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q))) 
            >= (IData)(tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m)) 
           & ((0xffffU & ((IData)(1U) + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q))) 
              >= (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n)));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__more_k_tiles 
        = ((0xffffU & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q) 
                       + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k))) 
           < (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q));
    vlSelf->tinygpu_top__DOT__mem_read_pending_q = __Vdly__tinygpu_top__DOT__mem_read_pending_q;
    vlSelf->tinygpu_top__DOT__mem_cmd_valid_q = __Vdly__tinygpu_top__DOT__mem_cmd_valid_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wdata = 0U;
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
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wdata = 0U;
    if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
            if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wstrb = 1U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wr_en = 1U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wdata 
                    = (0xffU & ((0U == (3U & tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__elem_addr))
                                 ? vlSelf->tinygpu_top__DOT__mem_rdata_stage_q
                                 : ((1U == (3U & tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__elem_addr))
                                     ? (vlSelf->tinygpu_top__DOT__mem_rdata_stage_q 
                                        >> 8U) : ((2U 
                                                   == 
                                                   (3U 
                                                    & tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__elem_addr))
                                                   ? 
                                                  (vlSelf->tinygpu_top__DOT__mem_rdata_stage_q 
                                                   >> 0x10U)
                                                   : 
                                                  (vlSelf->tinygpu_top__DOT__mem_rdata_stage_q 
                                                   >> 0x18U)))));
            }
        }
    }
    vlSelf->mem_req = vlSelf->tinygpu_top__DOT__mem_cmd_valid_q;
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
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_we = 0U;
    vlSelf->tinygpu_top__DOT__mem_stage_ready = (1U 
                                                 & ((~ (IData)(vlSelf->tinygpu_top__DOT__mem_cmd_valid_q)) 
                                                    & (~ (IData)(vlSelf->tinygpu_top__DOT__mem_read_pending_q))));
    vlSelf->mem_we = vlSelf->tinygpu_top__DOT__mem_cmd_we_q;
    tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__advance_elem = 0U;
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
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__set_illegal_opcode = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_cmd_n = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_cmd_n = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__load_vec_y_reg = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_cmd_n = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__set_shape_error = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__load_desc_word = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_start = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__load_vec_x_reg = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_load_byte 
        = (0xffU & ((0xdU == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))
                     ? ((0U == (3U & tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_elem_addr))
                         ? vlSelf->tinygpu_top__DOT__mem_rdata_stage_q
                         : ((1U == (3U & tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_elem_addr))
                             ? (vlSelf->tinygpu_top__DOT__mem_rdata_stage_q 
                                >> 8U) : ((2U == (3U 
                                                  & tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_elem_addr))
                                           ? (vlSelf->tinygpu_top__DOT__mem_rdata_stage_q 
                                              >> 0x10U)
                                           : (vlSelf->tinygpu_top__DOT__mem_rdata_stage_q 
                                              >> 0x18U))))
                     : ((0U == (3U & tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_elem_addr))
                         ? vlSelf->tinygpu_top__DOT__mem_rdata_stage_q
                         : ((1U == (3U & tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_elem_addr))
                             ? (vlSelf->tinygpu_top__DOT__mem_rdata_stage_q 
                                >> 8U) : ((2U == (3U 
                                                  & tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_elem_addr))
                                           ? (vlSelf->tinygpu_top__DOT__mem_rdata_stage_q 
                                              >> 0x10U)
                                           : (vlSelf->tinygpu_top__DOT__mem_rdata_stage_q 
                                              >> 0x18U))))));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_addr = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__set_unsupported_format = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_addr = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_cmd_n = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__load_bias_reg = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_cmd_n = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_dma_cmd = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_cmd_n = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__set_memory_error = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_q;
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
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q;
    vlSelf->tinygpu_top__DOT__cnt_stall = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_data = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_cmd_n = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_vec 
        = (((0xcU == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
            | (0xdU == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) 
           | (0x12U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)));
    tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_req = 0U;
    tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_req = 0U;
    tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_req = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_start = 0U;
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
                if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
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
                if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q) {
                            if (vlSelf->tinygpu_top__DOT__mem_rvalid_stage_q) {
                                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__load_desc_word = 1U;
                            }
                        }
                        if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q)))) {
                            tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_req = 1U;
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
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_cmd_n 
                                = tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m;
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_cmd_n 
                                = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n;
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
                                tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_req = 1U;
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
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_cmd_n 
                        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k;
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_cmd_n 
                        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n;
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
                }
            } else if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_cmd_n = 0U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_cmd_n = 0U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_cmd_n = 0U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_cmd_n 
                    = tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_cmd_n 
                    = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k;
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
            }
        }
    }
    vlSelf->tinygpu_top__DOT__ctrl_busy = 1U;
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
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_addr 
                            = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_addr_q;
                        vlSelf->tinygpu_top__DOT__cnt_stall = 1U;
                        tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_req = 1U;
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
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                        vlSelf->tinygpu_top__DOT__ctrl_busy = 0U;
                    }
                } else {
                    if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelf->tinygpu_top__DOT__ctrl_done = 1U;
                        vlSelf->tinygpu_top__DOT__cnt_cmd_done = 1U;
                        vlSelf->tinygpu_top__DOT__ctrl_busy = 0U;
                    }
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
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
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_d 
                            = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr_q;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_d 
                            = (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_q 
                               + vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_q);
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_d 
                            = (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_q 
                               + vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_q);
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_d 
                            = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q;
                    }
                }
            } else {
                if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_d 
                            = (0xffffU & ((IData)(2U) 
                                          + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q)));
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_d 
                            = ((IData)(2U) + vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_q);
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_d 
                            = (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_q 
                               + vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_q);
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_d 
                            = (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q 
                               + vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_q);
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
                    if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_addr 
                            = (0xfffffffcU & tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_elem_addr);
                        if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q)))) {
                            tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_req = 1U;
                        }
                    } else {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_addr 
                            = (0xfffffffcU & tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_elem_addr);
                        if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q)))) {
                            tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_req = 1U;
                        }
                    }
                    vlSelf->tinygpu_top__DOT__cnt_stall = 1U;
                }
                if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                } else if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q) {
                        if (vlSelf->tinygpu_top__DOT__mem_rvalid_stage_q) {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                        }
                    } else if (vlSelf->tinygpu_top__DOT__mem_stage_ready) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 1U;
                    }
                } else if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q) {
                    if (vlSelf->tinygpu_top__DOT__mem_rvalid_stage_q) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                    }
                } else if (vlSelf->tinygpu_top__DOT__mem_stage_ready) {
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 1U;
                }
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
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
                    if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        if ((1U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)) {
                            if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_q) {
                                if (vlSelf->tinygpu_top__DOT__mem_rvalid_stage_q) {
                                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                                }
                            } else if (vlSelf->tinygpu_top__DOT__mem_stage_ready) {
                                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 1U;
                            }
                        } else {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                        }
                        vlSelf->tinygpu_top__DOT__cnt_stall = 1U;
                    } else {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                    }
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                }
            }
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
                                     < (IData)(tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m))) {
                                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d 
                                        = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q)));
                                }
                            }
                            if (tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_last) {
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
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
        } else {
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
            if ((4U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
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
                } else {
                    if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                    }
                    if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
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
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d = 0U;
                    } else if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q) {
                        if (vlSelf->tinygpu_top__DOT__mem_rvalid_stage_q) {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
                        }
                    } else if (vlSelf->tinygpu_top__DOT__mem_stage_ready) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 1U;
                    }
                    if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelf->tinygpu_top__DOT__cnt_stall = 1U;
                    }
                } else {
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
                    if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d = 0U;
                    }
                }
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
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
                        vlSelf->tinygpu_top__DOT__ctrl_busy = 0U;
                    }
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
    vlSelf->tinygpu_top__DOT__mem_req_raw = ((2U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))
                                              ? (IData)(tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_req)
                                              : ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_vec)
                                                  ? (IData)(tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_req)
                                                  : 
                                                 ((9U 
                                                   == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))
                                                   ? (IData)(tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_req)
                                                   : (IData)(tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_req))));
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q;
    if ((4U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wdata 
                    = ((2U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind_q))
                        ? tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_rdata
                        : ((0U == (3U & tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__write_addr))
                            ? (0xffU & tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_rdata)
                            : ((1U == (3U & tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__write_addr))
                                ? (0xff00U & (tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_rdata 
                                              << 8U))
                                : ((2U == (3U & tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__write_addr))
                                    ? (0xff0000U & 
                                       (tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_rdata 
                                        << 0x10U)) : 
                                   (tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_rdata 
                                    << 0x18U)))));
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_we = 1U;
                if (vlSelf->tinygpu_top__DOT__mem_stage_ready) {
                    if ((1U & (~ (IData)(tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__last_elem)))) {
                        tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__advance_elem = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_we = 0U;
            }
        }
        if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
            if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
                if ((1U & (~ (IData)(tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__last_elem)))) {
                    tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__advance_elem = 1U;
                }
            }
        }
    }
    if (((0U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q)) 
         & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_start))) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_d = 0U;
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_d = 0U;
    } else if (tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__advance_elem) {
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
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q;
    if ((4U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
        if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d = 0U;
        } else if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
            if (vlSelf->tinygpu_top__DOT__mem_stage_ready) {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d 
                    = ((IData)(tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__last_elem)
                        ? 6U : 4U);
            }
        } else {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d = 5U;
        }
    } else if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d 
                = ((IData)(tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__last_elem)
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
}

VL_INLINE_OPT void Vtinygpu_top___024root___combo__TOP__0(Vtinygpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinygpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinygpu_top___024root___combo__TOP__0\n"); );
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
    // Body
    vlSelf->tinygpu_top__DOT__reg_start_pulse = ((((IData)(vlSelf->mmio_valid) 
                                                   & (IData)(vlSelf->mmio_we)) 
                                                  & (0U 
                                                     == 
                                                     (0xffU 
                                                      & vlSelf->mmio_addr))) 
                                                 & vlSelf->mmio_wdata);
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
    vlSelf->tinygpu_top__DOT__reg_soft_reset = ((((IData)(vlSelf->mmio_valid) 
                                                  & (IData)(vlSelf->mmio_we)) 
                                                 & (0U 
                                                    == 
                                                    (0xffU 
                                                     & vlSelf->mmio_addr))) 
                                                & (vlSelf->mmio_wdata 
                                                   >> 1U));
    vlSelf->mmio_rdata = 0U;
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
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_status = 0U;
    vlSelf->tinygpu_top__DOT__cnt_cmd_start = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd_addr = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_cmd_fields = 0U;
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd = 0U;
    if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                  >> 4U)))) {
        if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
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
                }
            }
        }
    }
    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
        = vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q;
    if ((0x10U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
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
    } else if ((8U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        if ((4U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
                    = ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))
                        ? 0x10U : 0xfU);
            } else if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q) {
                    if (vlSelf->tinygpu_top__DOT__mem_rvalid_stage_q) {
                        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0xeU;
                    }
                }
            } else if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q) {
                if (vlSelf->tinygpu_top__DOT__mem_rvalid_stage_q) {
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
                        = (((3U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)) 
                            | (4U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)))
                            ? 0xdU : 0xeU);
                }
            }
        } else if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_q) {
                    if ((1U & (~ ((~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                                  & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q)))))) {
                        if ((1U & (~ (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)))) {
                            if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q) {
                                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x16U;
                            } else if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q) {
                                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
                                    = (((0xffffU & 
                                         ((IData)(2U) 
                                          + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q))) 
                                        < (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q))
                                        ? 0x13U : (
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
                        if (((0xffffU & ((IData)(1U) 
                                         + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q))) 
                             >= (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n))) {
                            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0xaU;
                        }
                    }
                }
            } else {
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0xaU;
            }
        } else {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
                = ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__more_k_tiles)
                    ? 5U : ((1U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)
                             ? 9U : 0xaU));
        }
    } else if ((4U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if (((0xffffU & ((IData)(1U) + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q))) 
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
        } else if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
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
    } else if ((2U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
                = ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode_q)
                    ? 0xcU : 4U);
        } else if (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q) {
            if (vlSelf->tinygpu_top__DOT__mem_rvalid_stage_q) {
                if ((0xeU <= (0x1fU & ((IData)(1U) 
                                       + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))))) {
                    vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 1U;
                }
            }
        }
    } else if ((1U & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
            = ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok)
                ? ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok)
                    ? ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_flags_ok)
                        ? 3U : 0x16U) : 0x16U) : 0x16U);
    } else if (vlSelf->tinygpu_top__DOT__reg_start_pulse) {
        vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
            = ((IData)(vlSelf->tinygpu_top__DOT__reg_direct_mode)
                ? 1U : 2U);
    }
}

void Vtinygpu_top___024root___eval(Vtinygpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinygpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinygpu_top___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        Vtinygpu_top___024root___sequent__TOP__0(vlSelf);
    }
    Vtinygpu_top___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

#ifdef VL_DEBUG
void Vtinygpu_top___024root___eval_debug_assertions(Vtinygpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinygpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinygpu_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->mmio_valid & 0xfeU))) {
        Verilated::overWidthError("mmio_valid");}
    if (VL_UNLIKELY((vlSelf->mmio_we & 0xfeU))) {
        Verilated::overWidthError("mmio_we");}
    if (VL_UNLIKELY((vlSelf->mmio_wstrb & 0xf0U))) {
        Verilated::overWidthError("mmio_wstrb");}
    if (VL_UNLIKELY((vlSelf->mem_ready & 0xfeU))) {
        Verilated::overWidthError("mem_ready");}
    if (VL_UNLIKELY((vlSelf->mem_rvalid & 0xfeU))) {
        Verilated::overWidthError("mem_rvalid");}
}
#endif  // VL_DEBUG
