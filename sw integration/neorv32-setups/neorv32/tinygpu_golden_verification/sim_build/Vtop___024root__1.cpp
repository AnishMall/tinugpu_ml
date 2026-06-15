// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___ico_comb__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[1U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (3ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        Vtop___024root___ico_comb__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers_vec__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

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
                                                                 | ((vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_addr__1.neq(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_addr) 
                                                                     << 1U) 
                                                                    | vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_addr__1.neq(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_addr)))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_addr__1.assign(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_rd_addr);
    vlSelfRef.__Vtrigprevexpr___TOP__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_addr__1.assign(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_rd_addr);
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

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtop___024root___ico_comb__TOP__0(vlSelf);
    }
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
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
            ++(vlSymsp->__Vcoverage[19029]);
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0U;
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext);
            ++(vlSymsp->__Vcoverage[19027]);
        } else {
            ++(vlSymsp->__Vcoverage[19028]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[19030]);
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[19031]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[19032]);
    }
    ++(vlSymsp->__Vcoverage[19033]);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 18867, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[0U][0U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
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
            ++(vlSymsp->__Vcoverage[19236]);
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0U;
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext);
            ++(vlSymsp->__Vcoverage[19234]);
        } else {
            ++(vlSymsp->__Vcoverage[19235]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[19237]);
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[19238]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[19239]);
    }
    ++(vlSymsp->__Vcoverage[19240]);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 19074, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[0U][1U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
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
            ++(vlSymsp->__Vcoverage[19443]);
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0U;
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext);
            ++(vlSymsp->__Vcoverage[19441]);
        } else {
            ++(vlSymsp->__Vcoverage[19442]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[19444]);
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[19445]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[19446]);
    }
    ++(vlSymsp->__Vcoverage[19447]);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 19281, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[0U][2U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
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
            ++(vlSymsp->__Vcoverage[19650]);
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0U;
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext);
            ++(vlSymsp->__Vcoverage[19648]);
        } else {
            ++(vlSymsp->__Vcoverage[19649]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[19651]);
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[19652]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[19653]);
    }
    ++(vlSymsp->__Vcoverage[19654]);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 19488, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[0U][3U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
}

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
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
            ++(vlSymsp->__Vcoverage[19857]);
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0U;
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext);
            ++(vlSymsp->__Vcoverage[19855]);
        } else {
            ++(vlSymsp->__Vcoverage[19856]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[19858]);
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[19859]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[19860]);
    }
    ++(vlSymsp->__Vcoverage[19861]);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 19695, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[1U][0U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
}

void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
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
            ++(vlSymsp->__Vcoverage[20064]);
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0U;
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext);
            ++(vlSymsp->__Vcoverage[20062]);
        } else {
            ++(vlSymsp->__Vcoverage[20063]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[20065]);
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[20066]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[20067]);
    }
    ++(vlSymsp->__Vcoverage[20068]);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 19902, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[1U][1U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
}

void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
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
            ++(vlSymsp->__Vcoverage[20271]);
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0U;
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext);
            ++(vlSymsp->__Vcoverage[20269]);
        } else {
            ++(vlSymsp->__Vcoverage[20270]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[20272]);
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[20273]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[20274]);
    }
    ++(vlSymsp->__Vcoverage[20275]);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 20109, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[1U][2U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
}

void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
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
            ++(vlSymsp->__Vcoverage[20478]);
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0U;
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext);
            ++(vlSymsp->__Vcoverage[20476]);
        } else {
            ++(vlSymsp->__Vcoverage[20477]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[20479]);
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[20480]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[20481]);
    }
    ++(vlSymsp->__Vcoverage[20482]);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 20316, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[1U][3U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
}

void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__8\n"); );
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
            ++(vlSymsp->__Vcoverage[20685]);
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0U;
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext);
            ++(vlSymsp->__Vcoverage[20683]);
        } else {
            ++(vlSymsp->__Vcoverage[20684]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[20686]);
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[20687]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[20688]);
    }
    ++(vlSymsp->__Vcoverage[20689]);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 20523, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[2U][0U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
}

void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__9\n"); );
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
            ++(vlSymsp->__Vcoverage[20892]);
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0U;
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext);
            ++(vlSymsp->__Vcoverage[20890]);
        } else {
            ++(vlSymsp->__Vcoverage[20891]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[20893]);
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[20894]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[20895]);
    }
    ++(vlSymsp->__Vcoverage[20896]);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 20730, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[2U][1U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
}

void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__10\n"); );
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
            ++(vlSymsp->__Vcoverage[21099]);
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0U;
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext);
            ++(vlSymsp->__Vcoverage[21097]);
        } else {
            ++(vlSymsp->__Vcoverage[21098]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[21100]);
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[21101]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[21102]);
    }
    ++(vlSymsp->__Vcoverage[21103]);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 20937, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[2U][2U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
}

void Vtop___024root___nba_sequent__TOP__11(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__11\n"); );
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
            ++(vlSymsp->__Vcoverage[21306]);
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0U;
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext);
            ++(vlSymsp->__Vcoverage[21304]);
        } else {
            ++(vlSymsp->__Vcoverage[21305]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[21307]);
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[21308]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[21309]);
    }
    ++(vlSymsp->__Vcoverage[21310]);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 21144, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[2U][3U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
}

void Vtop___024root___nba_sequent__TOP__12(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__12\n"); );
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
            ++(vlSymsp->__Vcoverage[21513]);
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0U;
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext);
            ++(vlSymsp->__Vcoverage[21511]);
        } else {
            ++(vlSymsp->__Vcoverage[21512]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[21514]);
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[21515]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[21516]);
    }
    ++(vlSymsp->__Vcoverage[21517]);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 21351, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[3U][0U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
}

void Vtop___024root___nba_sequent__TOP__13(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__13\n"); );
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
            ++(vlSymsp->__Vcoverage[21720]);
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0U;
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext);
            ++(vlSymsp->__Vcoverage[21718]);
        } else {
            ++(vlSymsp->__Vcoverage[21719]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[21721]);
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[21722]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[21723]);
    }
    ++(vlSymsp->__Vcoverage[21724]);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 21558, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[3U][1U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
}

void Vtop___024root___nba_sequent__TOP__14(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__14\n"); );
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
            ++(vlSymsp->__Vcoverage[21927]);
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0U;
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext);
            ++(vlSymsp->__Vcoverage[21925]);
        } else {
            ++(vlSymsp->__Vcoverage[21926]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[21928]);
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[21929]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[21930]);
    }
    ++(vlSymsp->__Vcoverage[21931]);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 21765, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[3U][2U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
}

void Vtop___024root___nba_sequent__TOP__15(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__15\n"); );
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
            ++(vlSymsp->__Vcoverage[22134]);
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0U;
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en) {
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext);
            ++(vlSymsp->__Vcoverage[22132]);
        } else {
            ++(vlSymsp->__Vcoverage[22133]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[22135]);
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[22136]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[22137]);
    }
    ++(vlSymsp->__Vcoverage[22138]);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 21972, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[3U][3U] 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
}

void Vtop___024root___nba_sequent__TOP__16(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__16\n"); );
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
        if (vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cmd_start_i) {
            ++(vlSymsp->__Vcoverage[24485]);
            __Vdly__tinygpu_top__DOT__u_counters__DOT__cycle_cur_q = 0U;
            __Vdly__tinygpu_top__DOT__u_counters__DOT__active_cur_q = 0U;
            __Vdly__tinygpu_top__DOT__u_counters__DOT__stall_cur_q = 0U;
        } else {
            if (vlSelfRef.tinygpu_top__DOT__u_counters__DOT__busy_i) {
                __Vdly__tinygpu_top__DOT__u_counters__DOT__cycle_cur_q 
                    = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cycle_cur_q);
                ++(vlSymsp->__Vcoverage[24479]);
            } else {
                ++(vlSymsp->__Vcoverage[24480]);
            }
            if (vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_i) {
                __Vdly__tinygpu_top__DOT__u_counters__DOT__active_cur_q 
                    = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_cur_q);
                ++(vlSymsp->__Vcoverage[24481]);
            } else {
                ++(vlSymsp->__Vcoverage[24482]);
            }
            if (vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_i) {
                __Vdly__tinygpu_top__DOT__u_counters__DOT__stall_cur_q 
                    = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_cur_q);
                ++(vlSymsp->__Vcoverage[24483]);
            } else {
                ++(vlSymsp->__Vcoverage[24484]);
            }
            ++(vlSymsp->__Vcoverage[24486]);
        }
        if (vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cmd_done_i) {
            vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cmd_count_o 
                = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cmd_count_o);
            ++(vlSymsp->__Vcoverage[24487]);
            vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cycle_count_o 
                = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cycle_cur_q;
            vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_count_o 
                = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_cur_q;
            vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_count_o 
                = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_cur_q;
        } else {
            ++(vlSymsp->__Vcoverage[24488]);
        }
        ++(vlSymsp->__Vcoverage[24490]);
    } else {
        vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cmd_count_o = 0U;
        ++(vlSymsp->__Vcoverage[24489]);
        __Vdly__tinygpu_top__DOT__u_counters__DOT__cycle_cur_q = 0U;
        __Vdly__tinygpu_top__DOT__u_counters__DOT__active_cur_q = 0U;
        __Vdly__tinygpu_top__DOT__u_counters__DOT__stall_cur_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cycle_count_o = 0U;
        vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_count_o = 0U;
        vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_count_o = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_counters__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[24491]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_counters__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[24492]);
    }
    ++(vlSymsp->__Vcoverage[24493]);
    vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cycle_cur_q 
        = __Vdly__tinygpu_top__DOT__u_counters__DOT__cycle_cur_q;
    vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_cur_q 
        = __Vdly__tinygpu_top__DOT__u_counters__DOT__active_cur_q;
    vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_cur_q 
        = __Vdly__tinygpu_top__DOT__u_counters__DOT__stall_cur_q;
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
    if ((vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cmd_count_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__cmd_count_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 24223, vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cmd_count_o, vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__cmd_count_o);
        vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__cmd_count_o 
            = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cmd_count_o;
    }
    vlSelfRef.tinygpu_top__DOT__cmd_count_total = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cmd_count_o;
    if ((vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cycle_count_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__cycle_count_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 24031, vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cycle_count_o, vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__cycle_count_o);
        vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__cycle_count_o 
            = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cycle_count_o;
    }
    vlSelfRef.tinygpu_top__DOT__cycle_count_last = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cycle_count_o;
    if ((vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_count_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__active_count_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 24095, vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_count_o, vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__active_count_o);
        vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__active_count_o 
            = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_count_o;
    }
    vlSelfRef.tinygpu_top__DOT__active_count_last = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_count_o;
    if ((vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_count_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__stall_count_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 24159, vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_count_o, vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__stall_count_o);
        vlSelfRef.tinygpu_top__DOT__u_counters__DOT____Vtogcov__stall_count_o 
            = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_count_o;
    }
    vlSelfRef.tinygpu_top__DOT__stall_count_last = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_count_o;
    if ((vlSelfRef.tinygpu_top__DOT__cmd_count_total 
         ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__cmd_count_total)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1558, vlSelfRef.tinygpu_top__DOT__cmd_count_total, vlSelfRef.tinygpu_top__DOT____Vtogcov__cmd_count_total);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__cmd_count_total 
            = vlSelfRef.tinygpu_top__DOT__cmd_count_total;
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_count_i 
        = vlSelfRef.tinygpu_top__DOT__cmd_count_total;
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
    if ((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_count_i 
         ^ vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__cmd_count_i)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2410, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_count_i, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__cmd_count_i);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__cmd_count_i 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_count_i;
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
}

void Vtop___024root___nba_sequent__TOP__17(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__17\n"); );
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
            ++(vlSymsp->__Vcoverage[24008]);
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy = 1U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__product_o 
                = VL_MULS_III(32, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__a_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__b_i);
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy) {
            ++(vlSymsp->__Vcoverage[24006]);
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__done = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[24007]);
        }
        if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__start) 
             & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy)))) {
            ++(vlSymsp->__Vcoverage[24009]);
        }
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy) {
            ++(vlSymsp->__Vcoverage[24010]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__start)))) {
            ++(vlSymsp->__Vcoverage[24011]);
        }
        ++(vlSymsp->__Vcoverage[24013]);
    } else {
        ++(vlSymsp->__Vcoverage[24012]);
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__done = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__product_o = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[24014]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[24015]);
    }
    ++(vlSymsp->__Vcoverage[24016]);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__product_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__product_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 23942, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__product_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__product_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__product_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__product_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_product 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__product_o;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__busy))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 23938, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__busy);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__busy 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_busy 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__done) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 23940, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__done, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__done);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__done 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__done;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_done 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__done;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_product 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shared_mul_product)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 8869, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_product, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shared_mul_product);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shared_mul_product 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_product;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_busy) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shared_mul_busy))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 8865, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_busy, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shared_mul_busy);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shared_mul_busy 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_busy;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_busy 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_busy;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_done) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shared_mul_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 8867, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_done, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shared_mul_done);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shared_mul_done 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_done;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_done 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_done;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_busy) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mul_busy))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 8795, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_busy, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mul_busy);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mul_busy 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_busy;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_done) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mul_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 8797, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_done, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mul_done);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mul_done 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_done;
    }
}

void Vtop___024root___nba_sequent__TOP__18(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__18\n"); );
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
                ++(vlSymsp->__Vcoverage[23544]);
                __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__busy = 0U;
            } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q))) {
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__last_elem) {
                    ++(vlSymsp->__Vcoverage[23541]);
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__busy = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__done = 1U;
                    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q = 0U;
                } else {
                    if ((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q))) {
                        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q 
                            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q)));
                        ++(vlSymsp->__Vcoverage[23539]);
                        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q = 0U;
                    } else {
                        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q 
                            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q)));
                        ++(vlSymsp->__Vcoverage[23540]);
                    }
                    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q = 1U;
                    ++(vlSymsp->__Vcoverage[23542]);
                }
                ++(vlSymsp->__Vcoverage[23543]);
            } else {
                __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__27__x 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__x_shifted;
                vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____VlemCall_0__sat_i8 = 0;
                if (VL_LTS_III(32, 0x0000007fU, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__27__x)) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____VlemCall_0__sat_i8 = 0x7fU;
                    ++(vlSymsp->__Vcoverage[23503]);
                } else if (VL_GTS_III(32, 0xffffff80U, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__27__x)) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____VlemCall_0__sat_i8 = 0x80U;
                    ++(vlSymsp->__Vcoverage[23501]);
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____VlemCall_0__sat_i8 
                        = (0x000000ffU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__27__x);
                    ++(vlSymsp->__Vcoverage[23502]);
                }
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_valid = 1U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_i32 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_q;
                __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q = 5U;
                ++(vlSymsp->__Vcoverage[23504]);
                __VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8__v0 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____VlemCall_0__sat_i8;
                __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8__v0 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q;
                __VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8__v0 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q;
                vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8.enqueue(__VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8__v0, (IData)(__VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8__v0), __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8__v0);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_index 
                    = (0x000000ffU & (VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q), 2U) 
                                      + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q)));
                __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__28__x 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__x_shifted;
                __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__28__Vfuncout = 0;
                if (VL_LTS_III(32, 0x0000007fU, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__28__x)) {
                    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__28__Vfuncout = 0x7fU;
                    ++(vlSymsp->__Vcoverage[23503]);
                } else if (VL_GTS_III(32, 0xffffff80U, __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__28__x)) {
                    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__28__Vfuncout = 0x80U;
                    ++(vlSymsp->__Vcoverage[23501]);
                } else {
                    __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__28__Vfuncout 
                        = (0x000000ffU & __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__28__x);
                    ++(vlSymsp->__Vcoverage[23502]);
                }
                ++(vlSymsp->__Vcoverage[23504]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_i8 
                    = __Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__sat_i8__28__Vfuncout;
                ++(vlSymsp->__Vcoverage[23538]);
            }
        } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q))) {
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_done) {
                    ++(vlSymsp->__Vcoverage[23535]);
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_elem_q 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_product;
                    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q = 4U;
                } else {
                    ++(vlSymsp->__Vcoverage[23536]);
                }
                ++(vlSymsp->__Vcoverage[23537]);
            } else {
                ++(vlSymsp->__Vcoverage[23534]);
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
                ++(vlSymsp->__Vcoverage[23531]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_start = 1U;
                __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q = 2U;
            } else {
                ++(vlSymsp->__Vcoverage[23532]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_elem_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_n;
                __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q = 4U;
            }
            ++(vlSymsp->__Vcoverage[23533]);
        } else {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__busy = 0U;
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__start) {
                __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q = 0U;
                __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q = 0U;
                ++(vlSymsp->__Vcoverage[23528]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__busy = 1U;
                __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[23529]);
            }
            ++(vlSymsp->__Vcoverage[23530]);
        }
        ++(vlSymsp->__Vcoverage[23546]);
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
                ++(vlSymsp->__Vcoverage[23526]);
            }
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk1__DOT__r 
                = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk1__DOT__r);
            ++(vlSymsp->__Vcoverage[23527]);
        }
        ++(vlSymsp->__Vcoverage[23545]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[23547]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[23548]);
    }
    ++(vlSymsp->__Vcoverage[23549]);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q;
    vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i32.commit(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i32);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q;
    vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8.commit(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8);
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__state_q))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 23163, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__state_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__state_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_elem_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__scaled_elem_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 23241, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_elem_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__scaled_elem_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__scaled_elem_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_elem_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__post_elem_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 23177, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__post_elem_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__post_elem_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_a 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_q;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_start) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__mul_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 22613, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_start, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__mul_start);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__mul_start 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_start;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_start 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_start;
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
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__last_elem 
        = ((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q)) 
           & (3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q)));
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__done) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 22147, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__done, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__done);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__done 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__done;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_done 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__done;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_valid) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__out_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 22809, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_valid, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__out_valid);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__out_valid 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_valid;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__busy) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__busy))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 22145, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__busy, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__busy);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__busy 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__busy;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_busy 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__busy;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_i32 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__out_i32)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 22827, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_i32, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__out_i32);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__out_i32 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_i32;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_index) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__out_index))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 22811, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_index, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__out_index);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__out_index 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_index;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_i8) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__out_i8))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 22891, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_i8, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__out_i8);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__out_i8 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_i8;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_a 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__mul_a)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 22615, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_a, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__mul_a);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__mul_a 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_a;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_a 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_a;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_start) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_mul_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 7485, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_start, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_mul_start);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_mul_start 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_start;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__last_elem) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__last_elem))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 23307, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__last_elem, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__last_elem);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__last_elem 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__last_elem;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_done) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 7483, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_done, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_done);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_done 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_done;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_busy) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_busy))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 7481, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_busy, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_busy);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_busy 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_busy;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_a 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_mul_a)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 7487, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_a, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_mul_a);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_mul_a 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_a;
    }
}

