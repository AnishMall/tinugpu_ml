// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtinygpu_top__Syms.h"


VL_ATTR_COLD void Vtinygpu_top___024root__trace_init_sub__TOP__0(Vtinygpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinygpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinygpu_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst_n", false,-1);
    tracep->declBit(c+368,"mmio_valid", false,-1);
    tracep->declBit(c+369,"mmio_we", false,-1);
    tracep->declBus(c+370,"mmio_addr", false,-1, 31,0);
    tracep->declBus(c+371,"mmio_wdata", false,-1, 31,0);
    tracep->declBus(c+372,"mmio_wstrb", false,-1, 3,0);
    tracep->declBus(c+373,"mmio_rdata", false,-1, 31,0);
    tracep->declBit(c+374,"mmio_ready", false,-1);
    tracep->declBit(c+375,"mem_req", false,-1);
    tracep->declBit(c+376,"mem_we", false,-1);
    tracep->declBus(c+377,"mem_addr", false,-1, 31,0);
    tracep->declBus(c+378,"mem_wdata", false,-1, 31,0);
    tracep->declBus(c+379,"mem_wstrb", false,-1, 3,0);
    tracep->declBus(c+380,"mem_rdata", false,-1, 31,0);
    tracep->declBit(c+381,"mem_ready", false,-1);
    tracep->declBit(c+382,"mem_rvalid", false,-1);
    tracep->declBit(c+383,"irq", false,-1);
    tracep->pushNamePrefix("tinygpu_top ");
    tracep->declBus(c+385,"ADDR_W", false,-1, 31,0);
    tracep->declBus(c+385,"DATA_W", false,-1, 31,0);
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst_n", false,-1);
    tracep->declBit(c+368,"mmio_valid", false,-1);
    tracep->declBit(c+369,"mmio_we", false,-1);
    tracep->declBus(c+370,"mmio_addr", false,-1, 31,0);
    tracep->declBus(c+371,"mmio_wdata", false,-1, 31,0);
    tracep->declBus(c+372,"mmio_wstrb", false,-1, 3,0);
    tracep->declBus(c+373,"mmio_rdata", false,-1, 31,0);
    tracep->declBit(c+374,"mmio_ready", false,-1);
    tracep->declBit(c+375,"mem_req", false,-1);
    tracep->declBit(c+376,"mem_we", false,-1);
    tracep->declBus(c+377,"mem_addr", false,-1, 31,0);
    tracep->declBus(c+378,"mem_wdata", false,-1, 31,0);
    tracep->declBus(c+379,"mem_wstrb", false,-1, 3,0);
    tracep->declBus(c+380,"mem_rdata", false,-1, 31,0);
    tracep->declBit(c+381,"mem_ready", false,-1);
    tracep->declBit(c+382,"mem_rvalid", false,-1);
    tracep->declBit(c+383,"irq", false,-1);
    tracep->declBit(c+349,"reg_start_pulse", false,-1);
    tracep->declBit(c+350,"reg_soft_reset", false,-1);
    tracep->declBit(c+1,"reg_irq_enable", false,-1);
    tracep->declBit(c+2,"reg_direct_mode", false,-1);
    tracep->declBit(c+3,"reg_irq_pending", false,-1);
    tracep->declBus(c+4,"reg_cmd_addr", false,-1, 31,0);
    tracep->declBus(c+5,"reg_opcode", false,-1, 7,0);
    tracep->declBus(c+6,"reg_src0_addr", false,-1, 31,0);
    tracep->declBus(c+7,"reg_src1_addr", false,-1, 31,0);
    tracep->declBus(c+8,"reg_bias_addr", false,-1, 31,0);
    tracep->declBus(c+9,"reg_dst_addr", false,-1, 31,0);
    tracep->declBus(c+10,"reg_dim_m", false,-1, 15,0);
    tracep->declBus(c+11,"reg_dim_n", false,-1, 15,0);
    tracep->declBus(c+12,"reg_dim_k", false,-1, 15,0);
    tracep->declBus(c+13,"reg_stride0", false,-1, 15,0);
    tracep->declBus(c+14,"reg_stride1", false,-1, 15,0);
    tracep->declBus(c+15,"reg_stride_dst", false,-1, 15,0);
    tracep->declBus(c+16,"reg_flags", false,-1, 31,0);
    tracep->declBus(c+17,"reg_scale", false,-1, 31,0);
    tracep->declBus(c+18,"reg_shift", false,-1, 15,0);
    tracep->declBus(c+19,"reg_zero_point", false,-1, 15,0);
    tracep->declBit(c+20,"ctrl_busy", false,-1);
    tracep->declBit(c+21,"ctrl_done", false,-1);
    tracep->declBit(c+22,"ctrl_illegal_opcode", false,-1);
    tracep->declBit(c+23,"ctrl_shape_error", false,-1);
    tracep->declBit(c+24,"ctrl_memory_error", false,-1);
    tracep->declBit(c+25,"ctrl_unsupported_format", false,-1);
    tracep->declBit(c+351,"cnt_cmd_start", false,-1);
    tracep->declBit(c+26,"cnt_cmd_done", false,-1);
    tracep->declBit(c+27,"cnt_busy", false,-1);
    tracep->declBit(c+28,"cnt_active", false,-1);
    tracep->declBit(c+29,"cnt_stall", false,-1);
    tracep->declBus(c+30,"cycle_count_last", false,-1, 31,0);
    tracep->declBus(c+31,"active_count_last", false,-1, 31,0);
    tracep->declBus(c+32,"stall_count_last", false,-1, 31,0);
    tracep->declBus(c+33,"cmd_count_total", false,-1, 31,0);
    tracep->declBit(c+34,"mem_req_raw", false,-1);
    tracep->declBit(c+35,"mem_we_raw", false,-1);
    tracep->declBus(c+36,"mem_addr_raw", false,-1, 31,0);
    tracep->declBus(c+37,"mem_wdata_raw", false,-1, 31,0);
    tracep->declBus(c+38,"mem_wstrb_raw", false,-1, 3,0);
    tracep->declBus(c+39,"mem_rdata_stage_q", false,-1, 31,0);
    tracep->declBit(c+40,"mem_rvalid_stage_q", false,-1);
    tracep->declBit(c+41,"mem_cmd_valid_q", false,-1);
    tracep->declBit(c+42,"mem_cmd_we_q", false,-1);
    tracep->declBus(c+43,"mem_cmd_addr_q", false,-1, 31,0);
    tracep->declBus(c+44,"mem_cmd_wdata_q", false,-1, 31,0);
    tracep->declBus(c+45,"mem_cmd_wstrb_q", false,-1, 3,0);
    tracep->declBit(c+46,"mem_read_pending_q", false,-1);
    tracep->declBit(c+47,"mem_stage_ready", false,-1);
    tracep->pushNamePrefix("u_cmd_ctrl ");
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst_n", false,-1);
    tracep->declBit(c+349,"start", false,-1);
    tracep->declBit(c+350,"soft_reset", false,-1);
    tracep->declBit(c+2,"direct_mode", false,-1);
    tracep->declBus(c+4,"cmd_addr", false,-1, 31,0);
    tracep->declBus(c+5,"opcode", false,-1, 7,0);
    tracep->declBus(c+16,"flags", false,-1, 31,0);
    tracep->declBus(c+6,"src0_addr", false,-1, 31,0);
    tracep->declBus(c+7,"src1_addr", false,-1, 31,0);
    tracep->declBus(c+8,"bias_addr", false,-1, 31,0);
    tracep->declBus(c+9,"dst_addr", false,-1, 31,0);
    tracep->declBus(c+10,"M", false,-1, 15,0);
    tracep->declBus(c+11,"N", false,-1, 15,0);
    tracep->declBus(c+12,"K", false,-1, 15,0);
    tracep->declBus(c+13,"stride0", false,-1, 15,0);
    tracep->declBus(c+14,"stride1", false,-1, 15,0);
    tracep->declBus(c+15,"stride_dst", false,-1, 15,0);
    tracep->declBus(c+17,"scale", false,-1, 31,0);
    tracep->declBus(c+18,"shift", false,-1, 15,0);
    tracep->declBus(c+19,"zero_point", false,-1, 15,0);
    tracep->declBit(c+20,"busy", false,-1);
    tracep->declBit(c+21,"done", false,-1);
    tracep->declBit(c+22,"illegal_opcode", false,-1);
    tracep->declBit(c+23,"shape_error", false,-1);
    tracep->declBit(c+24,"memory_error", false,-1);
    tracep->declBit(c+25,"unsupported_format", false,-1);
    tracep->declBit(c+351,"cnt_cmd_start", false,-1);
    tracep->declBit(c+26,"cnt_cmd_done", false,-1);
    tracep->declBit(c+27,"cnt_busy", false,-1);
    tracep->declBit(c+28,"cnt_active", false,-1);
    tracep->declBit(c+29,"cnt_stall", false,-1);
    tracep->declBit(c+34,"mem_req", false,-1);
    tracep->declBit(c+35,"mem_we", false,-1);
    tracep->declBus(c+36,"mem_addr", false,-1, 31,0);
    tracep->declBus(c+37,"mem_wdata", false,-1, 31,0);
    tracep->declBus(c+38,"mem_wstrb", false,-1, 3,0);
    tracep->declBus(c+39,"mem_rdata", false,-1, 31,0);
    tracep->declBit(c+47,"mem_ready", false,-1);
    tracep->declBit(c+40,"mem_rvalid", false,-1);
    tracep->declBus(c+386,"TILE_M_U16", false,-1, 15,0);
    tracep->declBus(c+386,"TILE_N_U16", false,-1, 15,0);
    tracep->declBus(c+387,"TILE_K_U16", false,-1, 15,0);
    tracep->declBus(c+388,"TILE_M_SHIFT", false,-1, 31,0);
    tracep->declBus(c+388,"TILE_N_SHIFT", false,-1, 31,0);
    tracep->declBus(c+389,"TILE_K_SHIFT", false,-1, 31,0);
    tracep->declBus(c+390,"DMA_OP_LOAD_I8", false,-1, 1,0);
    tracep->declBus(c+391,"DMA_OP_STORE_I32", false,-1, 1,0);
    tracep->declBus(c+392,"DMA_OP_STORE_I8", false,-1, 1,0);
    tracep->declBus(c+393,"DESC_WORDS", false,-1, 4,0);
    tracep->declBus(c+390,"SPM_REGION_A", false,-1, 1,0);
    tracep->declBus(c+394,"SPM_REGION_B", false,-1, 1,0);
    tracep->declBus(c+391,"SPM_REGION_C", false,-1, 1,0);
    tracep->declBus(c+48,"state_q", false,-1, 4,0);
    tracep->declBus(c+352,"state_d", false,-1, 4,0);
    tracep->declBus(c+49,"opcode_q", false,-1, 7,0);
    tracep->declBus(c+50,"flags_q", false,-1, 31,0);
    tracep->declBus(c+51,"cmd_addr_q", false,-1, 31,0);
    tracep->declBus(c+52,"src0_addr_q", false,-1, 31,0);
    tracep->declBus(c+53,"src1_addr_q", false,-1, 31,0);
    tracep->declBus(c+54,"bias_addr_q", false,-1, 31,0);
    tracep->declBus(c+55,"dst_addr_q", false,-1, 31,0);
    tracep->declBus(c+56,"M_q", false,-1, 15,0);
    tracep->declBus(c+57,"N_q", false,-1, 15,0);
    tracep->declBus(c+58,"K_q", false,-1, 15,0);
    tracep->declBus(c+59,"stride0_q", false,-1, 15,0);
    tracep->declBus(c+60,"stride1_q", false,-1, 15,0);
    tracep->declBus(c+61,"stride_dst_q", false,-1, 15,0);
    tracep->declBus(c+62,"scale_q", false,-1, 31,0);
    tracep->declBus(c+63,"shift_q", false,-1, 15,0);
    tracep->declBus(c+64,"zero_point_q", false,-1, 15,0);
    tracep->declBus(c+65,"m0_q", false,-1, 15,0);
    tracep->declBus(c+66,"m0_d", false,-1, 15,0);
    tracep->declBus(c+67,"n0_q", false,-1, 15,0);
    tracep->declBus(c+68,"n0_d", false,-1, 15,0);
    tracep->declBus(c+69,"k0_q", false,-1, 15,0);
    tracep->declBus(c+70,"k0_d", false,-1, 15,0);
    tracep->declBus(c+71,"kk_q", false,-1, 15,0);
    tracep->declBus(c+72,"kk_d", false,-1, 15,0);
    tracep->declBus(c+73,"store_row_q", false,-1, 15,0);
    tracep->declBus(c+74,"store_row_d", false,-1, 15,0);
    tracep->declBus(c+75,"store_col_q", false,-1, 15,0);
    tracep->declBus(c+76,"store_col_d", false,-1, 15,0);
    tracep->declBus(c+77,"bias_col_q", false,-1, 15,0);
    tracep->declBus(c+78,"bias_col_d", false,-1, 15,0);
    tracep->declBus(c+79,"vec_idx_q", false,-1, 15,0);
    tracep->declBus(c+80,"vec_idx_d", false,-1, 15,0);
    tracep->declBus(c+81,"desc_word_idx_q", false,-1, 4,0);
    tracep->declBus(c+82,"desc_word_idx_d", false,-1, 4,0);
    tracep->declBit(c+83,"store_stage_done_q", false,-1);
    tracep->declBit(c+84,"store_stage_done_d", false,-1);
    tracep->declBit(c+85,"dma_inflight_q", false,-1);
    tracep->declBit(c+86,"dma_inflight_d", false,-1);
    tracep->declBit(c+87,"bias_inflight_q", false,-1);
    tracep->declBit(c+88,"bias_inflight_d", false,-1);
    tracep->declBit(c+89,"vec_inflight_q", false,-1);
    tracep->declBit(c+90,"vec_inflight_d", false,-1);
    tracep->declBit(c+91,"desc_inflight_q", false,-1);
    tracep->declBit(c+92,"desc_inflight_d", false,-1);
    tracep->declBus(c+93,"active_tile_m", false,-1, 15,0);
    tracep->declBus(c+94,"active_tile_n", false,-1, 15,0);
    tracep->declBus(c+95,"active_tile_k", false,-1, 15,0);
    tracep->declBus(c+96,"row_mask", false,-1, 1,0);
    tracep->declBus(c+97,"col_mask", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+98+i*1,"a_rd_addr", true,(i+0), 7,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+100+i*1,"a_rd_data", true,(i+0), 7,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+102+i*1,"b_rd_addr", true,(i+0), 7,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+104+i*1,"b_rd_data", true,(i+0), 7,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+106+i*1,"a_vec", true,(i+0), 7,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+108+i*1,"b_vec", true,(i+0), 7,0);
    }
    tracep->pushNamePrefix("c_tile");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+110,"[0]", false,-1, 31,0);
    tracep->declBus(c+111,"[1]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+112,"[0]", false,-1, 31,0);
    tracep->declBus(c+113,"[1]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+114,"array_clear_acc", false,-1);
    tracep->declBit(c+115,"array_mac_en", false,-1);
    tracep->declBit(c+116,"spm_dma_wr_en", false,-1);
    tracep->declBus(c+117,"spm_dma_region", false,-1, 1,0);
    tracep->declBus(c+118,"spm_dma_addr", false,-1, 8,0);
    tracep->declBus(c+119,"spm_dma_wdata", false,-1, 31,0);
    tracep->declBus(c+120,"spm_dma_wstrb", false,-1, 3,0);
    tracep->declBus(c+121,"spm_dma_rdata", false,-1, 31,0);
    tracep->declBit(c+122,"c_wr_en", false,-1);
    tracep->declBus(c+123,"c_wr_addr", false,-1, 7,0);
    tracep->declBus(c+124,"c_wr_data", false,-1, 31,0);
    tracep->declBus(c+395,"c_rd_addr", false,-1, 7,0);
    tracep->declBus(c+125,"c_rd_data", false,-1, 31,0);
    tracep->declBit(c+126,"epi_start", false,-1);
    tracep->declBit(c+127,"epi_busy", false,-1);
    tracep->declBit(c+128,"epi_done", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+129+i*1,"bias_vec", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("c_epi_i32");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+131,"[0]", false,-1, 31,0);
    tracep->declBus(c+132,"[1]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+133,"[0]", false,-1, 31,0);
    tracep->declBus(c+134,"[1]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("c_epi_i8");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+135,"[0]", false,-1, 7,0);
    tracep->declBus(c+136,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+137,"[0]", false,-1, 7,0);
    tracep->declBus(c+138,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+139,"vec_x_q", false,-1, 7,0);
    tracep->declBus(c+140,"vec_y_q", false,-1, 7,0);
    tracep->declBus(c+141,"vec_result_raw", false,-1, 31,0);
    tracep->declBus(c+142,"vec_result_post", false,-1, 31,0);
    tracep->declBus(c+143,"vec_result_i8", false,-1, 7,0);
    tracep->declBus(c+144,"vec_store_addr_q", false,-1, 31,0);
    tracep->declBus(c+145,"vec_store_wdata_q", false,-1, 31,0);
    tracep->declBus(c+146,"vec_store_wstrb_q", false,-1, 3,0);
    tracep->declBus(c+147,"vec_result_raw_q", false,-1, 31,0);
    tracep->declBus(c+148,"vec_result_post_q", false,-1, 31,0);
    tracep->declBus(c+149,"vec_scaled_q", false,-1, 31,0);
    tracep->declBus(c+150,"vec_result_i8_q", false,-1, 7,0);
    tracep->declBit(c+151,"dma_start", false,-1);
    tracep->declBit(c+152,"dma_busy", false,-1);
    tracep->declBit(c+153,"dma_done", false,-1);
    tracep->declBit(c+154,"dma_error", false,-1);
    tracep->declBit(c+155,"dma_mem_req", false,-1);
    tracep->declBit(c+156,"dma_mem_we", false,-1);
    tracep->declBus(c+157,"dma_mem_addr", false,-1, 31,0);
    tracep->declBus(c+158,"dma_mem_wdata", false,-1, 31,0);
    tracep->declBus(c+159,"dma_mem_wstrb", false,-1, 3,0);
    tracep->declBit(c+160,"bias_mem_req", false,-1);
    tracep->declBit(c+396,"bias_mem_we", false,-1);
    tracep->declBus(c+161,"bias_mem_addr_mux", false,-1, 31,0);
    tracep->declBus(c+397,"bias_mem_wdata", false,-1, 31,0);
    tracep->declBus(c+398,"bias_mem_wstrb", false,-1, 3,0);
    tracep->declBit(c+162,"vec_mem_req", false,-1);
    tracep->declBit(c+163,"vec_mem_we", false,-1);
    tracep->declBus(c+164,"vec_mem_addr", false,-1, 31,0);
    tracep->declBus(c+165,"vec_mem_wdata", false,-1, 31,0);
    tracep->declBus(c+166,"vec_mem_wstrb", false,-1, 3,0);
    tracep->declBit(c+167,"desc_mem_req", false,-1);
    tracep->declBit(c+396,"desc_mem_we", false,-1);
    tracep->declBus(c+168,"desc_mem_addr", false,-1, 31,0);
    tracep->declBus(c+397,"desc_mem_wdata", false,-1, 31,0);
    tracep->declBus(c+398,"desc_mem_wstrb", false,-1, 3,0);
    tracep->declBit(c+169,"dma_launch_pending_q", false,-1);
    tracep->declBit(c+170,"dma_launch_pending_d", false,-1);
    tracep->declBus(c+171,"dma_op_kind_q", false,-1, 1,0);
    tracep->declBus(c+172,"dma_base_addr_q", false,-1, 31,0);
    tracep->declBus(c+173,"dma_rows_q", false,-1, 15,0);
    tracep->declBus(c+174,"dma_cols_q", false,-1, 15,0);
    tracep->declBus(c+175,"dma_stride_bytes_q", false,-1, 15,0);
    tracep->declBus(c+176,"dma_spm_region_q", false,-1, 1,0);
    tracep->declBus(c+177,"dma_spm_base_q", false,-1, 8,0);
    tracep->declBit(c+353,"latch_cmd", false,-1);
    tracep->declBit(c+354,"latch_cmd_addr", false,-1);
    tracep->declBit(c+355,"clear_cmd_fields", false,-1);
    tracep->declBit(c+178,"load_desc_word", false,-1);
    tracep->declBit(c+179,"latch_vec_store_cmd", false,-1);
    tracep->declBit(c+180,"latch_dma_cmd", false,-1);
    tracep->declBit(c+356,"clear_status", false,-1);
    tracep->declBit(c+181,"set_illegal_opcode", false,-1);
    tracep->declBit(c+182,"set_shape_error", false,-1);
    tracep->declBit(c+183,"set_memory_error", false,-1);
    tracep->declBit(c+184,"set_unsupported_format", false,-1);
    tracep->declBit(c+185,"opcode_ok", false,-1);
    tracep->declBit(c+186,"dst_flags_ok", false,-1);
    tracep->declBit(c+187,"dims_ok", false,-1);
    tracep->declBit(c+188,"more_k_tiles", false,-1);
    tracep->declBit(c+189,"more_n_tiles", false,-1);
    tracep->declBit(c+190,"more_m_tiles", false,-1);
    tracep->declBit(c+191,"use_dst_i8", false,-1);
    tracep->declBit(c+192,"store_stage_last", false,-1);
    tracep->declBit(c+193,"clear_bias_regs", false,-1);
    tracep->declBit(c+194,"load_bias_reg", false,-1);
    tracep->declBit(c+195,"load_vec_x_reg", false,-1);
    tracep->declBit(c+196,"load_vec_y_reg", false,-1);
    tracep->declBit(c+197,"is_vector_opcode", false,-1);
    tracep->declBit(c+197,"is_vector_opcode_q", false,-1);
    tracep->declBit(c+198,"vec_needs_y", false,-1);
    tracep->declBit(c+199,"state_is_bias", false,-1);
    tracep->declBit(c+200,"state_is_vec", false,-1);
    tracep->declBit(c+201,"state_is_desc", false,-1);
    tracep->declBus(c+202,"effective_n", false,-1, 15,0);
    tracep->declBus(c+202,"effective_n_q", false,-1, 15,0);
    tracep->declBus(c+203,"src0_row_base_q", false,-1, 31,0);
    tracep->declBus(c+204,"src0_row_base_d", false,-1, 31,0);
    tracep->declBus(c+205,"src1_k_base_q", false,-1, 31,0);
    tracep->declBus(c+206,"src1_k_base_d", false,-1, 31,0);
    tracep->declBus(c+207,"src1_n_offset_q", false,-1, 31,0);
    tracep->declBus(c+208,"src1_n_offset_d", false,-1, 31,0);
    tracep->declBus(c+209,"dst_row_base_q", false,-1, 31,0);
    tracep->declBus(c+210,"dst_row_base_d", false,-1, 31,0);
    tracep->declBus(c+211,"dst_n_offset_q", false,-1, 31,0);
    tracep->declBus(c+212,"dst_n_offset_d", false,-1, 31,0);
    tracep->declBus(c+213,"bias_base_q", false,-1, 31,0);
    tracep->declBus(c+214,"bias_base_d", false,-1, 31,0);
    tracep->declBus(c+215,"src0_m_step_q", false,-1, 31,0);
    tracep->declBus(c+216,"src0_m_step_d", false,-1, 31,0);
    tracep->declBus(c+217,"stride1_k_step_q", false,-1, 31,0);
    tracep->declBus(c+218,"stride1_k_step_d", false,-1, 31,0);
    tracep->declBus(c+219,"dst_m_step_q", false,-1, 31,0);
    tracep->declBus(c+220,"dst_m_step_d", false,-1, 31,0);
    tracep->declBus(c+221,"dst_n_step_q", false,-1, 31,0);
    tracep->declBus(c+222,"dst_n_step_d", false,-1, 31,0);
    tracep->declBus(c+223,"bias_n_step_q", false,-1, 31,0);
    tracep->declBus(c+224,"bias_n_step_d", false,-1, 31,0);
    tracep->declBus(c+225,"dma_store_base_addr", false,-1, 31,0);
    tracep->declBus(c+226,"c_stage_addr", false,-1, 15,0);
    tracep->declBus(c+161,"bias_mem_addr", false,-1, 31,0);
    tracep->declBus(c+227,"vec_src0_stride_bytes", false,-1, 15,0);
    tracep->declBus(c+228,"vec_src1_stride_bytes", false,-1, 15,0);
    tracep->declBus(c+229,"vec_dst_stride_bytes", false,-1, 15,0);
    tracep->declBus(c+230,"vec_src0_elem_addr", false,-1, 31,0);
    tracep->declBus(c+231,"vec_src1_elem_addr", false,-1, 31,0);
    tracep->declBus(c+232,"vec_dst_elem_addr", false,-1, 31,0);
    tracep->declBus(c+233,"vec_store_aligned_addr", false,-1, 31,0);
    tracep->declBus(c+234,"vec_src0_read_addr", false,-1, 31,0);
    tracep->declBus(c+235,"vec_src1_read_addr", false,-1, 31,0);
    tracep->declBus(c+236,"vec_src0_lane_sel", false,-1, 1,0);
    tracep->declBus(c+237,"vec_src1_lane_sel", false,-1, 1,0);
    tracep->declBus(c+238,"vec_load_byte", false,-1, 7,0);
    tracep->declBus(c+233,"vec_store_addr_next", false,-1, 31,0);
    tracep->declBus(c+239,"vec_store_wdata_next", false,-1, 31,0);
    tracep->declBus(c+240,"vec_store_wstrb_next", false,-1, 3,0);
    tracep->declBus(c+241,"dma_op_kind_cmd_n", false,-1, 1,0);
    tracep->declBus(c+242,"dma_base_addr_cmd_n", false,-1, 31,0);
    tracep->declBus(c+243,"dma_rows_cmd_n", false,-1, 15,0);
    tracep->declBus(c+244,"dma_cols_cmd_n", false,-1, 15,0);
    tracep->declBus(c+245,"dma_stride_bytes_cmd_n", false,-1, 15,0);
    tracep->declBus(c+246,"dma_spm_region_cmd_n", false,-1, 1,0);
    tracep->declBus(c+247,"dma_spm_base_cmd_n", false,-1, 8,0);
    tracep->declBit(c+248,"unused_c_rd_data", false,-1);
    tracep->pushNamePrefix("u_array4x4 ");
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst_n", false,-1);
    tracep->declBit(c+114,"clear_acc", false,-1);
    tracep->declBit(c+115,"mac_en", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+249+i*1,"a_vec", true,(i+0), 7,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+251+i*1,"b_vec", true,(i+0), 7,0);
    }
    tracep->declBus(c+96,"row_mask", false,-1, 1,0);
    tracep->declBus(c+97,"col_mask", false,-1, 1,0);
    tracep->pushNamePrefix("c_tile");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+253,"[0]", false,-1, 31,0);
    tracep->declBus(c+254,"[1]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+255,"[0]", false,-1, 31,0);
    tracep->declBus(c+256,"[1]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_row ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_row[0] ");
    tracep->pushNamePrefix("g_col ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_col[0] ");
    tracep->declBit(c+257,"pe_mac_en", false,-1);
    tracep->pushNamePrefix("u_pe ");
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst_n", false,-1);
    tracep->declBit(c+114,"clear_acc", false,-1);
    tracep->declBit(c+257,"mac_en", false,-1);
    tracep->declBus(c+258,"a_i", false,-1, 7,0);
    tracep->declBus(c+259,"b_i", false,-1, 7,0);
    tracep->declBus(c+260,"acc_o", false,-1, 31,0);
    tracep->declBus(c+261,"product", false,-1, 15,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_col[1] ");
    tracep->declBit(c+262,"pe_mac_en", false,-1);
    tracep->pushNamePrefix("u_pe ");
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst_n", false,-1);
    tracep->declBit(c+114,"clear_acc", false,-1);
    tracep->declBit(c+262,"mac_en", false,-1);
    tracep->declBus(c+258,"a_i", false,-1, 7,0);
    tracep->declBus(c+263,"b_i", false,-1, 7,0);
    tracep->declBus(c+264,"acc_o", false,-1, 31,0);
    tracep->declBus(c+265,"product", false,-1, 15,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_row[1] ");
    tracep->pushNamePrefix("g_col ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_col[0] ");
    tracep->declBit(c+266,"pe_mac_en", false,-1);
    tracep->pushNamePrefix("u_pe ");
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst_n", false,-1);
    tracep->declBit(c+114,"clear_acc", false,-1);
    tracep->declBit(c+266,"mac_en", false,-1);
    tracep->declBus(c+267,"a_i", false,-1, 7,0);
    tracep->declBus(c+259,"b_i", false,-1, 7,0);
    tracep->declBus(c+268,"acc_o", false,-1, 31,0);
    tracep->declBus(c+269,"product", false,-1, 15,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_col[1] ");
    tracep->declBit(c+270,"pe_mac_en", false,-1);
    tracep->pushNamePrefix("u_pe ");
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst_n", false,-1);
    tracep->declBit(c+114,"clear_acc", false,-1);
    tracep->declBit(c+270,"mac_en", false,-1);
    tracep->declBus(c+267,"a_i", false,-1, 7,0);
    tracep->declBus(c+263,"b_i", false,-1, 7,0);
    tracep->declBus(c+271,"acc_o", false,-1, 31,0);
    tracep->declBus(c+272,"product", false,-1, 15,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("u_dma ");
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst_n", false,-1);
    tracep->declBit(c+151,"start", false,-1);
    tracep->declBit(c+152,"busy", false,-1);
    tracep->declBit(c+153,"done", false,-1);
    tracep->declBit(c+154,"error", false,-1);
    tracep->declBus(c+171,"op_kind", false,-1, 1,0);
    tracep->declBus(c+172,"base_addr", false,-1, 31,0);
    tracep->declBus(c+173,"rows", false,-1, 15,0);
    tracep->declBus(c+174,"cols", false,-1, 15,0);
    tracep->declBus(c+175,"stride_bytes", false,-1, 15,0);
    tracep->declBus(c+176,"spm_region", false,-1, 1,0);
    tracep->declBus(c+177,"spm_base", false,-1, 8,0);
    tracep->declBit(c+155,"mem_req", false,-1);
    tracep->declBit(c+156,"mem_we", false,-1);
    tracep->declBus(c+157,"mem_addr", false,-1, 31,0);
    tracep->declBus(c+158,"mem_wdata", false,-1, 31,0);
    tracep->declBus(c+159,"mem_wstrb", false,-1, 3,0);
    tracep->declBus(c+39,"mem_rdata", false,-1, 31,0);
    tracep->declBit(c+47,"mem_ready", false,-1);
    tracep->declBit(c+40,"mem_rvalid", false,-1);
    tracep->declBit(c+116,"spm_wr_en", false,-1);
    tracep->declBus(c+117,"spm_region_o", false,-1, 1,0);
    tracep->declBus(c+118,"spm_addr", false,-1, 8,0);
    tracep->declBus(c+119,"spm_wdata", false,-1, 31,0);
    tracep->declBus(c+120,"spm_wstrb", false,-1, 3,0);
    tracep->declBus(c+121,"spm_rdata", false,-1, 31,0);
    tracep->declBus(c+390,"DMA_OP_LOAD_I8", false,-1, 1,0);
    tracep->declBus(c+391,"DMA_OP_STORE_I32", false,-1, 1,0);
    tracep->declBus(c+392,"DMA_OP_STORE_I8", false,-1, 1,0);
    tracep->declBus(c+386,"TILE_N_U16", false,-1, 15,0);
    tracep->declBus(c+387,"TILE_K_U16", false,-1, 15,0);
    tracep->declBus(c+273,"state_q", false,-1, 2,0);
    tracep->declBus(c+274,"state_d", false,-1, 2,0);
    tracep->declBit(c+153,"done_q", false,-1);
    tracep->declBit(c+154,"error_q", false,-1);
    tracep->declBus(c+275,"op_kind_q", false,-1, 1,0);
    tracep->declBus(c+276,"base_addr_q", false,-1, 31,0);
    tracep->declBus(c+277,"rows_q", false,-1, 15,0);
    tracep->declBus(c+278,"cols_q", false,-1, 15,0);
    tracep->declBus(c+279,"stride_bytes_q", false,-1, 15,0);
    tracep->declBus(c+280,"spm_region_q", false,-1, 1,0);
    tracep->declBus(c+281,"spm_base_q", false,-1, 8,0);
    tracep->declBus(c+282,"row_q", false,-1, 15,0);
    tracep->declBus(c+283,"row_d", false,-1, 15,0);
    tracep->declBus(c+284,"col_q", false,-1, 15,0);
    tracep->declBus(c+285,"col_d", false,-1, 15,0);
    tracep->declBus(c+286,"elem_addr", false,-1, 31,0);
    tracep->declBus(c+287,"aligned_read_addr", false,-1, 31,0);
    tracep->declBus(c+288,"write_addr", false,-1, 31,0);
    tracep->declBus(c+289,"aligned_write_addr", false,-1, 31,0);
    tracep->declBus(c+290,"spm_elem_addr", false,-1, 8,0);
    tracep->declBus(c+291,"spm_addr_store_i32", false,-1, 31,0);
    tracep->declBus(c+291,"spm_addr_store_i8", false,-1, 31,0);
    tracep->declBus(c+292,"load_byte", false,-1, 7,0);
    tracep->declBus(c+293,"load_lane_sel", false,-1, 1,0);
    tracep->declBit(c+294,"advance_elem", false,-1);
    tracep->declBit(c+295,"last_elem", false,-1);
    tracep->declBus(c+121,"store_word_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_epilogue ");
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst_n", false,-1);
    tracep->declBit(c+126,"start", false,-1);
    tracep->declBit(c+127,"busy", false,-1);
    tracep->declBit(c+128,"done", false,-1);
    tracep->declBus(c+50,"flags", false,-1, 31,0);
    tracep->declBus(c+62,"scale", false,-1, 31,0);
    tracep->declBus(c+63,"shift", false,-1, 15,0);
    tracep->declBus(c+64,"zero_point", false,-1, 15,0);
    tracep->pushNamePrefix("c_in");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+296,"[0]", false,-1, 31,0);
    tracep->declBus(c+297,"[1]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+298,"[0]", false,-1, 31,0);
    tracep->declBus(c+299,"[1]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+300+i*1,"bias", true,(i+0), 31,0);
    }
    tracep->declBus(c+96,"row_mask", false,-1, 1,0);
    tracep->declBus(c+97,"col_mask", false,-1, 1,0);
    tracep->pushNamePrefix("c_out_i32");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+302,"[0]", false,-1, 31,0);
    tracep->declBus(c+303,"[1]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+304,"[0]", false,-1, 31,0);
    tracep->declBus(c+305,"[1]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("c_out_i8");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+306,"[0]", false,-1, 7,0);
    tracep->declBus(c+307,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+308,"[0]", false,-1, 7,0);
    tracep->declBus(c+309,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+399,"CLAMP_MIN_DFLT", false,-1, 31,0);
    tracep->declBus(c+400,"CLAMP_MAX_DFLT", false,-1, 31,0);
    tracep->declBus(c+310,"state_q", false,-1, 1,0);
    tracep->pushNamePrefix("post_q");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+311,"[0]", false,-1, 31,0);
    tracep->declBus(c+312,"[1]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+313,"[0]", false,-1, 31,0);
    tracep->declBus(c+314,"[1]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scaled_q");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+315,"[0]", false,-1, 31,0);
    tracep->declBus(c+316,"[1]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+317,"[0]", false,-1, 31,0);
    tracep->declBus(c+318,"[1]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+319,"r", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+320,"c", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+321,"r", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+322,"c", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBit(c+323,"valid_elem", false,-1);
    tracep->declBus(c+324,"x_post", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+325,"r", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk7 ");
    tracep->declBus(c+326,"c", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk8 ");
    tracep->declBus(c+327,"r", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk9 ");
    tracep->declBus(c+328,"c", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk10 ");
    tracep->declBus(c+329,"x_shifted", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("u_spm ");
    tracep->declBus(c+401,"A_BYTES", false,-1, 31,0);
    tracep->declBus(c+401,"B_BYTES", false,-1, 31,0);
    tracep->declBus(c+402,"C_BYTES", false,-1, 31,0);
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst_n", false,-1);
    tracep->declBit(c+116,"dma_wr_en", false,-1);
    tracep->declBus(c+117,"dma_region", false,-1, 1,0);
    tracep->declBus(c+118,"dma_addr", false,-1, 8,0);
    tracep->declBus(c+119,"dma_wdata", false,-1, 31,0);
    tracep->declBus(c+120,"dma_wstrb", false,-1, 3,0);
    tracep->declBus(c+121,"dma_rdata", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+330+i*1,"a_rd_addr", true,(i+0), 7,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+332+i*1,"a_rd_data", true,(i+0), 7,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+334+i*1,"b_rd_addr", true,(i+0), 7,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+336+i*1,"b_rd_data", true,(i+0), 7,0);
    }
    tracep->declBit(c+122,"c_wr_en", false,-1);
    tracep->declBus(c+123,"c_wr_addr", false,-1, 7,0);
    tracep->declBus(c+124,"c_wr_data", false,-1, 31,0);
    tracep->declBus(c+395,"c_rd_addr", false,-1, 7,0);
    tracep->declBus(c+125,"c_rd_data", false,-1, 31,0);
    tracep->declBus(c+390,"REGION_A", false,-1, 1,0);
    tracep->declBus(c+394,"REGION_B", false,-1, 1,0);
    tracep->declBus(c+391,"REGION_C", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+338,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+339,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+340,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+341,"byte_idx", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+403,"r", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+403,"c", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_vec_alu ");
    tracep->declBus(c+49,"opcode", false,-1, 7,0);
    tracep->declBus(c+139,"x_i", false,-1, 7,0);
    tracep->declBus(c+140,"y_i", false,-1, 7,0);
    tracep->declBus(c+141,"z_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+342,"c", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+343,"c", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+344,"c", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+403,"r", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+403,"c", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_counters ");
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst_n", false,-1);
    tracep->declBit(c+351,"cmd_start_i", false,-1);
    tracep->declBit(c+26,"cmd_done_i", false,-1);
    tracep->declBit(c+27,"busy_i", false,-1);
    tracep->declBit(c+28,"active_i", false,-1);
    tracep->declBit(c+29,"stall_i", false,-1);
    tracep->declBus(c+30,"cycle_count_o", false,-1, 31,0);
    tracep->declBus(c+31,"active_count_o", false,-1, 31,0);
    tracep->declBus(c+32,"stall_count_o", false,-1, 31,0);
    tracep->declBus(c+33,"cmd_count_o", false,-1, 31,0);
    tracep->declBus(c+345,"cycle_cur_q", false,-1, 31,0);
    tracep->declBus(c+346,"active_cur_q", false,-1, 31,0);
    tracep->declBus(c+347,"stall_cur_q", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_regs ");
    tracep->declBit(c+366,"clk", false,-1);
    tracep->declBit(c+367,"rst_n", false,-1);
    tracep->declBit(c+368,"mmio_valid", false,-1);
    tracep->declBit(c+369,"mmio_we", false,-1);
    tracep->declBus(c+370,"mmio_addr", false,-1, 31,0);
    tracep->declBus(c+371,"mmio_wdata", false,-1, 31,0);
    tracep->declBus(c+372,"mmio_wstrb", false,-1, 3,0);
    tracep->declBus(c+373,"mmio_rdata", false,-1, 31,0);
    tracep->declBit(c+374,"mmio_ready", false,-1);
    tracep->declBit(c+20,"cmd_busy_i", false,-1);
    tracep->declBit(c+21,"cmd_done_i", false,-1);
    tracep->declBit(c+22,"illegal_opcode_i", false,-1);
    tracep->declBit(c+23,"shape_error_i", false,-1);
    tracep->declBit(c+24,"memory_error_i", false,-1);
    tracep->declBit(c+25,"unsupported_fmt_i", false,-1);
    tracep->declBus(c+30,"cycle_count_i", false,-1, 31,0);
    tracep->declBus(c+31,"active_count_i", false,-1, 31,0);
    tracep->declBus(c+32,"stall_count_i", false,-1, 31,0);
    tracep->declBus(c+33,"cmd_count_i", false,-1, 31,0);
    tracep->declBit(c+349,"start_pulse_o", false,-1);
    tracep->declBit(c+350,"soft_reset_o", false,-1);
    tracep->declBit(c+1,"irq_enable_o", false,-1);
    tracep->declBit(c+2,"direct_mode_o", false,-1);
    tracep->declBit(c+3,"irq_pending_o", false,-1);
    tracep->declBus(c+4,"cmd_addr_o", false,-1, 31,0);
    tracep->declBus(c+5,"opcode_o", false,-1, 7,0);
    tracep->declBus(c+6,"src0_addr_o", false,-1, 31,0);
    tracep->declBus(c+7,"src1_addr_o", false,-1, 31,0);
    tracep->declBus(c+8,"bias_addr_o", false,-1, 31,0);
    tracep->declBus(c+9,"dst_addr_o", false,-1, 31,0);
    tracep->declBus(c+10,"dim_m_o", false,-1, 15,0);
    tracep->declBus(c+11,"dim_n_o", false,-1, 15,0);
    tracep->declBus(c+12,"dim_k_o", false,-1, 15,0);
    tracep->declBus(c+13,"stride0_o", false,-1, 15,0);
    tracep->declBus(c+14,"stride1_o", false,-1, 15,0);
    tracep->declBus(c+15,"stride_dst_o", false,-1, 15,0);
    tracep->declBus(c+16,"flags_o", false,-1, 31,0);
    tracep->declBus(c+17,"scale_o", false,-1, 31,0);
    tracep->declBus(c+18,"shift_o", false,-1, 15,0);
    tracep->declBus(c+19,"zero_point_o", false,-1, 15,0);
    tracep->declBus(c+395,"REG_CTRL", false,-1, 7,0);
    tracep->declBus(c+404,"REG_STATUS", false,-1, 7,0);
    tracep->declBus(c+405,"REG_CMD_ADDR", false,-1, 7,0);
    tracep->declBus(c+406,"REG_DIRECT_OP", false,-1, 7,0);
    tracep->declBus(c+407,"REG_SRC0_ADDR", false,-1, 7,0);
    tracep->declBus(c+408,"REG_SRC1_ADDR", false,-1, 7,0);
    tracep->declBus(c+409,"REG_BIAS_ADDR", false,-1, 7,0);
    tracep->declBus(c+410,"REG_DST_ADDR", false,-1, 7,0);
    tracep->declBus(c+411,"REG_DIM_M", false,-1, 7,0);
    tracep->declBus(c+412,"REG_DIM_N", false,-1, 7,0);
    tracep->declBus(c+413,"REG_DIM_K", false,-1, 7,0);
    tracep->declBus(c+414,"REG_STRIDE0", false,-1, 7,0);
    tracep->declBus(c+415,"REG_STRIDE1", false,-1, 7,0);
    tracep->declBus(c+416,"REG_STRIDE_DST", false,-1, 7,0);
    tracep->declBus(c+417,"REG_FLAGS", false,-1, 7,0);
    tracep->declBus(c+418,"REG_SCALE", false,-1, 7,0);
    tracep->declBus(c+419,"REG_SHIFT_ZP", false,-1, 7,0);
    tracep->declBus(c+420,"REG_CYCLE_COUNT", false,-1, 7,0);
    tracep->declBus(c+421,"REG_ACTIVE_CNT", false,-1, 7,0);
    tracep->declBus(c+422,"REG_STALL_CNT", false,-1, 7,0);
    tracep->declBus(c+423,"REG_CMD_COUNT", false,-1, 7,0);
    tracep->declBus(c+424,"REG_IRQ_STATUS", false,-1, 7,0);
    tracep->declBit(c+348,"done_sticky_q", false,-1);
    tracep->declBit(c+3,"irq_pending_q", false,-1);
    tracep->declBus(c+384,"addr_lo", false,-1, 7,0);
    tracep->declBus(c+357,"ctrl_next_w", false,-1, 31,0);
    tracep->declBus(c+358,"direct_op_next_w", false,-1, 31,0);
    tracep->declBus(c+359,"dim_m_next_w", false,-1, 31,0);
    tracep->declBus(c+360,"dim_n_next_w", false,-1, 31,0);
    tracep->declBus(c+361,"dim_k_next_w", false,-1, 31,0);
    tracep->declBus(c+362,"stride0_next_w", false,-1, 31,0);
    tracep->declBus(c+363,"stride1_next_w", false,-1, 31,0);
    tracep->declBus(c+364,"stride_dst_next_w", false,-1, 31,0);
    tracep->declBus(c+365,"shiftzp_next_w", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtinygpu_top___024root__trace_init_sub__TOP__tinygpu_pkg__0(Vtinygpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinygpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinygpu_top___024root__trace_init_sub__TOP__tinygpu_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+385,"ADDR_W", false,-1, 31,0);
    tracep->declBus(c+385,"DATA_W", false,-1, 31,0);
    tracep->declBus(c+425,"INT8_W", false,-1, 31,0);
    tracep->declBus(c+385,"ACC_W", false,-1, 31,0);
    tracep->declBus(c+426,"TILE_M", false,-1, 31,0);
    tracep->declBus(c+426,"TILE_N", false,-1, 31,0);
    tracep->declBus(c+425,"TILE_K", false,-1, 31,0);
    tracep->declBus(c+427,"NUM_PES", false,-1, 31,0);
    tracep->declBus(c+401,"SPM_A_BYTES", false,-1, 31,0);
    tracep->declBus(c+401,"SPM_B_BYTES", false,-1, 31,0);
    tracep->declBus(c+402,"SPM_C_BYTES", false,-1, 31,0);
    tracep->declBus(c+425,"MAX_BURST", false,-1, 31,0);
    tracep->declBus(c+395,"OP_NOP", false,-1, 7,0);
    tracep->declBus(c+428,"OP_GEMM", false,-1, 7,0);
    tracep->declBus(c+429,"OP_GEMV", false,-1, 7,0);
    tracep->declBus(c+430,"OP_VEC_ADD", false,-1, 7,0);
    tracep->declBus(c+404,"OP_VEC_MUL", false,-1, 7,0);
    tracep->declBus(c+431,"OP_RELU", false,-1, 7,0);
    tracep->declBus(c+432,"OP_CLAMP", false,-1, 7,0);
    tracep->declBus(c+433,"FLAG_BIAS_EN", false,-1, 31,0);
    tracep->declBus(c+388,"FLAG_RELU_EN", false,-1, 31,0);
    tracep->declBus(c+426,"FLAG_CLAMP_EN", false,-1, 31,0);
    tracep->declBus(c+389,"FLAG_REQUANT_EN", false,-1, 31,0);
    tracep->declBus(c+427,"FLAG_DST_INT8", false,-1, 31,0);
    tracep->declBus(c+434,"FLAG_DST_INT32", false,-1, 31,0);
    tracep->declBus(c+435,"FLAG_SIGNED_MODE", false,-1, 31,0);
}

VL_ATTR_COLD void Vtinygpu_top___024root__trace_init_top(Vtinygpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinygpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinygpu_top___024root__trace_init_top\n"); );
    // Body
    Vtinygpu_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("tinygpu_pkg ");
    Vtinygpu_top___024root__trace_init_sub__TOP__tinygpu_pkg__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtinygpu_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtinygpu_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtinygpu_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtinygpu_top___024root__trace_register(Vtinygpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinygpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinygpu_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtinygpu_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtinygpu_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtinygpu_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtinygpu_top___024root__trace_full_sub_0(Vtinygpu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtinygpu_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinygpu_top___024root__trace_full_top_0\n"); );
    // Init
    Vtinygpu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtinygpu_top___024root*>(voidSelf);
    Vtinygpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtinygpu_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtinygpu_top___024root__trace_full_sub_0(Vtinygpu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinygpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinygpu_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tinygpu_top__DOT__reg_irq_enable));
    bufp->fullBit(oldp+2,(vlSelf->tinygpu_top__DOT__reg_direct_mode));
    bufp->fullBit(oldp+3,(vlSelf->tinygpu_top__DOT__u_regs__DOT__irq_pending_q));
    bufp->fullIData(oldp+4,(vlSelf->tinygpu_top__DOT__reg_cmd_addr),32);
    bufp->fullCData(oldp+5,(vlSelf->tinygpu_top__DOT__reg_opcode),8);
    bufp->fullIData(oldp+6,(vlSelf->tinygpu_top__DOT__reg_src0_addr),32);
    bufp->fullIData(oldp+7,(vlSelf->tinygpu_top__DOT__reg_src1_addr),32);
    bufp->fullIData(oldp+8,(vlSelf->tinygpu_top__DOT__reg_bias_addr),32);
    bufp->fullIData(oldp+9,(vlSelf->tinygpu_top__DOT__reg_dst_addr),32);
    bufp->fullSData(oldp+10,(vlSelf->tinygpu_top__DOT__reg_dim_m),16);
    bufp->fullSData(oldp+11,(vlSelf->tinygpu_top__DOT__reg_dim_n),16);
    bufp->fullSData(oldp+12,(vlSelf->tinygpu_top__DOT__reg_dim_k),16);
    bufp->fullSData(oldp+13,(vlSelf->tinygpu_top__DOT__reg_stride0),16);
    bufp->fullSData(oldp+14,(vlSelf->tinygpu_top__DOT__reg_stride1),16);
    bufp->fullSData(oldp+15,(vlSelf->tinygpu_top__DOT__reg_stride_dst),16);
    bufp->fullIData(oldp+16,(vlSelf->tinygpu_top__DOT__reg_flags),32);
    bufp->fullIData(oldp+17,(vlSelf->tinygpu_top__DOT__reg_scale),32);
    bufp->fullSData(oldp+18,(vlSelf->tinygpu_top__DOT__reg_shift),16);
    bufp->fullSData(oldp+19,(vlSelf->tinygpu_top__DOT__reg_zero_point),16);
    bufp->fullBit(oldp+20,(vlSelf->tinygpu_top__DOT__ctrl_busy));
    bufp->fullBit(oldp+21,(vlSelf->tinygpu_top__DOT__ctrl_done));
    bufp->fullBit(oldp+22,(vlSelf->tinygpu_top__DOT__ctrl_illegal_opcode));
    bufp->fullBit(oldp+23,(vlSelf->tinygpu_top__DOT__ctrl_shape_error));
    bufp->fullBit(oldp+24,(vlSelf->tinygpu_top__DOT__ctrl_memory_error));
    bufp->fullBit(oldp+25,(vlSelf->tinygpu_top__DOT__ctrl_unsupported_format));
    bufp->fullBit(oldp+26,(vlSelf->tinygpu_top__DOT__cnt_cmd_done));
    bufp->fullBit(oldp+27,((((0U != (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
                             & (0x15U != (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) 
                            & (0x16U != (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))));
    bufp->fullBit(oldp+28,(((((7U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
                              | (0xeU == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) 
                             | (0xfU == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))) 
                            | (0x10U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)))));
    bufp->fullBit(oldp+29,(vlSelf->tinygpu_top__DOT__cnt_stall));
    bufp->fullIData(oldp+30,(vlSelf->tinygpu_top__DOT__cycle_count_last),32);
    bufp->fullIData(oldp+31,(vlSelf->tinygpu_top__DOT__active_count_last),32);
    bufp->fullIData(oldp+32,(vlSelf->tinygpu_top__DOT__stall_count_last),32);
    bufp->fullIData(oldp+33,(vlSelf->tinygpu_top__DOT__cmd_count_total),32);
    bufp->fullBit(oldp+34,(vlSelf->tinygpu_top__DOT__mem_req_raw));
    bufp->fullBit(oldp+35,(((2U != (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
                            & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_vec)
                                ? (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_we)
                                : ((9U != (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q)) 
                                   & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_we))))));
    bufp->fullIData(oldp+36,(((2U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))
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
    bufp->fullIData(oldp+37,(((2U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))
                               ? 0U : ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_vec)
                                        ? vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wdata
                                        : ((9U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))
                                            ? 0U : vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wdata)))),32);
    bufp->fullCData(oldp+38,(((2U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))
                               ? 0U : ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_vec)
                                        ? (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wstrb)
                                        : ((9U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))
                                            ? 0U : (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wstrb))))),4);
    bufp->fullIData(oldp+39,(vlSelf->tinygpu_top__DOT__mem_rdata_stage_q),32);
    bufp->fullBit(oldp+40,(vlSelf->tinygpu_top__DOT__mem_rvalid_stage_q));
    bufp->fullBit(oldp+41,(vlSelf->tinygpu_top__DOT__mem_cmd_valid_q));
    bufp->fullBit(oldp+42,(vlSelf->tinygpu_top__DOT__mem_cmd_we_q));
    bufp->fullIData(oldp+43,(vlSelf->tinygpu_top__DOT__mem_cmd_addr_q),32);
    bufp->fullIData(oldp+44,(vlSelf->tinygpu_top__DOT__mem_cmd_wdata_q),32);
    bufp->fullCData(oldp+45,(vlSelf->tinygpu_top__DOT__mem_cmd_wstrb_q),4);
    bufp->fullBit(oldp+46,(vlSelf->tinygpu_top__DOT__mem_read_pending_q));
    bufp->fullBit(oldp+47,(vlSelf->tinygpu_top__DOT__mem_stage_ready));
    bufp->fullCData(oldp+48,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q),5);
    bufp->fullCData(oldp+49,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q),8);
    bufp->fullIData(oldp+50,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q),32);
    bufp->fullIData(oldp+51,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr_q),32);
    bufp->fullIData(oldp+52,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_addr_q),32);
    bufp->fullIData(oldp+53,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_addr_q),32);
    bufp->fullIData(oldp+54,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_addr_q),32);
    bufp->fullIData(oldp+55,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_addr_q),32);
    bufp->fullSData(oldp+56,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q),16);
    bufp->fullSData(oldp+57,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__N_q),16);
    bufp->fullSData(oldp+58,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__K_q),16);
    bufp->fullSData(oldp+59,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q),16);
    bufp->fullSData(oldp+60,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q),16);
    bufp->fullSData(oldp+61,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q),16);
    bufp->fullIData(oldp+62,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__scale_q),32);
    bufp->fullSData(oldp+63,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__shift_q),16);
    bufp->fullSData(oldp+64,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__zero_point_q),16);
    bufp->fullSData(oldp+65,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q),16);
    bufp->fullSData(oldp+66,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_d),16);
    bufp->fullSData(oldp+67,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q),16);
    bufp->fullSData(oldp+68,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_d),16);
    bufp->fullSData(oldp+69,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_q),16);
    bufp->fullSData(oldp+70,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__k0_d),16);
    bufp->fullSData(oldp+71,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_q),16);
    bufp->fullSData(oldp+72,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__kk_d),16);
    bufp->fullSData(oldp+73,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q),16);
    bufp->fullSData(oldp+74,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_d),16);
    bufp->fullSData(oldp+75,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q),16);
    bufp->fullSData(oldp+76,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_d),16);
    bufp->fullSData(oldp+77,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q),16);
    bufp->fullSData(oldp+78,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_d),16);
    bufp->fullSData(oldp+79,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_q),16);
    bufp->fullSData(oldp+80,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_idx_d),16);
    bufp->fullCData(oldp+81,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q),5);
    bufp->fullCData(oldp+82,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_d),5);
    bufp->fullBit(oldp+83,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_q));
    bufp->fullBit(oldp+84,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_done_d));
    bufp->fullBit(oldp+85,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_q));
    bufp->fullBit(oldp+86,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_inflight_d));
    bufp->fullBit(oldp+87,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_q));
    bufp->fullBit(oldp+88,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_inflight_d));
    bufp->fullBit(oldp+89,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_q));
    bufp->fullBit(oldp+90,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_inflight_d));
    bufp->fullBit(oldp+91,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_q));
    bufp->fullBit(oldp+92,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_inflight_d));
    bufp->fullSData(oldp+93,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_m),16);
    bufp->fullSData(oldp+94,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_n),16);
    bufp->fullSData(oldp+95,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__active_tile_k),16);
    bufp->fullCData(oldp+96,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask),2);
    bufp->fullCData(oldp+97,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask),2);
    bufp->fullCData(oldp+98,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_addr[0]),8);
    bufp->fullCData(oldp+99,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_addr[1]),8);
    bufp->fullCData(oldp+100,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_data[0]),8);
    bufp->fullCData(oldp+101,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__a_rd_data[1]),8);
    bufp->fullCData(oldp+102,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_addr[0]),8);
    bufp->fullCData(oldp+103,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_addr[1]),8);
    bufp->fullCData(oldp+104,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_data[0]),8);
    bufp->fullCData(oldp+105,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__b_rd_data[1]),8);
    bufp->fullCData(oldp+106,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__a_vec[0]),8);
    bufp->fullCData(oldp+107,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__a_vec[1]),8);
    bufp->fullCData(oldp+108,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__b_vec[0]),8);
    bufp->fullCData(oldp+109,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__b_vec[1]),8);
    bufp->fullIData(oldp+110,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_tile
                              [0U][0U]),32);
    bufp->fullIData(oldp+111,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_tile
                              [0U][1U]),32);
    bufp->fullIData(oldp+112,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_tile
                              [1U][0U]),32);
    bufp->fullIData(oldp+113,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_tile
                              [1U][1U]),32);
    bufp->fullBit(oldp+114,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__array_clear_acc));
    bufp->fullBit(oldp+115,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__array_mac_en));
    bufp->fullBit(oldp+116,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wr_en));
    bufp->fullCData(oldp+117,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_region),2);
    bufp->fullSData(oldp+118,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_addr),9);
    bufp->fullIData(oldp+119,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wdata),32);
    bufp->fullCData(oldp+120,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_wstrb),4);
    bufp->fullIData(oldp+121,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__spm_dma_rdata),32);
    bufp->fullBit(oldp+122,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_en));
    bufp->fullCData(oldp+123,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_addr),8);
    bufp->fullIData(oldp+124,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_wr_data),32);
    bufp->fullIData(oldp+125,(((vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem
                                [3U] << 0x18U) | ((
                                                   vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem
                                                     [0U])))),32);
    bufp->fullBit(oldp+126,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_start));
    bufp->fullBit(oldp+127,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_busy));
    bufp->fullBit(oldp+128,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__epi_done));
    bufp->fullIData(oldp+129,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec[0]),32);
    bufp->fullIData(oldp+130,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_vec[1]),32);
    bufp->fullIData(oldp+131,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_epi_i32
                              [0U][0U]),32);
    bufp->fullIData(oldp+132,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_epi_i32
                              [0U][1U]),32);
    bufp->fullIData(oldp+133,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_epi_i32
                              [1U][0U]),32);
    bufp->fullIData(oldp+134,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_epi_i32
                              [1U][1U]),32);
    bufp->fullCData(oldp+135,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_epi_i8
                              [0U][0U]),8);
    bufp->fullCData(oldp+136,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_epi_i8
                              [0U][1U]),8);
    bufp->fullCData(oldp+137,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_epi_i8
                              [1U][0U]),8);
    bufp->fullCData(oldp+138,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__c_epi_i8
                              [1U][1U]),8);
    bufp->fullCData(oldp+139,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_x_q),8);
    bufp->fullCData(oldp+140,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_y_q),8);
    bufp->fullIData(oldp+141,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw),32);
    bufp->fullIData(oldp+142,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post),32);
    bufp->fullCData(oldp+143,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8),8);
    bufp->fullIData(oldp+144,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_addr_q),32);
    bufp->fullIData(oldp+145,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_q),32);
    bufp->fullCData(oldp+146,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_q),4);
    bufp->fullIData(oldp+147,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_raw_q),32);
    bufp->fullIData(oldp+148,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_post_q),32);
    bufp->fullIData(oldp+149,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_scaled_q),32);
    bufp->fullCData(oldp+150,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_result_i8_q),8);
    bufp->fullBit(oldp+151,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_start));
    bufp->fullBit(oldp+152,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_busy));
    bufp->fullBit(oldp+153,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__done_q));
    bufp->fullBit(oldp+154,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__error_q));
    bufp->fullBit(oldp+155,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_req));
    bufp->fullBit(oldp+156,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_we));
    bufp->fullIData(oldp+157,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_addr),32);
    bufp->fullIData(oldp+158,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wdata),32);
    bufp->fullCData(oldp+159,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_mem_wstrb),4);
    bufp->fullBit(oldp+160,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_mem_req));
    bufp->fullIData(oldp+161,((vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q 
                               + ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_col_q) 
                                  << 2U))),32);
    bufp->fullBit(oldp+162,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_req));
    bufp->fullBit(oldp+163,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_we));
    bufp->fullIData(oldp+164,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_addr),32);
    bufp->fullIData(oldp+165,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wdata),32);
    bufp->fullCData(oldp+166,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_mem_wstrb),4);
    bufp->fullBit(oldp+167,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_mem_req));
    bufp->fullIData(oldp+168,((vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__cmd_addr_q 
                               + ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__desc_word_idx_q) 
                                  << 2U))),32);
    bufp->fullBit(oldp+169,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_q));
    bufp->fullBit(oldp+170,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_launch_pending_d));
    bufp->fullCData(oldp+171,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_q),2);
    bufp->fullIData(oldp+172,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_q),32);
    bufp->fullSData(oldp+173,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_q),16);
    bufp->fullSData(oldp+174,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_q),16);
    bufp->fullSData(oldp+175,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_q),16);
    bufp->fullCData(oldp+176,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_q),2);
    bufp->fullSData(oldp+177,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_q),9);
    bufp->fullBit(oldp+178,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__load_desc_word));
    bufp->fullBit(oldp+179,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_vec_store_cmd));
    bufp->fullBit(oldp+180,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_dma_cmd));
    bufp->fullBit(oldp+181,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__set_illegal_opcode));
    bufp->fullBit(oldp+182,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__set_shape_error));
    bufp->fullBit(oldp+183,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__set_memory_error));
    bufp->fullBit(oldp+184,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__set_unsupported_format));
    bufp->fullBit(oldp+185,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_ok));
    bufp->fullBit(oldp+186,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_flags_ok));
    bufp->fullBit(oldp+187,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dims_ok));
    bufp->fullBit(oldp+188,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__more_k_tiles));
    bufp->fullBit(oldp+189,(((0xffffU & ((IData)(2U) 
                                         + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__n0_q))) 
                             < (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q))));
    bufp->fullBit(oldp+190,(((0xffffU & ((IData)(2U) 
                                         + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__m0_q))) 
                             < (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__M_q))));
    bufp->fullBit(oldp+191,((1U & (vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q 
                                   >> 4U))));
    bufp->fullBit(oldp+192,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_stage_last));
    bufp->fullBit(oldp+193,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_bias_regs));
    bufp->fullBit(oldp+194,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__load_bias_reg));
    bufp->fullBit(oldp+195,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__load_vec_x_reg));
    bufp->fullBit(oldp+196,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__load_vec_y_reg));
    bufp->fullBit(oldp+197,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__is_vector_opcode_q));
    bufp->fullBit(oldp+198,(((3U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)) 
                             | (4U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__opcode_q)))));
    bufp->fullBit(oldp+199,((9U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))));
    bufp->fullBit(oldp+200,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_is_vec));
    bufp->fullBit(oldp+201,((2U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_q))));
    bufp->fullSData(oldp+202,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__effective_n_q),16);
    bufp->fullIData(oldp+203,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_q),32);
    bufp->fullIData(oldp+204,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_row_base_d),32);
    bufp->fullIData(oldp+205,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_q),32);
    bufp->fullIData(oldp+206,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_k_base_d),32);
    bufp->fullIData(oldp+207,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_q),32);
    bufp->fullIData(oldp+208,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src1_n_offset_d),32);
    bufp->fullIData(oldp+209,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_q),32);
    bufp->fullIData(oldp+210,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_d),32);
    bufp->fullIData(oldp+211,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_q),32);
    bufp->fullIData(oldp+212,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_d),32);
    bufp->fullIData(oldp+213,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_q),32);
    bufp->fullIData(oldp+214,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_base_d),32);
    bufp->fullIData(oldp+215,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_q),32);
    bufp->fullIData(oldp+216,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__src0_m_step_d),32);
    bufp->fullIData(oldp+217,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_q),32);
    bufp->fullIData(oldp+218,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_k_step_d),32);
    bufp->fullIData(oldp+219,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_q),32);
    bufp->fullIData(oldp+220,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_m_step_d),32);
    bufp->fullIData(oldp+221,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_q),32);
    bufp->fullIData(oldp+222,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_step_d),32);
    bufp->fullIData(oldp+223,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_q),32);
    bufp->fullIData(oldp+224,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__bias_n_step_d),32);
    bufp->fullIData(oldp+225,((vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_row_base_q 
                               + vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dst_n_offset_q)),32);
    bufp->fullSData(oldp+226,((0xffffU & (((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_row_q) 
                                           << 1U) + (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__store_col_q)))),16);
    bufp->fullSData(oldp+227,(((0U != (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q))
                                ? (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride0_q)
                                : 1U)),16);
    bufp->fullSData(oldp+228,(((0U != (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q))
                                ? (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride1_q)
                                : 1U)),16);
    bufp->fullSData(oldp+229,(((0U != (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q))
                                ? (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__stride_dst_q)
                                : ((0x10U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)
                                    ? 1U : 4U))),16);
    bufp->fullIData(oldp+230,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_elem_addr),32);
    bufp->fullIData(oldp+231,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_elem_addr),32);
    bufp->fullIData(oldp+232,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr),32);
    bufp->fullIData(oldp+233,(((0x10U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__flags_q)
                                ? (0xfffffffcU & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr)
                                : vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_dst_elem_addr)),32);
    bufp->fullIData(oldp+234,((0xfffffffcU & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_elem_addr)),32);
    bufp->fullIData(oldp+235,((0xfffffffcU & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_elem_addr)),32);
    bufp->fullCData(oldp+236,((3U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src0_elem_addr)),2);
    bufp->fullCData(oldp+237,((3U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_src1_elem_addr)),2);
    bufp->fullCData(oldp+238,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_load_byte),8);
    bufp->fullIData(oldp+239,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wdata_next),32);
    bufp->fullCData(oldp+240,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__vec_store_wstrb_next),4);
    bufp->fullCData(oldp+241,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_op_kind_cmd_n),2);
    bufp->fullIData(oldp+242,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_base_addr_cmd_n),32);
    bufp->fullSData(oldp+243,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_rows_cmd_n),16);
    bufp->fullSData(oldp+244,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_cols_cmd_n),16);
    bufp->fullSData(oldp+245,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_stride_bytes_cmd_n),16);
    bufp->fullCData(oldp+246,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_region_cmd_n),2);
    bufp->fullSData(oldp+247,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__dma_spm_base_cmd_n),9);
    bufp->fullBit(oldp+248,((1U & (VL_REDXOR_32(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__c_mem
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
    bufp->fullCData(oldp+249,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__a_vec[0]),8);
    bufp->fullCData(oldp+250,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__a_vec[1]),8);
    bufp->fullCData(oldp+251,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__b_vec[0]),8);
    bufp->fullCData(oldp+252,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__b_vec[1]),8);
    bufp->fullIData(oldp+253,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_array4x4__c_tile
                              [0U][0U]),32);
    bufp->fullIData(oldp+254,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_array4x4__c_tile
                              [0U][1U]),32);
    bufp->fullIData(oldp+255,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_array4x4__c_tile
                              [1U][0U]),32);
    bufp->fullIData(oldp+256,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_array4x4__c_tile
                              [1U][1U]),32);
    bufp->fullBit(oldp+257,((((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__array_mac_en) 
                              & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask)) 
                             & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask))));
    bufp->fullCData(oldp+258,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__a_vec
                              [0U]),8);
    bufp->fullCData(oldp+259,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__b_vec
                              [0U]),8);
    bufp->fullIData(oldp+260,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_o),32);
    bufp->fullSData(oldp+261,((0xffffU & VL_MULS_III(16, 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, 
                                                                      vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__a_vec
                                                                      [0U])), 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, 
                                                                      vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__b_vec
                                                                      [0U]))))),16);
    bufp->fullBit(oldp+262,((((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__array_mac_en) 
                              & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask)) 
                             & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask) 
                                >> 1U))));
    bufp->fullCData(oldp+263,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__b_vec
                              [1U]),8);
    bufp->fullIData(oldp+264,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_o),32);
    bufp->fullSData(oldp+265,((0xffffU & VL_MULS_III(16, 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, 
                                                                      vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__a_vec
                                                                      [0U])), 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, 
                                                                      vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__b_vec
                                                                      [1U]))))),16);
    bufp->fullBit(oldp+266,((((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__array_mac_en) 
                              & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask) 
                                 >> 1U)) & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask))));
    bufp->fullCData(oldp+267,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__a_vec
                              [1U]),8);
    bufp->fullIData(oldp+268,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc_o),32);
    bufp->fullSData(oldp+269,((0xffffU & VL_MULS_III(16, 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, 
                                                                      vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__a_vec
                                                                      [1U])), 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, 
                                                                      vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__b_vec
                                                                      [0U]))))),16);
    bufp->fullBit(oldp+270,((((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__array_mac_en) 
                              & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__row_mask) 
                                 >> 1U)) & ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__col_mask) 
                                            >> 1U))));
    bufp->fullIData(oldp+271,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_array4x4__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc_o),32);
    bufp->fullSData(oldp+272,((0xffffU & VL_MULS_III(16, 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, 
                                                                      vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__a_vec
                                                                      [1U])), 
                                                     (0xffffU 
                                                      & VL_EXTENDS_II(16,8, 
                                                                      vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_array4x4__b_vec
                                                                      [1U]))))),16);
    bufp->fullCData(oldp+273,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_q),3);
    bufp->fullCData(oldp+274,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__state_d),3);
    bufp->fullCData(oldp+275,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__op_kind_q),2);
    bufp->fullIData(oldp+276,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__base_addr_q),32);
    bufp->fullSData(oldp+277,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__rows_q),16);
    bufp->fullSData(oldp+278,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__cols_q),16);
    bufp->fullSData(oldp+279,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__stride_bytes_q),16);
    bufp->fullCData(oldp+280,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q),2);
    bufp->fullSData(oldp+281,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_base_q),9);
    bufp->fullSData(oldp+282,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q),16);
    bufp->fullSData(oldp+283,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_d),16);
    bufp->fullSData(oldp+284,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q),16);
    bufp->fullSData(oldp+285,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_d),16);
    bufp->fullIData(oldp+286,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__elem_addr),32);
    bufp->fullIData(oldp+287,((0xfffffffcU & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__elem_addr)),32);
    bufp->fullIData(oldp+288,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__write_addr),32);
    bufp->fullIData(oldp+289,((0xfffffffcU & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__write_addr)),32);
    bufp->fullSData(oldp+290,((0x1ffU & ((0U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q))
                                          ? (((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_base_q) 
                                              + ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q) 
                                                 << 3U)) 
                                             + (0x1ffU 
                                                & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q)))
                                          : ((1U == (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_region_q))
                                              ? (((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_base_q) 
                                                  + 
                                                  ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q) 
                                                   << 1U)) 
                                                 + 
                                                 (0x1ffU 
                                                  & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q)))
                                              : (((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_base_q) 
                                                  + 
                                                  ((IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__row_q) 
                                                   << 1U)) 
                                                 + 
                                                 (0x1ffU 
                                                  & (IData)(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__col_q))))))),9);
    bufp->fullIData(oldp+291,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__spm_addr_store_i32),32);
    bufp->fullCData(oldp+292,((0xffU & ((0U == (3U 
                                                & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__elem_addr))
                                         ? vlSelf->tinygpu_top__DOT__mem_rdata_stage_q
                                         : ((1U == 
                                             (3U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__elem_addr))
                                             ? (vlSelf->tinygpu_top__DOT__mem_rdata_stage_q 
                                                >> 8U)
                                             : ((2U 
                                                 == 
                                                 (3U 
                                                  & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__elem_addr))
                                                 ? 
                                                (vlSelf->tinygpu_top__DOT__mem_rdata_stage_q 
                                                 >> 0x10U)
                                                 : 
                                                (vlSelf->tinygpu_top__DOT__mem_rdata_stage_q 
                                                 >> 0x18U)))))),8);
    bufp->fullCData(oldp+293,((3U & vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__elem_addr)),2);
    bufp->fullBit(oldp+294,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__advance_elem));
    bufp->fullBit(oldp+295,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_dma__DOT__last_elem));
    bufp->fullIData(oldp+296,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_epilogue__c_in
                              [0U][0U]),32);
    bufp->fullIData(oldp+297,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_epilogue__c_in
                              [0U][1U]),32);
    bufp->fullIData(oldp+298,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_epilogue__c_in
                              [1U][0U]),32);
    bufp->fullIData(oldp+299,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_epilogue__c_in
                              [1U][1U]),32);
    bufp->fullIData(oldp+300,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_epilogue__bias[0]),32);
    bufp->fullIData(oldp+301,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_epilogue__bias[1]),32);
    bufp->fullIData(oldp+302,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i32
                              [0U][0U]),32);
    bufp->fullIData(oldp+303,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i32
                              [0U][1U]),32);
    bufp->fullIData(oldp+304,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i32
                              [1U][0U]),32);
    bufp->fullIData(oldp+305,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i32
                              [1U][1U]),32);
    bufp->fullCData(oldp+306,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8
                              [0U][0U]),8);
    bufp->fullCData(oldp+307,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8
                              [0U][1U]),8);
    bufp->fullCData(oldp+308,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8
                              [1U][0U]),8);
    bufp->fullCData(oldp+309,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_epilogue__c_out_i8
                              [1U][1U]),8);
    bufp->fullCData(oldp+310,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__state_q),2);
    bufp->fullIData(oldp+311,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q
                              [0U][0U]),32);
    bufp->fullIData(oldp+312,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q
                              [0U][1U]),32);
    bufp->fullIData(oldp+313,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q
                              [1U][0U]),32);
    bufp->fullIData(oldp+314,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__post_q
                              [1U][1U]),32);
    bufp->fullIData(oldp+315,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q
                              [0U][0U]),32);
    bufp->fullIData(oldp+316,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q
                              [0U][1U]),32);
    bufp->fullIData(oldp+317,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q
                              [1U][0U]),32);
    bufp->fullIData(oldp+318,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__scaled_q
                              [1U][1U]),32);
    bufp->fullIData(oldp+319,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk1__DOT__r),32);
    bufp->fullIData(oldp+320,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk1__DOT__unnamedblk2__DOT__c),32);
    bufp->fullIData(oldp+321,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk3__DOT__r),32);
    bufp->fullIData(oldp+322,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c),32);
    bufp->fullBit(oldp+323,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__valid_elem));
    bufp->fullIData(oldp+324,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__x_post),32);
    bufp->fullIData(oldp+325,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk6__DOT__r),32);
    bufp->fullIData(oldp+326,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk6__DOT__unnamedblk7__DOT__c),32);
    bufp->fullIData(oldp+327,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk8__DOT__r),32);
    bufp->fullIData(oldp+328,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk8__DOT__unnamedblk9__DOT__c),32);
    bufp->fullIData(oldp+329,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_epilogue__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__x_shifted),32);
    bufp->fullCData(oldp+330,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_spm__a_rd_addr[0]),8);
    bufp->fullCData(oldp+331,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_spm__a_rd_addr[1]),8);
    bufp->fullCData(oldp+332,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_spm__a_rd_data[0]),8);
    bufp->fullCData(oldp+333,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_spm__a_rd_data[1]),8);
    bufp->fullCData(oldp+334,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_spm__b_rd_addr[0]),8);
    bufp->fullCData(oldp+335,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellinp__u_spm__b_rd_addr[1]),8);
    bufp->fullCData(oldp+336,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_spm__b_rd_data[0]),8);
    bufp->fullCData(oldp+337,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT____Vcellout__u_spm__b_rd_data[1]),8);
    bufp->fullIData(oldp+338,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+339,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+340,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+341,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__u_spm__DOT__unnamedblk4__DOT__byte_idx),32);
    bufp->fullIData(oldp+342,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk1__DOT__c),32);
    bufp->fullIData(oldp+343,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk2__DOT__c),32);
    bufp->fullIData(oldp+344,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__unnamedblk3__DOT__c),32);
    bufp->fullIData(oldp+345,(vlSelf->tinygpu_top__DOT__u_counters__DOT__cycle_cur_q),32);
    bufp->fullIData(oldp+346,(vlSelf->tinygpu_top__DOT__u_counters__DOT__active_cur_q),32);
    bufp->fullIData(oldp+347,(vlSelf->tinygpu_top__DOT__u_counters__DOT__stall_cur_q),32);
    bufp->fullBit(oldp+348,(vlSelf->tinygpu_top__DOT__u_regs__DOT__done_sticky_q));
    bufp->fullBit(oldp+349,(vlSelf->tinygpu_top__DOT__reg_start_pulse));
    bufp->fullBit(oldp+350,(vlSelf->tinygpu_top__DOT__reg_soft_reset));
    bufp->fullBit(oldp+351,(vlSelf->tinygpu_top__DOT__cnt_cmd_start));
    bufp->fullCData(oldp+352,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__state_d),5);
    bufp->fullBit(oldp+353,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd));
    bufp->fullBit(oldp+354,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__latch_cmd_addr));
    bufp->fullBit(oldp+355,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_cmd_fields));
    bufp->fullBit(oldp+356,(vlSelf->tinygpu_top__DOT__u_cmd_ctrl__DOT__clear_status));
    bufp->fullIData(oldp+357,(vlSelf->tinygpu_top__DOT__u_regs__DOT__ctrl_next_w),32);
    bufp->fullIData(oldp+358,(vlSelf->tinygpu_top__DOT__u_regs__DOT__direct_op_next_w),32);
    bufp->fullIData(oldp+359,(vlSelf->tinygpu_top__DOT__u_regs__DOT__dim_m_next_w),32);
    bufp->fullIData(oldp+360,(vlSelf->tinygpu_top__DOT__u_regs__DOT__dim_n_next_w),32);
    bufp->fullIData(oldp+361,(vlSelf->tinygpu_top__DOT__u_regs__DOT__dim_k_next_w),32);
    bufp->fullIData(oldp+362,(vlSelf->tinygpu_top__DOT__u_regs__DOT__stride0_next_w),32);
    bufp->fullIData(oldp+363,(vlSelf->tinygpu_top__DOT__u_regs__DOT__stride1_next_w),32);
    bufp->fullIData(oldp+364,(vlSelf->tinygpu_top__DOT__u_regs__DOT__stride_dst_next_w),32);
    bufp->fullIData(oldp+365,(vlSelf->tinygpu_top__DOT__u_regs__DOT__shiftzp_next_w),32);
    bufp->fullBit(oldp+366,(vlSelf->clk));
    bufp->fullBit(oldp+367,(vlSelf->rst_n));
    bufp->fullBit(oldp+368,(vlSelf->mmio_valid));
    bufp->fullBit(oldp+369,(vlSelf->mmio_we));
    bufp->fullIData(oldp+370,(vlSelf->mmio_addr),32);
    bufp->fullIData(oldp+371,(vlSelf->mmio_wdata),32);
    bufp->fullCData(oldp+372,(vlSelf->mmio_wstrb),4);
    bufp->fullIData(oldp+373,(vlSelf->mmio_rdata),32);
    bufp->fullBit(oldp+374,(vlSelf->mmio_ready));
    bufp->fullBit(oldp+375,(vlSelf->mem_req));
    bufp->fullBit(oldp+376,(vlSelf->mem_we));
    bufp->fullIData(oldp+377,(vlSelf->mem_addr),32);
    bufp->fullIData(oldp+378,(vlSelf->mem_wdata),32);
    bufp->fullCData(oldp+379,(vlSelf->mem_wstrb),4);
    bufp->fullIData(oldp+380,(vlSelf->mem_rdata),32);
    bufp->fullBit(oldp+381,(vlSelf->mem_ready));
    bufp->fullBit(oldp+382,(vlSelf->mem_rvalid));
    bufp->fullBit(oldp+383,(vlSelf->irq));
    bufp->fullCData(oldp+384,((0xffU & vlSelf->mmio_addr)),8);
    bufp->fullIData(oldp+385,(0x20U),32);
    bufp->fullSData(oldp+386,(2U),16);
    bufp->fullSData(oldp+387,(8U),16);
    bufp->fullIData(oldp+388,(1U),32);
    bufp->fullIData(oldp+389,(3U),32);
    bufp->fullCData(oldp+390,(0U),2);
    bufp->fullCData(oldp+391,(2U),2);
    bufp->fullCData(oldp+392,(3U),2);
    bufp->fullCData(oldp+393,(0xeU),5);
    bufp->fullCData(oldp+394,(1U),2);
    bufp->fullCData(oldp+395,(0U),8);
    bufp->fullBit(oldp+396,(0U));
    bufp->fullIData(oldp+397,(0U),32);
    bufp->fullCData(oldp+398,(0U),4);
    bufp->fullIData(oldp+399,(0xffffff80U),32);
    bufp->fullIData(oldp+400,(0x7fU),32);
    bufp->fullIData(oldp+401,(0x100U),32);
    bufp->fullIData(oldp+402,(0x80U),32);
    bufp->fullIData(oldp+403,(2U),32);
    bufp->fullCData(oldp+404,(4U),8);
    bufp->fullCData(oldp+405,(8U),8);
    bufp->fullCData(oldp+406,(0xcU),8);
    bufp->fullCData(oldp+407,(0x10U),8);
    bufp->fullCData(oldp+408,(0x14U),8);
    bufp->fullCData(oldp+409,(0x18U),8);
    bufp->fullCData(oldp+410,(0x1cU),8);
    bufp->fullCData(oldp+411,(0x20U),8);
    bufp->fullCData(oldp+412,(0x24U),8);
    bufp->fullCData(oldp+413,(0x28U),8);
    bufp->fullCData(oldp+414,(0x2cU),8);
    bufp->fullCData(oldp+415,(0x30U),8);
    bufp->fullCData(oldp+416,(0x34U),8);
    bufp->fullCData(oldp+417,(0x38U),8);
    bufp->fullCData(oldp+418,(0x3cU),8);
    bufp->fullCData(oldp+419,(0x40U),8);
    bufp->fullCData(oldp+420,(0x44U),8);
    bufp->fullCData(oldp+421,(0x48U),8);
    bufp->fullCData(oldp+422,(0x4cU),8);
    bufp->fullCData(oldp+423,(0x50U),8);
    bufp->fullCData(oldp+424,(0x54U),8);
    bufp->fullIData(oldp+425,(8U),32);
    bufp->fullIData(oldp+426,(2U),32);
    bufp->fullIData(oldp+427,(4U),32);
    bufp->fullCData(oldp+428,(1U),8);
    bufp->fullCData(oldp+429,(2U),8);
    bufp->fullCData(oldp+430,(3U),8);
    bufp->fullCData(oldp+431,(5U),8);
    bufp->fullCData(oldp+432,(6U),8);
    bufp->fullIData(oldp+433,(0U),32);
    bufp->fullIData(oldp+434,(5U),32);
    bufp->fullIData(oldp+435,(6U),32);
}
