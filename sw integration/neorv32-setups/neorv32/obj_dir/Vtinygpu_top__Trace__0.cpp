// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtinygpu_top__Syms.h"


void Vtinygpu_top___024root__trace_chg_sub_0(Vtinygpu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtinygpu_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinygpu_top___024root__trace_chg_top_0\n"); );
    // Init
    Vtinygpu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtinygpu_top___024root*>(voidSelf);
    Vtinygpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtinygpu_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtinygpu_top___024root__trace_chg_sub_0(Vtinygpu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinygpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinygpu_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->tinygpu_top__DOT__reg_irq_enable));
        bufp->chgBit(oldp+1,(vlSelf->tinygpu_top__DOT__reg_direct_mode));
        bufp->chgBit(oldp+2,(vlSelf->tinygpu_top__DOT__u_regs__DOT__irq_pending_q));
        bufp->chgIData(oldp+3,(vlSelf->tinygpu_top__DOT__reg_cmd_addr),32);
        bufp->chgCData(oldp+4,(vlSelf->tinygpu_top__DOT__reg_opcode),8);
        bufp->chgIData(oldp+5,(vlSelf->tinygpu_top__DOT__reg_src0_addr),32);
        bufp->chgIData(oldp+6,(vlSelf->tinygpu_top__DOT__reg_src1_addr),32);
        bufp->chgIData(oldp+7,(vlSelf->tinygpu_top__DOT__reg_bias_addr),32);
        bufp->chgIData(oldp+8,(vlSelf->tinygpu_top__DOT__reg_dst_addr),32);
        bufp->chgSData(oldp+9,(vlSelf->tinygpu_top__DOT__reg_dim_m),16);
        bufp->chgSData(oldp+10,(vlSelf->tinygpu_top__DOT__reg_dim_n),16);
        bufp->chgSData(oldp+11,(vlSelf->tinygpu_top__DOT__reg_dim_k),16);
        bufp->chgSData(oldp+12,(vlSelf->tinygpu_top__DOT__reg_stride0),16);
        bufp->chgSData(oldp+13,(vlSelf->tinygpu_top__DOT__reg_stride1),16);
        bufp->chgSData(oldp+14,(vlSelf->tinygpu_top__DOT__reg_stride_dst),16);
        bufp->chgIData(oldp+15,(vlSelf->tinygpu_top__DOT__reg_flags),32);
        bufp->chgIData(oldp+16,(vlSelf->tinygpu_top__DOT__reg_scale),32);
        bufp->chgSData(oldp+17,(vlSelf->tinygpu_top__DOT__reg_shift),16);
        bufp->chgSData(oldp+18,(vlSelf->tinygpu_top__DOT__reg_zero_point),16);
        bufp->chgBit(oldp+19,(vlSelf->tinygpu_top__DOT__ctrl_busy));
        bufp->chgBit(oldp+20,(vlSelf->tinygpu_top__DOT__ctrl_done));
        bufp->chgBit(oldp+21,(vlSelf->tinygpu_top__DOT__ctrl_illegal_opcode));
        bufp->chgBit(oldp+22,(vlSelf->tinygpu_top__DOT__ctrl_shape_error));
        bufp->chgBit(oldp+23,(vlSelf->tinygpu_top__DOT__ctrl_memory_error));
        bufp->chgBit(oldp+24,(vlSelf->tinygpu_top__DOT__ctrl_unsupported_format));
        bufp->chgBit(oldp+25,(vlSelf->tinygpu_top__DOT__cnt_cmd_done));
        bufp->chgBit(oldp+26,((((0U != (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
                                & (0x15U != (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) 
                               & (0x16U != (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))));
        bufp->chgBit(oldp+27,(((((7U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
                                 | (0xeU == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) 
                                | (0xfU == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) 
                               | (0x10U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))));
        bufp->chgBit(oldp+28,(vlSelf->tinygpu_top__DOT__cnt_stall));
        bufp->chgIData(oldp+29,(vlSelf->tinygpu_top__DOT__cycle_count_last),32);
        bufp->chgIData(oldp+30,(vlSelf->tinygpu_top__DOT__active_count_last),32);
        bufp->chgIData(oldp+31,(vlSelf->tinygpu_top__DOT__stall_count_last),32);
        bufp->chgIData(oldp+32,(vlSelf->tinygpu_top__DOT__cmd_count_total),32);
        bufp->chgBit(oldp+33,(vlSelf->tinygpu_top__DOT__mem_req_raw));
        bufp->chgBit(oldp+34,(((2U != (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
                               & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_vec)
                                   ? (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_we)
                                   : ((9U != (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
                                      & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_we))))));
        bufp->chgIData(oldp+35,(((2U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))
                                  ? (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr_q 
                                     + ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q) 
                                        << 2U)) : ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_vec)
                                                    ? vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_addr
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))
                                                     ? 
                                                    (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q 
                                                     + 
                                                     ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q) 
                                                      << 2U))
                                                     : vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_addr)))),32);
        bufp->chgIData(oldp+36,(((2U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))
                                  ? 0U : ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_vec)
                                           ? vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wdata
                                           : ((9U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))
                                               ? 0U
                                               : vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wdata)))),32);
        bufp->chgCData(oldp+37,(((2U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))
                                  ? 0U : ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_vec)
                                           ? (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wstrb)
                                           : ((9U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))
                                               ? 0U
                                               : (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wstrb))))),4);
        bufp->chgIData(oldp+38,(vlSelf->tinygpu_top__DOT__mem_rdata_stage_q),32);
        bufp->chgBit(oldp+39,(vlSelf->tinygpu_top__DOT__mem_rvalid_stage_q));
        bufp->chgBit(oldp+40,(vlSelf->tinygpu_top__DOT__mem_cmd_valid_q));
        bufp->chgBit(oldp+41,(vlSelf->tinygpu_top__DOT__mem_cmd_we_q));
        bufp->chgIData(oldp+42,(vlSelf->tinygpu_top__DOT__mem_cmd_addr_q),32);
        bufp->chgIData(oldp+43,(vlSelf->tinygpu_top__DOT__mem_cmd_wdata_q),32);
        bufp->chgCData(oldp+44,(vlSelf->tinygpu_top__DOT__mem_cmd_wstrb_q),4);
        bufp->chgBit(oldp+45,(vlSelf->tinygpu_top__DOT__mem_read_pending_q));
        bufp->chgBit(oldp+46,(vlSelf->tinygpu_top__DOT__mem_stage_ready));
        bufp->chgCData(oldp+47,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q),5);
        bufp->chgCData(oldp+48,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q),8);
        bufp->chgIData(oldp+49,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q),32);
        bufp->chgIData(oldp+50,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr_q),32);
        bufp->chgIData(oldp+51,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q),32);
        bufp->chgIData(oldp+52,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q),32);
        bufp->chgIData(oldp+53,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr_q),32);
        bufp->chgIData(oldp+54,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr_q),32);
        bufp->chgSData(oldp+55,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q),16);
        bufp->chgSData(oldp+56,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q),16);
        bufp->chgSData(oldp+57,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q),16);
        bufp->chgSData(oldp+58,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q),16);
        bufp->chgSData(oldp+59,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q),16);
        bufp->chgSData(oldp+60,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q),16);
        bufp->chgIData(oldp+61,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__scale_q),32);
        bufp->chgSData(oldp+62,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q),16);
        bufp->chgSData(oldp+63,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q),16);
        bufp->chgSData(oldp+64,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q),16);
        bufp->chgSData(oldp+65,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_d),16);
        bufp->chgSData(oldp+66,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q),16);
        bufp->chgSData(oldp+67,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_d),16);
        bufp->chgSData(oldp+68,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q),16);
        bufp->chgSData(oldp+69,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d),16);
        bufp->chgSData(oldp+70,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q),16);
        bufp->chgSData(oldp+71,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d),16);
        bufp->chgSData(oldp+72,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q),16);
        bufp->chgSData(oldp+73,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d),16);
        bufp->chgSData(oldp+74,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q),16);
        bufp->chgSData(oldp+75,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d),16);
        bufp->chgSData(oldp+76,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q),16);
        bufp->chgSData(oldp+77,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d),16);
        bufp->chgSData(oldp+78,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q),16);
        bufp->chgSData(oldp+79,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d),16);
        bufp->chgCData(oldp+80,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q),5);
        bufp->chgCData(oldp+81,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_d),5);
        bufp->chgBit(oldp+82,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_q));
        bufp->chgBit(oldp+83,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d));
        bufp->chgBit(oldp+84,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q));
        bufp->chgBit(oldp+85,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d));
        bufp->chgBit(oldp+86,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_q));
        bufp->chgBit(oldp+87,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d));
        bufp->chgBit(oldp+88,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q));
        bufp->chgBit(oldp+89,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d));
        bufp->chgBit(oldp+90,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q));
        bufp->chgBit(oldp+91,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d));
        bufp->chgSData(oldp+92,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m),16);
        bufp->chgSData(oldp+93,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n),16);
        bufp->chgSData(oldp+94,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k),16);
        bufp->chgCData(oldp+95,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask),2);
        bufp->chgCData(oldp+96,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask),2);
        bufp->chgCData(oldp+97,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_addr[0]),8);
        bufp->chgCData(oldp+98,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_addr[1]),8);
        bufp->chgCData(oldp+99,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_data[0]),8);
        bufp->chgCData(oldp+100,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_data[1]),8);
        bufp->chgCData(oldp+101,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_addr[0]),8);
        bufp->chgCData(oldp+102,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_addr[1]),8);
        bufp->chgCData(oldp+103,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_data[0]),8);
        bufp->chgCData(oldp+104,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_data[1]),8);
        bufp->chgCData(oldp+105,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__a_vec[0]),8);
        bufp->chgCData(oldp+106,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__a_vec[1]),8);
        bufp->chgCData(oldp+107,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__b_vec[0]),8);
        bufp->chgCData(oldp+108,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__b_vec[1]),8);
        bufp->chgIData(oldp+109,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_tile
                                 [0U][0U]),32);
        bufp->chgIData(oldp+110,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_tile
                                 [0U][1U]),32);
        bufp->chgIData(oldp+111,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_tile
                                 [1U][0U]),32);
        bufp->chgIData(oldp+112,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_tile
                                 [1U][1U]),32);
        bufp->chgBit(oldp+113,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__array_clear_acc));
        bufp->chgBit(oldp+114,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__array_mac_en));
        bufp->chgBit(oldp+115,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wr_en));
        bufp->chgCData(oldp+116,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_region),2);
        bufp->chgSData(oldp+117,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_addr),9);
        bufp->chgIData(oldp+118,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wdata),32);
        bufp->chgCData(oldp+119,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wstrb),4);
        bufp->chgIData(oldp+120,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_rdata),32);
        bufp->chgBit(oldp+121,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_en));
        bufp->chgCData(oldp+122,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_addr),8);
        bufp->chgIData(oldp+123,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_data),32);
        bufp->chgIData(oldp+124,(((vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem
                                   [3U] << 0x18U) | 
                                  ((vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem
                                    [2U] << 0x10U) 
                                   | ((vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem
                                       [1U] << 8U) 
                                      | vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem
                                      [0U])))),32);
        bufp->chgBit(oldp+125,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_start));
        bufp->chgBit(oldp+126,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_busy));
        bufp->chgBit(oldp+127,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_done));
        bufp->chgIData(oldp+128,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec[0]),32);
        bufp->chgIData(oldp+129,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec[1]),32);
        bufp->chgIData(oldp+130,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_epi_i32
                                 [0U][0U]),32);
        bufp->chgIData(oldp+131,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_epi_i32
                                 [0U][1U]),32);
        bufp->chgIData(oldp+132,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_epi_i32
                                 [1U][0U]),32);
        bufp->chgIData(oldp+133,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_epi_i32
                                 [1U][1U]),32);
        bufp->chgCData(oldp+134,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_epi_i8
                                 [0U][0U]),8);
        bufp->chgCData(oldp+135,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_epi_i8
                                 [0U][1U]),8);
        bufp->chgCData(oldp+136,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_epi_i8
                                 [1U][0U]),8);
        bufp->chgCData(oldp+137,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_epi_i8
                                 [1U][1U]),8);
        bufp->chgCData(oldp+138,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_x_q),8);
        bufp->chgCData(oldp+139,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_y_q),8);
        bufp->chgIData(oldp+140,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw),32);
        bufp->chgIData(oldp+141,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post),32);
        bufp->chgCData(oldp+142,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8),8);
        bufp->chgIData(oldp+143,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_addr_q),32);
        bufp->chgIData(oldp+144,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_q),32);
        bufp->chgCData(oldp+145,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_q),4);
        bufp->chgIData(oldp+146,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw_q),32);
        bufp->chgIData(oldp+147,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post_q),32);
        bufp->chgIData(oldp+148,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_scaled_q),32);
        bufp->chgCData(oldp+149,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8_q),8);
        bufp->chgBit(oldp+150,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_start));
        bufp->chgBit(oldp+151,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_busy));
        bufp->chgBit(oldp+152,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q));
        bufp->chgBit(oldp+153,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q));
        bufp->chgBit(oldp+154,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_req));
        bufp->chgBit(oldp+155,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_we));
        bufp->chgIData(oldp+156,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_addr),32);
        bufp->chgIData(oldp+157,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wdata),32);
        bufp->chgCData(oldp+158,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wstrb),4);
        bufp->chgBit(oldp+159,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_req));
        bufp->chgIData(oldp+160,((vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q 
                                  + ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q) 
                                     << 2U))),32);
        bufp->chgBit(oldp+161,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_req));
        bufp->chgBit(oldp+162,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_we));
        bufp->chgIData(oldp+163,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_addr),32);
        bufp->chgIData(oldp+164,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wdata),32);
        bufp->chgCData(oldp+165,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wstrb),4);
        bufp->chgBit(oldp+166,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_req));
        bufp->chgIData(oldp+167,((vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr_q 
                                  + ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q) 
                                     << 2U))),32);
        bufp->chgBit(oldp+168,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q));
        bufp->chgBit(oldp+169,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d));
        bufp->chgCData(oldp+170,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_q),2);
        bufp->chgIData(oldp+171,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_q),32);
        bufp->chgSData(oldp+172,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_q),16);
        bufp->chgSData(oldp+173,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_q),16);
        bufp->chgSData(oldp+174,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_q),16);
        bufp->chgCData(oldp+175,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_q),2);
        bufp->chgSData(oldp+176,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_q),9);
        bufp->chgBit(oldp+177,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__load_desc_word));
        bufp->chgBit(oldp+178,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_store_cmd));
        bufp->chgBit(oldp+179,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_dma_cmd));
        bufp->chgBit(oldp+180,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__set_illegal_opcode));
        bufp->chgBit(oldp+181,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__set_shape_error));
        bufp->chgBit(oldp+182,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__set_memory_error));
        bufp->chgBit(oldp+183,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__set_unsupported_format));
        bufp->chgBit(oldp+184,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok));
        bufp->chgBit(oldp+185,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_flags_ok));
        bufp->chgBit(oldp+186,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok));
        bufp->chgBit(oldp+187,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__more_k_tiles));
        bufp->chgBit(oldp+188,(((0xffffU & ((IData)(2U) 
                                            + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q))) 
                                < (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q))));
        bufp->chgBit(oldp+189,(((0xffffU & ((IData)(2U) 
                                            + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q))) 
                                < (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q))));
        bufp->chgBit(oldp+190,((1U & (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q 
                                      >> 4U))));
        bufp->chgBit(oldp+191,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_last));
        bufp->chgBit(oldp+192,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_bias_regs));
        bufp->chgBit(oldp+193,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__load_bias_reg));
        bufp->chgBit(oldp+194,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__load_vec_x_reg));
        bufp->chgBit(oldp+195,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__load_vec_y_reg));
        bufp->chgBit(oldp+196,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode_q));
        bufp->chgBit(oldp+197,(((3U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)) 
                                | (4U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)))));
        bufp->chgBit(oldp+198,((9U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))));
        bufp->chgBit(oldp+199,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_vec));
        bufp->chgBit(oldp+200,((2U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))));
        bufp->chgSData(oldp+201,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q),16);
        bufp->chgIData(oldp+202,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_q),32);
        bufp->chgIData(oldp+203,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_d),32);
        bufp->chgIData(oldp+204,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_q),32);
        bufp->chgIData(oldp+205,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_d),32);
        bufp->chgIData(oldp+206,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_q),32);
        bufp->chgIData(oldp+207,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_d),32);
        bufp->chgIData(oldp+208,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_q),32);
        bufp->chgIData(oldp+209,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_d),32);
        bufp->chgIData(oldp+210,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_q),32);
        bufp->chgIData(oldp+211,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_d),32);
        bufp->chgIData(oldp+212,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q),32);
        bufp->chgIData(oldp+213,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_d),32);
        bufp->chgIData(oldp+214,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_q),32);
        bufp->chgIData(oldp+215,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_d),32);
        bufp->chgIData(oldp+216,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_q),32);
        bufp->chgIData(oldp+217,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_d),32);
        bufp->chgIData(oldp+218,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_q),32);
        bufp->chgIData(oldp+219,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_d),32);
        bufp->chgIData(oldp+220,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_q),32);
        bufp->chgIData(oldp+221,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_d),32);
        bufp->chgIData(oldp+222,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_q),32);
        bufp->chgIData(oldp+223,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_d),32);
        bufp->chgIData(oldp+224,((vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_q 
                                  + vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_q)),32);
        bufp->chgSData(oldp+225,((0xffffU & (((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q) 
                                              << 1U) 
                                             + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q)))),16);
        bufp->chgSData(oldp+226,(((0U != (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q))
                                   ? (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q)
                                   : 1U)),16);
        bufp->chgSData(oldp+227,(((0U != (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q))
                                   ? (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q)
                                   : 1U)),16);
        bufp->chgSData(oldp+228,(((0U != (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q))
                                   ? (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q)
                                   : ((0x10U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)
                                       ? 1U : 4U))),16);
        bufp->chgIData(oldp+229,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_elem_addr),32);
        bufp->chgIData(oldp+230,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_elem_addr),32);
        bufp->chgIData(oldp+231,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr),32);
        bufp->chgIData(oldp+232,(((0x10U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)
                                   ? (0xfffffffcU & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr)
                                   : vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr)),32);
        bufp->chgIData(oldp+233,((0xfffffffcU & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_elem_addr)),32);
        bufp->chgIData(oldp+234,((0xfffffffcU & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_elem_addr)),32);
        bufp->chgCData(oldp+235,((3U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_elem_addr)),2);
        bufp->chgCData(oldp+236,((3U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_elem_addr)),2);
        bufp->chgCData(oldp+237,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_load_byte),8);
        bufp->chgIData(oldp+238,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_next),32);
        bufp->chgCData(oldp+239,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_next),4);
        bufp->chgCData(oldp+240,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_cmd_n),2);
        bufp->chgIData(oldp+241,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_cmd_n),32);
        bufp->chgSData(oldp+242,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_cmd_n),16);
        bufp->chgSData(oldp+243,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_cmd_n),16);
        bufp->chgSData(oldp+244,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_cmd_n),16);
        bufp->chgCData(oldp+245,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_cmd_n),2);
        bufp->chgSData(oldp+246,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_cmd_n),9);
        bufp->chgBit(oldp+247,((1U & (VL_REDXOR_32(
                                                   vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem
                                                   [3U]) 
                                      ^ (VL_REDXOR_32(
                                                      vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem
                                                      [2U]) 
                                         ^ (VL_REDXOR_32(
                                                         vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem
                                                         [1U]) 
                                            ^ VL_REDXOR_32(
                                                           vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem
                                                           [0U])))))));
        bufp->chgCData(oldp+248,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__a_vec[0]),8);
        bufp->chgCData(oldp+249,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__a_vec[1]),8);
        bufp->chgCData(oldp+250,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__b_vec[0]),8);
        bufp->chgCData(oldp+251,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__b_vec[1]),8);
        bufp->chgIData(oldp+252,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_array4x4__c_tile
                                 [0U][0U]),32);
        bufp->chgIData(oldp+253,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_array4x4__c_tile
                                 [0U][1U]),32);
        bufp->chgIData(oldp+254,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_array4x4__c_tile
                                 [1U][0U]),32);
        bufp->chgIData(oldp+255,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_array4x4__c_tile
                                 [1U][1U]),32);
        bufp->chgBit(oldp+256,((((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__array_mac_en) 
                                 & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask)) 
                                & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask))));
        bufp->chgCData(oldp+257,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__a_vec
                                 [0U]),8);
        bufp->chgCData(oldp+258,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__b_vec
                                 [0U]),8);
        bufp->chgIData(oldp+259,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_o),32);
        bufp->chgSData(oldp+260,((0xffffU & VL_MULS_III(16, 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, 
                                                                         vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__a_vec
                                                                         [0U])), 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, 
                                                                         vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__b_vec
                                                                         [0U]))))),16);
        bufp->chgBit(oldp+261,((((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__array_mac_en) 
                                 & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask)) 
                                & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask) 
                                   >> 1U))));
        bufp->chgCData(oldp+262,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__b_vec
                                 [1U]),8);
        bufp->chgIData(oldp+263,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_o),32);
        bufp->chgSData(oldp+264,((0xffffU & VL_MULS_III(16, 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, 
                                                                         vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__a_vec
                                                                         [0U])), 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, 
                                                                         vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__b_vec
                                                                         [1U]))))),16);
        bufp->chgBit(oldp+265,((((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__array_mac_en) 
                                 & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask) 
                                    >> 1U)) & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask))));
        bufp->chgCData(oldp+266,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__a_vec
                                 [1U]),8);
        bufp->chgIData(oldp+267,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_o),32);
        bufp->chgSData(oldp+268,((0xffffU & VL_MULS_III(16, 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, 
                                                                         vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__a_vec
                                                                         [1U])), 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, 
                                                                         vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__b_vec
                                                                         [0U]))))),16);
        bufp->chgBit(oldp+269,((((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__array_mac_en) 
                                 & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask) 
                                    >> 1U)) & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask) 
                                               >> 1U))));
        bufp->chgIData(oldp+270,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_o),32);
        bufp->chgSData(oldp+271,((0xffffU & VL_MULS_III(16, 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, 
                                                                         vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__a_vec
                                                                         [1U])), 
                                                        (0xffffU 
                                                         & VL_EXTENDS_II(16,8, 
                                                                         vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__b_vec
                                                                         [1U]))))),16);
        bufp->chgCData(oldp+272,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q),3);
        bufp->chgCData(oldp+273,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d),3);
        bufp->chgCData(oldp+274,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind_q),2);
        bufp->chgIData(oldp+275,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__base_addr_q),32);
        bufp->chgSData(oldp+276,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows_q),16);
        bufp->chgSData(oldp+277,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols_q),16);
        bufp->chgSData(oldp+278,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__stride_bytes_q),16);
        bufp->chgCData(oldp+279,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q),2);
        bufp->chgSData(oldp+280,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_base_q),9);
        bufp->chgSData(oldp+281,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q),16);
        bufp->chgSData(oldp+282,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_d),16);
        bufp->chgSData(oldp+283,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q),16);
        bufp->chgSData(oldp+284,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_d),16);
        bufp->chgIData(oldp+285,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__elem_addr),32);
        bufp->chgIData(oldp+286,((0xfffffffcU & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__elem_addr)),32);
        bufp->chgIData(oldp+287,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__write_addr),32);
        bufp->chgIData(oldp+288,((0xfffffffcU & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__write_addr)),32);
        bufp->chgSData(oldp+289,((0x1ffU & ((0U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q))
                                             ? (((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_base_q) 
                                                 + 
                                                 ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q) 
                                                  << 3U)) 
                                                + (0x1ffU 
                                                   & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q)))
                                             : ((1U 
                                                 == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q))
                                                 ? 
                                                (((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_base_q) 
                                                  + 
                                                  ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q) 
                                                   << 1U)) 
                                                 + 
                                                 (0x1ffU 
                                                  & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q)))
                                                 : 
                                                (((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_base_q) 
                                                  + 
                                                  ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q) 
                                                   << 1U)) 
                                                 + 
                                                 (0x1ffU 
                                                  & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q))))))),9);
        bufp->chgIData(oldp+290,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_store_i32),32);
        bufp->chgCData(oldp+291,((0xffU & ((0U == (3U 
                                                   & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__elem_addr))
                                            ? vlSelf->tinygpu_top__DOT__mem_rdata_stage_q
                                            : ((1U 
                                                == 
                                                (3U 
                                                 & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__elem_addr))
                                                ? (vlSelf->tinygpu_top__DOT__mem_rdata_stage_q 
                                                   >> 8U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__elem_addr))
                                                    ? 
                                                   (vlSelf->tinygpu_top__DOT__mem_rdata_stage_q 
                                                    >> 0x10U)
                                                    : 
                                                   (vlSelf->tinygpu_top__DOT__mem_rdata_stage_q 
                                                    >> 0x18U)))))),8);
        bufp->chgCData(oldp+292,((3U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__elem_addr)),2);
        bufp->chgBit(oldp+293,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__advance_elem));
        bufp->chgBit(oldp+294,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__last_elem));
        bufp->chgIData(oldp+295,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_epilogue__c_in
                                 [0U][0U]),32);
        bufp->chgIData(oldp+296,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_epilogue__c_in
                                 [0U][1U]),32);
        bufp->chgIData(oldp+297,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_epilogue__c_in
                                 [1U][0U]),32);
        bufp->chgIData(oldp+298,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_epilogue__c_in
                                 [1U][1U]),32);
        bufp->chgIData(oldp+299,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_epilogue__bias[0]),32);
        bufp->chgIData(oldp+300,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_epilogue__bias[1]),32);
        bufp->chgIData(oldp+301,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i32
                                 [0U][0U]),32);
        bufp->chgIData(oldp+302,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i32
                                 [0U][1U]),32);
        bufp->chgIData(oldp+303,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i32
                                 [1U][0U]),32);
        bufp->chgIData(oldp+304,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i32
                                 [1U][1U]),32);
        bufp->chgCData(oldp+305,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8
                                 [0U][0U]),8);
        bufp->chgCData(oldp+306,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8
                                 [0U][1U]),8);
        bufp->chgCData(oldp+307,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8
                                 [1U][0U]),8);
        bufp->chgCData(oldp+308,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8
                                 [1U][1U]),8);
        bufp->chgCData(oldp+309,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q),2);
        bufp->chgIData(oldp+310,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q
                                 [0U][0U]),32);
        bufp->chgIData(oldp+311,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q
                                 [0U][1U]),32);
        bufp->chgIData(oldp+312,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q
                                 [1U][0U]),32);
        bufp->chgIData(oldp+313,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q
                                 [1U][1U]),32);
        bufp->chgIData(oldp+314,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q
                                 [0U][0U]),32);
        bufp->chgIData(oldp+315,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q
                                 [0U][1U]),32);
        bufp->chgIData(oldp+316,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q
                                 [1U][0U]),32);
        bufp->chgIData(oldp+317,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q
                                 [1U][1U]),32);
        bufp->chgIData(oldp+318,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk1__DOT__r),32);
        bufp->chgIData(oldp+319,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk1__DOT__unnamedblk2__DOT__c),32);
        bufp->chgIData(oldp+320,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk3__DOT__r),32);
        bufp->chgIData(oldp+321,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c),32);
        bufp->chgBit(oldp+322,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__valid_elem));
        bufp->chgIData(oldp+323,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__x_post),32);
        bufp->chgIData(oldp+324,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk6__DOT__r),32);
        bufp->chgIData(oldp+325,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk6__DOT__unnamedblk7__DOT__c),32);
        bufp->chgIData(oldp+326,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk8__DOT__r),32);
        bufp->chgIData(oldp+327,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk8__DOT__unnamedblk9__DOT__c),32);
        bufp->chgIData(oldp+328,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__x_shifted),32);
        bufp->chgCData(oldp+329,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_spm__a_rd_addr[0]),8);
        bufp->chgCData(oldp+330,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_spm__a_rd_addr[1]),8);
        bufp->chgCData(oldp+331,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_spm__a_rd_data[0]),8);
        bufp->chgCData(oldp+332,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_spm__a_rd_data[1]),8);
        bufp->chgCData(oldp+333,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_spm__b_rd_addr[0]),8);
        bufp->chgCData(oldp+334,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_spm__b_rd_addr[1]),8);
        bufp->chgCData(oldp+335,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_spm__b_rd_data[0]),8);
        bufp->chgCData(oldp+336,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_spm__b_rd_data[1]),8);
        bufp->chgIData(oldp+337,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+338,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+339,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+340,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk4__DOT__byte_idx),32);
        bufp->chgIData(oldp+341,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk1__DOT__c),32);
        bufp->chgIData(oldp+342,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk2__DOT__c),32);
        bufp->chgIData(oldp+343,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk3__DOT__c),32);
        bufp->chgIData(oldp+344,(vlSelf->tinygpu_top__DOT__u_counters__DOT__cycle_cur_q),32);
        bufp->chgIData(oldp+345,(vlSelf->tinygpu_top__DOT__u_counters__DOT__active_cur_q),32);
        bufp->chgIData(oldp+346,(vlSelf->tinygpu_top__DOT__u_counters__DOT__stall_cur_q),32);
        bufp->chgBit(oldp+347,(vlSelf->tinygpu_top__DOT__u_regs__DOT__done_sticky_q));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+348,(vlSelf->tinygpu_top__DOT__reg_start_pulse));
        bufp->chgBit(oldp+349,(vlSelf->tinygpu_top__DOT__reg_soft_reset));
        bufp->chgBit(oldp+350,(vlSelf->tinygpu_top__DOT__cnt_cmd_start));
        bufp->chgCData(oldp+351,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d),5);
        bufp->chgBit(oldp+352,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd));
        bufp->chgBit(oldp+353,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd_addr));
        bufp->chgBit(oldp+354,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_cmd_fields));
        bufp->chgBit(oldp+355,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_status));
        bufp->chgIData(oldp+356,(vlSelf->tinygpu_top__DOT__u_regs__DOT__ctrl_next_w),32);
        bufp->chgIData(oldp+357,(vlSelf->tinygpu_top__DOT__u_regs__DOT__direct_op_next_w),32);
        bufp->chgIData(oldp+358,(vlSelf->tinygpu_top__DOT__u_regs__DOT__dim_m_next_w),32);
        bufp->chgIData(oldp+359,(vlSelf->tinygpu_top__DOT__u_regs__DOT__dim_n_next_w),32);
        bufp->chgIData(oldp+360,(vlSelf->tinygpu_top__DOT__u_regs__DOT__dim_k_next_w),32);
        bufp->chgIData(oldp+361,(vlSelf->tinygpu_top__DOT__u_regs__DOT__stride0_next_w),32);
        bufp->chgIData(oldp+362,(vlSelf->tinygpu_top__DOT__u_regs__DOT__stride1_next_w),32);
        bufp->chgIData(oldp+363,(vlSelf->tinygpu_top__DOT__u_regs__DOT__stride_dst_next_w),32);
        bufp->chgIData(oldp+364,(vlSelf->tinygpu_top__DOT__u_regs__DOT__shiftzp_next_w),32);
    }
    bufp->chgBit(oldp+365,(vlSelf->clk));
    bufp->chgBit(oldp+366,(vlSelf->rst_n));
    bufp->chgBit(oldp+367,(vlSelf->mmio_valid));
    bufp->chgBit(oldp+368,(vlSelf->mmio_we));
    bufp->chgIData(oldp+369,(vlSelf->mmio_addr),32);
    bufp->chgIData(oldp+370,(vlSelf->mmio_wdata),32);
    bufp->chgCData(oldp+371,(vlSelf->mmio_wstrb),4);
    bufp->chgIData(oldp+372,(vlSelf->mmio_rdata),32);
    bufp->chgBit(oldp+373,(vlSelf->mmio_ready));
    bufp->chgBit(oldp+374,(vlSelf->mem_req));
    bufp->chgBit(oldp+375,(vlSelf->mem_we));
    bufp->chgIData(oldp+376,(vlSelf->mem_addr),32);
    bufp->chgIData(oldp+377,(vlSelf->mem_wdata),32);
    bufp->chgCData(oldp+378,(vlSelf->mem_wstrb),4);
    bufp->chgIData(oldp+379,(vlSelf->mem_rdata),32);
    bufp->chgBit(oldp+380,(vlSelf->mem_ready));
    bufp->chgBit(oldp+381,(vlSelf->mem_rvalid));
    bufp->chgBit(oldp+382,(vlSelf->irq));
    bufp->chgCData(oldp+383,((0xffU & vlSelf->mmio_addr)),8);
}

void Vtinygpu_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinygpu_top___024root__trace_cleanup\n"); );
    // Init
    Vtinygpu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtinygpu_top___024root*>(voidSelf);
    Vtinygpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