void Vtop___024root___nba_sequent__TOP__19(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__19\n"); );
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
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_regs__DOT__cmd_addr_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__cmd_addr_o = 0;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_regs__DOT__src0_addr_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__src0_addr_o = 0;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_regs__DOT__src1_addr_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__src1_addr_o = 0;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_regs__DOT__bias_addr_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__bias_addr_o = 0;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_regs__DOT__dst_addr_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__dst_addr_o = 0;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_regs__DOT__flags_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__flags_o = 0;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_regs__DOT__scale_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__scale_o = 0;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_in_hw_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_in_hw_o = 0;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_channels_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_channels_o = 0;
    IData/*31:0*/ __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_cfg_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_cfg_o = 0;
    // Body
    __Vdly__tinygpu_top__DOT__u_regs__DOT__cmd_addr_o 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_addr_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__src0_addr_o 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src0_addr_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__src1_addr_o 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src1_addr_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__bias_addr_o 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__bias_addr_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__dst_addr_o 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dst_addr_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__flags_o 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__flags_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__scale_o 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__scale_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_in_hw_o 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_in_hw_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_channels_o 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_channels_o;
    __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_cfg_o 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_cfg_o;
    if (vlSelfRef.tinygpu_top__DOT__u_regs__DOT__rst_n) {
        if (vlSelfRef.tinygpu_top__DOT__u_regs__DOT__soft_reset_o) {
            ++(vlSymsp->__Vcoverage[3743]);
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_enable_o = 0U;
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_mode_o = 0U;
            __Vdly__tinygpu_top__DOT__u_regs__DOT__cmd_addr_o = 0U;
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__opcode_o = 0U;
            __Vdly__tinygpu_top__DOT__u_regs__DOT__src0_addr_o = 0U;
            __Vdly__tinygpu_top__DOT__u_regs__DOT__src1_addr_o = 0U;
            __Vdly__tinygpu_top__DOT__u_regs__DOT__bias_addr_o = 0U;
            __Vdly__tinygpu_top__DOT__u_regs__DOT__dst_addr_o = 0U;
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_m_o = 0U;
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_n_o = 0U;
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_k_o = 0U;
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride0_o = 0U;
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride1_o = 0U;
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride_dst_o = 0U;
            __Vdly__tinygpu_top__DOT__u_regs__DOT__flags_o = 0U;
            __Vdly__tinygpu_top__DOT__u_regs__DOT__scale_o = 0U;
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shift_o = 0U;
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__zero_point_o = 0U;
            __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_in_hw_o = 0U;
            __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_channels_o = 0U;
            __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_cfg_o = 0U;
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__done_sticky_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_q = 0U;
        } else {
            if (vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_done_i) {
                ++(vlSymsp->__Vcoverage[3711]);
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__done_sticky_q = 1U;
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_q = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[3712]);
            }
            if (vlSelfRef.tinygpu_top__DOT__u_regs__DOT__start_pulse_o) {
                ++(vlSymsp->__Vcoverage[3713]);
                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__done_sticky_q = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[3714]);
            }
            if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_valid) 
                 & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_we))) {
                if ((0x00000080U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                    ++(vlSymsp->__Vcoverage[3737]);
                } else if ((0x00000040U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                    if ((0x00000020U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                        if ((0x00000010U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                            ++(vlSymsp->__Vcoverage[3737]);
                        } else if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                            ++(vlSymsp->__Vcoverage[3737]);
                        } else if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                            ++(vlSymsp->__Vcoverage[3737]);
                        } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                            ++(vlSymsp->__Vcoverage[3737]);
                        } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                            ++(vlSymsp->__Vcoverage[3737]);
                        } else {
                            __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__wstrb 
                                = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb;
                            __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__newv 
                                = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata;
                            __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__oldv 
                                = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_cfg_o;
                            __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__Vfuncout 
                                = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__oldv;
                            if ((1U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__wstrb))) {
                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__Vfuncout 
                                    = ((0xffffff00U 
                                        & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__Vfuncout) 
                                       | (0x000000ffU 
                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__newv));
                                ++(vlSymsp->__Vcoverage[3696]);
                            } else {
                                ++(vlSymsp->__Vcoverage[3697]);
                            }
                            ++(vlSymsp->__Vcoverage[3698]);
                            if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__wstrb))) {
                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__Vfuncout 
                                    = ((0xffff00ffU 
                                        & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__Vfuncout) 
                                       | (0x0000ff00U 
                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__newv));
                                ++(vlSymsp->__Vcoverage[3696]);
                            } else {
                                ++(vlSymsp->__Vcoverage[3697]);
                            }
                            ++(vlSymsp->__Vcoverage[3698]);
                            if ((4U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__wstrb))) {
                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__Vfuncout 
                                    = ((0xff00ffffU 
                                        & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__Vfuncout) 
                                       | (0x00ff0000U 
                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__newv));
                                ++(vlSymsp->__Vcoverage[3696]);
                            } else {
                                ++(vlSymsp->__Vcoverage[3697]);
                            }
                            ++(vlSymsp->__Vcoverage[3698]);
                            if ((8U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__wstrb))) {
                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__Vfuncout 
                                    = ((0x00ffffffU 
                                        & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__Vfuncout) 
                                       | (0xff000000U 
                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__newv));
                                ++(vlSymsp->__Vcoverage[3696]);
                            } else {
                                ++(vlSymsp->__Vcoverage[3697]);
                            }
                            ++(vlSymsp->__Vcoverage[3698]);
                            ++(vlSymsp->__Vcoverage[3699]);
                            __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_cfg_o 
                                = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__7__Vfuncout;
                            ++(vlSymsp->__Vcoverage[3733]);
                        }
                    } else if ((0x00000010U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                        if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                            if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                    ++(vlSymsp->__Vcoverage[3737]);
                                } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                    ++(vlSymsp->__Vcoverage[3737]);
                                } else {
                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__wstrb 
                                        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb;
                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__newv 
                                        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata;
                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__oldv 
                                        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_channels_o;
                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__Vfuncout 
                                        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__oldv;
                                    if ((1U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__wstrb))) {
                                        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__Vfuncout 
                                            = ((0xffffff00U 
                                                & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__Vfuncout) 
                                               | (0x000000ffU 
                                                  & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__newv));
                                        ++(vlSymsp->__Vcoverage[3696]);
                                    } else {
                                        ++(vlSymsp->__Vcoverage[3697]);
                                    }
                                    ++(vlSymsp->__Vcoverage[3698]);
                                    if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__wstrb))) {
                                        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__Vfuncout 
                                            = ((0xffff00ffU 
                                                & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__Vfuncout) 
                                               | (0x0000ff00U 
                                                  & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__newv));
                                        ++(vlSymsp->__Vcoverage[3696]);
                                    } else {
                                        ++(vlSymsp->__Vcoverage[3697]);
                                    }
                                    ++(vlSymsp->__Vcoverage[3698]);
                                    if ((4U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__wstrb))) {
                                        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__Vfuncout 
                                            = ((0xff00ffffU 
                                                & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__Vfuncout) 
                                               | (0x00ff0000U 
                                                  & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__newv));
                                        ++(vlSymsp->__Vcoverage[3696]);
                                    } else {
                                        ++(vlSymsp->__Vcoverage[3697]);
                                    }
                                    ++(vlSymsp->__Vcoverage[3698]);
                                    if ((8U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__wstrb))) {
                                        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__Vfuncout 
                                            = ((0x00ffffffU 
                                                & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__Vfuncout) 
                                               | (0xff000000U 
                                                  & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__newv));
                                        ++(vlSymsp->__Vcoverage[3696]);
                                    } else {
                                        ++(vlSymsp->__Vcoverage[3697]);
                                    }
                                    ++(vlSymsp->__Vcoverage[3698]);
                                    ++(vlSymsp->__Vcoverage[3699]);
                                    __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_channels_o 
                                        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__8__Vfuncout;
                                    ++(vlSymsp->__Vcoverage[3732]);
                                }
                            } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                ++(vlSymsp->__Vcoverage[3737]);
                            } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                ++(vlSymsp->__Vcoverage[3737]);
                            } else {
                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__wstrb 
                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb;
                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__newv 
                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata;
                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__oldv 
                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_in_hw_o;
                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__Vfuncout 
                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__oldv;
                                if ((1U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__wstrb))) {
                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__Vfuncout 
                                        = ((0xffffff00U 
                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__Vfuncout) 
                                           | (0x000000ffU 
                                              & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__newv));
                                    ++(vlSymsp->__Vcoverage[3696]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[3697]);
                                }
                                ++(vlSymsp->__Vcoverage[3698]);
                                if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__wstrb))) {
                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__Vfuncout 
                                        = ((0xffff00ffU 
                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__Vfuncout) 
                                           | (0x0000ff00U 
                                              & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__newv));
                                    ++(vlSymsp->__Vcoverage[3696]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[3697]);
                                }
                                ++(vlSymsp->__Vcoverage[3698]);
                                if ((4U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__wstrb))) {
                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__Vfuncout 
                                        = ((0xff00ffffU 
                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__Vfuncout) 
                                           | (0x00ff0000U 
                                              & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__newv));
                                    ++(vlSymsp->__Vcoverage[3696]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[3697]);
                                }
                                ++(vlSymsp->__Vcoverage[3698]);
                                if ((8U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__wstrb))) {
                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__Vfuncout 
                                        = ((0x00ffffffU 
                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__Vfuncout) 
                                           | (0xff000000U 
                                              & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__newv));
                                    ++(vlSymsp->__Vcoverage[3696]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[3697]);
                                }
                                ++(vlSymsp->__Vcoverage[3698]);
                                ++(vlSymsp->__Vcoverage[3699]);
                                __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_in_hw_o 
                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__9__Vfuncout;
                                ++(vlSymsp->__Vcoverage[3731]);
                            }
                        } else if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                            if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                ++(vlSymsp->__Vcoverage[3737]);
                            } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                ++(vlSymsp->__Vcoverage[3737]);
                            } else {
                                if ((1U & vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata)) {
                                    ++(vlSymsp->__Vcoverage[3734]);
                                    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_q = 0U;
                                } else {
                                    ++(vlSymsp->__Vcoverage[3735]);
                                }
                                ++(vlSymsp->__Vcoverage[3736]);
                            }
                        } else {
                            ++(vlSymsp->__Vcoverage[3737]);
                        }
                    } else if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                        ++(vlSymsp->__Vcoverage[3737]);
                    } else if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                        ++(vlSymsp->__Vcoverage[3737]);
                    } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                        ++(vlSymsp->__Vcoverage[3737]);
                    } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                        ++(vlSymsp->__Vcoverage[3737]);
                    } else {
                        ++(vlSymsp->__Vcoverage[3730]);
                        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shift_o 
                            = (vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shiftzp_next_w 
                               >> 0x10U);
                        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__zero_point_o 
                            = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shiftzp_next_w);
                    }
                } else if ((0x00000020U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                    if ((0x00000010U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                        if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                            if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                    ++(vlSymsp->__Vcoverage[3737]);
                                } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                    ++(vlSymsp->__Vcoverage[3737]);
                                } else {
                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__wstrb 
                                        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb;
                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__newv 
                                        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata;
                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__oldv 
                                        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__scale_o;
                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__Vfuncout 
                                        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__oldv;
                                    if ((1U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__wstrb))) {
                                        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__Vfuncout 
                                            = ((0xffffff00U 
                                                & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__Vfuncout) 
                                               | (0x000000ffU 
                                                  & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__newv));
                                        ++(vlSymsp->__Vcoverage[3696]);
                                    } else {
                                        ++(vlSymsp->__Vcoverage[3697]);
                                    }
                                    ++(vlSymsp->__Vcoverage[3698]);
                                    if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__wstrb))) {
                                        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__Vfuncout 
                                            = ((0xffff00ffU 
                                                & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__Vfuncout) 
                                               | (0x0000ff00U 
                                                  & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__newv));
                                        ++(vlSymsp->__Vcoverage[3696]);
                                    } else {
                                        ++(vlSymsp->__Vcoverage[3697]);
                                    }
                                    ++(vlSymsp->__Vcoverage[3698]);
                                    if ((4U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__wstrb))) {
                                        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__Vfuncout 
                                            = ((0xff00ffffU 
                                                & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__Vfuncout) 
                                               | (0x00ff0000U 
                                                  & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__newv));
                                        ++(vlSymsp->__Vcoverage[3696]);
                                    } else {
                                        ++(vlSymsp->__Vcoverage[3697]);
                                    }
                                    ++(vlSymsp->__Vcoverage[3698]);
                                    if ((8U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__wstrb))) {
                                        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__Vfuncout 
                                            = ((0x00ffffffU 
                                                & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__Vfuncout) 
                                               | (0xff000000U 
                                                  & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__newv));
                                        ++(vlSymsp->__Vcoverage[3696]);
                                    } else {
                                        ++(vlSymsp->__Vcoverage[3697]);
                                    }
                                    ++(vlSymsp->__Vcoverage[3698]);
                                    ++(vlSymsp->__Vcoverage[3699]);
                                    __Vdly__tinygpu_top__DOT__u_regs__DOT__scale_o 
                                        = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__10__Vfuncout;
                                    ++(vlSymsp->__Vcoverage[3729]);
                                }
                            } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                ++(vlSymsp->__Vcoverage[3737]);
                            } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                ++(vlSymsp->__Vcoverage[3737]);
                            } else {
                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__wstrb 
                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb;
                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__newv 
                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata;
                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__oldv 
                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__flags_o;
                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__Vfuncout 
                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__oldv;
                                if ((1U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__wstrb))) {
                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__Vfuncout 
                                        = ((0xffffff00U 
                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__Vfuncout) 
                                           | (0x000000ffU 
                                              & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__newv));
                                    ++(vlSymsp->__Vcoverage[3696]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[3697]);
                                }
                                ++(vlSymsp->__Vcoverage[3698]);
                                if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__wstrb))) {
                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__Vfuncout 
                                        = ((0xffff00ffU 
                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__Vfuncout) 
                                           | (0x0000ff00U 
                                              & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__newv));
                                    ++(vlSymsp->__Vcoverage[3696]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[3697]);
                                }
                                ++(vlSymsp->__Vcoverage[3698]);
                                if ((4U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__wstrb))) {
                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__Vfuncout 
                                        = ((0xff00ffffU 
                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__Vfuncout) 
                                           | (0x00ff0000U 
                                              & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__newv));
                                    ++(vlSymsp->__Vcoverage[3696]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[3697]);
                                }
                                ++(vlSymsp->__Vcoverage[3698]);
                                if ((8U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__wstrb))) {
                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__Vfuncout 
                                        = ((0x00ffffffU 
                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__Vfuncout) 
                                           | (0xff000000U 
                                              & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__newv));
                                    ++(vlSymsp->__Vcoverage[3696]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[3697]);
                                }
                                ++(vlSymsp->__Vcoverage[3698]);
                                ++(vlSymsp->__Vcoverage[3699]);
                                __Vdly__tinygpu_top__DOT__u_regs__DOT__flags_o 
                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__11__Vfuncout;
                                ++(vlSymsp->__Vcoverage[3728]);
                            }
                        } else if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                            if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                ++(vlSymsp->__Vcoverage[3737]);
                            } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                ++(vlSymsp->__Vcoverage[3737]);
                            } else {
                                ++(vlSymsp->__Vcoverage[3727]);
                                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride_dst_o 
                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride_dst_next_w;
                            }
                        } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                            ++(vlSymsp->__Vcoverage[3737]);
                        } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                            ++(vlSymsp->__Vcoverage[3737]);
                        } else {
                            ++(vlSymsp->__Vcoverage[3726]);
                            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride1_o 
                                = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride1_next_w;
                        }
                    } else if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                        if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                            if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                ++(vlSymsp->__Vcoverage[3737]);
                            } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                ++(vlSymsp->__Vcoverage[3737]);
                            } else {
                                ++(vlSymsp->__Vcoverage[3725]);
                                vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride0_o 
                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride0_next_w;
                            }
                        } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                            ++(vlSymsp->__Vcoverage[3737]);
                        } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                            ++(vlSymsp->__Vcoverage[3737]);
                        } else {
                            ++(vlSymsp->__Vcoverage[3724]);
                            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_k_o 
                                = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_k_next_w;
                        }
                    } else if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                        if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                            ++(vlSymsp->__Vcoverage[3737]);
                        } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                            ++(vlSymsp->__Vcoverage[3737]);
                        } else {
                            ++(vlSymsp->__Vcoverage[3723]);
                            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_n_o 
                                = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_n_next_w;
                        }
                    } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                        ++(vlSymsp->__Vcoverage[3737]);
                    } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                        ++(vlSymsp->__Vcoverage[3737]);
                    } else {
                        ++(vlSymsp->__Vcoverage[3722]);
                        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_m_o 
                            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_m_next_w;
                    }
                } else if ((0x00000010U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                    if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                        if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                            if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                ++(vlSymsp->__Vcoverage[3737]);
                            } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                                ++(vlSymsp->__Vcoverage[3737]);
                            } else {
                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__wstrb 
                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb;
                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__newv 
                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata;
                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__oldv 
                                    = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dst_addr_o;
                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__Vfuncout 
                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__oldv;
                                if ((1U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__wstrb))) {
                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__Vfuncout 
                                        = ((0xffffff00U 
                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__Vfuncout) 
                                           | (0x000000ffU 
                                              & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__newv));
                                    ++(vlSymsp->__Vcoverage[3696]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[3697]);
                                }
                                ++(vlSymsp->__Vcoverage[3698]);
                                if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__wstrb))) {
                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__Vfuncout 
                                        = ((0xffff00ffU 
                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__Vfuncout) 
                                           | (0x0000ff00U 
                                              & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__newv));
                                    ++(vlSymsp->__Vcoverage[3696]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[3697]);
                                }
                                ++(vlSymsp->__Vcoverage[3698]);
                                if ((4U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__wstrb))) {
                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__Vfuncout 
                                        = ((0xff00ffffU 
                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__Vfuncout) 
                                           | (0x00ff0000U 
                                              & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__newv));
                                    ++(vlSymsp->__Vcoverage[3696]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[3697]);
                                }
                                ++(vlSymsp->__Vcoverage[3698]);
                                if ((8U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__wstrb))) {
                                    __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__Vfuncout 
                                        = ((0x00ffffffU 
                                            & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__Vfuncout) 
                                           | (0xff000000U 
                                              & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__newv));
                                    ++(vlSymsp->__Vcoverage[3696]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[3697]);
                                }
                                ++(vlSymsp->__Vcoverage[3698]);
                                ++(vlSymsp->__Vcoverage[3699]);
                                __Vdly__tinygpu_top__DOT__u_regs__DOT__dst_addr_o 
                                    = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__12__Vfuncout;
                                ++(vlSymsp->__Vcoverage[3721]);
                            }
                        } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                            ++(vlSymsp->__Vcoverage[3737]);
                        } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                            ++(vlSymsp->__Vcoverage[3737]);
                        } else {
                            __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__wstrb 
                                = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb;
                            __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__newv 
                                = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata;
                            __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__oldv 
                                = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__bias_addr_o;
                            __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__Vfuncout 
                                = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__oldv;
                            if ((1U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__wstrb))) {
                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__Vfuncout 
                                    = ((0xffffff00U 
                                        & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__Vfuncout) 
                                       | (0x000000ffU 
                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__newv));
                                ++(vlSymsp->__Vcoverage[3696]);
                            } else {
                                ++(vlSymsp->__Vcoverage[3697]);
                            }
                            ++(vlSymsp->__Vcoverage[3698]);
                            if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__wstrb))) {
                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__Vfuncout 
                                    = ((0xffff00ffU 
                                        & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__Vfuncout) 
                                       | (0x0000ff00U 
                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__newv));
                                ++(vlSymsp->__Vcoverage[3696]);
                            } else {
                                ++(vlSymsp->__Vcoverage[3697]);
                            }
                            ++(vlSymsp->__Vcoverage[3698]);
                            if ((4U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__wstrb))) {
                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__Vfuncout 
                                    = ((0xff00ffffU 
                                        & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__Vfuncout) 
                                       | (0x00ff0000U 
                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__newv));
                                ++(vlSymsp->__Vcoverage[3696]);
                            } else {
                                ++(vlSymsp->__Vcoverage[3697]);
                            }
                            ++(vlSymsp->__Vcoverage[3698]);
                            if ((8U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__wstrb))) {
                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__Vfuncout 
                                    = ((0x00ffffffU 
                                        & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__Vfuncout) 
                                       | (0xff000000U 
                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__newv));
                                ++(vlSymsp->__Vcoverage[3696]);
                            } else {
                                ++(vlSymsp->__Vcoverage[3697]);
                            }
                            ++(vlSymsp->__Vcoverage[3698]);
                            ++(vlSymsp->__Vcoverage[3699]);
                            __Vdly__tinygpu_top__DOT__u_regs__DOT__bias_addr_o 
                                = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__13__Vfuncout;
                            ++(vlSymsp->__Vcoverage[3720]);
                        }
                    } else if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                        if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                            ++(vlSymsp->__Vcoverage[3737]);
                        } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                            ++(vlSymsp->__Vcoverage[3737]);
                        } else {
                            __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__wstrb 
                                = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb;
                            __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__newv 
                                = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata;
                            __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__oldv 
                                = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src1_addr_o;
                            __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__Vfuncout 
                                = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__oldv;
                            if ((1U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__wstrb))) {
                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__Vfuncout 
                                    = ((0xffffff00U 
                                        & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__Vfuncout) 
                                       | (0x000000ffU 
                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__newv));
                                ++(vlSymsp->__Vcoverage[3696]);
                            } else {
                                ++(vlSymsp->__Vcoverage[3697]);
                            }
                            ++(vlSymsp->__Vcoverage[3698]);
                            if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__wstrb))) {
                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__Vfuncout 
                                    = ((0xffff00ffU 
                                        & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__Vfuncout) 
                                       | (0x0000ff00U 
                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__newv));
                                ++(vlSymsp->__Vcoverage[3696]);
                            } else {
                                ++(vlSymsp->__Vcoverage[3697]);
                            }
                            ++(vlSymsp->__Vcoverage[3698]);
                            if ((4U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__wstrb))) {
                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__Vfuncout 
                                    = ((0xff00ffffU 
                                        & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__Vfuncout) 
                                       | (0x00ff0000U 
                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__newv));
                                ++(vlSymsp->__Vcoverage[3696]);
                            } else {
                                ++(vlSymsp->__Vcoverage[3697]);
                            }
                            ++(vlSymsp->__Vcoverage[3698]);
                            if ((8U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__wstrb))) {
                                __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__Vfuncout 
                                    = ((0x00ffffffU 
                                        & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__Vfuncout) 
                                       | (0xff000000U 
                                          & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__newv));
                                ++(vlSymsp->__Vcoverage[3696]);
                            } else {
                                ++(vlSymsp->__Vcoverage[3697]);
                            }
                            ++(vlSymsp->__Vcoverage[3698]);
                            ++(vlSymsp->__Vcoverage[3699]);
                            __Vdly__tinygpu_top__DOT__u_regs__DOT__src1_addr_o 
                                = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__14__Vfuncout;
                            ++(vlSymsp->__Vcoverage[3719]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                        ++(vlSymsp->__Vcoverage[3737]);
                    } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                        ++(vlSymsp->__Vcoverage[3737]);
                    } else {
                        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__wstrb 
                            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb;
                        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__newv 
                            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata;
                        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__oldv 
                            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src0_addr_o;
                        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__Vfuncout 
                            = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__oldv;
                        if ((1U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__wstrb))) {
                            __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__Vfuncout 
                                = ((0xffffff00U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__Vfuncout) 
                                   | (0x000000ffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__newv));
                            ++(vlSymsp->__Vcoverage[3696]);
                        } else {
                            ++(vlSymsp->__Vcoverage[3697]);
                        }
                        ++(vlSymsp->__Vcoverage[3698]);
                        if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__wstrb))) {
                            __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__Vfuncout 
                                = ((0xffff00ffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__Vfuncout) 
                                   | (0x0000ff00U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__newv));
                            ++(vlSymsp->__Vcoverage[3696]);
                        } else {
                            ++(vlSymsp->__Vcoverage[3697]);
                        }
                        ++(vlSymsp->__Vcoverage[3698]);
                        if ((4U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__wstrb))) {
                            __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__Vfuncout 
                                = ((0xff00ffffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__Vfuncout) 
                                   | (0x00ff0000U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__newv));
                            ++(vlSymsp->__Vcoverage[3696]);
                        } else {
                            ++(vlSymsp->__Vcoverage[3697]);
                        }
                        ++(vlSymsp->__Vcoverage[3698]);
                        if ((8U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__wstrb))) {
                            __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__Vfuncout 
                                = ((0x00ffffffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__Vfuncout) 
                                   | (0xff000000U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__newv));
                            ++(vlSymsp->__Vcoverage[3696]);
                        } else {
                            ++(vlSymsp->__Vcoverage[3697]);
                        }
                        ++(vlSymsp->__Vcoverage[3698]);
                        ++(vlSymsp->__Vcoverage[3699]);
                        __Vdly__tinygpu_top__DOT__u_regs__DOT__src0_addr_o 
                            = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__15__Vfuncout;
                        ++(vlSymsp->__Vcoverage[3718]);
                    }
                } else if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                    if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                        if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                            ++(vlSymsp->__Vcoverage[3737]);
                        } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                            ++(vlSymsp->__Vcoverage[3737]);
                        } else {
                            ++(vlSymsp->__Vcoverage[3717]);
                            vlSelfRef.tinygpu_top__DOT__u_regs__DOT__opcode_o 
                                = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_op_next_w;
                        }
                    } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                        ++(vlSymsp->__Vcoverage[3737]);
                    } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                        ++(vlSymsp->__Vcoverage[3737]);
                    } else {
                        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__wstrb 
                            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wstrb;
                        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__newv 
                            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_wdata;
                        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__oldv 
                            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_addr_o;
                        __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__Vfuncout 
                            = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__oldv;
                        if ((1U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__wstrb))) {
                            __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__Vfuncout 
                                = ((0xffffff00U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__Vfuncout) 
                                   | (0x000000ffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__newv));
                            ++(vlSymsp->__Vcoverage[3696]);
                        } else {
                            ++(vlSymsp->__Vcoverage[3697]);
                        }
                        ++(vlSymsp->__Vcoverage[3698]);
                        if ((2U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__wstrb))) {
                            __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__Vfuncout 
                                = ((0xffff00ffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__Vfuncout) 
                                   | (0x0000ff00U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__newv));
                            ++(vlSymsp->__Vcoverage[3696]);
                        } else {
                            ++(vlSymsp->__Vcoverage[3697]);
                        }
                        ++(vlSymsp->__Vcoverage[3698]);
                        if ((4U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__wstrb))) {
                            __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__Vfuncout 
                                = ((0xff00ffffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__Vfuncout) 
                                   | (0x00ff0000U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__newv));
                            ++(vlSymsp->__Vcoverage[3696]);
                        } else {
                            ++(vlSymsp->__Vcoverage[3697]);
                        }
                        ++(vlSymsp->__Vcoverage[3698]);
                        if ((8U & (IData)(__Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__wstrb))) {
                            __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__Vfuncout 
                                = ((0x00ffffffU & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__Vfuncout) 
                                   | (0xff000000U & __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__newv));
                            ++(vlSymsp->__Vcoverage[3696]);
                        } else {
                            ++(vlSymsp->__Vcoverage[3697]);
                        }
                        ++(vlSymsp->__Vcoverage[3698]);
                        ++(vlSymsp->__Vcoverage[3699]);
                        __Vdly__tinygpu_top__DOT__u_regs__DOT__cmd_addr_o 
                            = __Vfunc_tinygpu_top__DOT__u_regs__DOT__apply_wstrb32__16__Vfuncout;
                        ++(vlSymsp->__Vcoverage[3716]);
                    }
                } else if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                    ++(vlSymsp->__Vcoverage[3737]);
                } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                    ++(vlSymsp->__Vcoverage[3737]);
                } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__addr_lo))) {
                    ++(vlSymsp->__Vcoverage[3737]);
                } else {
                    ++(vlSymsp->__Vcoverage[3715]);
                    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_enable_o 
                        = (1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__ctrl_mode_next_w));
                    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_mode_o 
                        = (1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__ctrl_mode_next_w) 
                                 >> 1U));
                }
                ++(vlSymsp->__Vcoverage[3738]);
            } else {
                ++(vlSymsp->__Vcoverage[3739]);
            }
            if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_valid) 
                 & (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_we))) {
                ++(vlSymsp->__Vcoverage[3740]);
            }
            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_we)))) {
                ++(vlSymsp->__Vcoverage[3741]);
            }
            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_valid)))) {
                ++(vlSymsp->__Vcoverage[3742]);
            }
            ++(vlSymsp->__Vcoverage[3744]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[3745]);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_enable_o = 0U;
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_mode_o = 0U;
        __Vdly__tinygpu_top__DOT__u_regs__DOT__cmd_addr_o = 0U;
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__opcode_o = 0U;
        __Vdly__tinygpu_top__DOT__u_regs__DOT__src0_addr_o = 0U;
        __Vdly__tinygpu_top__DOT__u_regs__DOT__src1_addr_o = 0U;
        __Vdly__tinygpu_top__DOT__u_regs__DOT__bias_addr_o = 0U;
        __Vdly__tinygpu_top__DOT__u_regs__DOT__dst_addr_o = 0U;
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_m_o = 0U;
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_n_o = 0U;
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_k_o = 0U;
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride0_o = 0U;
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride1_o = 0U;
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride_dst_o = 0U;
        __Vdly__tinygpu_top__DOT__u_regs__DOT__flags_o = 0U;
        __Vdly__tinygpu_top__DOT__u_regs__DOT__scale_o = 0U;
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shift_o = 0U;
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__zero_point_o = 0U;
        __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_in_hw_o = 0U;
        __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_channels_o = 0U;
        __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_cfg_o = 0U;
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__done_sticky_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_q = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[3746]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_regs__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[3747]);
    }
    ++(vlSymsp->__Vcoverage[3748]);
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_addr_o 
        = __Vdly__tinygpu_top__DOT__u_regs__DOT__cmd_addr_o;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src0_addr_o 
        = __Vdly__tinygpu_top__DOT__u_regs__DOT__src0_addr_o;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src1_addr_o 
        = __Vdly__tinygpu_top__DOT__u_regs__DOT__src1_addr_o;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__bias_addr_o 
        = __Vdly__tinygpu_top__DOT__u_regs__DOT__bias_addr_o;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dst_addr_o 
        = __Vdly__tinygpu_top__DOT__u_regs__DOT__dst_addr_o;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__flags_o 
        = __Vdly__tinygpu_top__DOT__u_regs__DOT__flags_o;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__scale_o 
        = __Vdly__tinygpu_top__DOT__u_regs__DOT__scale_o;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_in_hw_o 
        = __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_in_hw_o;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_channels_o 
        = __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_channels_o;
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_cfg_o 
        = __Vdly__tinygpu_top__DOT__u_regs__DOT__conv_cfg_o;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__done_sticky_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__done_sticky_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3398, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__done_sticky_q, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__done_sticky_q);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__done_sticky_q 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__done_sticky_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_addr_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__cmd_addr_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2486, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_addr_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__cmd_addr_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__cmd_addr_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_addr_o;
    }
    vlSelfRef.tinygpu_top__DOT__reg_cmd_addr = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_addr_o;
    if ((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src0_addr_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__src0_addr_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2566, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src0_addr_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__src0_addr_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__src0_addr_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src0_addr_o;
    }
    vlSelfRef.tinygpu_top__DOT__reg_src0_addr = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src0_addr_o;
    if ((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src1_addr_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__src1_addr_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2630, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src1_addr_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__src1_addr_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__src1_addr_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src1_addr_o;
    }
    vlSelfRef.tinygpu_top__DOT__reg_src1_addr = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__src1_addr_o;
    if ((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__bias_addr_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__bias_addr_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2694, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__bias_addr_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__bias_addr_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__bias_addr_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__bias_addr_o;
    }
    vlSelfRef.tinygpu_top__DOT__reg_bias_addr = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__bias_addr_o;
    if ((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dst_addr_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dst_addr_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2758, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dst_addr_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dst_addr_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dst_addr_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dst_addr_o;
    }
    vlSelfRef.tinygpu_top__DOT__reg_dst_addr = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dst_addr_o;
    if ((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__flags_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__flags_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 3014, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__flags_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__flags_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__flags_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__flags_o;
    }
    vlSelfRef.tinygpu_top__DOT__reg_flags = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__flags_o;
    if ((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__scale_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__scale_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 3078, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__scale_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__scale_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__scale_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__scale_o;
    }
    vlSelfRef.tinygpu_top__DOT__reg_scale = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__scale_o;
    if ((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_in_hw_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__conv_in_hw_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 3206, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_in_hw_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__conv_in_hw_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__conv_in_hw_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_in_hw_o;
    }
    vlSelfRef.tinygpu_top__DOT__reg_conv_in_hw = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_in_hw_o;
    if ((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_channels_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__conv_channels_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 3270, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_channels_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__conv_channels_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__conv_channels_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_channels_o;
    }
    vlSelfRef.tinygpu_top__DOT__reg_conv_channels = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_channels_o;
    if ((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_cfg_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__conv_cfg_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 3334, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_cfg_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__conv_cfg_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__conv_cfg_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_cfg_o;
    }
    vlSelfRef.tinygpu_top__DOT__reg_conv_cfg = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__conv_cfg_o;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__opcode_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__opcode_o))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 2550, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__opcode_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__opcode_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__opcode_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__opcode_o;
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
    vlSelfRef.tinygpu_top__DOT__reg_opcode = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__opcode_o;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__irq_pending_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3400, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_q, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__irq_pending_q);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__irq_pending_q 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_o 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_q;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_m_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_m_o))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 2822, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_m_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_m_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_m_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_m_o;
    }
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_n_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_n_o))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 2854, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_n_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_n_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_n_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_n_o;
    }
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_k_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_k_o))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 2886, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_k_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_k_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_k_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_k_o;
    }
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride0_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride0_o))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 2918, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride0_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride0_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride0_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride0_o;
    }
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride1_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride1_o))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 2950, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride1_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride1_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride1_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride1_o;
    }
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride_dst_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride_dst_o))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 2982, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride_dst_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride_dst_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride_dst_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride_dst_o;
    }
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shift_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__shift_o))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 3142, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shift_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__shift_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__shift_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shift_o;
    }
    vlSelfRef.tinygpu_top__DOT__reg_shift = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shift_o;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__zero_point_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__zero_point_o))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 3174, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__zero_point_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__zero_point_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__zero_point_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__zero_point_o;
    }
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_enable_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__irq_enable_o))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2480, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_enable_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__irq_enable_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__irq_enable_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_enable_o;
    }
    vlSelfRef.tinygpu_top__DOT__reg_irq_enable = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_enable_o;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_mode_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__direct_mode_o))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2482, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_mode_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__direct_mode_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__direct_mode_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_mode_o;
    }
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
    vlSelfRef.tinygpu_top__DOT__reg_direct_mode = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_mode_o;
    if ((vlSelfRef.tinygpu_top__DOT__reg_cmd_addr ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_cmd_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 432, vlSelfRef.tinygpu_top__DOT__reg_cmd_addr, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_cmd_addr);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_cmd_addr 
            = vlSelfRef.tinygpu_top__DOT__reg_cmd_addr;
    }
    if ((vlSelfRef.tinygpu_top__DOT__reg_src0_addr 
         ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_src0_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 512, vlSelfRef.tinygpu_top__DOT__reg_src0_addr, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_src0_addr);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_src0_addr 
            = vlSelfRef.tinygpu_top__DOT__reg_src0_addr;
    }
    if ((vlSelfRef.tinygpu_top__DOT__reg_src1_addr 
         ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_src1_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 576, vlSelfRef.tinygpu_top__DOT__reg_src1_addr, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_src1_addr);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_src1_addr 
            = vlSelfRef.tinygpu_top__DOT__reg_src1_addr;
    }
    if ((vlSelfRef.tinygpu_top__DOT__reg_bias_addr 
         ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_bias_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 640, vlSelfRef.tinygpu_top__DOT__reg_bias_addr, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_bias_addr);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_bias_addr 
            = vlSelfRef.tinygpu_top__DOT__reg_bias_addr;
    }
    if ((vlSelfRef.tinygpu_top__DOT__reg_dst_addr ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_dst_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 704, vlSelfRef.tinygpu_top__DOT__reg_dst_addr, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_dst_addr);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_dst_addr 
            = vlSelfRef.tinygpu_top__DOT__reg_dst_addr;
    }
    if ((vlSelfRef.tinygpu_top__DOT__reg_flags ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_flags)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 960, vlSelfRef.tinygpu_top__DOT__reg_flags, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_flags);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_flags 
            = vlSelfRef.tinygpu_top__DOT__reg_flags;
    }
    if ((vlSelfRef.tinygpu_top__DOT__reg_scale ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_scale)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1024, vlSelfRef.tinygpu_top__DOT__reg_scale, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_scale);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_scale 
            = vlSelfRef.tinygpu_top__DOT__reg_scale;
    }
    if ((vlSelfRef.tinygpu_top__DOT__reg_conv_in_hw 
         ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_conv_in_hw)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1152, vlSelfRef.tinygpu_top__DOT__reg_conv_in_hw, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_conv_in_hw);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_conv_in_hw 
            = vlSelfRef.tinygpu_top__DOT__reg_conv_in_hw;
    }
    if ((vlSelfRef.tinygpu_top__DOT__reg_conv_channels 
         ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_conv_channels)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1216, vlSelfRef.tinygpu_top__DOT__reg_conv_channels, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_conv_channels);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_conv_channels 
            = vlSelfRef.tinygpu_top__DOT__reg_conv_channels;
    }
    if ((vlSelfRef.tinygpu_top__DOT__reg_conv_cfg ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_conv_cfg)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1280, vlSelfRef.tinygpu_top__DOT__reg_conv_cfg, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_conv_cfg);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_conv_cfg 
            = vlSelfRef.tinygpu_top__DOT__reg_conv_cfg;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_op_next_w) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__direct_op_next_w))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 3422, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_op_next_w, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__direct_op_next_w);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__direct_op_next_w 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__direct_op_next_w;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__reg_opcode) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_opcode))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 496, vlSelfRef.tinygpu_top__DOT__reg_opcode, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_opcode);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_opcode 
            = vlSelfRef.tinygpu_top__DOT__reg_opcode;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__irq_pending_o))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2484, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__irq_pending_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__irq_pending_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_o;
    }
    vlSelfRef.tinygpu_top__DOT__reg_irq_pending = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__irq_pending_o;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__reg_dim_m) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_dim_m))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 768, vlSelfRef.tinygpu_top__DOT__reg_dim_m, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_dim_m);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_dim_m 
            = vlSelfRef.tinygpu_top__DOT__reg_dim_m;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_m_next_w) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_m_next_w))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 3438, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_m_next_w, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_m_next_w);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_m_next_w 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_m_next_w;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__reg_dim_n) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_dim_n))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 800, vlSelfRef.tinygpu_top__DOT__reg_dim_n, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_dim_n);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_dim_n 
            = vlSelfRef.tinygpu_top__DOT__reg_dim_n;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_n_next_w) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_n_next_w))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 3470, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_n_next_w, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_n_next_w);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_n_next_w 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_n_next_w;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__reg_dim_k) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_dim_k))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 832, vlSelfRef.tinygpu_top__DOT__reg_dim_k, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_dim_k);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_dim_k 
            = vlSelfRef.tinygpu_top__DOT__reg_dim_k;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_k_next_w) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_k_next_w))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 3502, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_k_next_w, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_k_next_w);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__dim_k_next_w 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__dim_k_next_w;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__reg_stride0) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_stride0))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 864, vlSelfRef.tinygpu_top__DOT__reg_stride0, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_stride0);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_stride0 
            = vlSelfRef.tinygpu_top__DOT__reg_stride0;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride0_next_w) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride0_next_w))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 3534, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride0_next_w, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride0_next_w);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride0_next_w 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride0_next_w;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__reg_stride1) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_stride1))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 896, vlSelfRef.tinygpu_top__DOT__reg_stride1, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_stride1);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_stride1 
            = vlSelfRef.tinygpu_top__DOT__reg_stride1;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride1_next_w) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride1_next_w))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 3566, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride1_next_w, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride1_next_w);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride1_next_w 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride1_next_w;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__reg_stride_dst) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_stride_dst))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 928, vlSelfRef.tinygpu_top__DOT__reg_stride_dst, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_stride_dst);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_stride_dst 
            = vlSelfRef.tinygpu_top__DOT__reg_stride_dst;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride_dst_next_w) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride_dst_next_w))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 3598, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride_dst_next_w, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride_dst_next_w);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__stride_dst_next_w 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stride_dst_next_w;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__reg_shift) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_shift))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 1088, vlSelfRef.tinygpu_top__DOT__reg_shift, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_shift);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_shift 
            = vlSelfRef.tinygpu_top__DOT__reg_shift;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__reg_zero_point) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_zero_point))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 1120, vlSelfRef.tinygpu_top__DOT__reg_zero_point, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_zero_point);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_zero_point 
            = vlSelfRef.tinygpu_top__DOT__reg_zero_point;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shiftzp_next_w 
         ^ vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__shiftzp_next_w)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 3630, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shiftzp_next_w, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__shiftzp_next_w);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__shiftzp_next_w 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__shiftzp_next_w;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__reg_irq_enable) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_irq_enable))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 426, vlSelfRef.tinygpu_top__DOT__reg_irq_enable, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_irq_enable);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_irq_enable 
            = vlSelfRef.tinygpu_top__DOT__reg_irq_enable;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__ctrl_mode_next_w) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__ctrl_mode_next_w))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 3418, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__ctrl_mode_next_w, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__ctrl_mode_next_w);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__ctrl_mode_next_w 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__ctrl_mode_next_w;
    }
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__reg_direct_mode) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_direct_mode))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 428, vlSelfRef.tinygpu_top__DOT__reg_direct_mode, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_direct_mode);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_direct_mode 
            = vlSelfRef.tinygpu_top__DOT__reg_direct_mode;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__direct_mode 
        = vlSelfRef.tinygpu_top__DOT__reg_direct_mode;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__reg_irq_pending) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_irq_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 430, vlSelfRef.tinygpu_top__DOT__reg_irq_pending, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_irq_pending);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_irq_pending 
            = vlSelfRef.tinygpu_top__DOT__reg_irq_pending;
    }
    vlSelfRef.tinygpu_top__DOT__irq = ((IData)(vlSelfRef.tinygpu_top__DOT__reg_irq_enable) 
                                       & (IData)(vlSelfRef.tinygpu_top__DOT__reg_irq_pending));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT__start_direct_mode_o) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__start_direct_mode_o))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2476, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__start_direct_mode_o, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__start_direct_mode_o);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__start_direct_mode_o 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__start_direct_mode_o;
    }
    vlSelfRef.tinygpu_top__DOT__reg_start_direct_mode 
        = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__start_direct_mode_o;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__direct_mode) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__direct_mode))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3789, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__direct_mode, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__direct_mode);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__direct_mode 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__direct_mode;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__irq) ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__irq))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 418, vlSelfRef.tinygpu_top__DOT__irq, vlSelfRef.tinygpu_top__DOT____Vtogcov__irq);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__irq 
            = vlSelfRef.tinygpu_top__DOT__irq;
    }
    vlSelfRef.irq = vlSelfRef.tinygpu_top__DOT__irq;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__reg_start_direct_mode) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_start_direct_mode))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 422, vlSelfRef.tinygpu_top__DOT__reg_start_direct_mode, vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_start_direct_mode);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__reg_start_direct_mode 
            = vlSelfRef.tinygpu_top__DOT__reg_start_direct_mode;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__start_direct_mode 
        = vlSelfRef.tinygpu_top__DOT__reg_start_direct_mode;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__start_direct_mode) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__start_direct_mode))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3785, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__start_direct_mode, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__start_direct_mode);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__start_direct_mode 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__start_direct_mode;
    }
}

