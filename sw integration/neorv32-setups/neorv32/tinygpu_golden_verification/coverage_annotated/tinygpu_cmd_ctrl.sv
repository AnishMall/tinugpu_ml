//      // verilator_coverage annotation
        module tinygpu_cmd_ctrl 
        import tinygpu_pkg::*; 
          #(
            parameter bit ENABLE_CONV = 1'b1
          )
        (
 017302   input  logic         clk,
%000007   input  logic         rst_n,
        
 000064   input  logic         start,
 000064   input  logic         start_direct_mode,
 000061   input  logic         soft_reset,
 000064   input  logic         direct_mode,
%000000   input  logic [31:0]  cmd_addr,
        
~000064   input  logic [7:0]   opcode,
~000064   input  logic [31:0]  flags,
~000064   input  logic [31:0]  src0_addr,
~000063   input  logic [31:0]  src1_addr,
%000000   input  logic [31:0]  bias_addr,
~000064   input  logic [31:0]  dst_addr,
~000025   input  logic [15:0]  M,
~000032   input  logic [15:0]  N,
~000028   input  logic [15:0]  K,
~000029   input  logic [15:0]  stride0,
~000032   input  logic [15:0]  stride1,
~000032   input  logic [15:0]  stride_dst,
%000000   input  logic [31:0]  scale,
%000000   input  logic [15:0]  shift,
%000000   input  logic [15:0]  zero_point,
%000008   input  logic [31:0]  conv_in_hw,
~000011   input  logic [31:0]  conv_channels,
~000011   input  logic [31:0]  conv_cfg,
        
 000064   output logic         busy,
 000064   output logic         done,
%000000   output logic         illegal_opcode,
%000000   output logic         shape_error,
%000000   output logic         memory_error,
%000000   output logic         unsupported_format,
        
 000064   output logic         cnt_cmd_start,
 000064   output logic         cnt_cmd_done,
 000064   output logic         cnt_busy,
 000100   output logic         cnt_active,
 000245   output logic         cnt_stall,
        
 001829   output logic         mem_req,
 000478   output logic         mem_we,
~001122   output logic [31:0]  mem_addr,
 000236   output logic [31:0]  mem_wdata,
 000478   output logic [3:0]   mem_wstrb,
 000116   input  logic [31:0]  mem_rdata,
 001836   input  logic         mem_ready,
 001357   input  logic         mem_rvalid
        );
        
          localparam logic [15:0] TILE_M_U16 = 16'(TILE_M);
          localparam logic [15:0] TILE_N_U16 = 16'(TILE_N);
          localparam logic [15:0] TILE_K_U16 = 16'(TILE_K);
          localparam int TILE_M_SHIFT = (TILE_M <= 1) ? 0 : $clog2(TILE_M);
          localparam int TILE_K_SHIFT = (TILE_K <= 1) ? 0 : $clog2(TILE_K);
        
          localparam logic [1:0] DMA_OP_LOAD_I8   = 2'd0;
          localparam logic [1:0] DMA_OP_STORE_I32 = 2'd2;
          localparam logic [1:0] DMA_OP_STORE_I8  = 2'd3;
          localparam logic [4:0] DESC_WORDS_BASE  = 5'd14;
          localparam logic [4:0] DESC_WORDS_CONV  = 5'd18;
        
          localparam logic [1:0] SPM_REGION_A = 2'd0;
          localparam logic [1:0] SPM_REGION_B = 2'd1;
          localparam logic [1:0] SPM_REGION_C = 2'd2;
        
 000352   cmd_state_e state_q, state_d;
        
~000064   logic [7:0]  opcode_q;
~000064   logic [31:0] flags_q;
%000000   logic [31:0] cmd_addr_q;
~000064   logic [31:0] src0_addr_q, src1_addr_q, bias_addr_q, dst_addr_q;
~000038   logic [15:0] M_q, N_q, K_q;
~000032   logic [15:0] stride0_q, stride1_q, stride_dst_q;
%000000   logic [31:0] scale_q;
%000000   logic [15:0] shift_q, zero_point_q;
~000011   logic [31:0] conv_in_hw_q, conv_channels_q, conv_cfg_q;
~000064   logic [7:0]  conv_desc_version_q;
        
~000016   logic [15:0] m0_q, m0_d;
%000000   logic [15:0] n0_q, n0_d;
%000000   logic [15:0] k0_q, k0_d;
~000108   logic [15:0] kk_q, kk_d;
~000126   logic [15:0] store_row_q, store_row_d;
~000128   logic [15:0] store_col_q, store_col_d;
%000000   logic [15:0] bias_col_q, bias_col_d;
%000004   logic [15:0] vec_idx_q, vec_idx_d;
%000000   logic [4:0]  desc_word_idx_q, desc_word_idx_d;
        
 000092   logic        store_stage_done_q;
 000092   logic        store_stage_done_d;
 000235   logic        dma_inflight_q;
 000235   logic        dma_inflight_d;
%000000   logic        bias_inflight_q;
%000000   logic        bias_inflight_d;
 000012   logic        vec_inflight_q;
 000012   logic        vec_inflight_d;
%000000   logic        desc_inflight_q;
%000000   logic        desc_inflight_d;
        
~000013   logic [15:0] conv_out_y_q, conv_out_y_d;
%000008   logic [15:0] conv_out_x_q, conv_out_x_d;
~000041   logic [3:0]  conv_kh_q, conv_kh_d;
%000000   logic [3:0]  conv_kw_q, conv_kw_d;
%000000   logic [15:0] conv_ic_q, conv_ic_d;
        
~000032   logic [15:0] active_tile_m;
~000038   logic [15:0] active_tile_n;
~000032   logic [15:0] active_tile_k;
        
 000064   logic [TILE_M-1:0] row_mask;
 000064   logic [TILE_N-1:0] col_mask;
        
~000108   logic [7:0] a_rd_addr [0:TILE_M-1];
 000088   logic [7:0] a_rd_data [0:TILE_M-1];
~000108   logic [7:0] b_rd_addr [0:TILE_N-1];
 000077   logic [7:0] b_rd_data [0:TILE_N-1];
        
 000088   logic signed [INT8_W-1:0] a_vec [0:TILE_M-1];
 000077   logic signed [INT8_W-1:0] b_vec [0:TILE_N-1];
          logic signed [ACC_W-1:0]  c_tile [0:TILE_M-1][0:TILE_N-1];
        
 000092   logic                     array_clear_acc;
 000092   logic                     array_mac_en;
        
 001189   logic                     spm_dma_wr_en;
 000092   logic [1:0]               spm_dma_region;
~000538   logic [8:0]               spm_dma_addr;
~000609   logic [31:0]              spm_dma_wdata;
~001189   logic [3:0]               spm_dma_wstrb;
 000842   logic [31:0]              spm_dma_rdata;
        
 001472   logic                     c_wr_en;
~000736   logic [7:0]               c_wr_addr;
 000233   logic [31:0]              c_wr_data;
%000000   logic [7:0]               c_rd_addr;
 000029   logic [31:0]              c_rd_data;
        
 000092   logic                     epi_start;
 000092   logic                     epi_busy;
 000092   logic                     epi_done;
%000000   logic                     epi_mul_start;
 000184   logic signed [ACC_W-1:0]  epi_mul_a;
%000000   logic signed [31:0]       epi_mul_b;
%000000   logic signed [ACC_W-1:0]  bias_vec [0:TILE_N-1];
 001472   logic                     epi_out_valid;
~000736   logic [7:0]               epi_out_index;
 000184   logic signed [ACC_W-1:0]  epi_out_i32;
 000184   logic signed [INT8_W-1:0] epi_out_i8;
          logic signed [ACC_W-1:0]  epi_shadow_i32 [0:TILE_M-1][0:TILE_N-1];
~000029   logic signed [INT8_W-1:0] epi_shadow_i8 [0:TILE_M-1][0:TILE_N-1];
%000003   logic signed [INT8_W-1:0] vec_x_q;
%000002   logic signed [INT8_W-1:0] vec_y_q;
%000005   logic signed [ACC_W-1:0]  vec_result_raw;
%000004   logic signed [ACC_W-1:0]  vec_result_post;
%000004   logic signed [INT8_W-1:0] vec_result_i8;
%000000   logic signed [31:0]        zero_point_ext;
%000004   logic [31:0]              vec_store_addr_q;
%000004   logic [31:0]              vec_store_wdata_q;
%000002   logic [3:0]               vec_store_wstrb_q;
%000004   logic signed [ACC_W-1:0]  vec_result_raw_q;   // pipeline stage 1
%000004   logic signed [ACC_W-1:0]  vec_result_post_q;  // pipeline stage 2
%000000   logic signed [ACC_W-1:0]  vec_scaled_q;        // pipeline stage 3
%000000   logic                     vec_mul_start;
%000000   logic                     vec_mul_busy;
%000000   logic                     vec_mul_done;
%000000   logic signed [ACC_W-1:0]  vec_mul_product;
%000000   logic                     shared_mul_start;
%000000   logic                     shared_mul_busy;
%000000   logic                     shared_mul_done;
%000000   logic signed [ACC_W-1:0]  shared_mul_product;
%000004   logic signed [ACC_W-1:0]  shared_mul_a;
%000000   logic signed [31:0]       shared_mul_b;
        
 000235   logic                     dma_start;
 000235   logic                     dma_busy_status;
 000235   logic                     dma_done;
%000000   logic                     dma_error;
 001659   logic                     dma_mem_req;
 000470   logic                     dma_mem_we;
~001110   logic [31:0]              dma_mem_addr;
 000233   logic [31:0]              dma_mem_wdata;
 000470   logic [3:0]               dma_mem_wstrb;
%000000   logic                     bias_mem_req;
%000000   logic                     bias_mem_we;
%000000   logic [31:0]              bias_mem_addr_mux;
%000000   logic [31:0]              bias_mem_wdata;
%000000   logic [3:0]               bias_mem_wstrb;
 000014   logic                     vec_mem_req;
%000008   logic                     vec_mem_we;
~000012   logic [31:0]              vec_mem_addr;
%000004   logic [31:0]              vec_mem_wdata;
%000008   logic [3:0]               vec_mem_wstrb;
%000000   logic                     desc_mem_req;
%000000   logic                     desc_mem_we;
%000000   logic [31:0]              desc_mem_addr;
%000000   logic [31:0]              desc_mem_wdata;
%000000   logic [3:0]               desc_mem_wstrb;
 000235   logic                     dma_launch_pending_q;
 000235   logic                     dma_launch_pending_d;
~000092   logic [1:0]               dma_op_kind_q;
~000143   logic [31:0]              dma_base_addr_q;
~000088   logic [15:0]              dma_rows_q;
~000046   logic [15:0]              dma_cols_q;
~000099   logic [15:0]              dma_stride_bytes_q;
 000092   logic [1:0]               dma_spm_region_q;
