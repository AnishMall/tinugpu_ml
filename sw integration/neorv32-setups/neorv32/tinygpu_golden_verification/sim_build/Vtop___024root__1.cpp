// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

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
                        }
                    } else if ((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_region))) {
                        if (VL_GTS_III(32, 0x00000040U, 
                                       ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_addr) 
                                        + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk6__DOT__byte_idx))) {
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
                        }
                    } else if ((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_region))) {
                        if (VL_GTS_III(32, 0x00000010U, 
                                       VL_SHIFTR_III(32,32,32, 
                                                     ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_addr) 
                                                      + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk6__DOT__byte_idx), 2U))) {
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
                        }
                    }
                }
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk6__DOT__byte_idx 
                    = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk6__DOT__byte_idx);
            }
        }
        if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_wr_en) 
             & VL_GTS_III(32, 0x00000010U, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_wr_addr)))) {
            __VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v1 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_wr_data;
            __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v1 
                = (0x0000000fU & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_wr_addr));
            vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words.enqueue(__VdlyVal__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v1, 0xffffffffU, (IData)(__VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v1));
        }
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk1__DOT__r = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk3__DOT__c = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk5__DOT__i = 0U;
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
            }
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk1__DOT__r 
                = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk1__DOT__r);
        }
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
            }
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk3__DOT__c 
                = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk3__DOT__c);
        }
        while (VL_GTS_III(32, 0x00000010U, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk5__DOT__i)) {
            __VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v2 
                = (0x0000000fU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk5__DOT__i);
            vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words.enqueue(0U, 0xffffffffU, (IData)(__VdlyDim0__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words__v2));
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk5__DOT__i 
                = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk5__DOT__i);
        }
    }
    vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_bank.commit(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__a_bank);
    vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_bank.commit(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__b_bank);
    vlSelfRef.__VdlyCommitQueuetinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words.commit(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_rd_data 
        = (VL_GTS_III(32, 0x00000010U, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_rd_addr))
            ? vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_words
           [(0x0000000fU & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_rd_addr))]
            : 0U);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_rd_data 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_rd_data;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__unused_c_rd_data 
        = (1U & VL_REDXOR_32(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_rd_data));
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
}

void Vtop___024root___nba_sequent__TOP__26(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__26\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_busy_status 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__busy;
}

void Vtop___024root___nba_sequent__TOP__27(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__27\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_busy_status 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__busy;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_wr_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_wr_en;
}

void Vtop___024root___nba_sequent__TOP__28(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__28\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i32 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i32;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_index 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_index;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i32 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_i32;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i8 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_i8;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_valid 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_valid;
}

void Vtop___024root___nba_sequent__TOP__29(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__29\n"); );
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
}

void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_start) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_a 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_a;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_b 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_b;
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_a 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post_q;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_b 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__scale_q;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__x_shifted 
        = ((8U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__flags)
            ? (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__shift)))
                ? (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__zero_point_ext 
                   + VL_SHIFTRS_III(32,32,16, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_elem_q, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__shift)))
                : (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__zero_point_ext 
                   + VL_SHIFTL_III(32,32,16, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_elem_q, 
                                   (0x0000ffffU & (- (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__shift))))))
            : vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_q);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__elem_valid 
        = (1U & (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_mask) 
                  >> (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q)) 
                 & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_mask) 
                    >> (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q))));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_start = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_en = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_addr = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_data = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        if ((1U & ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_busy)) 
                                   & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_done))))) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_start = 1U;
                        }
                        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_valid) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_en = 1U;
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_addr 
                                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_index;
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_data 
                                = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__use_dst_i8)
                                    ? (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i8)
                                    : vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i32);
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__a_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_a;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__start 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_start;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__b_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_b;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_wr_en 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_en;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_wr_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_wr_data 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_data;
}

void Vtop___024root___nba_sequent__TOP__30(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__30\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__client_rdata_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rdata 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rdata 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata;
}