void Vtop___024root___nba_sequent__TOP__20(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__20\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__read_outstanding_q;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__read_outstanding_q = 0;
    // Body
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__read_outstanding_q 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__read_outstanding_q;
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rst_n) {
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_req_q) {
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_req)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tinygpu_dma.sv:327: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl.u_dma", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_dma.sv", 327, "");
                }
                if (VL_UNLIKELY((((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_we) 
                                  != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_we_q))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tinygpu_dma.sv:328: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl.u_dma", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_dma.sv", 328, "");
                }
                if (VL_UNLIKELY(((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_addr 
                                  != vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_addr_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: tinygpu_dma.sv:329: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl.u_dma", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_dma.sv", 329, "");
                }
                if (VL_UNLIKELY(((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wdata 
                                  != vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_wdata_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: tinygpu_dma.sv:330: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl.u_dma", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_dma.sv", 330, "");
                }
                if (VL_UNLIKELY((((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wstrb) 
                                  != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_wstrb_q))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tinygpu_dma.sv:331: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl.u_dma", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_dma.sv", 331, "");
                }
            }
            ++(vlSymsp->__Vcoverage[18608]);
        } else {
            ++(vlSymsp->__Vcoverage[18609]);
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_req_q 
            = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_req) 
               & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_ready)));
        if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_req) 
             & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_ready)))) {
            ++(vlSymsp->__Vcoverage[18613]);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_we_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_we;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_addr_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_addr;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_wdata_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wdata;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_wstrb_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_wstrb;
        } else {
            ++(vlSymsp->__Vcoverage[18614]);
        }
        if ((((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_req) 
              & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_ready)) 
             & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_we)))) {
            ++(vlSymsp->__Vcoverage[18618]);
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__read_outstanding_q = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[18619]);
        }
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rvalid) {
            ++(vlSymsp->__Vcoverage[18624]);
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__read_outstanding_q = 0U;
        } else {
            ++(vlSymsp->__Vcoverage[18625]);
        }
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rvalid) 
                              & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__read_outstanding_q)))))) {
                VL_WRITEF_NX("[%0t] %%Error: tinygpu_dma.sv:346: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl.u_dma", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_dma.sv", 346, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wr_en)) 
                                       | (3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: tinygpu_dma.sv:347: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl.u_dma", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_dma.sv", 347, "");
            }
            if (VL_UNLIKELY((((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q) 
                              & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q))))) {
                VL_WRITEF_NX("[%0t] %%Error: tinygpu_dma.sv:348: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl.u_dma", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_dma.sv", 348, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_we)) 
                                       | (5U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: tinygpu_dma.sv:349: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl.u_dma", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_dma.sv", 349, "");
            }
            if (VL_UNLIKELY((((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_o) 
                              != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q))))) {
                VL_WRITEF_NX("[%0t] %%Error: tinygpu_dma.sv:350: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl.u_dma", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_dma.sv", 350, "");
            }
        }
        if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_req) 
             & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_ready)))) {
            ++(vlSymsp->__Vcoverage[18610]);
        }
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_ready) {
            ++(vlSymsp->__Vcoverage[18611]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_req)))) {
            ++(vlSymsp->__Vcoverage[18612]);
        }
        if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_req) 
             & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_ready)))) {
            ++(vlSymsp->__Vcoverage[18615]);
        }
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_ready) {
            ++(vlSymsp->__Vcoverage[18616]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_req)))) {
            ++(vlSymsp->__Vcoverage[18617]);
        }
        if ((((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_req) 
              & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_ready)) 
             & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_we)))) {
            ++(vlSymsp->__Vcoverage[18620]);
        }
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_we) {
            ++(vlSymsp->__Vcoverage[18621]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_ready)))) {
            ++(vlSymsp->__Vcoverage[18622]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_req)))) {
            ++(vlSymsp->__Vcoverage[18623]);
        }
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__read_outstanding_q) {
            ++(vlSymsp->__Vcoverage[18626]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rvalid)))) {
            ++(vlSymsp->__Vcoverage[18627]);
        }
        if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rvalid) 
             & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__read_outstanding_q)))) {
            ++(vlSymsp->__Vcoverage[18628]);
        }
        if ((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
            ++(vlSymsp->__Vcoverage[18629]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wr_en)))) {
            ++(vlSymsp->__Vcoverage[18630]);
        }
        if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wr_en) 
             & (3U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q)))) {
            ++(vlSymsp->__Vcoverage[18631]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q)))) {
            ++(vlSymsp->__Vcoverage[18632]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q)))) {
            ++(vlSymsp->__Vcoverage[18633]);
        }
        if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q) 
             & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q))) {
            ++(vlSymsp->__Vcoverage[18634]);
        }
        if ((5U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
            ++(vlSymsp->__Vcoverage[18635]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_we)))) {
            ++(vlSymsp->__Vcoverage[18636]);
        }
        if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_we) 
             & (5U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q)))) {
            ++(vlSymsp->__Vcoverage[18637]);
        }
        ++(vlSymsp->__Vcoverage[18639]);
    } else {
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__read_outstanding_q = 0U;
        ++(vlSymsp->__Vcoverage[18638]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_req_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_we_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_addr_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_wdata_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_wstrb_q = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[18640]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[18641]);
    }
    ++(vlSymsp->__Vcoverage[18642]);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__read_outstanding_q 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__read_outstanding_q;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_req_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__held_req_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 18466, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_req_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__held_req_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__held_req_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__held_req_q;
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__read_outstanding_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__read_outstanding_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 18468, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__read_outstanding_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__read_outstanding_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__read_outstanding_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__read_outstanding_q;
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rst_n) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q 
            = (6U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q));
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_d;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_d;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q 
            = (7U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q));
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_row_base_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_row_base_d;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_d;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_d;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_d;
        if (((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q)) 
             & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__start))) {
            ++(vlSymsp->__Vcoverage[18393]);
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
        } else {
            ++(vlSymsp->__Vcoverage[18394]);
        }
        if ((4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
            ++(vlSymsp->__Vcoverage[18398]);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__store_word_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_rdata;
        } else {
            ++(vlSymsp->__Vcoverage[18399]);
        }
        if (((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q)) 
             & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__start))) {
            ++(vlSymsp->__Vcoverage[18395]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__start)))) {
            ++(vlSymsp->__Vcoverage[18396]);
        }
        if ((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q))) {
            ++(vlSymsp->__Vcoverage[18397]);
        }
        ++(vlSymsp->__Vcoverage[18401]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d;
    } else {
        ++(vlSymsp->__Vcoverage[18400]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__stride_bytes_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_row_base_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__store_word_q = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[18402]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[18403]);
    }
    ++(vlSymsp->__Vcoverage[18404]);
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_row_base_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__ext_row_base_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 17844, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_row_base_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__ext_row_base_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__ext_row_base_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_row_base_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_row_base_q))) {
        VL_COV_TOGGLE_CHG_ST_I(9, vlSymsp->__Vcoverage + 18100, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_row_base_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_row_base_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_row_base_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__stride_bytes_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__stride_bytes_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 17680, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__stride_bytes_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__stride_bytes_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__stride_bytes_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__stride_bytes_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__store_word_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__store_word_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 18324, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__store_word_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__store_word_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__store_word_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__store_word_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_addr_q))) {
        VL_COV_TOGGLE_CHG_ST_I(9, vlSymsp->__Vcoverage + 18136, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_addr_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_addr_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__op_kind_q))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 17612, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__op_kind_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__op_kind_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_region_q))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 17712, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_region_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__spm_region_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__state_q))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 17596, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__state_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__state_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q;
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
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__last_elem 
        = (((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q))) 
            >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows_q)) 
           & ((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q))) 
              >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols_q)));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__done_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 17608, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__done_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__done_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__error_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 17610, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__error_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__error_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__ext_addr_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 17972, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__ext_addr_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__ext_addr_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__aligned_read_addr 
        = (0xfffffffcU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__aligned_write_addr 
        = (0xfffffffcU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__load_lane_sel 
        = (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__ext_addr_q);
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__last_elem) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__last_elem))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 18322, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__last_elem, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__last_elem);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__last_elem 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__last_elem;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 17038, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__done);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__done 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_done 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__error))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 17040, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__error);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__error 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_error 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error;
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__load_lane_sel) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__load_lane_sel))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 18316, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__load_lane_sel, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__load_lane_sel);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__load_lane_sel 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__load_lane_sel;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_done) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9065, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_done, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_done);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_done 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_done;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_error) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_error))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9067, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_error, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_error);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_error 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_error;
    }
}