%000000   logic [8:0]               dma_spm_base_q;
        
 000041   logic                     conv_start;
 000041   logic                     conv_start_q;
 000041   logic                     conv_busy_status;
 000041   logic                     conv_done;
%000000   logic                     conv_error;
 000041   logic                     conv_inflight_q;
 000041   logic                     conv_inflight_d;
 000156   logic                     conv_mem_req;
~000064   logic [31:0]              conv_mem_addr;
~000051   logic [2:0]               mem_client_sel;
 000116   logic [31:0]              client_mem_rdata;
 001711   logic                     dma_mem_ready;
 001189   logic                     dma_mem_rvalid;
%000000   logic                     desc_mem_ready;
%000000   logic                     desc_mem_rvalid;
 000197   logic                     conv_mem_ready;
 000156   logic                     conv_mem_rvalid;
 000028   logic                     vec_mem_ready;
 000012   logic                     vec_mem_rvalid;
%000000   logic                     bias_mem_ready;
%000000   logic                     bias_mem_rvalid;
 000156   logic                     conv_spm_wr_en;
~000078   logic [8:0]               conv_spm_addr;
~000046   logic [31:0]              conv_spm_wdata;
%000001   logic [3:0]               conv_spm_wstrb;
~000015   logic [15:0]              conv_next_out_y;
%000008   logic [15:0]              conv_next_out_x;
%000002   logic [3:0]               conv_next_kh;
%000000   logic [3:0]               conv_next_kw;
%000000   logic [15:0]              conv_next_ic;
        
 000064   logic        latch_cmd;
 000064   logic        latch_cmd_addr;
%000000   logic        clear_cmd_fields;
%000000   logic        load_desc_word;
%000008   logic        latch_vec_store_cmd;
 000235   logic        latch_dma_cmd;
 000064   logic        clear_status;
%000000   logic        set_illegal_opcode;
%000000   logic        set_shape_error;
%000000   logic        set_memory_error;
%000000   logic        set_unsupported_format;
        
 000064   logic        opcode_ok;
%000001   logic        dst_flags_ok;
 000064   logic        dims_ok;
%000000   logic        more_k_tiles;
%000000   logic        more_n_tiles;
 000020   logic        more_m_tiles;
%000000   logic        use_dst_i8;
 000146   logic        store_stage_last;
 000092   logic        clear_bias_regs;
%000000   logic        load_bias_reg;
%000008   logic        load_vec_x_reg;
%000004   logic        load_vec_y_reg;
%000002   logic        is_vector_opcode;
%000002   logic        is_vector_opcode_q;
 000011   logic        is_conv_opcode;
%000001   logic        vec_needs_y;
%000008   logic        latch_vec_raw;
%000008   logic        latch_vec_post;
%000000   logic        latch_vec_scaled;
%000000   logic        state_is_bias;
 000010   logic        state_is_vec;
%000000   logic        state_is_desc;
 000041   logic        state_is_conv;
~000038   logic [15:0] effective_n;
~000038   logic [15:0] effective_n_q;
~000064   logic [31:0] src0_row_base_q;
~000064   logic [31:0] src0_row_base_d;
~000063   logic [31:0] src1_k_base_q;
~000063   logic [31:0] src1_k_base_d;
%000000   logic [31:0] src1_n_offset_q;
%000000   logic [31:0] src1_n_offset_d;
~000064   logic [31:0] dst_row_base_q;
~000064   logic [31:0] dst_row_base_d;
%000000   logic [31:0] dst_n_offset_q;
%000000   logic [31:0] dst_n_offset_d;
%000000   logic [31:0] bias_base_q;
%000000   logic [31:0] bias_base_d;
~000029   logic [31:0] src0_m_step_q;
~000029   logic [31:0] src0_m_step_d;
~000037   logic [31:0] stride1_k_step_q;
~000037   logic [31:0] stride1_k_step_d;
~000038   logic [31:0] dst_m_step_q;
~000038   logic [31:0] dst_m_step_d;
~000064   logic [31:0] dst_n_step_q;
~000064   logic [31:0] dst_n_step_d;
~000064   logic [31:0] bias_n_step_q;
~000064   logic [31:0] bias_n_step_d;
        
~000064   logic [31:0] dma_store_base_addr;
%000000   logic [31:0] bias_mem_addr;
~000034   logic [15:0] vec_src0_stride_bytes;
~000032   logic [15:0] vec_src1_stride_bytes;
~000032   logic [15:0] vec_dst_stride_bytes;
~000064   logic [31:0] vec_src0_elem_addr;
~000063   logic [31:0] vec_src1_elem_addr;
~000064   logic [31:0] vec_dst_elem_addr;
~000064   logic [31:0] vec_store_aligned_addr;
~000064   logic [31:0] vec_src0_read_addr;
~000063   logic [31:0] vec_src1_read_addr;
%000002   logic [1:0]  vec_src0_lane_sel;
%000002   logic [1:0]  vec_src1_lane_sel;
 000105   logic [7:0]  vec_load_byte;
~000064   logic [31:0] vec_store_addr_next;
%000004   logic [31:0] vec_store_wdata_next;
%000001   logic [3:0]  vec_store_wstrb_next;
~000092   logic [1:0]  dma_op_kind_cmd_n;
~000184   logic [31:0] dma_base_addr_cmd_n;
~000099   logic [15:0] dma_rows_cmd_n;
~000142   logic [15:0] dma_cols_cmd_n;
~000099   logic [15:0] dma_stride_bytes_cmd_n;
 000092   logic [1:0]  dma_spm_region_cmd_n;
%000000   logic [8:0]  dma_spm_base_cmd_n;
        
%000006   logic [15:0] conv_input_h;
%000008   logic [15:0] conv_input_w;
~000011   logic [15:0] conv_input_c;
~000011   logic [15:0] conv_output_c;
~000011   logic [3:0]  conv_kernel_h;
~000011   logic [3:0]  conv_kernel_w;
~000011   logic [3:0]  conv_stride_h;
~000011   logic [3:0]  conv_stride_w;
%000000   logic [3:0]  conv_pad_h;
%000000   logic [3:0]  conv_pad_w;
%000009   logic [31:0] conv_out_h_calc;
%000008   logic [31:0] conv_out_w_calc;
~000011   logic [31:0] conv_m_calc;
~000011   logic [31:0] conv_k_calc;
~000035   logic [31:0] conv_input_row_stride;
~000037   logic [15:0] stride1_eff;
~000038   logic [15:0] stride_dst_eff;
 000011   logic        conv_shape_ok;
~000011   logic [4:0]  desc_words_expected;
        
 000023   logic unused_c_rd_data;
        
 103821   function automatic signed [INT8_W-1:0] sat_i8(input signed [31:0] x);
 103821     begin
