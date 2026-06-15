// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___nba_comb__TOP__9(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    if ((vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata 
         ^ vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__mmio_rdata)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2142, vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata, vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__mmio_rdata);
        vlSelfRef.tinygpu_top__DOT__u_regs__DOT____Vtogcov__mmio_rdata 
            = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata;
    }
    vlSelfRef.tinygpu_top__DOT__mmio_rdata = vlSelfRef.tinygpu_top__DOT__u_regs__DOT__mmio_rdata;
    if ((vlSelfRef.tinygpu_top__DOT__mmio_rdata ^ vlSelfRef.tinygpu_top__DOT____Vtogcov__mmio_rdata)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 144, vlSelfRef.tinygpu_top__DOT__mmio_rdata, vlSelfRef.tinygpu_top__DOT____Vtogcov__mmio_rdata);
        vlSelfRef.tinygpu_top__DOT____Vtogcov__mmio_rdata 
            = vlSelfRef.tinygpu_top__DOT__mmio_rdata;
    }
    vlSelfRef.mmio_rdata = vlSelfRef.tinygpu_top__DOT__mmio_rdata;
}

void Vtop___024root___nba_comb__TOP__10(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__10\n"); );
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

void Vtop___024root___nba_comb__TOP__11(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__11\n"); );
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
    if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_n 
         ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__post_elem_n)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 23309, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__post_elem_n);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__post_elem_n 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_n;
    }
}