void Vtop___024root___nba_sequent__TOP__21(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__21\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__tinygpu_top__DOT__mem_cmd_valid_q;
    __Vdly__tinygpu_top__DOT__mem_cmd_valid_q = 0;
    CData/*0:0*/ __Vdly__tinygpu_top__DOT__mem_cmd_we_q;
    __Vdly__tinygpu_top__DOT__mem_cmd_we_q = 0;
    CData/*0:0*/ __Vdly__tinygpu_top__DOT__mem_read_pending_q;
    __Vdly__tinygpu_top__DOT__mem_read_pending_q = 0;
    // Body
    __Vdly__tinygpu_top__DOT__mem_cmd_we_q = vlSelfRef.tinygpu_top__DOT__mem_cmd_we_q;
    __Vdly__tinygpu_top__DOT__mem_read_pending_q = vlSelfRef.tinygpu_top__DOT__mem_read_pending_q;
    __Vdly__tinygpu_top__DOT__mem_cmd_valid_q = vlSelfRef.tinygpu_top__DOT__mem_cmd_valid_q;
    if (vlSelfRef.tinygpu_top__DOT__rst_n) {
        vlSelfRef.tinygpu_top__DOT__mem_rvalid_stage_q = 0U;
        if (((IData)(vlSelfRef.tinygpu_top__DOT__mem_stage_ready) 
             & (IData)(vlSelfRef.tinygpu_top__DOT__mem_req_raw))) {
            ++(vlSymsp->__Vcoverage[1972]);
            __Vdly__tinygpu_top__DOT__mem_cmd_valid_q = 1U;
            __Vdly__tinygpu_top__DOT__mem_cmd_we_q 
                = vlSelfRef.tinygpu_top__DOT__mem_we_raw;
            vlSelfRef.tinygpu_top__DOT__mem_cmd_addr_q 
                = vlSelfRef.tinygpu_top__DOT__mem_addr_raw;
            vlSelfRef.tinygpu_top__DOT__mem_cmd_wdata_q 
                = vlSelfRef.tinygpu_top__DOT__mem_wdata_raw;
            vlSelfRef.tinygpu_top__DOT__mem_cmd_wstrb_q 
                = vlSelfRef.tinygpu_top__DOT__mem_wstrb_raw;
        } else {
            ++(vlSymsp->__Vcoverage[1973]);
        }
        if (((IData)(vlSelfRef.tinygpu_top__DOT__mem_cmd_valid_q) 
             & (IData)(vlSelfRef.tinygpu_top__DOT__mem_ready))) {
            __Vdly__tinygpu_top__DOT__mem_cmd_valid_q = 0U;
            if (vlSelfRef.tinygpu_top__DOT__mem_cmd_we_q) {
                ++(vlSymsp->__Vcoverage[1980]);
            } else {
                if (vlSelfRef.tinygpu_top__DOT__mem_rvalid) {
                    ++(vlSymsp->__Vcoverage[1977]);
                    __Vdly__tinygpu_top__DOT__mem_read_pending_q = 0U;
                    vlSelfRef.tinygpu_top__DOT__mem_rdata_stage_q 
                        = vlSelfRef.tinygpu_top__DOT__mem_rdata;
                    vlSelfRef.tinygpu_top__DOT__mem_rvalid_stage_q = 1U;
                } else {
                    ++(vlSymsp->__Vcoverage[1978]);
                    __Vdly__tinygpu_top__DOT__mem_read_pending_q = 1U;
                }
                ++(vlSymsp->__Vcoverage[1979]);
            }
            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__mem_cmd_we_q)))) {
                ++(vlSymsp->__Vcoverage[1981]);
            }
            if (vlSelfRef.tinygpu_top__DOT__mem_cmd_we_q) {
                ++(vlSymsp->__Vcoverage[1982]);
            }
            ++(vlSymsp->__Vcoverage[1983]);
        } else {
            ++(vlSymsp->__Vcoverage[1984]);
        }
        if (((IData)(vlSelfRef.tinygpu_top__DOT__mem_read_pending_q) 
             & (IData)(vlSelfRef.tinygpu_top__DOT__mem_rvalid))) {
            ++(vlSymsp->__Vcoverage[1988]);
            __Vdly__tinygpu_top__DOT__mem_read_pending_q = 0U;
            vlSelfRef.tinygpu_top__DOT__mem_rdata_stage_q 
                = vlSelfRef.tinygpu_top__DOT__mem_rdata;
            vlSelfRef.tinygpu_top__DOT__mem_rvalid_stage_q = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[1989]);
        }
        if (((IData)(vlSelfRef.tinygpu_top__DOT__mem_stage_ready) 
             & (IData)(vlSelfRef.tinygpu_top__DOT__mem_req_raw))) {
            ++(vlSymsp->__Vcoverage[1974]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__mem_req_raw)))) {
            ++(vlSymsp->__Vcoverage[1975]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__mem_stage_ready)))) {
            ++(vlSymsp->__Vcoverage[1976]);
        }
        if (((IData)(vlSelfRef.tinygpu_top__DOT__mem_cmd_valid_q) 
             & (IData)(vlSelfRef.tinygpu_top__DOT__mem_ready))) {
            ++(vlSymsp->__Vcoverage[1985]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__mem_ready)))) {
            ++(vlSymsp->__Vcoverage[1986]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__mem_cmd_valid_q)))) {
            ++(vlSymsp->__Vcoverage[1987]);
        }
        if (((IData)(vlSelfRef.tinygpu_top__DOT__mem_read_pending_q) 
             & (IData)(vlSelfRef.tinygpu_top__DOT__mem_rvalid))) {
            ++(vlSymsp->__Vcoverage[1990]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__mem_rvalid)))) {
            ++(vlSymsp->__Vcoverage[1991]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__mem_read_pending_q)))) {
            ++(vlSymsp->__Vcoverage[1992]);
        }
        ++(vlSymsp->__Vcoverage[1994]);
    } else {
        ++(vlSymsp->__Vcoverage[1993]);
        vlSelfRef.tinygpu_top__DOT__mem_rdata_stage_q = 0U;
        vlSelfRef.tinygpu_top__DOT__mem_rvalid_stage_q = 0U;
        __Vdly__tinygpu_top__DOT__mem_cmd_valid_q = 0U;
        __Vdly__tinygpu_top__DOT__mem_cmd_we_q = 0U;
        vlSelfRef.tinygpu_top__DOT__mem_cmd_addr_q = 0U;
        vlSelfRef.tinygpu_top__DOT__mem_cmd_wdata_q = 0U;
        vlSelfRef.tinygpu_top__DOT__mem_cmd_wstrb_q = 0U;
        __Vdly__tinygpu_top__DOT__mem_read_pending_q = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[1995]);
    }
    if (vlSelfRef.tinygpu_top__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[1996]);
    }
    ++(vlSymsp->__Vcoverage[1997]);
    vlSelfRef.tinygpu_top__DOT__mem_cmd_we_q = __Vdly__tinygpu_top__DOT__mem_cmd_we_q;
    vlSelfRef.tinygpu_top__DOT__mem_read_pending_q 
        = __Vdly__tinygpu_top__DOT__mem_read_pending_q;
    vlSelfRef.tinygpu_top__DOT__mem_cmd_valid_q = __Vdly__tinygpu_top__DOT__mem_cmd_valid_q;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__mem_cmd_we_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_cmd_we_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1830, vlSelfRef.tinygpu_top__DOT__mem_cmd_we_q, vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_cmd_we_q);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_cmd_we_q 
            = vlSelfRef.tinygpu_top__DOT__mem_cmd_we_q;
    }
    vlSelfRef.tinygpu_top__DOT__mem_we = vlSelfRef.tinygpu_top__DOT__mem_cmd_we_q;
    if ((vlSelfRef.tinygpu_top__DOT__mem_cmd_addr_q 
         ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_cmd_addr_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1832, vlSelfRef.tinygpu_top__DOT__mem_cmd_addr_q, vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_cmd_addr_q);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_cmd_addr_q 
            = vlSelfRef.tinygpu_top__DOT__mem_cmd_addr_q;
    }
    vlSelfRef.tinygpu_top__DOT__mem_addr = vlSelfRef.tinygpu_top__DOT__mem_cmd_addr_q;
    if ((vlSelfRef.tinygpu_top__DOT__mem_cmd_wdata_q 
         ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_cmd_wdata_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1896, vlSelfRef.tinygpu_top__DOT__mem_cmd_wdata_q, vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_cmd_wdata_q);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_cmd_wdata_q 
            = vlSelfRef.tinygpu_top__DOT__mem_cmd_wdata_q;
    }
    vlSelfRef.tinygpu_top__DOT__mem_wdata = vlSelfRef.tinygpu_top__DOT__mem_cmd_wdata_q;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__mem_cmd_wstrb_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_cmd_wstrb_q))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 1960, vlSelfRef.tinygpu_top__DOT__mem_cmd_wstrb_q, vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_cmd_wstrb_q);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_cmd_wstrb_q 
            = vlSelfRef.tinygpu_top__DOT__mem_cmd_wstrb_q;
    }
    vlSelfRef.tinygpu_top__DOT__mem_wstrb = vlSelfRef.tinygpu_top__DOT__mem_cmd_wstrb_q;
    if ((vlSelfRef.tinygpu_top__DOT__mem_rdata_stage_q 
         ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_rdata_stage_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1762, vlSelfRef.tinygpu_top__DOT__mem_rdata_stage_q, vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_rdata_stage_q);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_rdata_stage_q 
            = vlSelfRef.tinygpu_top__DOT__mem_rdata_stage_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_rdata 
        = vlSelfRef.tinygpu_top__DOT__mem_rdata_stage_q;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__mem_read_pending_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_read_pending_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1968, vlSelfRef.tinygpu_top__DOT__mem_read_pending_q, vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_read_pending_q);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_read_pending_q 
            = vlSelfRef.tinygpu_top__DOT__mem_read_pending_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__mem_cmd_valid_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_cmd_valid_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1828, vlSelfRef.tinygpu_top__DOT__mem_cmd_valid_q, vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_cmd_valid_q);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_cmd_valid_q 
            = vlSelfRef.tinygpu_top__DOT__mem_cmd_valid_q;
    }
    vlSelfRef.tinygpu_top__DOT__mem_req = vlSelfRef.tinygpu_top__DOT__mem_cmd_valid_q;
    vlSelfRef.tinygpu_top__DOT__mem_stage_ready = (1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.tinygpu_top__DOT__mem_cmd_valid_q) 
                                                       | (IData)(vlSelfRef.tinygpu_top__DOT__mem_read_pending_q))));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__mem_rvalid_stage_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_rvalid_stage_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1826, vlSelfRef.tinygpu_top__DOT__mem_rvalid_stage_q, vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_rvalid_stage_q);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_rvalid_stage_q 
            = vlSelfRef.tinygpu_top__DOT__mem_rvalid_stage_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_rvalid 
        = vlSelfRef.tinygpu_top__DOT__mem_rvalid_stage_q;
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
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_rdata 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__mem_rdata)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 4865, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_rdata, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__mem_rdata);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__mem_rdata 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_rdata;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_rdata_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_rdata;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__mem_req) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_req))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 210, vlSelfRef.tinygpu_top__DOT__mem_req, vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_req);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mem_req 
            = vlSelfRef.tinygpu_top__DOT__mem_req;
    }
    vlSelfRef.mem_req = vlSelfRef.tinygpu_top__DOT__mem_req;
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
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_rdata_i 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__mem_rdata_i)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 15132, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_rdata_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__mem_rdata_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__mem_rdata_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_rdata_i;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__client_rdata_o 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_rdata_i;
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
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__client_rdata_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__client_rdata_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 15200, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__client_rdata_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__client_rdata_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__client_rdata_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__client_rdata_o;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_ready_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__mem_ready_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 15196, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_ready_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__mem_ready_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__mem_ready_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_ready_i;
    }
}