%000000       if (x > 32'sd127)
%000000         sat_i8 = 8'sd127;
~103821       else if (x < -32'sd128)
%000000         sat_i8 = -8'sd128;
              else
 103821         sat_i8 = x[INT8_W-1:0];
            end
          endfunction
        
%000000   function automatic signed [31:0] clamp32(
            input signed [31:0] x,
            input signed [31:0] lo,
            input signed [31:0] hi
          );
%000000     begin
%000000       if (x < lo)
%000000         clamp32 = lo;
%000000       else if (x > hi)
%000000         clamp32 = hi;
              else
%000000         clamp32 = x;
            end
          endfunction
        
          assign unused_c_rd_data   = ^c_rd_data;
        
          assign use_dst_i8     = flags_q[FLAG_DST_INT8];
          assign conv_start     = conv_start_q;
          assign is_vector_opcode = is_vector_opcode_q;
          assign is_conv_opcode = ENABLE_CONV && (opcode_q == OP_CONV2D);
          assign vec_needs_y    = (opcode_q == OP_VEC_ADD) || (opcode_q == OP_VEC_MUL);
          assign effective_n    = effective_n_q;
          assign more_k_tiles   = ((k0_q + active_tile_k) < K_q);
          assign more_n_tiles   = ((n0_q + TILE_N_U16) < effective_n);
          assign more_m_tiles   = ((m0_q + TILE_M_U16) < M_q);
          assign store_stage_last = (store_row_q + 16'd1 >= active_tile_m) &&
                                    (store_col_q + 16'd1 >= active_tile_n);
        
          assign dma_store_base_addr = dst_row_base_q + dst_n_offset_q;
          assign bias_mem_addr = bias_base_q + {14'd0, bias_col_q, 2'b00};
          assign zero_point_ext = {{16{zero_point_q[15]}}, zero_point_q};
          assign desc_mem_addr = cmd_addr_q + {25'd0, desc_word_idx_q, 2'b00};
          assign state_is_bias = (state_q == S_LOAD_BIAS);
          assign state_is_vec  = (state_q == S_VEC_LOAD_X) || (state_q == S_VEC_LOAD_Y) || (state_q == S_VEC_STORE);
          assign state_is_desc  = (state_q == S_DESC_LOAD);
          assign state_is_conv  = (state_q == S_CONV_LOAD_A);
~103821   assign mem_client_sel = state_is_desc ? 3'd1 :
 096531                           state_is_conv ? 3'd2 :
 096123                           state_is_vec  ? 3'd3 :
~096123                           state_is_bias ? 3'd4 : 3'd0;
 066126   assign vec_src0_stride_bytes = (stride0_q != 16'd0) ? stride0_q : 16'd1;
 066126   assign vec_src1_stride_bytes = (stride1_q != 16'd0) ? stride1_q : 16'd1;
~066126   assign vec_dst_stride_bytes  = (stride_dst_q != 16'd0) ? stride_dst_q : (use_dst_i8 ? 16'd1 : 16'd4);
          assign vec_src0_elem_addr = src0_addr_q + (vec_idx_q * vec_src0_stride_bytes);
          assign vec_src1_elem_addr = src1_addr_q + (vec_idx_q * vec_src1_stride_bytes);
          assign vec_dst_elem_addr  = dst_addr_q  + (vec_idx_q * vec_dst_stride_bytes);
~103821   assign vec_store_aligned_addr = use_dst_i8 ? {vec_dst_elem_addr[31:2], 2'b00} : vec_dst_elem_addr;
          assign vec_src0_read_addr = {vec_src0_elem_addr[31:2], 2'b00};
          assign vec_src1_read_addr = {vec_src1_elem_addr[31:2], 2'b00};
          assign vec_src0_lane_sel  = vec_src0_elem_addr[1:0];
          assign vec_src1_lane_sel  = vec_src1_elem_addr[1:0];
        
          assign conv_input_h = conv_in_hw_q[31:16];
          assign conv_input_w = conv_in_hw_q[15:0];
          assign conv_output_c = conv_channels_q[31:16];
          assign conv_input_c = conv_channels_q[15:0];
          assign conv_kernel_w = conv_cfg_q[3:0];
          assign conv_kernel_h = conv_cfg_q[7:4];
          assign conv_stride_w = conv_cfg_q[11:8];
          assign conv_stride_h = conv_cfg_q[15:12];
          assign conv_pad_w = conv_cfg_q[19:16];
          assign conv_pad_h = conv_cfg_q[23:20];
          assign conv_out_h_calc = (({16'd0, conv_input_h} + ({28'd0, conv_pad_h} << 1) - {28'd0, conv_kernel_h}) >>
                                    ((conv_stride_h == 4'd2) ? 1 : 0)) + 32'd1;
          assign conv_out_w_calc = (({16'd0, conv_input_w} + ({28'd0, conv_pad_w} << 1) - {28'd0, conv_kernel_w}) >>
                                    ((conv_stride_w == 4'd2) ? 1 : 0)) + 32'd1;
          assign conv_m_calc = conv_out_h_calc * conv_out_w_calc;
          assign conv_k_calc = conv_kernel_h * conv_kernel_w * conv_input_c;
 066126   assign conv_input_row_stride = (stride0_q != 0) ? {16'd0, stride0_q} : ({16'd0, conv_input_w} * {16'd0, conv_input_c});
~076613   assign stride1_eff = is_conv_opcode ? ((stride1_q != 0) ? stride1_q : conv_output_c) : stride1_q;
~076613   assign stride_dst_eff = is_conv_opcode ? ((stride_dst_q != 0) ? stride_dst_q :
~076613                           (use_dst_i8 ? conv_output_c : (conv_output_c << 2))) : stride_dst_q;
 076613   assign desc_words_expected = (opcode_q == OP_CONV2D) ? DESC_WORDS_CONV : DESC_WORDS_BASE;
          assign conv_shape_ok = ENABLE_CONV &&
                                 (conv_input_h != 0) && (conv_input_w != 0) &&
                                 (conv_input_c != 0) && (conv_output_c != 0) &&
                                 (((conv_kernel_h == 1) && (conv_kernel_w == 1)) ||
                                  ((conv_kernel_h == 3) && (conv_kernel_w == 3))) &&
                                 ((conv_stride_h == 1) || (conv_stride_h == 2)) &&
                                 ((conv_stride_w == 1) || (conv_stride_w == 2)) &&
                                 (conv_pad_h <= 1) && (conv_pad_w <= 1) &&
                                 (conv_cfg_q[31:24] == 0) &&
                                 ({16'd0, conv_input_h} + ({28'd0, conv_pad_h} << 1) >= {28'd0, conv_kernel_h}) &&
                                 ({16'd0, conv_input_w} + ({28'd0, conv_pad_w} << 1) >= {28'd0, conv_kernel_w}) &&
                                 (conv_m_calc != 0) && (conv_m_calc <= 32'h0000_ffff) &&
                                 (conv_k_calc != 0) && (conv_k_calc <= 32'h0000_ffff) &&
                                 (direct_mode || (conv_desc_version_q == ABI_VERSION));
        
 103821   always @* begin
 103821     vec_store_addr_next = vec_store_aligned_addr;
 103821     vec_store_wdata_next = vec_result_post_q;
 103821     vec_store_wstrb_next = 4'b1111;
        
~103821     if (use_dst_i8) begin
%000000       case (vec_dst_elem_addr[1:0])
%000000         2'd0: begin
%000000           vec_store_wdata_next = {24'd0, vec_result_i8};
%000000           vec_store_wstrb_next = 4'b0001;
                end
%000000         2'd1: begin
%000000           vec_store_wdata_next = {16'd0, vec_result_i8, 8'd0};
%000000           vec_store_wstrb_next = 4'b0010;
                end
%000000         2'd2: begin
%000000           vec_store_wdata_next = {8'd0, vec_result_i8, 16'd0};
%000000           vec_store_wstrb_next = 4'b0100;
                end
%000000         default: begin
%000000           vec_store_wdata_next = {vec_result_i8, 24'd0};
%000000           vec_store_wstrb_next = 4'b1000;
                end
              endcase
            end
          end
        
          tinygpu_spm u_spm (
            .clk        (clk),
            .rst_n      (rst_n),
            .dma_wr_en  (state_is_conv ? conv_spm_wr_en : spm_dma_wr_en),
            .dma_region (state_is_conv ? SPM_REGION_A : spm_dma_region),
            .dma_addr   (state_is_conv ? conv_spm_addr : spm_dma_addr),
            .dma_wdata  (state_is_conv ? conv_spm_wdata : spm_dma_wdata),
            .dma_wstrb  (state_is_conv ? conv_spm_wstrb : spm_dma_wstrb),
            .dma_rdata  (spm_dma_rdata),
            .a_rd_addr  (a_rd_addr),
            .a_rd_data  (a_rd_data),
            .b_rd_addr  (b_rd_addr),
            .b_rd_data  (b_rd_data),
            .c_wr_en    (c_wr_en),
            .c_wr_addr  (c_wr_addr),
            .c_wr_data  (c_wr_data),
            .c_rd_addr  (c_rd_addr),
            .c_rd_data  (c_rd_data)
          );
        
          tinygpu_mem_arbiter u_mem_arbiter (
            .select_i       (mem_client_sel),
            .dma_req_i      (dma_mem_req),
            .dma_we_i       (dma_mem_we),
            .dma_addr_i     (dma_mem_addr),
            .dma_wdata_i    (dma_mem_wdata),
            .dma_wstrb_i    (dma_mem_wstrb),
            .desc_req_i     (desc_mem_req),
            .desc_we_i      (desc_mem_we),
            .desc_addr_i    (desc_mem_addr),
            .desc_wdata_i   (desc_mem_wdata),
            .desc_wstrb_i   (desc_mem_wstrb),
            .conv_req_i     (conv_mem_req),
            .conv_addr_i    (conv_mem_addr),
            .vec_req_i      (vec_mem_req),
            .vec_we_i       (vec_mem_we),
            .vec_addr_i     (vec_mem_addr),
            .vec_wdata_i    (vec_mem_wdata),
            .vec_wstrb_i    (vec_mem_wstrb),
            .bias_req_i     (bias_mem_req),
            .bias_we_i      (bias_mem_we),
            .bias_addr_i    (bias_mem_addr_mux),
            .bias_wdata_i   (bias_mem_wdata),
            .bias_wstrb_i   (bias_mem_wstrb),
            .mem_req_o      (mem_req),
            .mem_we_o       (mem_we),
            .mem_addr_o     (mem_addr),
            .mem_wdata_o    (mem_wdata),
            .mem_wstrb_o    (mem_wstrb),
            .mem_rdata_i    (mem_rdata),
            .mem_ready_i    (mem_ready),
            .mem_rvalid_i   (mem_rvalid),
            .client_rdata_o (client_mem_rdata),
            .dma_ready_o    (dma_mem_ready),
            .dma_rvalid_o   (dma_mem_rvalid),
            .desc_ready_o   (desc_mem_ready),
            .desc_rvalid_o  (desc_mem_rvalid),
            .conv_ready_o   (conv_mem_ready),
            .conv_rvalid_o  (conv_mem_rvalid),
            .vec_ready_o    (vec_mem_ready),
            .vec_rvalid_o   (vec_mem_rvalid),
            .bias_ready_o   (bias_mem_ready),
            .bias_rvalid_o  (bias_mem_rvalid)
          );
        
          tinygpu_im2col_loader u_im2col (
            .clk              (clk),
            .rst_n            (rst_n),
            .start            (conv_start),
            .busy             (conv_busy_status),
            .done             (conv_done),
            .error            (conv_error),
            .input_base       (src0_addr_q),
            .input_h          (conv_input_h),
            .input_w          (conv_input_w),
            .input_c          (conv_input_c),
            .input_row_stride (conv_input_row_stride),
            .kernel_h         (conv_kernel_h),
            .kernel_w         (conv_kernel_w),
            .stride_h         (conv_stride_h),
            .stride_w         (conv_stride_w),
            .pad_h            (conv_pad_h),
            .pad_w            (conv_pad_w),
            .tile_out_y       (conv_out_y_q),
            .tile_out_x       (conv_out_x_q),
            .output_w         (conv_out_w_calc[15:0]),
            .active_rows      (active_tile_m),
            .active_k         (active_tile_k),
            .start_kh         (conv_kh_q),
            .start_kw         (conv_kw_q),
            .start_ic         (conv_ic_q),
            .next_out_y       (conv_next_out_y),
            .next_out_x       (conv_next_out_x),
            .next_kh          (conv_next_kh),
            .next_kw          (conv_next_kw),
            .next_ic          (conv_next_ic),
            .mem_req          (conv_mem_req),
            .mem_addr         (conv_mem_addr),
            .mem_rdata        (client_mem_rdata),
            .mem_ready        (conv_mem_ready),
            .mem_rvalid       (conv_mem_rvalid),
            .spm_wr_en        (conv_spm_wr_en),
            .spm_addr         (conv_spm_addr),
            .spm_wdata        (conv_spm_wdata),
            .spm_wstrb        (conv_spm_wstrb)
          );
        
          tinygpu_dma u_dma (
            .clk          (clk),
            .rst_n        (rst_n),
            .start        (dma_start),
            .busy         (dma_busy_status),
            .done         (dma_done),
            .error        (dma_error),
            .op_kind      (dma_op_kind_q),
            .base_addr    (dma_base_addr_q),
            .rows         (dma_rows_q),
            .cols         (dma_cols_q),
            .stride_bytes (dma_stride_bytes_q),
            .spm_region   (dma_spm_region_q),
            .spm_base     (dma_spm_base_q),
            .mem_req      (dma_mem_req),
            .mem_we       (dma_mem_we),
            .mem_addr     (dma_mem_addr),
            .mem_wdata    (dma_mem_wdata),
            .mem_wstrb    (dma_mem_wstrb),
            .mem_rdata    (client_mem_rdata),
            .mem_ready    (dma_mem_ready),
            .mem_rvalid   (dma_mem_rvalid),
            .spm_wr_en    (spm_dma_wr_en),
            .spm_region_o (spm_dma_region),
            .spm_addr     (spm_dma_addr),
            .spm_wdata    (spm_dma_wdata),
            .spm_wstrb    (spm_dma_wstrb),
            .spm_rdata    (spm_dma_rdata)
          );
        
          tinygpu_array4x4 u_array4x4 (
            .clk       (clk),
            .rst_n     (rst_n),
            .clear_acc (array_clear_acc),
            .mac_en    (array_mac_en),
            .a_vec     (a_vec),
            .b_vec     (b_vec),
            .row_mask  (row_mask),
            .col_mask  (col_mask),
            .c_tile    (c_tile)
          );
        
          tinygpu_epilogue_shared u_epilogue (
            .clk        (clk),
            .rst_n      (rst_n),
            .start      (epi_start),
            .busy       (epi_busy),
            .done       (epi_done),
            .flags      (flags_q),
            .scale      (scale_q),
            .shift      (shift_q),
            .zero_point (zero_point_q),
            .c_in       (c_tile),
            .bias       (bias_vec),
            .row_mask   (row_mask),
            .col_mask   (col_mask),
            .mul_start  (epi_mul_start),
            .mul_a      (epi_mul_a),
            .mul_b      (epi_mul_b),
            .mul_done   (shared_mul_done),
            .mul_product(shared_mul_product),
            .out_valid  (epi_out_valid),
            .out_index  (epi_out_index),
            .out_i32    (epi_out_i32),
            .out_i8     (epi_out_i8),
            .c_out_i32  (epi_shadow_i32),
            .c_out_i8   (epi_shadow_i8)
          );
        
          tinygpu_vec_alu u_vec_alu (
            .opcode (opcode_q),
            .x_i    (vec_x_q),
            .y_i    (vec_y_q),
            .z_o    (vec_result_raw)
          );
        
          tinygpu_shared_mul #(
            .A_W   (ACC_W),
            .B_W   (32),
            .OUT_W (ACC_W)
          ) u_shared_mul (
            .clk       (clk),
            .rst_n     (rst_n),
            .start     (shared_mul_start),
            .a_i       (shared_mul_a),
            .b_i       (shared_mul_b),
            .busy      (shared_mul_busy),
            .done      (shared_mul_done),
            .product_o (shared_mul_product)
          );
        
          assign shared_mul_start = epi_mul_start | vec_mul_start;
~103821   assign shared_mul_a     = epi_mul_start ? epi_mul_a : vec_result_post_q;
~103821   assign shared_mul_b     = epi_mul_start ? epi_mul_b : scale_q;
          assign vec_mul_busy     = shared_mul_busy;
          assign vec_mul_done     = shared_mul_done;
          assign vec_mul_product  = shared_mul_product;
        
 103821   always @* begin
 103821     case (state_q)
 000096       S_VEC_LOAD_Y: begin
 000096         case (vec_src1_lane_sel)
 000024           2'd0: vec_load_byte = client_mem_rdata[7:0];
 000024           2'd1: vec_load_byte = client_mem_rdata[15:8];
 000024           2'd2: vec_load_byte = client_mem_rdata[23:16];
 000024           default: vec_load_byte = client_mem_rdata[31:24];
                endcase
              end
 103725       default: begin
 103725         case (vec_src0_lane_sel)
 103545           2'd0: vec_load_byte = client_mem_rdata[7:0];
 000060           2'd1: vec_load_byte = client_mem_rdata[15:8];
 000060           2'd2: vec_load_byte = client_mem_rdata[23:16];
 000060           default: vec_load_byte = client_mem_rdata[31:24];
                endcase
              end
            endcase
          end
        
 103821   always @* begin
 103821     vec_result_post = vec_result_raw_q;
        
~103821     if (flags_q[FLAG_RELU_EN] && (vec_result_post < 0))
%000000       vec_result_post = 32'sd0;
        
~103821     if (flags_q[FLAG_CLAMP_EN])
%000000       vec_result_post = clamp32(vec_result_post, -32'sd128, 32'sd127);
        
~103821     if (flags_q[FLAG_REQUANT_EN]) begin
%000000       if ($signed(shift_q) >= 0)
%000000         vec_result_i8 = sat_i8(($signed(vec_scaled_q) >>> shift_q) + zero_point_ext);
              else
%000000         vec_result_i8 = sat_i8(($signed(vec_scaled_q) <<< (-$signed(shift_q))) + zero_point_ext);
 103821     end else begin
 103821       vec_result_i8 = sat_i8(vec_result_post_q);  // use registered value
            end
          end
        
 017308   always_ff @(posedge clk or negedge rst_n) begin
 017274     if (!rst_n) begin
 000034       state_q           <= S_IDLE;
 000034       opcode_q          <= '0;
 000034       flags_q           <= '0;
 000034       cmd_addr_q        <= '0;
 000034       src0_addr_q       <= '0;
 000034       src1_addr_q       <= '0;
 000034       bias_addr_q       <= '0;
 000034       dst_addr_q        <= '0;
 000034       M_q               <= '0;
 000034       N_q               <= '0;
 000034       K_q               <= '0;
 000034       stride0_q         <= '0;
 000034       stride1_q         <= '0;
 000034       stride_dst_q      <= '0;
 000034       scale_q           <= '0;
 000034       shift_q           <= '0;
 000034       zero_point_q      <= '0;
 000034       conv_in_hw_q      <= '0;
 000034       conv_channels_q   <= '0;
 000034       conv_cfg_q        <= '0;
 000034       conv_desc_version_q <= '0;
 000034       effective_n_q     <= '0;
 000034       m0_q              <= '0;
 000034       n0_q              <= '0;
 000034       k0_q              <= '0;
 000034       kk_q              <= '0;
 000034       store_row_q       <= '0;
 000034       store_col_q       <= '0;
 000034       bias_col_q        <= '0;
 000034       vec_idx_q         <= '0;
 000034       desc_word_idx_q   <= '0;
 000034       store_stage_done_q <= 1'b0;
 000034       dma_inflight_q    <= 1'b0;
 000034       bias_inflight_q   <= 1'b0;
 000034       vec_inflight_q    <= 1'b0;
 000034       desc_inflight_q   <= 1'b0;
 000034       conv_inflight_q   <= 1'b0;
 000034       conv_start_q      <= 1'b0;
 000034       conv_out_y_q      <= '0;
 000034       conv_out_x_q      <= '0;
 000034       conv_kh_q         <= '0;
 000034       conv_kw_q         <= '0;
 000034       conv_ic_q         <= '0;
 000034       dma_launch_pending_q <= 1'b0;
 000034       dma_op_kind_q     <= '0;
 000034       dma_base_addr_q   <= '0;
 000034       dma_rows_q        <= '0;
 000034       dma_cols_q        <= '0;
 000034       dma_stride_bytes_q <= '0;
 000034       dma_spm_region_q  <= '0;
 000034       dma_spm_base_q    <= '0;
 000034       vec_x_q           <= '0;
 000034       vec_y_q           <= '0;
 000034       vec_result_raw_q  <= '0;
 000034       vec_result_post_q <= '0;
 000034       vec_scaled_q      <= '0;
 000034       is_vector_opcode_q <= 1'b0;
 000034       src0_row_base_q   <= '0;
 000034       src1_k_base_q     <= '0;
 000034       src1_n_offset_q   <= '0;
 000034       dst_row_base_q    <= '0;
 000034       dst_n_offset_q    <= '0;
 000034       bias_base_q       <= '0;
 000034       src0_m_step_q     <= '0;
 000034       stride1_k_step_q  <= '0;
 000034       dst_m_step_q      <= '0;
 000034       dst_n_step_q      <= '0;
 000034       bias_n_step_q     <= '0;
 000034       vec_store_addr_q  <= '0;
 000034       vec_store_wdata_q <= '0;
 000034       vec_store_wstrb_q <= '0;
 000136       for (int c = 0; c < TILE_N; c++) begin
 000136         bias_vec[c] <= '0;
              end
 017213     end else if (soft_reset) begin
 000061       state_q           <= S_IDLE;
 000061       opcode_q          <= '0;
 000061       flags_q           <= '0;
 000061       cmd_addr_q        <= '0;
 000061       src0_addr_q       <= '0;
 000061       src1_addr_q       <= '0;
 000061       bias_addr_q       <= '0;
 000061       dst_addr_q        <= '0;
 000061       M_q               <= '0;
 000061       N_q               <= '0;
 000061       K_q               <= '0;
 000061       stride0_q         <= '0;
 000061       stride1_q         <= '0;
 000061       stride_dst_q      <= '0;
 000061       scale_q           <= '0;
 000061       shift_q           <= '0;
 000061       zero_point_q      <= '0;
 000061       conv_in_hw_q      <= '0;
 000061       conv_channels_q   <= '0;
 000061       conv_cfg_q        <= '0;
 000061       conv_desc_version_q <= '0;
 000061       effective_n_q     <= '0;
 000061       m0_q              <= '0;
 000061       n0_q              <= '0;
 000061       k0_q              <= '0;
 000061       kk_q              <= '0;
 000061       store_row_q       <= '0;
 000061       store_col_q       <= '0;
 000061       bias_col_q        <= '0;
 000061       vec_idx_q         <= '0;
 000061       desc_word_idx_q   <= '0;
 000061       store_stage_done_q <= 1'b0;
 000061       dma_inflight_q    <= 1'b0;
 000061       bias_inflight_q   <= 1'b0;
 000061       vec_inflight_q    <= 1'b0;
 000061       desc_inflight_q   <= 1'b0;
 000061       conv_inflight_q   <= 1'b0;
 000061       conv_start_q      <= 1'b0;
 000061       conv_out_y_q      <= '0;
 000061       conv_out_x_q      <= '0;
 000061       conv_kh_q         <= '0;
 000061       conv_kw_q         <= '0;
 000061       conv_ic_q         <= '0;
 000061       dma_launch_pending_q <= 1'b0;
 000061       dma_op_kind_q     <= '0;
 000061       dma_base_addr_q   <= '0;
 000061       dma_rows_q        <= '0;
 000061       dma_cols_q        <= '0;
 000061       dma_stride_bytes_q <= '0;
 000061       dma_spm_region_q  <= '0;
 000061       dma_spm_base_q    <= '0;
 000061       vec_x_q           <= '0;
 000061       vec_y_q           <= '0;
 000061       vec_store_addr_q  <= '0;
 000061       vec_store_wdata_q <= '0;
 000061       vec_store_wstrb_q <= '0;
 000061       vec_result_raw_q  <= '0;
 000061       vec_result_post_q <= '0;
 000061       vec_scaled_q      <= '0;
 000061       is_vector_opcode_q <= 1'b0;
 000061       src0_row_base_q   <= '0;
 000061       src1_k_base_q     <= '0;
 000061       src1_n_offset_q   <= '0;
 000061       dst_row_base_q    <= '0;
 000061       dst_n_offset_q    <= '0;
 000061       bias_base_q       <= '0;
 000061       src0_m_step_q     <= '0;
 000061       stride1_k_step_q  <= '0;
 000061       dst_m_step_q      <= '0;
 000061       dst_n_step_q      <= '0;
 000061       bias_n_step_q     <= '0;
 000244       for (int c = 0; c < TILE_N; c++) begin
 000244         bias_vec[c] <= '0;
              end
 017213     end else begin
 017213       state_q            <= state_d;
 017213       m0_q               <= m0_d;
 017213       n0_q               <= n0_d;
 017213       k0_q               <= k0_d;
 017213       kk_q               <= kk_d;
 017213       store_row_q        <= store_row_d;
 017213       store_col_q        <= store_col_d;
 017213       bias_col_q         <= bias_col_d;
 017213       vec_idx_q          <= vec_idx_d;
 017213       desc_word_idx_q    <= desc_word_idx_d;
 017213       store_stage_done_q <= store_stage_done_d;
 017213       src0_row_base_q    <= src0_row_base_d;
 017213       src1_k_base_q      <= src1_k_base_d;
 017213       src1_n_offset_q    <= src1_n_offset_d;
 017213       dst_row_base_q     <= dst_row_base_d;
 017213       dst_n_offset_q     <= dst_n_offset_d;
 017213       bias_base_q        <= bias_base_d;
 017213       src0_m_step_q      <= src0_m_step_d;
 017213       stride1_k_step_q   <= stride1_k_step_d;
 017213       dst_m_step_q       <= dst_m_step_d;
 017213       dst_n_step_q       <= dst_n_step_d;
 017213       bias_n_step_q      <= bias_n_step_d;
 017213       dma_inflight_q     <= dma_inflight_d;
 017213       bias_inflight_q    <= bias_inflight_d;
 017213       vec_inflight_q     <= vec_inflight_d;
 017213       desc_inflight_q    <= desc_inflight_d;
 017213       conv_inflight_q    <= conv_inflight_d;
 017213       conv_start_q       <= (state_q == S_CONV_LOAD_A) && !conv_inflight_q;
 017213       conv_out_y_q       <= conv_out_y_d;
 017213       conv_out_x_q       <= conv_out_x_d;
 017213       conv_kh_q          <= conv_kh_d;
 017213       conv_kw_q          <= conv_kw_d;
 017213       conv_ic_q          <= conv_ic_d;
 017213       dma_launch_pending_q <= dma_launch_pending_d;
        
 017149       if (latch_cmd_addr)
 000064         cmd_addr_q <= cmd_addr;
        
 017149       if (latch_cmd) begin
 000064         opcode_q     <= opcode;
 000064         flags_q      <= flags;
 000064         src0_addr_q  <= src0_addr;
 000064         src1_addr_q  <= src1_addr;
 000064         bias_addr_q  <= bias_addr;
 000064         dst_addr_q   <= dst_addr;
 000064         M_q          <= M;
 000064         N_q          <= N;
 000064         K_q          <= K;
 000064         stride0_q    <= stride0;
 000064         stride1_q    <= stride1;
 000064         stride_dst_q <= stride_dst;
 000064         scale_q      <= scale;
 000064         shift_q      <= shift;
 000064         zero_point_q <= zero_point;
 000064         conv_in_hw_q <= conv_in_hw;
 000064         conv_channels_q <= conv_channels;
 000064         conv_cfg_q <= conv_cfg;
 000064         conv_desc_version_q <= ABI_VERSION;
              end
        
~017213       if (clear_cmd_fields) begin
%000000         opcode_q     <= '0;
%000000         flags_q      <= '0;
%000000         src0_addr_q  <= '0;
%000000         src1_addr_q  <= '0;
%000000         bias_addr_q  <= '0;
%000000         dst_addr_q   <= '0;
%000000         M_q          <= '0;
%000000         N_q          <= '0;
%000000         K_q          <= '0;
%000000         stride0_q    <= '0;
%000000         stride1_q    <= '0;
%000000         stride_dst_q <= '0;
%000000         scale_q      <= '0;
%000000         shift_q      <= '0;
%000000         zero_point_q <= '0;
%000000         conv_in_hw_q <= '0;
%000000         conv_channels_q <= '0;
%000000         conv_cfg_q <= '0;
%000000         conv_desc_version_q <= '0;
              end
        
~017213       if (load_desc_word) begin
%000000         case (desc_word_idx_q)
%000000           5'd0:  opcode_q     <= client_mem_rdata[7:0];
%000000           5'd1:  flags_q      <= client_mem_rdata;
%000000           5'd2:  src0_addr_q  <= client_mem_rdata;
%000000           5'd3:  src1_addr_q  <= client_mem_rdata;
%000000           5'd4:  bias_addr_q  <= client_mem_rdata;
%000000           5'd5:  dst_addr_q   <= client_mem_rdata;
%000000           5'd6:  M_q          <= client_mem_rdata[15:0];
%000000           5'd7:  N_q          <= client_mem_rdata[15:0];
%000000           5'd8:  K_q          <= client_mem_rdata[15:0];
%000000           5'd9:  stride0_q    <= client_mem_rdata[15:0];
%000000           5'd10: stride1_q    <= client_mem_rdata[15:0];
%000000           5'd11: stride_dst_q <= client_mem_rdata[15:0];
%000000           5'd12: scale_q      <= client_mem_rdata;
%000000           5'd13: begin
%000000             shift_q      <= client_mem_rdata[31:16];
%000000             zero_point_q <= client_mem_rdata[15:0];
                  end
%000000           5'd14: conv_desc_version_q <= client_mem_rdata[7:0];
%000000           5'd15: conv_in_hw_q <= client_mem_rdata;
%000000           5'd16: conv_channels_q <= client_mem_rdata;
%000000           5'd17: conv_cfg_q <= client_mem_rdata;
%000000           default: begin
                  end
                endcase
              end
        
 017202       if ((state_q == S_VALIDATE) && is_conv_opcode && conv_shape_ok) begin
 000011         M_q <= conv_m_calc[15:0];
 000011         N_q <= conv_output_c;
 000011         K_q <= conv_k_calc[15:0];
              end
        
 000092       if (clear_bias_regs) begin
 000368         for (int c = 0; c < TILE_N; c++) begin
 000368           bias_vec[c] <= '0;
                end
~017121       end else if (load_bias_reg) begin
%000000         bias_vec[int'(bias_col_q)] <= $signed(client_mem_rdata);
              end
        
~017205       if (load_vec_x_reg)
%000008         vec_x_q <= $signed(vec_load_byte);
~017209       if (load_vec_y_reg)
%000004         vec_y_q <= $signed(vec_load_byte);
~017205       if (latch_vec_raw)
%000008         vec_result_raw_q <= vec_result_raw;
~017205       if (latch_vec_post)
%000008         vec_result_post_q <= vec_result_post;
~017213       if (latch_vec_scaled)
%000000         vec_scaled_q <= vec_mul_product;
 017213       is_vector_opcode_q <= (opcode_q == OP_VEC_ADD) || (opcode_q == OP_VEC_MUL) ||
~017213                             (opcode_q == OP_RELU)    || (opcode_q == OP_CLAMP);
~017213       effective_n_q      <= (opcode_q == OP_GEMV) ? 16'd1 : N_q;
        
~017205       if (latch_vec_store_cmd) begin
%000008         vec_store_addr_q  <= vec_store_addr_next;
%000008         vec_store_wdata_q <= vec_store_wdata_next;
%000008         vec_store_wstrb_q <= vec_store_wstrb_next;
              end
        
 016978       if (latch_dma_cmd) begin
 000235         dma_op_kind_q      <= dma_op_kind_cmd_n;
 000235         dma_base_addr_q    <= dma_base_addr_cmd_n;
 000235         dma_rows_q         <= dma_rows_cmd_n;
 000235         dma_cols_q         <= dma_cols_cmd_n;
 000235         dma_stride_bytes_q <= dma_stride_bytes_cmd_n;
 000235         dma_spm_region_q   <= dma_spm_region_cmd_n;
 000235         dma_spm_base_q     <= dma_spm_base_cmd_n;
              end
            end
          end
        
 017308   always_ff @(posedge clk or negedge rst_n) begin
 017274     if (!rst_n) begin
 000034       illegal_opcode     <= 1'b0;
 000034       shape_error        <= 1'b0;
 000034       memory_error       <= 1'b0;
 000034       unsupported_format <= 1'b0;
 017149     end else if (soft_reset || clear_status) begin
 000125       illegal_opcode     <= 1'b0;
 000125       shape_error        <= 1'b0;
 000125       memory_error       <= 1'b0;
 000125       unsupported_format <= 1'b0;
 017149     end else begin
~017149       if (set_illegal_opcode)
%000000         illegal_opcode <= 1'b1;
~017149       if (set_shape_error)
%000000         shape_error <= 1'b1;
~017149       if (set_memory_error)
%000000         memory_error <= 1'b1;
~017149       if (set_unsupported_format)
%000000         unsupported_format <= 1'b1;
            end
          end
        
 103821   always @* begin
 103821     opcode_ok = 1'b0;
 103821     case (opcode_q)
              OP_GEMM,
              OP_GEMV,
              OP_VEC_ADD,
              OP_VEC_MUL,
              OP_RELU,
 066126       OP_CLAMP: opcode_ok = 1'b1;
 027208       OP_CONV2D: opcode_ok = ENABLE_CONV;
 010487       default: opcode_ok = 1'b0;
            endcase
        
~103821     dst_flags_ok = !(flags_q[FLAG_DST_INT8] && flags_q[FLAG_DST_INT32]);
        
 103821     dims_ok = 1'b1;
 103821     case (opcode_q)
 093268       OP_GEMM: dims_ok = (M_q != 16'd0) && (N_q != 16'd0) && (K_q != 16'd0);
~093268       OP_GEMV: dims_ok = (M_q != 16'd0) && (K_q != 16'd0);
 027208       OP_CONV2D: dims_ok = conv_shape_ok;
              OP_VEC_ADD,
              OP_VEC_MUL,
              OP_RELU,
 000714       OP_CLAMP: dims_ok = (M_q != 16'd0);
 010487       default: dims_ok = 1'b0;
            endcase
          end
        
 103821   always @* begin
 054095     if ((M_q - m0_q) >= TILE_M_U16)
 049726       active_tile_m = TILE_M_U16;
            else
 054095       active_tile_m = M_q - m0_q;
        
 087783     if ((effective_n - n0_q) >= TILE_N_U16)
 016038       active_tile_n = TILE_N_U16;
            else
 087783       active_tile_n = effective_n - n0_q;
        
~103821     if ((K_q - k0_q) >= TILE_K_U16)
%000000       active_tile_k = TILE_K_U16;
            else
 103821       active_tile_k = K_q - k0_q;
          end
        
 104290   always @* begin
 417160     for (int r = 0; r < TILE_M; r++) begin
 417160       row_mask[r]  = ((m0_q + 16'(r)) < M_q);
 417160       a_rd_addr[r] = 8'((r * TILE_K) + kk_q);
 417160       a_vec[r]     = $signed(a_rd_data[r]);
            end
        
 417160     for (int c = 0; c < TILE_N; c++) begin
 417160       col_mask[c]  = ((n0_q + 16'(c)) < effective_n);
 417160       b_rd_addr[c] = 8'((kk_q * TILE_N) + c);
 417160       b_vec[c]     = $signed(b_rd_data[c]);
            end
          end
        
 103821   always @* begin
 103821     m0_d               = m0_q;
 103821     n0_d               = n0_q;
 103821     k0_d               = k0_q;
 103821     kk_d               = kk_q;
 103821     store_row_d        = store_row_q;
 103821     store_col_d        = store_col_q;
 103821     bias_col_d         = bias_col_q;
 103821     vec_idx_d          = vec_idx_q;
 103821     desc_word_idx_d    = desc_word_idx_q;
 103821     store_stage_done_d = store_stage_done_q;
 103821     src0_row_base_d    = src0_row_base_q;
 103821     src1_k_base_d      = src1_k_base_q;
 103821     src1_n_offset_d    = src1_n_offset_q;
 103821     dst_row_base_d     = dst_row_base_q;
 103821     dst_n_offset_d     = dst_n_offset_q;
 103821     bias_base_d        = bias_base_q;
 103821     src0_m_step_d      = src0_m_step_q;
 103821     stride1_k_step_d   = stride1_k_step_q;
 103821     dst_m_step_d       = dst_m_step_q;
 103821     dst_n_step_d       = dst_n_step_q;
 103821     bias_n_step_d      = bias_n_step_q;
 103821     conv_out_y_d       = conv_out_y_q;
 103821     conv_out_x_d       = conv_out_x_q;
 103821     conv_kh_d          = conv_kh_q;
 103821     conv_kw_d          = conv_kw_q;
 103821     conv_ic_d          = conv_ic_q;
        
 103821     case (state_q)
 015069       S_IDLE: begin
 015069         m0_d               = '0;
 015069         n0_d               = '0;
 015069         k0_d               = '0;
 015069         kk_d               = '0;
 015069         store_row_d        = '0;
 015069         store_col_d        = '0;
 015069         bias_col_d         = '0;
 015069         vec_idx_d          = '0;
 015069         desc_word_idx_d    = '0;
 015069         store_stage_done_d = 1'b0;
 015069         src0_row_base_d    = '0;
 015069         src1_k_base_d      = '0;
 015069         src1_n_offset_d    = '0;
 015069         dst_row_base_d     = '0;
 015069         dst_n_offset_d     = '0;
 015069         bias_base_d        = '0;
 015069         src0_m_step_d      = '0;
 015069         stride1_k_step_d   = '0;
 015069         dst_m_step_d       = '0;
 015069         dst_n_step_d       = '0;
 015069         bias_n_step_d      = '0;
 015069         conv_out_y_d       = '0;
 015069         conv_out_x_d       = '0;
 015069         conv_kh_d          = '0;
 015069         conv_kw_d          = '0;
 015069         conv_ic_d          = '0;
              end
        
 000384       S_INIT_TILE: begin
 000384         k0_d               = '0;
 000384         kk_d               = '0;
 000384         store_row_d        = '0;
 000384         store_col_d        = '0;
 000384         bias_col_d         = '0;
 000384         vec_idx_d          = '0;
 000384         desc_word_idx_d    = '0;
 000384         store_stage_done_d = 1'b0;
 000384         conv_out_y_d       = '0;
 000384         conv_out_x_d       = '0;
 000384         conv_kh_d          = '0;
 000384         conv_kw_d          = '0;
 000384         conv_ic_d          = '0;
              end
        
 000384       S_VALIDATE: begin
~093334         if (opcode_ok && dims_ok && dst_flags_ok) begin
 000384           src0_row_base_d  = src0_addr_q;
 000384           src1_k_base_d    = src1_addr_q;
 000384           src1_n_offset_d  = '0;
 000384           dst_row_base_d   = dst_addr_q;
 000384           dst_n_offset_d   = '0;
 000384           bias_base_d      = bias_addr_q;
 000384           src0_m_step_d    = ({16'd0, stride0_q} << TILE_M_SHIFT);
 000384           stride1_k_step_d = ({16'd0, stride1_eff} << TILE_K_SHIFT);
 000384           dst_m_step_d     = ({16'd0, stride_dst_eff} << TILE_M_SHIFT);
~000384           dst_n_step_d     = use_dst_i8 ? {16'd0, TILE_N_U16} : ({16'd0, TILE_N_U16} << 2);
 000384           bias_n_step_d    = ({16'd0, TILE_N_U16} << 2);
                end
              end
        
%000000       S_DESC_LOAD: begin
~103821         if (desc_inflight_q && desc_mem_rvalid) begin
%000000           if (desc_word_idx_q + 5'd1 < desc_words_expected)
%000000             desc_word_idx_d = desc_word_idx_q + 5'd1;
                end
              end
        
 000552       S_CLEAR_ACC: begin
 000552         kk_d = '0;
 000552         bias_col_d = '0;
 000552         vec_idx_d = '0;
              end
        
 001656       S_COMPUTE_K: begin
 001104         if (kk_q + 16'd1 < active_tile_k)
 001104           kk_d = kk_q + 16'd1;
                else
 000552           kk_d = '0;
              end
        
 000552       S_NEXT_K: begin
~000552         if (more_k_tiles) begin
%000000           k0_d = k0_q + TILE_K_U16;
%000000           src1_k_base_d = src1_k_base_q + stride1_k_step_q;
 000552         end else begin
 000552           store_row_d        = '0;
 000552           store_col_d        = '0;
 000552           bias_col_d         = '0;
 000552           store_stage_done_d = 1'b0;
                end
              end
        
%000000       S_LOAD_BIAS: begin
~103821         if (flags_q[FLAG_BIAS_EN] && bias_inflight_q && bias_mem_rvalid) begin
%000000           if (bias_col_q + 16'd1 < active_tile_n)
%000000             bias_col_d = bias_col_q + 16'd1;
                  else
%000000             bias_col_d = '0;
                end
              end
        
 007290       S_CONV_LOAD_A: begin
 007044         if (conv_done) begin
 000246           conv_kh_d = conv_next_kh;
 000246           conv_kw_d = conv_next_kw;
 000246           conv_ic_d = conv_next_ic;
                end
              end
        
 000048       S_VEC_STORE: begin
~103629         if (((!vec_inflight_q) && vec_mem_ready) || (vec_inflight_q && vec_mem_ready)) begin
 000036           if (vec_idx_q + 16'd1 < M_q)
 000036             vec_idx_d = vec_idx_q + 16'd1;
                  else
 000012             vec_idx_d = '0;
                end
              end
        
 010116       S_STORE_C: begin
 095601         if (!store_stage_done_q) begin
 001662           if (store_col_q + 16'd1 < active_tile_n) begin
 001158             store_col_d = store_col_q + 16'd1;
 001662           end else begin
 001662             store_col_d = '0;
 001110             if (store_row_q + 16'd1 < active_tile_m)
 001110               store_row_d = store_row_q + 16'd1;
                  end
        
 002268           if (store_stage_last) begin
 000552             store_row_d        = '0;
 000552             store_col_d        = '0;
 000552             store_stage_done_d = 1'b1;
                  end
                end
              end
        
%000000       S_NEXT_TILE_N: begin
%000000         n0_d               = n0_q + TILE_N_U16;
%000000         k0_d               = '0;
%000000         kk_d               = '0;
%000000         store_row_d        = '0;
%000000         store_col_d        = '0;
%000000         bias_col_d         = '0;
%000000         vec_idx_d          = '0;
%000000         store_stage_done_d = 1'b0;
%000000         src1_k_base_d      = src1_addr_q;
%000000         src1_n_offset_d    = src1_n_offset_q + {16'd0, TILE_N_U16};
%000000         dst_n_offset_d     = dst_n_offset_q + dst_n_step_q;
%000000         bias_base_d        = bias_base_q + bias_n_step_q;
%000000         conv_kh_d          = '0;
%000000         conv_kw_d          = '0;
%000000         conv_ic_d          = '0;
              end
        
 000180       S_NEXT_TILE_M: begin
 000180         m0_d               = m0_q + TILE_M_U16;
 000180         n0_d               = '0;
 000180         k0_d               = '0;
 000180         kk_d               = '0;
 000180         store_row_d        = '0;
 000180         store_col_d        = '0;
 000180         bias_col_d         = '0;
 000180         vec_idx_d          = '0;
 000180         store_stage_done_d = 1'b0;
 000180         src0_row_base_d    = src0_row_base_q + src0_m_step_q;
 000180         src1_k_base_d      = src1_addr_q;
 000180         src1_n_offset_d    = '0;
 000180         dst_row_base_d     = dst_row_base_q + dst_m_step_q;
 000180         dst_n_offset_d     = '0;
 000180         bias_base_d        = bias_addr_q;
 000180         conv_out_y_d       = conv_next_out_y;
 000180         conv_out_x_d       = conv_next_out_x;
 000180         conv_kh_d          = '0;
 000180         conv_kw_d          = '0;
 000180         conv_ic_d          = '0;
              end
        
 067590       default: begin
              end
            endcase
          end
        
 103821   always @* begin
 103821     state_d                = state_q;
 103821     latch_cmd              = 1'b0;
 103821     latch_cmd_addr         = 1'b0;
 103821     clear_cmd_fields       = 1'b0;
 103821     load_desc_word         = 1'b0;
 103821     clear_status           = 1'b0;
 103821     set_illegal_opcode     = 1'b0;
 103821     set_shape_error        = 1'b0;
 103821     set_memory_error       = 1'b0;
 103821     set_unsupported_format = 1'b0;
 103821     dma_inflight_d         = dma_inflight_q;
 103821     bias_inflight_d        = bias_inflight_q;
 103821     vec_inflight_d         = vec_inflight_q;
 103821     desc_inflight_d        = desc_inflight_q;
 103821     conv_inflight_d        = conv_inflight_q;
 103821     dma_launch_pending_d   = dma_launch_pending_q;
        
 103821     busy          = 1'b1;
 103821     done          = 1'b0;
        
 103821     cnt_cmd_start = 1'b0;
 103821     cnt_cmd_done  = 1'b0;
~103821     cnt_busy      = (state_q != S_IDLE) && (state_q != S_DONE) && (state_q != S_ERROR);
 103821     cnt_active    = (state_q == S_COMPUTE_K) || (state_q == S_VEC_EXEC) ||
~103821                     (state_q == S_VEC_EXEC2) || (state_q == S_VEC_EXEC3);
 103821     cnt_stall     = 1'b0;
 103821     clear_bias_regs = 1'b0;
 103821     load_bias_reg   = 1'b0;
 103821     load_vec_x_reg  = 1'b0;
 103821     load_vec_y_reg  = 1'b0;
 103821     latch_vec_store_cmd = 1'b0;
 103821     latch_dma_cmd       = 1'b0;
 103821     latch_vec_raw       = 1'b0;
 103821     latch_vec_post      = 1'b0;
 103821     latch_vec_scaled    = 1'b0;
        
 103821     array_clear_acc = 1'b0;
 103821     array_mac_en    = 1'b0;
 103821     epi_start       = 1'b0;
        
 103821     dma_start        = 1'b0;
 103821     vec_mul_start    = 1'b0;
        
 103821     c_wr_en         = 1'b0;
 103821     c_wr_addr       = '0;
 103821     c_wr_data       = '0;
 103821     c_rd_addr       = '0;
        
 103821     bias_mem_req      = 1'b0;
 103821     bias_mem_we       = 1'b0;
 103821     bias_mem_addr_mux = bias_mem_addr;
 103821     bias_mem_wdata    = '0;
 103821     bias_mem_wstrb    = 4'b0000;
 103821     vec_mem_req       = 1'b0;
 103821     vec_mem_we        = 1'b0;
 103821     vec_mem_addr      = '0;
 103821     vec_mem_wdata     = '0;
 103821     vec_mem_wstrb     = 4'b0000;
 103821     desc_mem_req      = 1'b0;
 103821     desc_mem_we       = 1'b0;
 103821     desc_mem_wdata    = '0;
 103821     desc_mem_wstrb    = 4'b0000;
 103821     dma_op_kind_cmd_n      = DMA_OP_LOAD_I8;
 103821     dma_base_addr_cmd_n    = '0;
 103821     dma_rows_cmd_n         = '0;
 103821     dma_cols_cmd_n         = '0;
 103821     dma_stride_bytes_cmd_n = '0;
 103821     dma_spm_region_cmd_n   = SPM_REGION_A;
 103821     dma_spm_base_cmd_n     = 9'd0;
        
 103821     case (state_q)
 015069       S_IDLE: begin
 015069         busy = 1'b0;
 015069         dma_inflight_d = 1'b0;
 015069         bias_inflight_d = 1'b0;
 015069         vec_inflight_d = 1'b0;
 015069         desc_inflight_d = 1'b0;
 015069         conv_inflight_d = 1'b0;
 015069         dma_launch_pending_d = 1'b0;
 015069         clear_status = start;
 014749         if (start) begin
 000320           latch_cmd_addr = 1'b1;
 000320           cnt_cmd_start = 1'b1;
~000320           if (start_direct_mode) begin
 000320             latch_cmd = 1'b1;
 000320             state_d   = S_VALIDATE;
%000000           end else begin
%000000             clear_cmd_fields = 1'b1;
%000000             state_d          = S_DESC_LOAD;
                  end
                end
              end
        
%000000       S_DESC_LOAD: begin
%000000         dma_inflight_d = 1'b0;
%000000         bias_inflight_d = 1'b0;
%000000         vec_inflight_d = 1'b0;
%000000         cnt_stall = 1'b1;
        
~103821         if (!desc_inflight_q) begin
%000000           desc_mem_req = 1'b1;
%000000           if (desc_mem_ready)
%000000             desc_inflight_d = 1'b1;
%000000         end else if (desc_mem_rvalid) begin
%000000           load_desc_word = 1'b1;
%000000           desc_inflight_d = 1'b0;
%000000           if (desc_word_idx_q + 5'd1 >= desc_words_expected)
%000000             state_d = S_VALIDATE;
                end
              end
        
 000384       S_VALIDATE: begin
 000384         dma_inflight_d = 1'b0;
 000384         bias_inflight_d = 1'b0;
 000384         vec_inflight_d = 1'b0;
 000384         desc_inflight_d = 1'b0;
 000384         conv_inflight_d = 1'b0;
 000384         dma_launch_pending_d = 1'b0;
~093334         if (!opcode_ok) begin
%000000           set_illegal_opcode = 1'b1;
%000000           state_d = S_ERROR;
~000384         end else if (!dims_ok) begin
%000000           set_shape_error = 1'b1;
%000000           state_d = S_ERROR;
~000384         end else if (!dst_flags_ok) begin
%000000           set_unsupported_format = 1'b1;
%000000           state_d = S_ERROR;
 000384         end else begin
 000384           state_d = S_INIT_TILE;
                end
              end
        
 000384       S_INIT_TILE: begin
 000384         dma_inflight_d = 1'b0;
 000384         bias_inflight_d = 1'b0;
 000384         vec_inflight_d = 1'b0;
 000384         desc_inflight_d = 1'b0;
 000384         conv_inflight_d = 1'b0;
 000384         dma_launch_pending_d = 1'b0;
 000372         if (is_vector_opcode)
 000012           state_d = S_VEC_LOAD_X;
                else
 000372           state_d = S_CLEAR_ACC;
              end
        
 000552       S_CLEAR_ACC: begin
 000552         dma_inflight_d = 1'b0;
 000552         bias_inflight_d = 1'b0;
 000552         vec_inflight_d = 1'b0;
 000552         desc_inflight_d = 1'b0;
 000552         conv_inflight_d = 1'b0;
 000552         dma_launch_pending_d = 1'b0;
 000552         clear_bias_regs = 1'b1;
 000552         array_clear_acc = 1'b1;
 000306         if (is_conv_opcode)
 000246           state_d = S_CONV_LOAD_A;
                else
 000306           state_d = S_LOAD_A;
              end
        
 007290       S_CONV_LOAD_A: begin
 007290         dma_inflight_d = 1'b0;
 007290         bias_inflight_d = 1'b0;
 007290         vec_inflight_d = 1'b0;
 007290         desc_inflight_d = 1'b0;
 007290         dma_launch_pending_d = 1'b0;
 007290         cnt_stall = 1'b1;
        
 096777         if (!conv_inflight_q) begin
 000246           conv_inflight_d = 1'b1;
%000000         end else if (conv_error) begin
%000000           set_memory_error = 1'b1;
%000000           conv_inflight_d = 1'b0;
%000000           state_d = S_ERROR;
 006798         end else if (conv_done) begin
 000246           conv_inflight_d = 1'b0;
 000246           state_d = S_LOAD_B;
                end
              end
        
 017694       S_LOAD_A: begin
 017694         desc_inflight_d        = 1'b0;
 017694         dma_op_kind_cmd_n      = DMA_OP_LOAD_I8;
 017694         dma_base_addr_cmd_n    = src0_row_base_q + {16'd0, k0_q};
 017694         dma_rows_cmd_n         = active_tile_m;
 017694         dma_cols_cmd_n         = active_tile_k;
 017694         dma_stride_bytes_cmd_n = stride0_q;
 017694         dma_spm_region_cmd_n   = SPM_REGION_A;
 017694         dma_spm_base_cmd_n     = 9'd0;
        
 056013         if (!dma_launch_pending_q && !dma_inflight_q) begin
 000306           latch_dma_cmd        = 1'b1;
 000306           dma_launch_pending_d = 1'b1;
 000306           cnt_stall            = 1'b1;
 000306         end else if (dma_launch_pending_q) begin
 000306           dma_start            = 1'b1;
 000306           dma_launch_pending_d = 1'b0;
 000306           dma_inflight_d       = 1'b1;
 000306           cnt_stall            = 1'b1;
%000000         end else if (dma_error) begin
%000000           set_memory_error = 1'b1;
%000000           dma_inflight_d       = 1'b0;
%000000           dma_launch_pending_d = 1'b0;
%000000           state_d = S_ERROR;
 016776         end else if (dma_done) begin
 000306           dma_inflight_d       = 1'b0;
 000306           dma_launch_pending_d = 1'b0;
 000306           state_d = S_LOAD_B;
 016776         end else begin
 016776           cnt_stall = 1'b1;
                end
              end
        
 021408       S_LOAD_B: begin
 021408         desc_inflight_d        = 1'b0;
 021408         dma_op_kind_cmd_n      = DMA_OP_LOAD_I8;
 021408         dma_base_addr_cmd_n    = src1_k_base_q + src1_n_offset_q;
 021408         dma_rows_cmd_n         = active_tile_k;
 021408         dma_cols_cmd_n         = active_tile_n;
 021408         dma_stride_bytes_cmd_n = stride1_eff;
 021408         dma_spm_region_cmd_n   = SPM_REGION_B;
 021408         dma_spm_base_cmd_n     = 9'd0;
        
 056013         if (!dma_launch_pending_q && !dma_inflight_q) begin
 000552           latch_dma_cmd        = 1'b1;
 000552           dma_launch_pending_d = 1'b1;
 000552           cnt_stall            = 1'b1;
 000552         end else if (dma_launch_pending_q) begin
 000552           dma_start            = 1'b1;
 000552           dma_launch_pending_d = 1'b0;
 000552           dma_inflight_d       = 1'b1;
 000552           cnt_stall            = 1'b1;
%000000         end else if (dma_error) begin
%000000           set_memory_error = 1'b1;
%000000           dma_inflight_d       = 1'b0;
%000000           dma_launch_pending_d = 1'b0;
%000000           state_d = S_ERROR;
 019752         end else if (dma_done) begin
 000552           dma_inflight_d       = 1'b0;
 000552           dma_launch_pending_d = 1'b0;
 000552           state_d = S_COMPUTE_K;
 019752         end else begin
 019752           cnt_stall = 1'b1;
                end
              end
        
 001656       S_COMPUTE_K: begin
 001656         dma_inflight_d = 1'b0;
 001656         bias_inflight_d = 1'b0;
 001656         vec_inflight_d = 1'b0;
 001656         desc_inflight_d = 1'b0;
 001656         dma_launch_pending_d = 1'b0;
 001656         array_mac_en = 1'b1;
 001104         if (kk_q + 16'd1 >= active_tile_k)
 000552           state_d = S_NEXT_K;
              end
        
 000552       S_NEXT_K: begin
 000552         dma_inflight_d = 1'b0;
 000552         bias_inflight_d = 1'b0;
 000552         vec_inflight_d = 1'b0;
 000552         desc_inflight_d = 1'b0;
 000552         dma_launch_pending_d = 1'b0;
%000000         if (more_k_tiles) begin
%000000           if (is_conv_opcode)
%000000             state_d = S_CONV_LOAD_A;
                  else
%000000             state_d = S_LOAD_A;
                end
~000552         else if (flags_q[FLAG_BIAS_EN])
%000000           state_d = S_LOAD_BIAS;
                else
 000552           state_d = S_EPILOGUE;
              end
        
%000000       S_LOAD_BIAS: begin
%000000         dma_inflight_d = 1'b0;
%000000         vec_inflight_d = 1'b0;
%000000         desc_inflight_d = 1'b0;
%000000         dma_launch_pending_d = 1'b0;
%000000         cnt_stall = 1'b1;
        
~103821         if (!flags_q[FLAG_BIAS_EN]) begin
%000000           bias_inflight_d = 1'b0;
%000000           state_d = S_EPILOGUE;
%000000         end else if (!bias_inflight_q) begin
%000000           bias_mem_req = 1'b1;
%000000           if (bias_mem_ready)
%000000             bias_inflight_d = 1'b1;
%000000         end else if (bias_mem_rvalid) begin
%000000           load_bias_reg = 1'b1;
%000000           bias_inflight_d = 1'b0;
%000000           if (bias_col_q + 16'd1 >= active_tile_n)
%000000             state_d = S_EPILOGUE;
                end
              end
        
 027600       S_EPILOGUE: begin
 027600         dma_inflight_d = 1'b0;
 027600         bias_inflight_d = 1'b0;
 027600         vec_inflight_d = 1'b0;
 027600         desc_inflight_d = 1'b0;
 027600         dma_launch_pending_d = 1'b0;
 076773         if (!epi_busy && !epi_done)
 000552           epi_start = 1'b1;
        
 018768         if (epi_out_valid) begin
 008832           c_wr_en = 1'b1;
 008832           c_wr_addr = epi_out_index;
~008832           c_wr_data = use_dst_i8 ? {24'd0, epi_out_i8} : epi_out_i32;
                end
        
 027048         if (epi_done)
 000552           state_d = S_STORE_C;
              end
        
 010116       S_STORE_C: begin
 010116         desc_inflight_d = 1'b0;
 010116         vec_inflight_d = 1'b0;
~103821         dma_op_kind_cmd_n      = use_dst_i8 ? DMA_OP_STORE_I8 : DMA_OP_STORE_I32;
 010116         dma_base_addr_cmd_n    = dma_store_base_addr;
 010116         dma_rows_cmd_n         = active_tile_m;
 010116         dma_cols_cmd_n         = active_tile_n;
 010116         dma_stride_bytes_cmd_n = stride_dst_eff;
 010116         dma_spm_region_cmd_n   = SPM_REGION_C;
 010116         dma_spm_base_cmd_n     = 9'd0;
        
 056013         if (!dma_launch_pending_q && !dma_inflight_q) begin
 000552           latch_dma_cmd        = 1'b1;
 000552           dma_launch_pending_d = 1'b1;
 000552           cnt_stall            = 1'b1;
 000552         end else if (dma_launch_pending_q) begin
 000552           dma_start            = 1'b1;
 000552           dma_launch_pending_d = 1'b0;
 000552           dma_inflight_d       = 1'b1;
 000552           cnt_stall            = 1'b1;
%000000         end else if (dma_error) begin
%000000           set_memory_error = 1'b1;
%000000           dma_inflight_d       = 1'b0;
%000000           dma_launch_pending_d = 1'b0;
%000000           state_d = S_ERROR;
 008460         end else if (dma_done) begin
 000552           dma_inflight_d       = 1'b0;
 000552           dma_launch_pending_d = 1'b0;
%000000           if (more_n_tiles)
%000000             state_d = S_NEXT_TILE_N;
 000372           else if (more_m_tiles)
 000180             state_d = S_NEXT_TILE_M;
                  else
 000372             state_d = S_DONE;
 008460         end else begin
 008460           cnt_stall = 1'b1;
                end
              end
        
 000264       S_VEC_LOAD_X: begin
 000264         dma_inflight_d = 1'b0;
 000264         bias_inflight_d = 1'b0;
 000264         desc_inflight_d = 1'b0;
 000264         dma_launch_pending_d = 1'b0;
 000264         cnt_stall = 1'b1;
        
 000264         vec_mem_we   = 1'b0;
 000264         vec_mem_addr = vec_src0_read_addr;
        
 103605         if (!vec_inflight_q) begin
 000120           vec_mem_req = 1'b1;
 000072           if (vec_mem_ready)
 000048             vec_inflight_d = 1'b1;
 000096         end else if (vec_mem_rvalid) begin
 000048           load_vec_x_reg = 1'b1;
 000048           vec_inflight_d = 1'b0;
 000024           if (vec_needs_y)
 000024             state_d = S_VEC_LOAD_Y;
                  else
 000024             state_d = S_VEC_EXEC;
                end
              end
        
 000096       S_VEC_LOAD_Y: begin
 000096         dma_inflight_d = 1'b0;
 000096         bias_inflight_d = 1'b0;
 000096         desc_inflight_d = 1'b0;
 000096         dma_launch_pending_d = 1'b0;
 000096         cnt_stall = 1'b1;
        
 000096         vec_mem_we   = 1'b0;
 000096         vec_mem_addr = vec_src1_read_addr;
        
 103605         if (!vec_inflight_q) begin
 000024           vec_mem_req = 1'b1;
~000024           if (vec_mem_ready)
 000024             vec_inflight_d = 1'b1;
 000048         end else if (vec_mem_rvalid) begin
 000024           load_vec_y_reg = 1'b1;
 000024           vec_inflight_d = 1'b0;
 000024           state_d = S_VEC_EXEC;
                end
              end
        
 000048       S_VEC_EXEC: begin
 000048         dma_inflight_d = 1'b0;
 000048         bias_inflight_d = 1'b0;
 000048         vec_inflight_d = 1'b0;
 000048         desc_inflight_d = 1'b0;
 000048         dma_launch_pending_d = 1'b0;
 000048         latch_vec_raw = 1'b1;
 000048         state_d = S_VEC_EXEC2;
              end
        
 000048       S_VEC_EXEC2: begin
 000048         dma_inflight_d = 1'b0;
 000048         bias_inflight_d = 1'b0;
 000048         vec_inflight_d = 1'b0;
 000048         desc_inflight_d = 1'b0;
 000048         dma_launch_pending_d = 1'b0;
 000048         latch_vec_post = 1'b1;
~000048         if (flags_q[FLAG_REQUANT_EN])
%000000           state_d = S_VEC_EXEC3;
                else
 000048           state_d = S_VEC_EXEC4;
              end
        
%000000       S_VEC_EXEC3: begin
%000000         dma_inflight_d = 1'b0;
%000000         bias_inflight_d = 1'b0;
%000000         vec_inflight_d = 1'b0;
%000000         desc_inflight_d = 1'b0;
%000000         dma_launch_pending_d = 1'b0;
%000000         if (flags_q[FLAG_REQUANT_EN]) begin
%000000           cnt_stall = 1'b1;
%000000           if (!vec_mul_busy && !vec_mul_done) begin
%000000             vec_mul_start = 1'b1;
%000000           end else if (vec_mul_done) begin
%000000             latch_vec_scaled = 1'b1;
%000000             state_d = S_VEC_EXEC4;
                  end
%000000         end else begin
%000000           state_d = S_VEC_EXEC4;
                end
              end
        
 000048       S_VEC_EXEC4: begin
 000048         dma_inflight_d = 1'b0;
 000048         bias_inflight_d = 1'b0;
 000048         vec_inflight_d = 1'b0;
 000048         desc_inflight_d = 1'b0;
 000048         dma_launch_pending_d = 1'b0;
 000048         latch_vec_store_cmd = 1'b1;
 000048         state_d = S_VEC_STORE;
              end
        
 000048       S_VEC_STORE: begin
 000048         dma_inflight_d = 1'b0;
 000048         bias_inflight_d = 1'b0;
 000048         desc_inflight_d = 1'b0;
 000048         dma_launch_pending_d = 1'b0;
 000048         cnt_stall = 1'b1;
        
 000048         vec_mem_req  = 1'b1;
 000048         vec_mem_we   = 1'b1;
 000048         vec_mem_addr = vec_store_addr_q;
 000048         vec_mem_wdata = vec_store_wdata_q;
 000048         vec_mem_wstrb = vec_store_wstrb_q;
        
~000048         if (vec_mem_ready) begin
 000048           vec_inflight_d = 1'b0;
 000036           if (vec_idx_q + 16'd1 < M_q)
 000036             state_d = S_VEC_LOAD_X;
                  else
 000012             state_d = S_DONE;
%000000         end else begin
%000000           vec_inflight_d = 1'b1;
                end
              end
        
%000000       S_NEXT_TILE_N: begin
%000000         dma_inflight_d = 1'b0;
%000000         bias_inflight_d = 1'b0;
%000000         vec_inflight_d = 1'b0;
%000000         desc_inflight_d = 1'b0;
%000000         dma_launch_pending_d = 1'b0;
%000000         state_d = S_CLEAR_ACC;
              end
        
 000180       S_NEXT_TILE_M: begin
 000180         dma_inflight_d = 1'b0;
 000180         bias_inflight_d = 1'b0;
 000180         vec_inflight_d = 1'b0;
 000180         desc_inflight_d = 1'b0;
 000180         dma_launch_pending_d = 1'b0;
 000180         state_d = S_CLEAR_ACC;
              end
        
 000384       S_DONE: begin
 000384         busy         = 1'b0;
 000384         done         = 1'b1;
 000384         cnt_cmd_done = 1'b1;
 000384         dma_inflight_d = 1'b0;
 000384         bias_inflight_d = 1'b0;
 000384         vec_inflight_d = 1'b0;
 000384         desc_inflight_d = 1'b0;
 000384         dma_launch_pending_d = 1'b0;
 000384         state_d      = S_IDLE;
              end
        
%000000       S_ERROR: begin
%000000         busy    = 1'b0;
%000000         done    = 1'b1;
%000000         cnt_cmd_done = 1'b1;
%000000         dma_inflight_d = 1'b0;
%000000         bias_inflight_d = 1'b0;
%000000         vec_inflight_d = 1'b0;
%000000         desc_inflight_d = 1'b0;
%000000         dma_launch_pending_d = 1'b0;
%000000         state_d = S_IDLE;
              end
        
%000000       default: begin
%000000         state_d = S_IDLE;
              end
            endcase
          end
        
          // TODO:
          // - Add dedicated vector tiling / multi-lane execution instead of scalar sequencing.
          // - Extend vector path to support richer clamp parameterization if the register map grows.
        `ifndef SYNTHESIS
 017308   always @(posedge clk or negedge rst_n) begin
 017274     if (!rst_n) begin
 017213     end else if (!soft_reset) begin
 017213       assert (state_q <= S_ERROR);
 017213       assert (m0_q <= M_q);
 017213       assert (n0_q <= effective_n);
 017213       assert (k0_q <= K_q);
~017213       assert (!array_mac_en || state_q == S_COMPUTE_K);
~017213       assert (!(conv_spm_wr_en && !state_is_conv));
~017213       assert (!dma_busy_status || dma_inflight_q || dma_launch_pending_q);
~017213       assert (!conv_busy_status || conv_inflight_q);
~017213       assert (!(dma_launch_pending_q && dma_inflight_q));
~017213       assert (!done || (state_q == S_DONE) || (state_q == S_ERROR));
~017213       assert (!(done && busy));
 015741       if (epi_out_valid) begin
 001472         assert (epi_shadow_i32[int'(epi_out_index) / TILE_N][int'(epi_out_index) % TILE_N] == epi_out_i32);
 001472         assert (epi_shadow_i8[int'(epi_out_index) / TILE_N][int'(epi_out_index) % TILE_N] == epi_out_i8);
              end
            end
          end
        `endif
        
        endmodule
        