void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_ic 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__step_ic 
        = (((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_q))) 
            < (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_c))
            ? (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_q)))
            : 0U);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__input_y 
        = (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_q) 
            + VL_MULS_III(32, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__stride_h), (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_y_q))) 
           - (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__pad_h));
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
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_q;
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
                            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_done) {
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_d = 0U;
                            }
                        } else {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_d = 1U;
                        }
                    } else {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_d = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_d = 0U;
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
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_ic_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kw_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_kh_d = 0U;
                }
            } else if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_x_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_out_y_d = 0U;
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
        } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_d = 0U;
            }
        } else {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_d = 0U;
        }
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_k 
        = ((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_q))) 
           >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_k));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_row 
        = ((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_q))) 
           >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__active_rows));
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
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_y_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_y_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_q;
    if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_k) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_d = 0U;
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
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_d 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__first_kh_q;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_d 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__first_kw_q;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_d 
                        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__first_ic_q;
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_row)))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_d 
                            = (0x0000ffffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_q)));
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
    } else if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q) 
                         >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q)))) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__k_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_x_d 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__tile_out_x;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__out_y_d 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__tile_out_y;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kh_d 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_kh;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__kw_d 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_kw;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__ic_d 
                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__start_ic;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__row_d = 0U;
            }
        }
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__lane_sel 
        = (3U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__elem_addr);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__aligned_addr 
        = (0xfffffffcU & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__elem_addr);
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__aligned_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_addr;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_addr_i 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_mem_addr;
}

void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_scaled = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_start = 0U;
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
        }
    }
}

void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 0U;
    if ((0x00000010U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                      >> 3U)))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d = 0U;
            if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
                }
            } else if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                if ((8U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall = 1U;
                }
            }
        }
    } else if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
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
    if ((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_we_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_we_i;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_wdata_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_wdata_i;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_wstrb_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_wstrb_i;
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_we_o 
            = ((2U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i)) 
               & ((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))
                   ? (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_we_i)
                   : ((4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))
                       ? (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_we_i)
                       : (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_we_i))));
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_wdata_o 
            = (((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))
                 ? vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_wdata_i
                 : ((4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))
                     ? vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_wdata_i
                     : vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_wdata_i)) 
               & (- (IData)((2U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i)))));
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_wstrb_o 
            = (((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))
                 ? (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_wstrb_i)
                 : ((4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))
                     ? (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_wstrb_i)
                     : (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_wstrb_i))) 
               & (- (IData)((2U != (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i)))));
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_wstrb 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_conv)
            ? (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_wstrb)
            : (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wstrb));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_region 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_region) 
           & (- (IData)((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_conv))))));
    vlSelfRef.tinygpu_top__DOT__cnt_stall = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__cnt_stall;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_we 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_we_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_wdata 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_wdata_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_wstrb 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_wstrb_o;
    vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_i 
        = vlSelfRef.tinygpu_top__DOT__cnt_stall;
    vlSelfRef.tinygpu_top__DOT__mem_we_raw = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_we;
    vlSelfRef.tinygpu_top__DOT__mem_wdata_raw = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_wdata;
    vlSelfRef.tinygpu_top__DOT__mem_wstrb_raw = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_wstrb;
}

void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_memory_error = 0U;
    if ((0x00000010U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_inflight_q) {
                            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_error) {
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_memory_error = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
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
            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                if ((1U & (~ ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                              & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q)))))) {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)))) {
                        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_error) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__set_memory_error = 1U;
                        }
                    }
                }
            }
        } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
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
    if ((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_req_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_req_i;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_addr_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_addr_i;
    } else if ((2U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_req_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_req_i;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_addr_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__conv_addr_i;
    } else if ((3U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_req_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_req_i;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_addr_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__vec_addr_i;
    } else if ((4U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__select_i))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_req_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_req_i;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_addr_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__bias_addr_i;
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_req_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_req_i;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_addr_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__dma_addr_i;
    }
    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_conv) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_addr;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_wr_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_wr_en;
    } else {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_addr;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_wr_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wr_en;
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_req 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_req_o;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_addr 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__mem_addr_o;
    vlSelfRef.tinygpu_top__DOT__mem_req_raw = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_req;
    vlSelfRef.tinygpu_top__DOT__mem_addr_raw = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__mem_addr;
}

void Vtop___024root___nba_comb__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd = 0U;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_cmd_fields = 0U;
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
    if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                  >> 4U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__start) {
                            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__start_direct_mode) {
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd = 1U;
                            }
                            if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__start_direct_mode)))) {
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_cmd_fields = 1U;
                            }
                        }
                    }
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
                }
            }
        }
    }
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
    if ((0x00000010U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
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
        if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_k_tiles) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_d 
                                = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_q 
                                   + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_q);
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                             >> 2U)))) {
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
    }
}

void Vtop___024root___nba_comb__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.tinygpu_top__DOT__mmio_rdata = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata;
    vlSelfRef.mmio_rdata = vlSelfRef.tinygpu_top__DOT__mmio_rdata;
}