void Vtop___024root___nba_sequent__TOP__22(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__22\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__read_outstanding_q;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__read_outstanding_q = 0;
    // Body
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__read_outstanding_q 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__read_outstanding_q;
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
        }
        if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_req) 
             & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_ready))) {
            ++(vlSymsp->__Vcoverage[16995]);
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__read_outstanding_q = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[16996]);
        }
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rvalid) {
            ++(vlSymsp->__Vcoverage[17000]);
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__read_outstanding_q = 0U;
        } else {
            ++(vlSymsp->__Vcoverage[17001]);
        }
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rvalid) 
                              & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__read_outstanding_q)))))) {
                VL_WRITEF_NX("[%0t] %%Error: tinygpu_im2col_loader.sv:300: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl.u_im2col", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_im2col_loader.sv", 300, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_wr_en)) 
                                       | (4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: tinygpu_im2col_loader.sv:301: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl.u_im2col", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_im2col_loader.sv", 301, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__done)) 
                                       | (6U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: tinygpu_im2col_loader.sv:302: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl.u_im2col", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_im2col_loader.sv", 302, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__error)) 
                                       | (7U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: tinygpu_im2col_loader.sv:303: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl.u_im2col", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_im2col_loader.sv", 303, "");
            }
            if (VL_UNLIKELY((((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__done) 
                              & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__error))))) {
                VL_WRITEF_NX("[%0t] %%Error: tinygpu_im2col_loader.sv:304: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl.u_im2col", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_im2col_loader.sv", 304, "");
            }
            if (VL_UNLIKELY(((1U & (~ (((4U > (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_q)) 
                                        | (0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) 
                                       | (6U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: tinygpu_im2col_loader.sv:305: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl.u_im2col", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_im2col_loader.sv", 305, "");
            }
            if (VL_UNLIKELY(((1U & (~ (((0x0010U > (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_q)) 
                                        | (0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) 
                                       | (6U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: tinygpu_im2col_loader.sv:306: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl.u_im2col", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_im2col_loader.sv", 306, "");
            }
        }
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__coord_valid) {
            ++(vlSymsp->__Vcoverage[16988]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_req)))) {
            ++(vlSymsp->__Vcoverage[16989]);
        }
        if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_req) 
             & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__coord_valid)))) {
            ++(vlSymsp->__Vcoverage[16990]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__read_outstanding_q)))) {
            ++(vlSymsp->__Vcoverage[16991]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_ready)))) {
            ++(vlSymsp->__Vcoverage[16992]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_req)))) {
            ++(vlSymsp->__Vcoverage[16993]);
        }
        if ((((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_req) 
              & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_ready)) 
             & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__read_outstanding_q))) {
            ++(vlSymsp->__Vcoverage[16994]);
        }
        if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_req) 
             & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_ready))) {
            ++(vlSymsp->__Vcoverage[16997]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_ready)))) {
            ++(vlSymsp->__Vcoverage[16998]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_req)))) {
            ++(vlSymsp->__Vcoverage[16999]);
        }
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__read_outstanding_q) {
            ++(vlSymsp->__Vcoverage[17002]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rvalid)))) {
            ++(vlSymsp->__Vcoverage[17003]);
        }
        if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rvalid) 
             & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__read_outstanding_q)))) {
            ++(vlSymsp->__Vcoverage[17004]);
        }
        if ((4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
            ++(vlSymsp->__Vcoverage[17005]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_wr_en)))) {
            ++(vlSymsp->__Vcoverage[17006]);
        }
        if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_wr_en) 
             & (4U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)))) {
            ++(vlSymsp->__Vcoverage[17007]);
        }
        if ((6U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
            ++(vlSymsp->__Vcoverage[17008]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__done)))) {
            ++(vlSymsp->__Vcoverage[17009]);
        }
        if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__done) 
             & (6U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)))) {
            ++(vlSymsp->__Vcoverage[17010]);
        }
        if ((7U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
            ++(vlSymsp->__Vcoverage[17011]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__error)))) {
            ++(vlSymsp->__Vcoverage[17012]);
        }
        if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__error) 
             & (7U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)))) {
            ++(vlSymsp->__Vcoverage[17013]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__error)))) {
            ++(vlSymsp->__Vcoverage[17014]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__done)))) {
            ++(vlSymsp->__Vcoverage[17015]);
        }
        if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__done) 
             & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__error))) {
            ++(vlSymsp->__Vcoverage[17016]);
        }
        if ((6U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
            ++(vlSymsp->__Vcoverage[17017]);
        }
        if ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
            ++(vlSymsp->__Vcoverage[17018]);
        }
        if ((4U > (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_q))) {
            ++(vlSymsp->__Vcoverage[17019]);
        }
        if ((((4U <= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_q)) 
              & (0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) 
             & (6U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)))) {
            ++(vlSymsp->__Vcoverage[17020]);
        }
        if ((6U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
            ++(vlSymsp->__Vcoverage[17021]);
        }
        if ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
            ++(vlSymsp->__Vcoverage[17022]);
        }
        if ((0x0010U > (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_q))) {
            ++(vlSymsp->__Vcoverage[17023]);
        }
        if ((((0x0010U <= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_q)) 
              & (0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) 
             & (6U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)))) {
            ++(vlSymsp->__Vcoverage[17024]);
        }
        ++(vlSymsp->__Vcoverage[17026]);
    } else {
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__read_outstanding_q = 0U;
        ++(vlSymsp->__Vcoverage[17025]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[17027]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[17028]);
    }
    ++(vlSymsp->__Vcoverage[17029]);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__read_outstanding_q 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__read_outstanding_q;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__read_outstanding_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__read_outstanding_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 16986, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__read_outstanding_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__read_outstanding_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__read_outstanding_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__read_outstanding_q;
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__rst_n) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_d;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_y_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_y_d;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_d;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_d;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_d;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_d;
        if (((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)) 
             & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start))) {
            ++(vlSymsp->__Vcoverage[16949]);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__first_kh_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_kh;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__first_kw_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_kw;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__first_ic_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_ic;
        } else {
            ++(vlSymsp->__Vcoverage[16950]);
        }
        if ((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
            ++(vlSymsp->__Vcoverage[16954]);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__sample_valid_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__coord_valid;
        } else {
            ++(vlSymsp->__Vcoverage[16955]);
        }
        if (((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)) 
             & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rvalid))) {
            if ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__lane_sel))) {
                ++(vlSymsp->__Vcoverage[16956]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__sample_q 
                    = (0x000000ffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rdata);
            } else if ((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__lane_sel))) {
                ++(vlSymsp->__Vcoverage[16957]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__sample_q 
                    = (0x000000ffU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rdata 
                                      >> 8U));
            } else if ((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__lane_sel))) {
                ++(vlSymsp->__Vcoverage[16958]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__sample_q 
                    = (0x000000ffU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rdata 
                                      >> 0x10U));
            } else {
                ++(vlSymsp->__Vcoverage[16959]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__sample_q 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rdata 
                       >> 0x18U);
            }
            ++(vlSymsp->__Vcoverage[16965]);
        } else {
            if (((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)) 
                 & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__coord_valid)))) {
                ++(vlSymsp->__Vcoverage[16960]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__sample_q = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[16961]);
            }
            if (((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)) 
                 & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__coord_valid)))) {
                ++(vlSymsp->__Vcoverage[16962]);
            }
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__coord_valid) {
                ++(vlSymsp->__Vcoverage[16963]);
            }
            if ((1U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
                ++(vlSymsp->__Vcoverage[16964]);
            }
        }
        if ((((5U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)) 
              & (0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_q))) 
             & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_k))) {
            ++(vlSymsp->__Vcoverage[16969]);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_kh 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_kh;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_kw 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_kw;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_ic 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_ic;
        } else {
            ++(vlSymsp->__Vcoverage[16970]);
        }
        if ((((5U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)) 
              & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_row)) 
             & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_k))) {
            ++(vlSymsp->__Vcoverage[16975]);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_out_y 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_y_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_out_x 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_d;
        } else {
            ++(vlSymsp->__Vcoverage[16976]);
        }
        if (((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)) 
             & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start))) {
            ++(vlSymsp->__Vcoverage[16951]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start)))) {
            ++(vlSymsp->__Vcoverage[16952]);
        }
        if ((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
            ++(vlSymsp->__Vcoverage[16953]);
        }
        if (((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)) 
             & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rvalid))) {
            ++(vlSymsp->__Vcoverage[16966]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rvalid)))) {
            ++(vlSymsp->__Vcoverage[16967]);
        }
        if ((3U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
            ++(vlSymsp->__Vcoverage[16968]);
        }
        if ((((5U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)) 
              & (0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_q))) 
             & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_k))) {
            ++(vlSymsp->__Vcoverage[16971]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_k)))) {
            ++(vlSymsp->__Vcoverage[16972]);
        }
        if ((0U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_q))) {
            ++(vlSymsp->__Vcoverage[16973]);
        }
        if ((5U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
            ++(vlSymsp->__Vcoverage[16974]);
        }
        if ((((5U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)) 
              & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_row)) 
             & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_k))) {
            ++(vlSymsp->__Vcoverage[16977]);
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_d;
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_k)))) {
            ++(vlSymsp->__Vcoverage[16978]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_row)))) {
            ++(vlSymsp->__Vcoverage[16979]);
        }
        if ((5U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
            ++(vlSymsp->__Vcoverage[16980]);
        }
        ++(vlSymsp->__Vcoverage[16982]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_d;
    } else {
        ++(vlSymsp->__Vcoverage[16981]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_y_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_q = 0U;
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
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[16983]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[16984]);
    }
    ++(vlSymsp->__Vcoverage[16985]);
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_kh) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__next_kh))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 15888, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_kh, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__next_kh);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__next_kh 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_kh;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_kh 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_kh;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_kw) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__next_kw))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 15896, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_kw, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__next_kw);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__next_kw 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_kw;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_kw 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_kw;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_ic) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__next_ic))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 15904, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_ic, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__next_ic);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__next_ic 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_ic;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_ic 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_ic;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_out_y) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__next_out_y))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 15824, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_out_y, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__next_out_y);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__next_out_y 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_out_y;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_out_y 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_out_y;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_out_x) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__next_out_x))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 15856, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_out_x, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__next_out_x);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__next_out_x 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_out_x;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_next_out_x 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__next_out_x;
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__sample_valid_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__sample_valid_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 16590, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__sample_valid_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__sample_valid_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__sample_valid_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__sample_valid_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__sample_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__sample_q))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 16574, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__sample_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__sample_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__sample_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__sample_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__state_q))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 16162, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__state_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__state_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q;
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__k_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 16238, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__k_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__k_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__row_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 16174, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__row_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__row_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_addr 
        = (0x000001ffU & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_q) 
                          + (0x000001f0U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_q) 
                                            << 4U))));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__ic_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 16462, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__ic_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__ic_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_q;
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_addr) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__spm_addr))) {
        VL_COV_TOGGLE_CHG_ST_I(9, vlSymsp->__Vcoverage + 16072, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__spm_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__spm_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_addr;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_addr;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_addr) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_spm_addr))) {
        VL_COV_TOGGLE_CHG_ST_I(9, vlSymsp->__Vcoverage + 9991, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_spm_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_spm_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_addr;
    }
}