void Vtop___024root___nba_sequent__TOP__16(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__18(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__19(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__20(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__21(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__22(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__23(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__24(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__26(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__27(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__6(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__7(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__8(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vinline__nba_sequent__TOP__0___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    __Vinline__nba_sequent__TOP__0___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__1___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    __Vinline__nba_sequent__TOP__1___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__2___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    __Vinline__nba_sequent__TOP__2___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__3___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    __Vinline__nba_sequent__TOP__3___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__4___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    __Vinline__nba_sequent__TOP__4___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__5___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    __Vinline__nba_sequent__TOP__5___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__6___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    __Vinline__nba_sequent__TOP__6___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__7___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    __Vinline__nba_sequent__TOP__7___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__8___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    __Vinline__nba_sequent__TOP__8___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__9___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    __Vinline__nba_sequent__TOP__9___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__10___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    __Vinline__nba_sequent__TOP__10___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__11___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    __Vinline__nba_sequent__TOP__11___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__12___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    __Vinline__nba_sequent__TOP__12___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__13___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    __Vinline__nba_sequent__TOP__13___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__14___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    __Vinline__nba_sequent__TOP__14___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__15___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    __Vinline__nba_sequent__TOP__15___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__17___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy;
    __Vinline__nba_sequent__TOP__17___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy = 0;
    IData/*31:0*/ __Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__Vfuncout;
    __Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__Vfuncout = 0;
    IData/*31:0*/ __Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x_in;
    __Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x_in = 0;
    IData/*31:0*/ __Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__bias_in;
    __Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__bias_in = 0;
    CData/*0:0*/ __Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__valid_elem;
    __Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__valid_elem = 0;
    IData/*31:0*/ __Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__flags_in;
    __Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__flags_in = 0;
    IData/*31:0*/ __Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x;
    __Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x = 0;
    // Body
    if ((0x000000000000c000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__0___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clear_acc) {
                ++(vlSymsp->__Vcoverage[19029]);
                __Vinline__nba_sequent__TOP__0___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0U;
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en) {
                __Vinline__nba_sequent__TOP__0___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext);
                ++(vlSymsp->__Vcoverage[19027]);
            } else {
                ++(vlSymsp->__Vcoverage[19028]);
            }
        } else {
            ++(vlSymsp->__Vcoverage[19030]);
            __Vinline__nba_sequent__TOP__0___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n)))) {
            ++(vlSymsp->__Vcoverage[19031]);
        }
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n) {
            ++(vlSymsp->__Vcoverage[19032]);
        }
        ++(vlSymsp->__Vcoverage[19033]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
            = __Vinline__nba_sequent__TOP__0___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
        if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
             ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
            VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 18867, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[0U][0U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((0x0000000000030000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__1___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clear_acc) {
                ++(vlSymsp->__Vcoverage[19236]);
                __Vinline__nba_sequent__TOP__1___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0U;
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en) {
                __Vinline__nba_sequent__TOP__1___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext);
                ++(vlSymsp->__Vcoverage[19234]);
            } else {
                ++(vlSymsp->__Vcoverage[19235]);
            }
        } else {
            ++(vlSymsp->__Vcoverage[19237]);
            __Vinline__nba_sequent__TOP__1___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n)))) {
            ++(vlSymsp->__Vcoverage[19238]);
        }
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n) {
            ++(vlSymsp->__Vcoverage[19239]);
        }
        ++(vlSymsp->__Vcoverage[19240]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
            = __Vinline__nba_sequent__TOP__1___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
        if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
             ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
            VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 19074, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[0U][1U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((0x00000000000c0000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__2___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clear_acc) {
                ++(vlSymsp->__Vcoverage[19443]);
                __Vinline__nba_sequent__TOP__2___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0U;
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en) {
                __Vinline__nba_sequent__TOP__2___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext);
                ++(vlSymsp->__Vcoverage[19441]);
            } else {
                ++(vlSymsp->__Vcoverage[19442]);
            }
        } else {
            ++(vlSymsp->__Vcoverage[19444]);
            __Vinline__nba_sequent__TOP__2___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n)))) {
            ++(vlSymsp->__Vcoverage[19445]);
        }
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n) {
            ++(vlSymsp->__Vcoverage[19446]);
        }
        ++(vlSymsp->__Vcoverage[19447]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
            = __Vinline__nba_sequent__TOP__2___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
        if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
             ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
            VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 19281, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[0U][2U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((0x0000000000300000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__3___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clear_acc) {
                ++(vlSymsp->__Vcoverage[19650]);
                __Vinline__nba_sequent__TOP__3___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0U;
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en) {
                __Vinline__nba_sequent__TOP__3___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext);
                ++(vlSymsp->__Vcoverage[19648]);
            } else {
                ++(vlSymsp->__Vcoverage[19649]);
            }
        } else {
            ++(vlSymsp->__Vcoverage[19651]);
            __Vinline__nba_sequent__TOP__3___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n)))) {
            ++(vlSymsp->__Vcoverage[19652]);
        }
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n) {
            ++(vlSymsp->__Vcoverage[19653]);
        }
        ++(vlSymsp->__Vcoverage[19654]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
            = __Vinline__nba_sequent__TOP__3___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
        if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
             ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
            VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 19488, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[0U][3U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((0x0000000000c00000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__4___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clear_acc) {
                ++(vlSymsp->__Vcoverage[19857]);
                __Vinline__nba_sequent__TOP__4___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0U;
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en) {
                __Vinline__nba_sequent__TOP__4___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext);
                ++(vlSymsp->__Vcoverage[19855]);
            } else {
                ++(vlSymsp->__Vcoverage[19856]);
            }
        } else {
            ++(vlSymsp->__Vcoverage[19858]);
            __Vinline__nba_sequent__TOP__4___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n)))) {
            ++(vlSymsp->__Vcoverage[19859]);
        }
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n) {
            ++(vlSymsp->__Vcoverage[19860]);
        }
        ++(vlSymsp->__Vcoverage[19861]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
            = __Vinline__nba_sequent__TOP__4___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
        if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
             ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
            VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 19695, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[1U][0U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((0x0000000003000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__5___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clear_acc) {
                ++(vlSymsp->__Vcoverage[20064]);
                __Vinline__nba_sequent__TOP__5___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0U;
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en) {
                __Vinline__nba_sequent__TOP__5___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext);
                ++(vlSymsp->__Vcoverage[20062]);
            } else {
                ++(vlSymsp->__Vcoverage[20063]);
            }
        } else {
            ++(vlSymsp->__Vcoverage[20065]);
            __Vinline__nba_sequent__TOP__5___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n)))) {
            ++(vlSymsp->__Vcoverage[20066]);
        }
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n) {
            ++(vlSymsp->__Vcoverage[20067]);
        }
        ++(vlSymsp->__Vcoverage[20068]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
            = __Vinline__nba_sequent__TOP__5___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
        if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
             ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
            VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 19902, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[1U][1U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((0x000000000c000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__6___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clear_acc) {
                ++(vlSymsp->__Vcoverage[20271]);
                __Vinline__nba_sequent__TOP__6___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0U;
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en) {
                __Vinline__nba_sequent__TOP__6___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext);
                ++(vlSymsp->__Vcoverage[20269]);
            } else {
                ++(vlSymsp->__Vcoverage[20270]);
            }
        } else {
            ++(vlSymsp->__Vcoverage[20272]);
            __Vinline__nba_sequent__TOP__6___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n)))) {
            ++(vlSymsp->__Vcoverage[20273]);
        }
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n) {
            ++(vlSymsp->__Vcoverage[20274]);
        }
        ++(vlSymsp->__Vcoverage[20275]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
            = __Vinline__nba_sequent__TOP__6___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
        if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
             ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
            VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 20109, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[1U][2U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((0x0000000030000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__7___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clear_acc) {
                ++(vlSymsp->__Vcoverage[20478]);
                __Vinline__nba_sequent__TOP__7___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0U;
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en) {
                __Vinline__nba_sequent__TOP__7___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext);
                ++(vlSymsp->__Vcoverage[20476]);
            } else {
                ++(vlSymsp->__Vcoverage[20477]);
            }
        } else {
            ++(vlSymsp->__Vcoverage[20479]);
            __Vinline__nba_sequent__TOP__7___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n)))) {
            ++(vlSymsp->__Vcoverage[20480]);
        }
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n) {
            ++(vlSymsp->__Vcoverage[20481]);
        }
        ++(vlSymsp->__Vcoverage[20482]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
            = __Vinline__nba_sequent__TOP__7___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
        if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
             ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
            VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 20316, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[1U][3U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((0x00000000c0000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__8___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clear_acc) {
                ++(vlSymsp->__Vcoverage[20685]);
                __Vinline__nba_sequent__TOP__8___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0U;
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en) {
                __Vinline__nba_sequent__TOP__8___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext);
                ++(vlSymsp->__Vcoverage[20683]);
            } else {
                ++(vlSymsp->__Vcoverage[20684]);
            }
        } else {
            ++(vlSymsp->__Vcoverage[20686]);
            __Vinline__nba_sequent__TOP__8___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n)))) {
            ++(vlSymsp->__Vcoverage[20687]);
        }
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n) {
            ++(vlSymsp->__Vcoverage[20688]);
        }
        ++(vlSymsp->__Vcoverage[20689]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
            = __Vinline__nba_sequent__TOP__8___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
        if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
             ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
            VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 20523, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[2U][0U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((0x0000000300000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__9___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clear_acc) {
                ++(vlSymsp->__Vcoverage[20892]);
                __Vinline__nba_sequent__TOP__9___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0U;
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en) {
                __Vinline__nba_sequent__TOP__9___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext);
                ++(vlSymsp->__Vcoverage[20890]);
            } else {
                ++(vlSymsp->__Vcoverage[20891]);
            }
        } else {
            ++(vlSymsp->__Vcoverage[20893]);
            __Vinline__nba_sequent__TOP__9___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n)))) {
            ++(vlSymsp->__Vcoverage[20894]);
        }
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n) {
            ++(vlSymsp->__Vcoverage[20895]);
        }
        ++(vlSymsp->__Vcoverage[20896]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
            = __Vinline__nba_sequent__TOP__9___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
        if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
             ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
            VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 20730, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[2U][1U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((0x0000000c00000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__10___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clear_acc) {
                ++(vlSymsp->__Vcoverage[21099]);
                __Vinline__nba_sequent__TOP__10___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0U;
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en) {
                __Vinline__nba_sequent__TOP__10___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext);
                ++(vlSymsp->__Vcoverage[21097]);
            } else {
                ++(vlSymsp->__Vcoverage[21098]);
            }
        } else {
            ++(vlSymsp->__Vcoverage[21100]);
            __Vinline__nba_sequent__TOP__10___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n)))) {
            ++(vlSymsp->__Vcoverage[21101]);
        }
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n) {
            ++(vlSymsp->__Vcoverage[21102]);
        }
        ++(vlSymsp->__Vcoverage[21103]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
            = __Vinline__nba_sequent__TOP__10___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
        if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
             ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
            VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 20937, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[2U][2U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((0x0000003000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__11___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clear_acc) {
                ++(vlSymsp->__Vcoverage[21306]);
                __Vinline__nba_sequent__TOP__11___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0U;
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en) {
                __Vinline__nba_sequent__TOP__11___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext);
                ++(vlSymsp->__Vcoverage[21304]);
            } else {
                ++(vlSymsp->__Vcoverage[21305]);
            }
        } else {
            ++(vlSymsp->__Vcoverage[21307]);
            __Vinline__nba_sequent__TOP__11___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n)))) {
            ++(vlSymsp->__Vcoverage[21308]);
        }
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n) {
            ++(vlSymsp->__Vcoverage[21309]);
        }
        ++(vlSymsp->__Vcoverage[21310]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
            = __Vinline__nba_sequent__TOP__11___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
        if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
             ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
            VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 21144, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[2U][3U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((0x000000c000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__12___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__clear_acc) {
                ++(vlSymsp->__Vcoverage[21513]);
                __Vinline__nba_sequent__TOP__12___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0U;
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__mac_en) {
                __Vinline__nba_sequent__TOP__12___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__product_ext);
                ++(vlSymsp->__Vcoverage[21511]);
            } else {
                ++(vlSymsp->__Vcoverage[21512]);
            }
        } else {
            ++(vlSymsp->__Vcoverage[21514]);
            __Vinline__nba_sequent__TOP__12___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n)))) {
            ++(vlSymsp->__Vcoverage[21515]);
        }
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__rst_n) {
            ++(vlSymsp->__Vcoverage[21516]);
        }
        ++(vlSymsp->__Vcoverage[21517]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
            = __Vinline__nba_sequent__TOP__12___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
        if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o 
             ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
            VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 21351, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[3U][0U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((0x0000030000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__13___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__clear_acc) {
                ++(vlSymsp->__Vcoverage[21720]);
                __Vinline__nba_sequent__TOP__13___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0U;
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__mac_en) {
                __Vinline__nba_sequent__TOP__13___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__product_ext);
                ++(vlSymsp->__Vcoverage[21718]);
            } else {
                ++(vlSymsp->__Vcoverage[21719]);
            }
        } else {
            ++(vlSymsp->__Vcoverage[21721]);
            __Vinline__nba_sequent__TOP__13___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n)))) {
            ++(vlSymsp->__Vcoverage[21722]);
        }
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__rst_n) {
            ++(vlSymsp->__Vcoverage[21723]);
        }
        ++(vlSymsp->__Vcoverage[21724]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
            = __Vinline__nba_sequent__TOP__13___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
        if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o 
             ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
            VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 21558, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[3U][1U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((0x00000c0000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__14___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__clear_acc) {
                ++(vlSymsp->__Vcoverage[21927]);
                __Vinline__nba_sequent__TOP__14___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0U;
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__mac_en) {
                __Vinline__nba_sequent__TOP__14___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__product_ext);
                ++(vlSymsp->__Vcoverage[21925]);
            } else {
                ++(vlSymsp->__Vcoverage[21926]);
            }
        } else {
            ++(vlSymsp->__Vcoverage[21928]);
            __Vinline__nba_sequent__TOP__14___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n)))) {
            ++(vlSymsp->__Vcoverage[21929]);
        }
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__rst_n) {
            ++(vlSymsp->__Vcoverage[21930]);
        }
        ++(vlSymsp->__Vcoverage[21931]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
            = __Vinline__nba_sequent__TOP__14___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
        if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o 
             ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
            VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 21765, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[3U][2U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((0x0000300000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__15___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n) {
            if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__clear_acc) {
                ++(vlSymsp->__Vcoverage[22134]);
                __Vinline__nba_sequent__TOP__15___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0U;
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__mac_en) {
                __Vinline__nba_sequent__TOP__15___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
                    = (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
                       + vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__product_ext);
                ++(vlSymsp->__Vcoverage[22132]);
            } else {
                ++(vlSymsp->__Vcoverage[22133]);
            }
        } else {
            ++(vlSymsp->__Vcoverage[22135]);
            __Vinline__nba_sequent__TOP__15___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n)))) {
            ++(vlSymsp->__Vcoverage[22136]);
        }
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__rst_n) {
            ++(vlSymsp->__Vcoverage[22137]);
        }
        ++(vlSymsp->__Vcoverage[22138]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
            = __Vinline__nba_sequent__TOP__15___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
        if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o 
             ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o)) {
            VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 21972, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT____Vtogcov__acc_o 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
        }
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__c_tile[3U][3U] 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_o;
    }
    if ((0x000c000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__16(vlSelf);
    }
    if ((0x0003000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__17___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy;
        if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__rst_n) {
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__done = 0U;
            if (((IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__start) 
                 & (~ (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy)))) {
                ++(vlSymsp->__Vcoverage[24008]);
                __Vinline__nba_sequent__TOP__17___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy = 1U;
                vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__product_o 
                    = VL_MULS_III(32, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__a_i, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__b_i);
            } else if (vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy) {
                ++(vlSymsp->__Vcoverage[24006]);
                __Vinline__nba_sequent__TOP__17___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy = 0U;
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
            __Vinline__nba_sequent__TOP__17___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy = 0U;
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
            = __Vinline__nba_sequent__TOP__17___Vdly__tinygpu_top__DOT__u_cmd_ctrl__DOT__u_shared_mul__DOT__busy;
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
    if ((0x0000c00000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__18(vlSelf);
    }
    if ((0x0000000000000030ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__19(vlSelf);
    }
    if ((0x0000000000003000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__20(vlSelf);
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__21(vlSelf);
    }
    if ((0x0000000000000c00ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__22(vlSelf);
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
    if ((0x0000c00000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__26(vlSelf);
    }
    if ((0x0000000000000030ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__27(vlSelf);
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) {
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
    if ((0x0000c000000000c0ULL & vlSelfRef.__VnbaTriggered[0U])) {
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
                                     (0x0000ffffU & 
                                      (- (IData)(vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__shift)))) 
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
    if ((0x0000000000000cc0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x00000000000000ccULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x00000000000000f0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0x000000000000300cULL & vlSelfRef.__VnbaTriggered[0U])) {
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
    if ((0x0000000000000cccULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((0x0000000000000cfcULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__7(vlSelf);
    }
    if ((0x0003c00000003cfcULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__8(vlSelf);
    }
    if ((0x000fc00000003cfcULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__9(vlSelf);
    }
    if ((0x0003c00000003fffULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__10(vlSelf);
    }
    if ((0x0003ffffffffffffULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__flags_in 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__flags;
        __Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__valid_elem 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__elem_valid;
        __Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__bias_in 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__bias
            [vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q];
        __Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x_in 
            = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__c_in
            [vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__row_q]
            [vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__col_q];
        __Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x 
            = __Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x_in;
        if (__Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__valid_elem) {
            if ((1U & __Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__flags_in)) {
                __Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x 
                    = (__Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x 
                       + __Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__bias_in);
                ++(vlSymsp->__Vcoverage[23509]);
            } else {
                ++(vlSymsp->__Vcoverage[23510]);
            }
            if (((__Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__flags_in 
                  >> 1U) & VL_GTS_III(32, 0U, __Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x))) {
                __Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x = 0U;
                ++(vlSymsp->__Vcoverage[23511]);
            } else {
                ++(vlSymsp->__Vcoverage[23512]);
            }
            if ((4U & __Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__flags_in)) {
                vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__hi = 0x0000007fU;
                vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__lo = 0xffffff80U;
                vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__x 
                    = __Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x;
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
                __Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x 
                    = vlSelfRef.__Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__clamp32__26__Vfuncout;
                ++(vlSymsp->__Vcoverage[23516]);
            } else {
                ++(vlSymsp->__Vcoverage[23517]);
            }
            if (((__Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__flags_in 
                  >> 1U) & VL_GTS_III(32, 0U, __Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x))) {
                ++(vlSymsp->__Vcoverage[23513]);
            }
            if (VL_LTES_III(32, 0U, __Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x)) {
                ++(vlSymsp->__Vcoverage[23514]);
            }
            if ((1U & (~ (__Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__flags_in 
                          >> 1U)))) {
                ++(vlSymsp->__Vcoverage[23515]);
            }
            ++(vlSymsp->__Vcoverage[23518]);
        } else {
            __Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x = 0U;
            ++(vlSymsp->__Vcoverage[23519]);
        }
        __Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__Vfuncout 
            = __Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__x;
        ++(vlSymsp->__Vcoverage[23520]);
        vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_n 
            = __Vinline__nba_comb__TOP__11___Vfunc_tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__postprocess_elem__25__Vfuncout;
        if ((vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_n 
             ^ vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__post_elem_n)) {
            VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 23309, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_n, vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__post_elem_n);
            vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT____Vtogcov__post_elem_n 
                = vlSelfRef.tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_elem_n;
        }
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
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
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