void Vtop___024root___nba_comb__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_ready 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__desc_ready_o;
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
            }
        }
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_q;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q;
    if ((0x00000010U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d = 0U;
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d = 0U;
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
    } else {
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
        }
        if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q) {
                        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_rvalid) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                        }
                    } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_ready) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 1U;
                    }
                } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q) {
                    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_rvalid) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
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
                } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    if ((1U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)) {
                        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_q) {
                            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_rvalid) {
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                            }
                        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_ready) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 1U;
                        }
                    } else {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                    }
                } else {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                }
            }
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
            if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                          >> 2U)))) {
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
                }
            }
        } else if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
                }
            } else if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
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
                } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q) {
                    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_rvalid) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
                    }
                } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_ready) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 1U;
                }
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d = 0U;
                if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d = 0U;
                }
            }
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d = 0U;
        }
    }
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_ready 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_ready;
}

void Vtop___024root___nba_comb__TOP__9(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vtop___024root___nba_comb__TOP__10(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__10\n"); );
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
    // Body
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
}

void Vtop___024root___nba_comb__TOP__11(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wdata 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wdata;
}

void Vtop___024root___nba_comb__TOP__12(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_start 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_start) 
           | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_start));
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__start 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_start;
}

void Vtop___024root___nba_comb__TOP__13(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__13\n"); );
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
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_rdata 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_rdata;
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_rdata 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_rdata;
}

void Vtop___024root___nba_comb__TOP__14(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__14\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q;
    if ((0x00000010U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
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
    } else if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
                    = ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))
                        ? ((8U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)
                            ? 0x10U : 0x11U) : 0x0fU);
            } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q) {
                    if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_rvalid) {
                        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x0eU;
                    }
                }
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q) {
                if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_rvalid) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
                        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_needs_y)
                            ? 0x0dU : 0x0eU);
                }
            }
        } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (~ ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)) 
                              & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q)))))) {
                    if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q)))) {
                        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_error) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x17U;
                        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_done) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
                                = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_n_tiles)
                                    ? 0x13U : ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_m_tiles)
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
                        if (((0x0000ffffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q))) 
                             >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n))) {
                            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x0aU;
                        }
                    }
                }
            } else {
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 0x0aU;
            }
        } else {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
                = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__more_k_tiles)
                    ? ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_conv_opcode)
                        ? 0x15U : 5U) : ((1U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)
                                          ? 9U : 0x0aU));
        }
    } else if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if (((0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q))) 
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
        } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
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
    } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
                = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode)
                    ? 0x0cU : 4U);
        } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_rvalid) {
                if (((0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q))) 
                     >= (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_words_expected))) {
                    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d = 1U;
                }
            }
        }
    } else if ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
            = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok)
                ? ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok)
                    ? ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_flags_ok)
                        ? 3U : 0x17U) : 0x17U) : 0x17U);
    } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__start) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d 
            = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__start_direct_mode)
                ? 1U : 2U);
    }
}

void Vtop___024root___nba_comb__TOP__15(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__15\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_d 
        = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q;
    if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_d 
            = ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))
                ? 0U : ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))
                         ? ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_k)
                             ? ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_row)
                                 ? 6U : 1U) : 1U) : 5U));
    } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
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

void Vtop___024root___nba_comb__TOP__16(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__16\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vtop___024root___nba_comb__TOP__17(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__17\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_wdata 
        = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_conv)
            ? vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_wdata
            : vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wdata);
}