void Vtop___024root___nba_sequent__TOP__23(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__23\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q = 0;
    CData/*7:0*/ __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q = 0;
    SData/*15:0*/ __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q = 0;
    SData/*15:0*/ __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q = 0;
    CData/*4:0*/ __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q = 0;
    CData/*0:0*/ __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_q;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_q = 0;
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
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_q 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_q;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q;
    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q;
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n) {
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__soft_reset) {
            ++(vlSymsp->__Vcoverage[13704]);
        } else {
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
                if (VL_UNLIKELY((((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) 
                                  & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tinygpu_cmd_ctrl.sv:1868: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_cmd_ctrl.sv", 1868, "");
                }
                if (VL_UNLIKELY(((1U & (~ (((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__done)) 
                                            | (0x16U 
                                               == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) 
                                           | (0x17U 
                                              == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tinygpu_cmd_ctrl.sv:1869: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_cmd_ctrl.sv", 1869, "");
                }
                if (VL_UNLIKELY((((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__done) 
                                  & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__busy))))) {
                    VL_WRITEF_NX("[%0t] %%Error: tinygpu_cmd_ctrl.sv:1870: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_cmd_ctrl.sv", 1870, "");
                }
            }
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_valid) {
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i32
                                      [(3U & VL_DIVS_III(32, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_index), (IData)(4U)))]
                                      [(3U & VL_MODDIVS_III(32, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_index), (IData)(4U)))] 
                                      != vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i32)))) {
                        VL_WRITEF_NX("[%0t] %%Error: tinygpu_cmd_ctrl.sv:1872: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000));
                        VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_cmd_ctrl.sv", 1872, "");
                    }
                    if (VL_UNLIKELY(((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8
                                      [(3U & VL_DIVS_III(32, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_index), (IData)(4U)))]
                                      [(3U & VL_MODDIVS_III(32, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_index), (IData)(4U)))] 
                                      != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i8))))) {
                        VL_WRITEF_NX("[%0t] %%Error: tinygpu_cmd_ctrl.sv:1873: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tinygpu_top.u_cmd_ctrl", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000));
                        VL_STOP_MT("../rtl/core/tinygpu_ml/tinygpu_cmd_ctrl.sv", 1873, "");
                    }
                }
                ++(vlSymsp->__Vcoverage[13701]);
            } else {
                ++(vlSymsp->__Vcoverage[13702]);
            }
            if ((7U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                ++(vlSymsp->__Vcoverage[13678]);
            }
            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__array_mac_en)))) {
                ++(vlSymsp->__Vcoverage[13679]);
            }
            if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__array_mac_en) 
                 & (7U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                ++(vlSymsp->__Vcoverage[13680]);
            }
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_conv) {
                ++(vlSymsp->__Vcoverage[13681]);
            }
            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_wr_en)))) {
                ++(vlSymsp->__Vcoverage[13682]);
            }
            if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_wr_en) 
                 & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_conv)))) {
                ++(vlSymsp->__Vcoverage[13683]);
            }
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) {
                ++(vlSymsp->__Vcoverage[13684]);
            }
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q) {
                ++(vlSymsp->__Vcoverage[13685]);
            }
            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_busy_status)))) {
                ++(vlSymsp->__Vcoverage[13686]);
            }
            if ((((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_busy_status) 
                  & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q))) 
                 & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)))) {
                ++(vlSymsp->__Vcoverage[13687]);
            }
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_q) {
                ++(vlSymsp->__Vcoverage[13688]);
            }
            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_busy_status)))) {
                ++(vlSymsp->__Vcoverage[13689]);
            }
            if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_busy_status) 
                 & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_q)))) {
                ++(vlSymsp->__Vcoverage[13690]);
            }
            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q)))) {
                ++(vlSymsp->__Vcoverage[13691]);
            }
            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)))) {
                ++(vlSymsp->__Vcoverage[13692]);
            }
            if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) 
                 & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q))) {
                ++(vlSymsp->__Vcoverage[13693]);
            }
            if ((0x17U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                ++(vlSymsp->__Vcoverage[13694]);
            }
            if ((0x16U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                ++(vlSymsp->__Vcoverage[13695]);
            }
            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__done)))) {
                ++(vlSymsp->__Vcoverage[13696]);
            }
            if ((((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__done) 
                  & (0x16U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) 
                 & (0x17U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                ++(vlSymsp->__Vcoverage[13697]);
            }
            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__busy)))) {
                ++(vlSymsp->__Vcoverage[13698]);
            }
            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__done)))) {
                ++(vlSymsp->__Vcoverage[13699]);
            }
            if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__done) 
                 & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__busy))) {
                ++(vlSymsp->__Vcoverage[13700]);
            }
            ++(vlSymsp->__Vcoverage[13703]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__soft_reset)))) {
            ++(vlSymsp->__Vcoverage[13705]);
        }
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__soft_reset) {
            ++(vlSymsp->__Vcoverage[13706]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[13707]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[13708]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[13709]);
    }
    ++(vlSymsp->__Vcoverage[13710]);
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n) {
        if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__soft_reset) 
             | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_status))) {
            ++(vlSymsp->__Vcoverage[13414]);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__illegal_opcode = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shape_error = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__memory_error = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unsupported_format = 0U;
        } else {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_illegal_opcode) {
                ++(vlSymsp->__Vcoverage[13406]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__illegal_opcode = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[13407]);
            }
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_shape_error) {
                ++(vlSymsp->__Vcoverage[13408]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shape_error = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[13409]);
            }
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_memory_error) {
                ++(vlSymsp->__Vcoverage[13410]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__memory_error = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[13411]);
            }
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_unsupported_format) {
                ++(vlSymsp->__Vcoverage[13412]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unsupported_format = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[13413]);
            }
            ++(vlSymsp->__Vcoverage[13415]);
        }
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_status) {
            ++(vlSymsp->__Vcoverage[13416]);
        }
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__soft_reset) {
            ++(vlSymsp->__Vcoverage[13417]);
        }
        if ((1U & ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__soft_reset)) 
                   & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_status))))) {
            ++(vlSymsp->__Vcoverage[13418]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[13419]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__illegal_opcode = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shape_error = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__memory_error = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unsupported_format = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[13420]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[13421]);
    }
    ++(vlSymsp->__Vcoverage[13422]);
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n) {
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__soft_reset) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk2__DOT__c = 0U;
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q = 0U;
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q = 0U;
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q = 0U;
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
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q = 0U;
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q = 0U;
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q = 0U;
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_start_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_x_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_y_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_addr_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_scaled_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_q = 0U;
            while (VL_GTS_III(32, 4U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk2__DOT__c)) {
                __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v0 
                    = (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk2__DOT__c);
                vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec.enqueue(0U, (IData)(__VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v0));
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk2__DOT__c 
                    = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk2__DOT__c);
                ++(vlSymsp->__Vcoverage[13336]);
            }
            ++(vlSymsp->__Vcoverage[13400]);
        } else {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_start_q 
                = ((0x15U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
                   & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_q)));
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_d;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d;
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd_addr) {
                ++(vlSymsp->__Vcoverage[13340]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr;
            } else {
                ++(vlSymsp->__Vcoverage[13341]);
            }
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd) {
                ++(vlSymsp->__Vcoverage[13342]);
                __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q 
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
                __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q 
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
            } else {
                ++(vlSymsp->__Vcoverage[13343]);
            }
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_cmd_fields) {
                ++(vlSymsp->__Vcoverage[13344]);
                __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr_q = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr_q = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q = 0U;
                __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q = 0U;
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
            } else {
                ++(vlSymsp->__Vcoverage[13345]);
            }
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_desc_word) {
                if ((0x00000010U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                    if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                        ++(vlSymsp->__Vcoverage[13364]);
                    } else if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                        ++(vlSymsp->__Vcoverage[13364]);
                    } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                        ++(vlSymsp->__Vcoverage[13364]);
                    } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                        ++(vlSymsp->__Vcoverage[13363]);
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q 
                            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata;
                    } else {
                        ++(vlSymsp->__Vcoverage[13362]);
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_channels_q 
                            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata;
                    }
                } else if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                    if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                        if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                            if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                                ++(vlSymsp->__Vcoverage[13361]);
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_in_hw_q 
                                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata;
                            } else {
                                ++(vlSymsp->__Vcoverage[13360]);
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_desc_version_q 
                                    = (0x000000ffU 
                                       & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata);
                            }
                        } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                            ++(vlSymsp->__Vcoverage[13359]);
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q 
                                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata 
                                   >> 0x10U);
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q 
                                = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata);
                        } else {
                            ++(vlSymsp->__Vcoverage[13358]);
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__scale_q 
                                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata;
                        }
                    } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                        if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                            ++(vlSymsp->__Vcoverage[13357]);
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q 
                                = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata);
                        } else {
                            ++(vlSymsp->__Vcoverage[13356]);
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q 
                                = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata);
                        }
                    } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                        ++(vlSymsp->__Vcoverage[13355]);
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q 
                            = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata);
                    } else {
                        ++(vlSymsp->__Vcoverage[13354]);
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q 
                            = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata);
                    }
                } else if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                    if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                        if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                            ++(vlSymsp->__Vcoverage[13353]);
                            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q 
                                = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata);
                        } else {
                            ++(vlSymsp->__Vcoverage[13352]);
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q 
                                = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata);
                        }
                    } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                        ++(vlSymsp->__Vcoverage[13351]);
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr_q 
                            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata;
                    } else {
                        ++(vlSymsp->__Vcoverage[13350]);
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr_q 
                            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata;
                    }
                } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                        ++(vlSymsp->__Vcoverage[13349]);
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q 
                            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata;
                    } else {
                        ++(vlSymsp->__Vcoverage[13348]);
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q 
                            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata;
                    }
                } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) {
                    ++(vlSymsp->__Vcoverage[13347]);
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata;
                } else {
                    ++(vlSymsp->__Vcoverage[13346]);
                    __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q 
                        = (0x000000ffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata);
                }
                ++(vlSymsp->__Vcoverage[13365]);
            } else {
                ++(vlSymsp->__Vcoverage[13366]);
            }
            if ((((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
                  & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_conv_opcode)) 
                 & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_shape_ok))) {
                ++(vlSymsp->__Vcoverage[13367]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q 
                    = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_m_calc);
                __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_output_c;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q 
                    = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_k_calc);
            } else {
                ++(vlSymsp->__Vcoverage[13368]);
            }
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_bias_regs) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk3__DOT__c = 0U;
                while (VL_GTS_III(32, 4U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk3__DOT__c)) {
                    __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v1 
                        = (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk3__DOT__c);
                    vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec.enqueue(0U, (IData)(__VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v1));
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk3__DOT__c 
                        = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk3__DOT__c);
                    ++(vlSymsp->__Vcoverage[13373]);
                }
                ++(vlSymsp->__Vcoverage[13376]);
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_bias_reg) {
                ++(vlSymsp->__Vcoverage[13374]);
                __VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v2 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata;
                __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v2 
                    = (3U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q));
                vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec.enqueue(__VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v2, (IData)(__VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v2));
            } else {
                ++(vlSymsp->__Vcoverage[13375]);
            }
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_d;
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_vec_x_reg) {
                ++(vlSymsp->__Vcoverage[13377]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_x_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_load_byte;
            } else {
                ++(vlSymsp->__Vcoverage[13378]);
            }
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__load_vec_y_reg) {
                ++(vlSymsp->__Vcoverage[13379]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_y_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_load_byte;
            } else {
                ++(vlSymsp->__Vcoverage[13380]);
            }
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d;
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_raw) {
                ++(vlSymsp->__Vcoverage[13381]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw;
            } else {
                ++(vlSymsp->__Vcoverage[13382]);
            }
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_post) {
                ++(vlSymsp->__Vcoverage[13383]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post;
            } else {
                ++(vlSymsp->__Vcoverage[13384]);
            }
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_scaled) {
                ++(vlSymsp->__Vcoverage[13385]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_scaled_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_product;
            } else {
                ++(vlSymsp->__Vcoverage[13386]);
            }
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode_q 
                = ((((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)) 
                     | (4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) 
                    | (5U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) 
                   | (6U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)));
            if ((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) {
                ++(vlSymsp->__Vcoverage[13394]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_14 = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[13395]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_14 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q;
            }
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_14;
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_store_cmd) {
                ++(vlSymsp->__Vcoverage[13396]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_addr_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_addr_next;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_next;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_next;
            } else {
                ++(vlSymsp->__Vcoverage[13397]);
            }
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_dma_cmd) {
                ++(vlSymsp->__Vcoverage[13398]);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_cmd_n;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_cmd_n;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_cmd_n;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_cmd_n;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_cmd_n;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_cmd_n;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_q 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_cmd_n;
            } else {
                ++(vlSymsp->__Vcoverage[13399]);
            }
            if (((0x15U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
                 & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_q)))) {
                ++(vlSymsp->__Vcoverage[13337]);
            }
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_q) {
                ++(vlSymsp->__Vcoverage[13338]);
            }
            if ((0x15U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                ++(vlSymsp->__Vcoverage[13339]);
            }
            if ((((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
                  & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_conv_opcode)) 
                 & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_shape_ok))) {
                ++(vlSymsp->__Vcoverage[13369]);
            }
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_d;
            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_shape_ok)))) {
                ++(vlSymsp->__Vcoverage[13370]);
            }
            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_conv_opcode)))) {
                ++(vlSymsp->__Vcoverage[13371]);
            }
            if ((1U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                ++(vlSymsp->__Vcoverage[13372]);
            }
            if ((6U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) {
                ++(vlSymsp->__Vcoverage[13387]);
            }
            if ((5U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) {
                ++(vlSymsp->__Vcoverage[13388]);
            }
            __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d;
            if ((4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) {
                ++(vlSymsp->__Vcoverage[13389]);
            }
            if ((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) {
                ++(vlSymsp->__Vcoverage[13390]);
            }
            if (((((3U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)) 
                   & (4U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) 
                  & (5U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) 
                 & (6U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)))) {
                ++(vlSymsp->__Vcoverage[13391]);
            }
            if ((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) {
                ++(vlSymsp->__Vcoverage[13392]);
            }
            if ((2U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) {
                ++(vlSymsp->__Vcoverage[13393]);
            }
            ++(vlSymsp->__Vcoverage[13401]);
        }
    } else {
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q = 0U;
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk1__DOT__c = 0U;
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q = 0U;
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
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q = 0U;
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q = 0U;
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q = 0U;
        __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_start_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_x_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_y_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_scaled_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_addr_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_q = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_q = 0U;
        while (VL_GTS_III(32, 4U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk1__DOT__c)) {
            __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v3 
                = (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk1__DOT__c);
            vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec.enqueue(0U, (IData)(__VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec__v3));
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk1__DOT__c 
                = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk1__DOT__c);
            ++(vlSymsp->__Vcoverage[13335]);
        }
        ++(vlSymsp->__Vcoverage[13402]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[13403]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[13404]);
    }
    ++(vlSymsp->__Vcoverage[13405]);
    vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec.commit(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_q 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q 
        = __Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__illegal_opcode) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__illegal_opcode))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 4707, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__illegal_opcode, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__illegal_opcode);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__illegal_opcode 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__illegal_opcode;
    }
    vlSelfRef.tinygpu_top__DOT__ctrl_illegal_opcode 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__illegal_opcode;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shape_error) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shape_error))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 4709, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shape_error, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shape_error);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shape_error 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shape_error;
    }
    vlSelfRef.tinygpu_top__DOT__ctrl_shape_error = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shape_error;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__memory_error) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__memory_error))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 4711, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__memory_error, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__memory_error);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__memory_error 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__memory_error;
    }
    vlSelfRef.tinygpu_top__DOT__ctrl_memory_error = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__memory_error;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unsupported_format) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__unsupported_format))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 4713, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unsupported_format, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__unsupported_format);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__unsupported_format 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unsupported_format;
    }
    vlSelfRef.tinygpu_top__DOT__ctrl_unsupported_format 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unsupported_format;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_base_addr_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 9637, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_base_addr_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_base_addr_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__base_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_q;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_stride_bytes_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 9765, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_stride_bytes_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_stride_bytes_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__stride_bytes 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_q;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_spm_region_q))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 9797, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_spm_region_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_spm_region_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_q;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_spm_base_q))) {
        VL_COV_TOGGLE_CHG_ST_I(9, vlSymsp->__Vcoverage + 9801, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_spm_base_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_spm_base_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_base 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_q;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_x_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_x_q))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 8225, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_x_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_x_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_x_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_x_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__x_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_x_q;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_y_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_y_q))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 8241, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_y_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_y_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_y_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_y_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__y_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_y_q;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__cmd_addr_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 5033, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__cmd_addr_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__cmd_addr_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__scale_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__scale_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 5545, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__scale_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__scale_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__scale_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__scale_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scale 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__scale_q;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_result_raw_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 8601, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_result_raw_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_result_raw_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_scaled_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_scaled_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 8729, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_scaled_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_scaled_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_scaled_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_scaled_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shift_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 5609, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shift_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shift_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__shift 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__zero_point_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 5641, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__zero_point_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__zero_point_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__zero_point 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_ext 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q));
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
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__bias 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_result_post_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 8665, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_result_post_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_result_post_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_addr_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 5225, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_addr_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_addr_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__store_stage_done_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 6413, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__store_stage_done_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__store_stage_done_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_q;
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
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_addr_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 5289, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_addr_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_addr_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_base_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 10965, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_base_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_base_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q;
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_op_kind_q))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 9633, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_op_kind_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_op_kind_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_q;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_rows_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 9701, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_rows_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_rows_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_q;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_cols_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 9733, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_cols_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_cols_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_q;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_inflight_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 6417, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_inflight_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_inflight_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_launch_pending_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9629, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_launch_pending_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_launch_pending_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q;
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
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode_q;
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
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_store_base_addr 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_q 
           + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_q);
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src1_addr_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 5161, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src1_addr_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src1_addr_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_word_idx_q))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 6393, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_word_idx_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_word_idx_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_addr 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr_q 
           + ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q) 
              << 2U));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_col_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 6265, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_col_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__bias_col_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_addr 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q 
           + ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q) 
              << 2U));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride_dst_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 5513, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride_dst_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride_dst_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src0_addr_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 5097, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src0_addr_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__src0_addr_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_base 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__kk_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 6073, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__kk_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__kk_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride1_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 5481, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride1_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride1_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q;
    }
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride0_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 5449, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride0_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__stride0_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q;
    }
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_start_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_start_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9821, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_start_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_start_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_start_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_start_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_start 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_start_q;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__N_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 5385, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__N_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__N_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_desc_version_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_desc_version_q))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 5865, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_desc_version_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_desc_version_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_desc_version_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_desc_version_q;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_out_y_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 6433, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_out_y_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_out_y_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__tile_out_y 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_q;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_out_x_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 6497, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_out_x_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_out_x_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__tile_out_x 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_q;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_kh_q))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 6561, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_kh_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_kh_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_kh 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_q;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_kw_q))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 6577, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_kw_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_kw_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_kw 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_q;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_ic_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 6593, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_ic_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_ic_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_ic 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_q;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_idx_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 6329, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_idx_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_idx_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__flags_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 4969, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__flags_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__flags_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__flags 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_flags_ok 
        = (1U & (~ (3U == (3U & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q 
                                 >> 4U)))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__use_dst_i8 
        = (1U & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q 
                 >> 4U));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__opcode_q))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 4953, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__opcode_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__opcode_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__opcode 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_needs_y 
        = ((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)) 
           | (4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)));
    if ((7U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q))) {
        ++(vlSymsp->__Vcoverage[13299]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_11 = 0x12U;
    } else {
        ++(vlSymsp->__Vcoverage[13300]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_11 = 0x0eU;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_words_expected 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____VlemCond_11;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_conv_opcode 
        = (7U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q));
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__effective_n_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 10293, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__effective_n_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__effective_n_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q;
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__K_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 5417, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__K_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__K_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_channels_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_channels_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 5737, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_channels_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_channels_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_channels_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_channels_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_output_c 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_channels_q 
           >> 0x00000010U);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_c 
        = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_channels_q);
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__M_q))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 5353, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__M_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__M_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_m_tiles 
        = ((0x0000ffffU & ((IData)(4U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q))) 
           < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q));
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_in_hw_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_in_hw_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 5673, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_in_hw_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_in_hw_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_in_hw_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_in_hw_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_h 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_in_hw_q 
           >> 0x00000010U);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_w 
        = (0x0000ffffU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_in_hw_q);
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__state_q))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 4933, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__state_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__state_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q;
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
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_bias 
        = (9U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_vec 
        = ((0x0cU == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
           | ((0x0dU == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
              | (0x12U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_desc 
        = (2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_conv 
        = (0x15U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q));
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_cfg_q)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 5801, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_cfg_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_cfg_q 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_stride_h 
        = (0x0000000fU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q 
                          >> 0x0000000cU));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_h 
        = (0x0000000fU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q 
                          >> 4U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_stride_w 
        = (0x0000000fU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q 
                          >> 8U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_pad_h 
        = (0x0000000fU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q 
                          >> 0x00000014U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_pad_w 
        = (0x0000000fU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q 
                          >> 0x00000010U));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_w 
        = (0x0000000fU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_cfg_q);
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
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scale 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__scale)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 22213, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scale, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__scale);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__scale 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scale;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_b 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scale;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__shift) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__shift))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 22277, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__shift, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__shift);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__shift 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__shift;
    }
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__is_vector_opcode))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10239, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__is_vector_opcode);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__is_vector_opcode 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_store_base_addr 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_store_base_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 11733, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_store_base_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_store_base_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dma_store_base_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_store_base_addr;
    }
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
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_base 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_base)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 15344, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_base, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_base);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_base 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_base;
    }
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_start) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9819, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_start, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_start);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_start 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_start;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_start;
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
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__flags 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__flags)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 22149, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__flags, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__flags);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__flags 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__flags;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_flags_ok) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_flags_ok))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10217, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_flags_ok, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_flags_ok);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__dst_flags_ok 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_flags_ok;
    }
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__opcode) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT____Vtogcov__opcode))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 23550, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__opcode, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT____Vtogcov__opcode);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT____Vtogcov__opcode 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__opcode;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_needs_y) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_needs_y))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10245, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_needs_y, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_needs_y);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_needs_y 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_needs_y;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_words_expected) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_words_expected))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 13249, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_words_expected, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_words_expected);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__desc_words_expected 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_words_expected;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_conv_opcode) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__is_conv_opcode))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10243, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_conv_opcode, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__is_conv_opcode);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__is_conv_opcode 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_conv_opcode;
    }
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_c) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_input_c))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 12751, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_c, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_input_c);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_input_c 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_c;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_c 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_c;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_m_tiles) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__more_m_tiles))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 10225, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_m_tiles, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__more_m_tiles);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__more_m_tiles 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_m_tiles;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_h) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_input_h))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 12687, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_h, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_input_h);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_input_h 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_h;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_h 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_h;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_w) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_input_w))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 12719, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_w, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_input_w);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_input_w 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_w;
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
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_w 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_w;
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_pad_w) 
                                                 << 1U) 
                                                + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_w));
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
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_b 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__mul_b)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 22679, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_b, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__mul_b);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__mul_b 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_b;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_b 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_b;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__zero_point_ext 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__zero_point_ext)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 23437, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__zero_point_ext, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__zero_point_ext);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__zero_point_ext 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__zero_point_ext;
    }
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 15336, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__start);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__start 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start;
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_c) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_c))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 15472, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_c, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_c);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_c 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_c;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_h) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_h))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 15408, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_h, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_h);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_h 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_h;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_row_stride 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_input_row_stride)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 13119, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_row_stride, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_input_row_stride);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_input_row_stride 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_row_stride;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_row_stride 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_input_row_stride;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_w) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_w))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSymsp->__Vcoverage + 15440, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_w, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_w);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_w 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_w;
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_client_sel) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__mem_client_sel))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 9899, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_client_sel, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__mem_client_sel);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__mem_client_sel 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_client_sel;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_client_sel;
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
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_w_calc 
        = ((IData)(1U) + VL_SHIFTR_III(32,32,32, (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 
                                                  - (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kernel_w)), 
                                       (1U & (- (IData)(
                                                        (2U 
                                                         == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_stride_w)))))));
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
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__z_o 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT____Vtogcov__z_o)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 23598, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__z_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT____Vtogcov__z_o);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT____Vtogcov__z_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__z_o;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_vec_alu__DOT__z_o;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_b 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_mul_b)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 7551, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_b, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_mul_b);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_mul_b 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_b;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_addr_i 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__bias_addr_i)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 14856, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_addr_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__bias_addr_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__bias_addr_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_addr_i;
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
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_row_stride 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_row_stride)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 15504, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_row_stride, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_row_stride);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_row_stride 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_row_stride;
    }
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__select_i))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 14360, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__select_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__select_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_h_calc 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_out_h_calc)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 12863, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_h_calc, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_out_h_calc);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_out_h_calc 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_h_calc;
    }
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
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_result_raw)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 8257, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_result_raw);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_result_raw 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw;
    }
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
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_addr_next 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_store_addr_next)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 12365, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_addr_next, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_store_addr_next);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_store_addr_next 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_addr_next;
    }
}