void Vtop___024root___nba_sequent__TOP__17(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__19(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__20(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__21(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__23(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vinline__nba_sequent__TOP__0___Vdly__tinygpu_top__DOT__u_counters__DOT__cycle_cur_q;
    __Vinline__nba_sequent__TOP__0___Vdly__tinygpu_top__DOT__u_counters__DOT__cycle_cur_q = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__0___Vdly__tinygpu_top__DOT__u_counters__DOT__active_cur_q;
    __Vinline__nba_sequent__TOP__0___Vdly__tinygpu_top__DOT__u_counters__DOT__active_cur_q = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__0___Vdly__tinygpu_top__DOT__u_counters__DOT__stall_cur_q;
    __Vinline__nba_sequent__TOP__0___Vdly__tinygpu_top__DOT__u_counters__DOT__stall_cur_q = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__1___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    __Vinline__nba_sequent__TOP__1___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__2___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    __Vinline__nba_sequent__TOP__2___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__3___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    __Vinline__nba_sequent__TOP__3___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__4___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    __Vinline__nba_sequent__TOP__4___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__5___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    __Vinline__nba_sequent__TOP__5___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__6___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    __Vinline__nba_sequent__TOP__6___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__7___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    __Vinline__nba_sequent__TOP__7___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__8___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    __Vinline__nba_sequent__TOP__8___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__9___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    __Vinline__nba_sequent__TOP__9___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__10___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    __Vinline__nba_sequent__TOP__10___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__11___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    __Vinline__nba_sequent__TOP__11___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__12___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    __Vinline__nba_sequent__TOP__12___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__13___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    __Vinline__nba_sequent__TOP__13___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__14___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    __Vinline__nba_sequent__TOP__14___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__15___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    __Vinline__nba_sequent__TOP__15___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__16___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    __Vinline__nba_sequent__TOP__16___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__18___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy;
    __Vinline__nba_sequent__TOP__18___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__22___Vdly__tinygpu_top__DOT__mem_cmd_valid_q;
    __Vinline__nba_sequent__TOP__22___Vdly__tinygpu_top__DOT__mem_cmd_valid_q = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__22___Vdly__tinygpu_top__DOT__mem_read_pending_q;
    __Vinline__nba_sequent__TOP__22___Vdly__tinygpu_top__DOT__mem_read_pending_q = 0;
    IData/*31:0*/ __Vinline__nba_comb__TOP__10___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__Vfuncout;
    __Vinline__nba_comb__TOP__10___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__Vfuncout = 0;
    IData/*31:0*/ __Vinline__nba_comb__TOP__10___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x_in;
    __Vinline__nba_comb__TOP__10___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x_in = 0;
    IData/*31:0*/ __Vinline__nba_comb__TOP__10___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__bias_in;
    __Vinline__nba_comb__TOP__10___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__bias_in = 0;
    CData/*0:0*/ __Vinline__nba_comb__TOP__10___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__valid_elem;
    __Vinline__nba_comb__TOP__10___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__valid_elem = 0;
    IData/*31:0*/ __Vinline__nba_comb__TOP__10___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__flags_in;
    __Vinline__nba_comb__TOP__10___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__flags_in = 0;
    IData/*31:0*/ __Vinline__nba_comb__TOP__10___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x;
    __Vinline__nba_comb__TOP__10___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x = 0;
    // Body
    if ((0x000c000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__0___Vdly__tinygpu_top__DOT__u_counters__DOT__cycle_cur_q 
            = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cycle_cur_q;
        __Vinline__nba_sequent__TOP__0___Vdly__tinygpu_top__DOT__u_counters__DOT__active_cur_q 
            = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_cur_q;
        __Vinline__nba_sequent__TOP__0___Vdly__tinygpu_top__DOT__u_counters__DOT__stall_cur_q 
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
                __Vinline__nba_sequent__TOP__0___Vdly__tinygpu_top__DOT__u_counters__DOT__cycle_cur_q = 0U;
                __Vinline__nba_sequent__TOP__0___Vdly__tinygpu_top__DOT__u_counters__DOT__active_cur_q = 0U;
                __Vinline__nba_sequent__TOP__0___Vdly__tinygpu_top__DOT__u_counters__DOT__stall_cur_q = 0U;
            } else {
                if (vlSelfRef.tinygpu_top__DOT__u_counters__DOT__busy_i) {
                    __Vinline__nba_sequent__TOP__0___Vdly__tinygpu_top__DOT__u_counters__DOT__cycle_cur_q 
                        = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cycle_cur_q);
                }
                if (vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_i) {
                    __Vinline__nba_sequent__TOP__0___Vdly__tinygpu_top__DOT__u_counters__DOT__active_cur_q 
                        = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_cur_q);
                }
                if (vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_i) {
                    __Vinline__nba_sequent__TOP__0___Vdly__tinygpu_top__DOT__u_counters__DOT__stall_cur_q 
                        = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_cur_q);
                }
            }
        } else {
            vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cmd_count_o = 0U;
            __Vinline__nba_sequent__TOP__0___Vdly__tinygpu_top__DOT__u_counters__DOT__cycle_cur_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cycle_count_o = 0U;
            __Vinline__nba_sequent__TOP__0___Vdly__tinygpu_top__DOT__u_counters__DOT__active_cur_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_count_o = 0U;
            __Vinline__nba_sequent__TOP__0___Vdly__tinygpu_top__DOT__u_counters__DOT__stall_cur_q = 0U;
            vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_count_o = 0U;
        }
        vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cycle_cur_q 
            = __Vinline__nba_sequent__TOP__0___Vdly__tinygpu_top__DOT__u_counters__DOT__cycle_cur_q;
        vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_cur_q 
            = __Vinline__nba_sequent__TOP__0___Vdly__tinygpu_top__DOT__u_counters__DOT__active_cur_q;
        vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_cur_q 
            = __Vinline__nba_sequent__TOP__0___Vdly__tinygpu_top__DOT__u_counters__DOT__stall_cur_q;
        vlSelfRef.tinygpu_top__DOT__cmd_count_total 
            = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cmd_count_o;
        vlSelfRef.tinygpu_top__DOT__cycle_count_last 
            = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__cycle_count_o;
        vlSelfRef.tinygpu_top__DOT__active_count_last 
            = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__active_count_o;
        vlSelfRef.tinygpu_top__DOT__stall_count_last 
            = vlSelfRef.tinygpu_top__DOT__u_counters__DOT__stall_count_o;
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cmd_count_i 
            = vlSelfRef.tinygpu_top__DOT__cmd_count_total;
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__cycle_count_i 
            = vlSelfRef.tinygpu_top__DOT__cycle_count_last;
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__active_count_i 
            = vlSelfRef.tinygpu_top__DOT__active_count_last;
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT__stall_count_i 
            = vlSelfRef.tinygpu_top__DOT__stall_count_last;
    }
    if ((0x000000000000c000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__1___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clear_acc) {
                __Vinline__nba_sequent__TOP__1___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0U;
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en) {
                __Vinline__nba_sequent__TOP__1___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext);
            }
        } else {
            __Vinline__nba_sequent__TOP__1___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0U;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
            = __Vinline__nba_sequent__TOP__1___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[0U][0U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((0x0000000000030000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__2___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clear_acc) {
                __Vinline__nba_sequent__TOP__2___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0U;
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en) {
                __Vinline__nba_sequent__TOP__2___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext);
            }
        } else {
            __Vinline__nba_sequent__TOP__2___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0U;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
            = __Vinline__nba_sequent__TOP__2___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[0U][1U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((0x00000000000c0000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__3___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clear_acc) {
                __Vinline__nba_sequent__TOP__3___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0U;
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en) {
                __Vinline__nba_sequent__TOP__3___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext);
            }
        } else {
            __Vinline__nba_sequent__TOP__3___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0U;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
            = __Vinline__nba_sequent__TOP__3___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[0U][2U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((0x0000000000300000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__4___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clear_acc) {
                __Vinline__nba_sequent__TOP__4___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0U;
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en) {
                __Vinline__nba_sequent__TOP__4___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext);
            }
        } else {
            __Vinline__nba_sequent__TOP__4___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0U;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
            = __Vinline__nba_sequent__TOP__4___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[0U][3U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((0x0000000000c00000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__5___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clear_acc) {
                __Vinline__nba_sequent__TOP__5___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0U;
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en) {
                __Vinline__nba_sequent__TOP__5___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext);
            }
        } else {
            __Vinline__nba_sequent__TOP__5___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0U;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
            = __Vinline__nba_sequent__TOP__5___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[1U][0U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((0x0000000003000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__6___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clear_acc) {
                __Vinline__nba_sequent__TOP__6___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0U;
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en) {
                __Vinline__nba_sequent__TOP__6___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext);
            }
        } else {
            __Vinline__nba_sequent__TOP__6___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0U;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
            = __Vinline__nba_sequent__TOP__6___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[1U][1U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((0x000000000c000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__7___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clear_acc) {
                __Vinline__nba_sequent__TOP__7___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0U;
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en) {
                __Vinline__nba_sequent__TOP__7___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext);
            }
        } else {
            __Vinline__nba_sequent__TOP__7___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0U;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
            = __Vinline__nba_sequent__TOP__7___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[1U][2U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((0x0000000030000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__8___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clear_acc) {
                __Vinline__nba_sequent__TOP__8___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0U;
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en) {
                __Vinline__nba_sequent__TOP__8___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext);
            }
        } else {
            __Vinline__nba_sequent__TOP__8___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0U;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
            = __Vinline__nba_sequent__TOP__8___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[1U][3U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((0x00000000c0000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__9___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clear_acc) {
                __Vinline__nba_sequent__TOP__9___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0U;
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en) {
                __Vinline__nba_sequent__TOP__9___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext);
            }
        } else {
            __Vinline__nba_sequent__TOP__9___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0U;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
            = __Vinline__nba_sequent__TOP__9___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[2U][0U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((0x0000000300000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__10___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clear_acc) {
                __Vinline__nba_sequent__TOP__10___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0U;
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en) {
                __Vinline__nba_sequent__TOP__10___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext);
            }
        } else {
            __Vinline__nba_sequent__TOP__10___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0U;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
            = __Vinline__nba_sequent__TOP__10___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[2U][1U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((0x0000000c00000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__11___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clear_acc) {
                __Vinline__nba_sequent__TOP__11___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0U;
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en) {
                __Vinline__nba_sequent__TOP__11___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext);
            }
        } else {
            __Vinline__nba_sequent__TOP__11___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0U;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
            = __Vinline__nba_sequent__TOP__11___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[2U][2U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((0x0000003000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__12___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clear_acc) {
                __Vinline__nba_sequent__TOP__12___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0U;
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en) {
                __Vinline__nba_sequent__TOP__12___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext);
            }
        } else {
            __Vinline__nba_sequent__TOP__12___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0U;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
            = __Vinline__nba_sequent__TOP__12___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[2U][3U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((0x000000c000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__13___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clear_acc) {
                __Vinline__nba_sequent__TOP__13___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0U;
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en) {
                __Vinline__nba_sequent__TOP__13___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext);
            }
        } else {
            __Vinline__nba_sequent__TOP__13___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0U;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
            = __Vinline__nba_sequent__TOP__13___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[3U][0U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((0x0000030000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__14___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clear_acc) {
                __Vinline__nba_sequent__TOP__14___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0U;
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en) {
                __Vinline__nba_sequent__TOP__14___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext);
            }
        } else {
            __Vinline__nba_sequent__TOP__14___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0U;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
            = __Vinline__nba_sequent__TOP__14___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[3U][1U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((0x00000c0000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__15___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clear_acc) {
                __Vinline__nba_sequent__TOP__15___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0U;
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en) {
                __Vinline__nba_sequent__TOP__15___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext);
            }
        } else {
            __Vinline__nba_sequent__TOP__15___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0U;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
            = __Vinline__nba_sequent__TOP__15___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[3U][2U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((0x0000300000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__16___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clear_acc) {
                __Vinline__nba_sequent__TOP__16___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0U;
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en) {
                __Vinline__nba_sequent__TOP__16___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext);
            }
        } else {
            __Vinline__nba_sequent__TOP__16___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0U;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
            = __Vinline__nba_sequent__TOP__16___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[3U][3U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((0x0000000000003000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__17(vlSelf);
    }
    if ((0x0003000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__18___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__rst_n) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__done = 0U;
            if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__start) 
                 & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy)))) {
                __Vinline__nba_sequent__TOP__18___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy = 1U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__product_o 
                    = VL_MULS_III(32, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__a_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__b_i);
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy) {
                __Vinline__nba_sequent__TOP__18___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy = 0U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__done = 1U;
            }
        } else {
            __Vinline__nba_sequent__TOP__18___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__done = 0U;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__product_o = 0U;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy 
            = __Vinline__nba_sequent__TOP__18___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy;
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
    if ((0x0000c00000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__19(vlSelf);
    }
    if ((0x0000000000000030ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__20(vlSelf);
    }
    if ((0x0000000000000c00ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__21(vlSelf);
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__22___Vdly__tinygpu_top__DOT__mem_read_pending_q 
            = vlSelfRef.tinygpu_top__DOT__mem_read_pending_q;
        __Vinline__nba_sequent__TOP__22___Vdly__tinygpu_top__DOT__mem_cmd_valid_q 
            = vlSelfRef.tinygpu_top__DOT__mem_cmd_valid_q;
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
                __Vinline__nba_sequent__TOP__22___Vdly__tinygpu_top__DOT__mem_cmd_valid_q = 1U;
            }
            if (((IData)(vlSelfRef.tinygpu_top__DOT__mem_cmd_valid_q) 
                 & (IData)(vlSelfRef.tinygpu_top__DOT__mem_ready))) {
                __Vinline__nba_sequent__TOP__22___Vdly__tinygpu_top__DOT__mem_cmd_valid_q = 0U;
                if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__mem_cmd_we_q)))) {
                    if (vlSelfRef.tinygpu_top__DOT__mem_rvalid) {
                        __Vinline__nba_sequent__TOP__22___Vdly__tinygpu_top__DOT__mem_read_pending_q = 0U;
                        vlSelfRef.tinygpu_top__DOT__mem_rdata_stage_q 
                            = vlSelfRef.tinygpu_top__DOT__mem_rdata;
                        vlSelfRef.tinygpu_top__DOT__mem_rvalid_stage_q = 1U;
                    } else {
                        __Vinline__nba_sequent__TOP__22___Vdly__tinygpu_top__DOT__mem_read_pending_q = 1U;
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
                __Vinline__nba_sequent__TOP__22___Vdly__tinygpu_top__DOT__mem_read_pending_q = 0U;
                vlSelfRef.tinygpu_top__DOT__mem_rdata_stage_q 
                    = vlSelfRef.tinygpu_top__DOT__mem_rdata;
                vlSelfRef.tinygpu_top__DOT__mem_rvalid_stage_q = 1U;
            }
        } else {
            vlSelfRef.tinygpu_top__DOT__mem_cmd_addr_q = 0U;
            vlSelfRef.tinygpu_top__DOT__mem_cmd_wdata_q = 0U;
            vlSelfRef.tinygpu_top__DOT__mem_cmd_wstrb_q = 0U;
            __Vinline__nba_sequent__TOP__22___Vdly__tinygpu_top__DOT__mem_cmd_valid_q = 0U;
            __Vinline__nba_sequent__TOP__22___Vdly__tinygpu_top__DOT__mem_read_pending_q = 0U;
            vlSelfRef.tinygpu_top__DOT__mem_rdata_stage_q = 0U;
            vlSelfRef.tinygpu_top__DOT__mem_rvalid_stage_q = 0U;
            vlSelfRef.tinygpu_top__DOT__mem_cmd_we_q = 0U;
        }
        vlSelfRef.tinygpu_top__DOT__mem_read_pending_q 
            = __Vinline__nba_sequent__TOP__22___Vdly__tinygpu_top__DOT__mem_read_pending_q;
        vlSelfRef.tinygpu_top__DOT__mem_cmd_valid_q 
            = __Vinline__nba_sequent__TOP__22___Vdly__tinygpu_top__DOT__mem_cmd_valid_q;
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
        vlSelfRef.tinygpu_top__DOT__mem_stage_ready 
            = (1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__mem_cmd_valid_q) 
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
    if ((0x00000000000000c0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__23(vlSelf);
    }
    if ((0x0000000000000300ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__24(vlSelf);
    }
    if ((0x00003fffffffc000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_tile 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_in 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_tile;
    }
    if ((0x0003000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_done 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_done;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__mul_product 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_product;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_product 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_product;
    }
    if ((0x0000000000003000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_busy_status 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__busy;
    }
    if ((0x0000000000000c00ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_busy_status 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__busy;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_wr_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__spm_wr_en;
    }
    if ((0x0000c00000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i32 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i32;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_shadow_i8 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_out_i8;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_index 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_index;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i32 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_i32;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i8 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_i8;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_valid 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__out_valid;
    }
    if ((0x0000000000000030ULL & vlSelfRef.__VnbaTriggered[0U])) {
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
    }
    if ((0x0000c000000000c0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_start) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_a 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_a;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_b 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_b;
        } else {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_a 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post_q;
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_b 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__scale_q;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__x_shifted 
            = ((8U & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__flags)
                ? (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__shift)))
                    ? (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__zero_point_ext 
                       + VL_SHIFTRS_III(32,32,16, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_elem_q, (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__shift)))
                    : (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__zero_point_ext 
                       + VL_SHIFTL_III(32,32,16, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_elem_q, 
                                       (0x0000ffffU 
                                        & (- (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__shift))))))
                : vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_q);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__elem_valid 
            = (1U & (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_mask) 
                      >> (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q)) 
                     & ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_mask) 
                        >> (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q))));
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_start = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_en = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_addr = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_data = 0U;
        if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                if ((1U & (~ ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) {
                        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))) {
                            if ((1U & ((~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_busy)) 
                                       & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_done))))) {
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_start = 1U;
                            }
                            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_valid) {
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_en = 1U;
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_addr 
                                    = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_index;
                                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_data 
                                    = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__use_dst_i8)
                                        ? (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i8)
                                        : vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_out_i32);
                            }
                        }
                    }
                }
            }
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__a_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_a;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__start 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_start;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__b_i 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_b;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_wr_en 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_en;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_wr_addr 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_addr;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_wr_data 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_data;
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_mem_arbiter__DOT__client_rdata_o;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__mem_rdata 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rdata 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__client_mem_rdata;
    }
    if ((0x0000000000000cc0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x00030000000000c0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_scaled = 0U;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_start = 0U;
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
            }
        }
    }
    if ((0x00000000000030c0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0x0000000000003cc0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__5(vlSelf);
    }
    if ((0x00000000000000f0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((0x000c0000000000f0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__7(vlSelf);
    }
    if ((0x00000000000000ccULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__8(vlSelf);
    }
    if ((0x00000000000003c0ULL & vlSelfRef.__VnbaTriggered[0U])) {
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
                                                  [
                                                  (3U 
                                                   & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk7__DOT__r)], (IData)(0x00000010U)))]
                    : 0U);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk7__DOT__r 
                = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk7__DOT__r);
        }
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
                                               [(3U 
                                                 & vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk8__DOT__c)], (IData)(4U)))]
                    : 0U);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk8__DOT__c 
                = ((IData)(1U) + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk8__DOT__c);
        }
    }
    if ((0x0000ffffffffc0c0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_comb__TOP__10___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__flags_in 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__flags;
        __Vinline__nba_comb__TOP__10___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__valid_elem 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__elem_valid;
        __Vinline__nba_comb__TOP__10___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__bias_in 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__bias
            [vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q];
        __Vinline__nba_comb__TOP__10___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x_in 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_in
            [vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q]
            [vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q];
        __Vinline__nba_comb__TOP__10___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x 
            = __Vinline__nba_comb__TOP__10___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x_in;
        if (__Vinline__nba_comb__TOP__10___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__valid_elem) {
            if ((1U & __Vinline__nba_comb__TOP__10___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__flags_in)) {
                __Vinline__nba_comb__TOP__10___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x 
                    = (__Vinline__nba_comb__TOP__10___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x 
                       + __Vinline__nba_comb__TOP__10___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__bias_in);
            }
            if (((__Vinline__nba_comb__TOP__10___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__flags_in 
                  >> 1U) & VL_GTS_III(32, 0U, __Vinline__nba_comb__TOP__10___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x))) {
                __Vinline__nba_comb__TOP__10___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x = 0U;
            }
            if ((4U & __Vinline__nba_comb__TOP__10___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__flags_in)) {
                vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__x 
                    = __Vinline__nba_comb__TOP__10___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x;
                vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__Vfuncout 
                    = (VL_GTS_III(32, 0xffffff80U, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__x)
                        ? 0xffffff80U : (VL_LTS_III(32, 0x0000007fU, vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__x)
                                          ? 0x0000007fU
                                          : vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__x));
                __Vinline__nba_comb__TOP__10___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x 
                    = vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__Vfuncout;
            }
        } else {
            __Vinline__nba_comb__TOP__10___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x = 0U;
        }
        __Vinline__nba_comb__TOP__10___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__Vfuncout 
            = __Vinline__nba_comb__TOP__10___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x;
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_n 
            = __Vinline__nba_comb__TOP__10___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__Vfuncout;
    }
    if ((0x000000000000300cULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__load_byte 
            = (0x000000ffU & ((0U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__load_lane_sel))
                               ? vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rdata
                               : ((1U == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__load_lane_sel))
                                   ? (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rdata 
                                      >> 8U) : ((2U 
                                                 == (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__load_lane_sel))
                                                 ? 
                                                (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rdata 
                                                 >> 0x00000010U)
                                                 : 
                                                (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__mem_rdata 
                                                 >> 0x00000018U)))));
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
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wdata 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_wdata;
    }
    if ((0x0003c000000000c0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_start 
            = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_mul_start) 
               | (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mul_start));
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__start 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__shared_mul_start;
    }
    if ((0x0000000000003fc0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__13(vlSelf);
    }
    if ((0x0003c00000003cfcULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__14(vlSelf);
    }
    if ((0x0000000000000cccULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_d 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q;
        if ((4U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_d 
                = ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))
                    ? 0U : ((1U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))
                             ? ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_k)
                                 ? ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__last_row)
                                     ? 6U : 1U) : 1U)
                             : 5U));
        } else if ((2U & (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_im2col__DOT__state_q))) {
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
    if ((0x00000000000030ccULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__16(vlSelf);
    }
    if ((0x0000000000003cccULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__dma_wdata 
            = ((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_conv)
                ? vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__conv_spm_wdata
                : vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wdata);
    }
}

void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtop___024root___eval_triggers_vec__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtop___024root___eval_act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("../rtl/core/tinygpu_ml/tinygpu_top.sv", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtop___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("../rtl/core/tinygpu_ml/tinygpu_top.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("../rtl/core/tinygpu_ml/tinygpu_top.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtop___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtop___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.mmio_valid & 0xfeU)))) {
        Verilated::overWidthError("mmio_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.mmio_we & 0xfeU)))) {
        Verilated::overWidthError("mmio_we");
    }
    if (VL_UNLIKELY(((vlSelfRef.mmio_wstrb & 0xf0U)))) {
        Verilated::overWidthError("mmio_wstrb");
    }
    if (VL_UNLIKELY(((vlSelfRef.mem_ready & 0xfeU)))) {
        Verilated::overWidthError("mem_ready");
    }
    if (VL_UNLIKELY(((vlSelfRef.mem_rvalid & 0xfeU)))) {
        Verilated::overWidthError("mem_rvalid");
    }
}
#endif  // VL_DEBUG