void Vtop___024root___nba_sequent__TOP__24(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__24\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_bank__v0;
    __VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_bank__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_bank__v0;
    __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_bank__v0 = 0;
    CData/*1:0*/ __VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_bank__v0;
    __VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_bank__v0 = 0;
    CData/*7:0*/ __VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_bank__v0;
    __VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_bank__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_bank__v0;
    __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_bank__v0 = 0;
    CData/*1:0*/ __VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_bank__v0;
    __VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_bank__v0 = 0;
    CData/*7:0*/ __VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v0;
    __VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v0 = 0;
    CData/*4:0*/ __VdlyLsb__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v0;
    __VdlyLsb__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v0;
    __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v0 = 0;
    IData/*31:0*/ __VdlyMask__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v0;
    __VdlyMask__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v0 = 0;
    IData/*31:0*/ __VdlyElem__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v0;
    __VdlyElem__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v0 = 0;
    IData/*31:0*/ __VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v1;
    __VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v1 = 0;
    CData/*3:0*/ __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v1;
    __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v1 = 0;
    CData/*3:0*/ __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_bank__v1;
    __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_bank__v1 = 0;
    CData/*1:0*/ __VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_bank__v1;
    __VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_bank__v1 = 0;
    CData/*3:0*/ __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_bank__v1;
    __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_bank__v1 = 0;
    CData/*1:0*/ __VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_bank__v1;
    __VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_bank__v1 = 0;
    CData/*3:0*/ __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v2;
    __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v2 = 0;
    // Body
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__rst_n) {
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_wr_en) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk6__DOT__byte_idx = 0U;
            while (VL_GTS_III(32, 4U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk6__DOT__byte_idx)) {
                if ((1U & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_wstrb) 
                           >> (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk6__DOT__byte_idx)))) {
                    if ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_region))) {
                        if (VL_GTS_III(32, 0x00000040U, 
                                       ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_addr) 
                                        + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk6__DOT__byte_idx))) {
                            ++(vlSymsp->__Vcoverage[14320]);
                            __VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_bank__v0 
                                = (0x000000ffU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_wdata 
                                                  >> 
                                                  (0x0000001fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk6__DOT__byte_idx))));
                            __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_bank__v0 
                                = (0x0000000fU & VL_MODDIVS_III(32, 
                                                                ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_addr) 
                                                                 + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk6__DOT__byte_idx), (IData)(0x00000010U)));
                            __VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_bank__v0 
                                = (3U & VL_DIVS_III(32, 
                                                    ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_addr) 
                                                     + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk6__DOT__byte_idx), (IData)(0x00000010U)));
                            vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_bank.enqueue(__VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_bank__v0, (IData)(__VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_bank__v0), __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_bank__v0);
                        } else {
                            ++(vlSymsp->__Vcoverage[14321]);
                        }
                        ++(vlSymsp->__Vcoverage[14322]);
                    } else if ((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_region))) {
                        if (VL_GTS_III(32, 0x00000040U, 
                                       ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_addr) 
                                        + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk6__DOT__byte_idx))) {
                            ++(vlSymsp->__Vcoverage[14323]);
                            __VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_bank__v0 
                                = (0x000000ffU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_wdata 
                                                  >> 
                                                  (0x0000001fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk6__DOT__byte_idx))));
                            __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_bank__v0 
                                = (0x0000000fU & VL_DIVS_III(32, 
                                                             ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_addr) 
                                                              + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk6__DOT__byte_idx), (IData)(4U)));
                            __VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_bank__v0 
                                = (3U & VL_MODDIVS_III(32, 
                                                       ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_addr) 
                                                        + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk6__DOT__byte_idx), (IData)(4U)));
                            vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_bank.enqueue(__VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_bank__v0, (IData)(__VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_bank__v0), __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_bank__v0);
                        } else {
                            ++(vlSymsp->__Vcoverage[14324]);
                        }
                        ++(vlSymsp->__Vcoverage[14325]);
                    } else if ((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_region))) {
                        if (VL_GTS_III(32, 0x00000010U, 
                                       VL_SHIFTR_III(32,32,32, 
                                                     ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_addr) 
                                                      + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk6__DOT__byte_idx), 2U))) {
                            ++(vlSymsp->__Vcoverage[14326]);
                            __VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v0 
                                = (0x000000ffU & (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_wdata 
                                                  >> 
                                                  (0x0000001fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk6__DOT__byte_idx))));
                            __VdlyLsb__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v0 
                                = (0x0000001fU & VL_MULS_III(32, (IData)(8U), 
                                                             (3U 
                                                              & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_addr) 
                                                                 + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk6__DOT__byte_idx))));
                            __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v0 
                                = (0x0000000fU & (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_addr) 
                                                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk6__DOT__byte_idx) 
                                                  >> 2U));
                            __VdlyMask__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v0 = 0U;
                            __VdlyMask__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v0 
                                = (__VdlyMask__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v0 
                                   | (0x00000000ffffffffULL 
                                      & ((IData)(0xffU) 
                                         << (IData)(__VdlyLsb__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v0))));
                            __VdlyElem__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v0 = 0U;
                            __VdlyElem__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v0 
                                = (((~ ((IData)(0x000000ffU) 
                                        << (IData)(__VdlyLsb__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v0))) 
                                    & __VdlyElem__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v0) 
                                   | (0x00000000ffffffffULL 
                                      & ((IData)(__VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v0) 
                                         << (IData)(__VdlyLsb__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v0))));
                            vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words.enqueue(__VdlyElem__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v0, __VdlyMask__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v0, (IData)(__VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v0));
                        } else {
                            ++(vlSymsp->__Vcoverage[14327]);
                        }
                        ++(vlSymsp->__Vcoverage[14328]);
                    } else {
                        ++(vlSymsp->__Vcoverage[14329]);
                    }
                    ++(vlSymsp->__Vcoverage[14330]);
                } else {
                    ++(vlSymsp->__Vcoverage[14331]);
                }
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk6__DOT__byte_idx 
                    = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk6__DOT__byte_idx);
                ++(vlSymsp->__Vcoverage[14332]);
            }
            ++(vlSymsp->__Vcoverage[14333]);
        } else {
            ++(vlSymsp->__Vcoverage[14334]);
        }
        if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_wr_en) 
             & VL_GTS_III(32, 0x00000010U, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_wr_addr)))) {
            ++(vlSymsp->__Vcoverage[14335]);
            __VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v1 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_wr_data;
            __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v1 
                = (0x0000000fU & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_wr_addr));
            vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words.enqueue(__VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v1, 0xffffffffU, (IData)(__VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v1));
        } else {
            ++(vlSymsp->__Vcoverage[14336]);
        }
        if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_wr_en) 
             & VL_GTS_III(32, 0x00000010U, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_wr_addr)))) {
            ++(vlSymsp->__Vcoverage[14337]);
        }
        if (VL_LTES_III(32, 0x00000010U, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_wr_addr))) {
            ++(vlSymsp->__Vcoverage[14338]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_wr_en)))) {
            ++(vlSymsp->__Vcoverage[14339]);
        }
        ++(vlSymsp->__Vcoverage[14341]);
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk1__DOT__r = 0U;
        while (VL_GTS_III(32, 4U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk1__DOT__r)) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k = 0U;
            while (VL_GTS_III(32, 0x00000010U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k)) {
                __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_bank__v1 
                    = (0x0000000fU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k);
                __VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_bank__v1 
                    = (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk1__DOT__r);
                vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_bank.enqueue(0U, (IData)(__VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_bank__v1), __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_bank__v1);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k 
                    = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k);
                ++(vlSymsp->__Vcoverage[14315]);
            }
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk1__DOT__r 
                = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk1__DOT__r);
            ++(vlSymsp->__Vcoverage[14316]);
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk3__DOT__c = 0U;
        while (VL_GTS_III(32, 4U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk3__DOT__c)) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k = 0U;
            while (VL_GTS_III(32, 0x00000010U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k)) {
                __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_bank__v1 
                    = (0x0000000fU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k);
                __VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_bank__v1 
                    = (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk3__DOT__c);
                vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_bank.enqueue(0U, (IData)(__VdlyDim1__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_bank__v1), __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_bank__v1);
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k 
                    = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k);
                ++(vlSymsp->__Vcoverage[14317]);
            }
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk3__DOT__c 
                = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk3__DOT__c);
            ++(vlSymsp->__Vcoverage[14318]);
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk5__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000010U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk5__DOT__i)) {
            __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v2 
                = (0x0000000fU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk5__DOT__i);
            vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words.enqueue(0U, 0xffffffffU, (IData)(__VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v2));
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk5__DOT__i 
                = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk5__DOT__i);
            ++(vlSymsp->__Vcoverage[14319]);
        }
        ++(vlSymsp->__Vcoverage[14340]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[14342]);
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[14343]);
    }
    ++(vlSymsp->__Vcoverage[14344]);
    vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_bank.commit(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_bank);
    vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_bank.commit(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_bank);
    vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words.commit(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words);
}

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_tile 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_in 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_tile;
}

void Vtop___024root___nba_sequent__TOP__25(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__25\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_done 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_done;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_product 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_product;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_product 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_product;
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_done) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__mul_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 22743, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_done, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__mul_done);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__mul_done 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_done;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_product 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__mul_product)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 22745, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_product, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__mul_product);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__mul_product 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_product;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_product 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mul_product)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 8799, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_product, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mul_product);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_mul_product 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_product;
    }
}

void Vtop___024root___nba_sequent__TOP__26(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__26\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i32 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i32;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_valid 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_valid;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_index 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_index;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i32 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_i32;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i8 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_i8;
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
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i32 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_out_i32)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 7889, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i32, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_out_i32);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_out_i32 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i32;
    }
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i8) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_out_i8))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 7953, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i8, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_out_i8);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__epi_out_i8 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i8;
    }
}

void Vtop___024root___nba_sequent__TOP__27(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__27\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr 
        = vlSelfRef.tinygpu_top__DOT__reg_cmd_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode 
        = vlSelfRef.tinygpu_top__DOT__reg_opcode;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags 
        = vlSelfRef.tinygpu_top__DOT__reg_flags;
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
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__flags)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 3871, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__flags);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__flags 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags;
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
}

void Vtop___024root___nba_sequent__TOP__28(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__28\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__client_rdata_o;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__client_mem_rdata)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 9905, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__client_mem_rdata);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__client_mem_rdata 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rdata 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rdata 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rdata 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__mem_rdata)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 16002, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rdata, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__mem_rdata);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__mem_rdata 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rdata;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rdata 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__mem_rdata)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 17368, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rdata, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__mem_rdata);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__mem_rdata 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rdata;
    }
}

void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_a 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shared_mul_a)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 8933, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_a, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shared_mul_a);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shared_mul_a 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_a;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_a;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__x_shifted 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__x_shifted)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 23373, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__x_shifted, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__x_shifted);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__x_shifted 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__x_shifted;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_b 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shared_mul_b)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 8997, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_b, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shared_mul_b);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__shared_mul_b 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_b;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_b;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__a_i 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__a_i)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 23810, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__a_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__a_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__a_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__a_i;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__b_i 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__b_i)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 23874, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__b_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__b_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT____Vtogcov__b_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__b_i;
    }
}

void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_y 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_q) 
            + VL_MULS_III(32, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__stride_h), (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_y_q))) 
           - (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__pad_h));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_x 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_q) 
            + VL_MULS_III(32, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__stride_w), (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_q))) 
           - (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__pad_w));
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
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_row 
        = ((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_q))) 
           >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_rows));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_k 
        = ((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_q))) 
           >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_k));
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_y 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_y)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 16592, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_y, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_y);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_y 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_y;
    }
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_x 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_x)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 16656, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_x, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_x);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__input_x 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_x;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__elem_addr 
        = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_base 
           + ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_row_stride 
               * vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_y) 
              + ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_x 
                  * (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_c)) 
                 + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_q))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__coord_valid 
        = (VL_LTES_III(32, 0U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_y) 
           & (VL_LTES_III(32, 0U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_x) 
              & (VL_LTS_III(32, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_y, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_h)) 
                 & VL_LTS_III(32, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_x, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_w)))));
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__coord_valid) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__coord_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 16852, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__coord_valid, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__coord_valid);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__coord_valid 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__coord_valid;
    }
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
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_addr 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__mem_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 15938, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__mem_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT____Vtogcov__mem_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_addr;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_addr;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_addr 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_mem_addr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 9835, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_addr, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_mem_addr);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__conv_mem_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_addr;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_addr_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_addr;
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_addr_i 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__conv_addr_i)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 14648, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_addr_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__conv_addr_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__conv_addr_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_addr_i;
    }
}

void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_load_byte) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_load_byte))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 12349, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_load_byte, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_load_byte);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT____Vtogcov__vec_load_byte 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_load_byte;
    }
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
}

void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__load_byte) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__load_byte))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 18300, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__load_byte, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__load_byte);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT____Vtogcov__load_byte 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__load_byte;
    }
}

void Vtop___024root___nba_comb__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_req_i) 
         ^ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__conv_req_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 14646, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_req_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__conv_req_i);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT____Vtogcov__conv_req_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_req_i;
    }
}

void Vtop___024root___nba_comb__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vtop___024root___nba_comb__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
