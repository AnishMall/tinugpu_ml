//      // verilator_coverage annotation
        module tinygpu_cmd_ctrl 
        import tinygpu_pkg::*; 
          #(
            parameter bit ENABLE_CONV = 1'b1
          )
        (
          input  logic         clk,
          input  logic         rst_n,
        
          input  logic         start,
          input  logic         start_direct_mode,
          input  logic         soft_reset,
          input  logic         direct_mode,
          input  logic [31:0]  cmd_addr,
        
          input  logic [7:0]   opcode,
          input  logic [31:0]  flags,
          input  logic [31:0]  src0_addr,
          input  logic [31:0]  src1_addr,
          input  logic [31:0]  bias_addr,
          input  logic [31:0]  dst_addr,
          input  logic [15:0]  M,
          input  logic [15:0]  N,
          input  logic [15:0]  K,
          input  logic [15:0]  stride0,
          input  logic [15:0]  stride1,
          input  logic [15:0]  stride_dst,
          input  logic [31:0]  scale,
          input  logic [15:0]  shift,
          input  logic [15:0]  zero_point,
          input  logic [31:0]  conv_in_hw,
          input  logic [31:0]  conv_channels,
          input  logic [31:0]  conv_cfg,
        
          output logic         busy,
          output logic         done,
          output logic         illegal_opcode,
          output logic         shape_error,
          output logic         memory_error,
          output logic         unsupported_format,
        
          output logic         cnt_cmd_start,
          output logic         cnt_cmd_done,
          output logic         cnt_busy,
          output logic         cnt_active,
          output logic         cnt_stall,
        
          output logic         mem_req,
          output logic         mem_we,
          output logic [31:0]  mem_addr,
          output logic [31:0]  mem_wdata,
          output logic [3:0]   mem_wstrb,
          input  logic [31:0]  mem_rdata,
          input  logic         mem_ready,
          input  logic         mem_rvalid
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
        
          cmd_state_e state_q, state_d;
        
          logic [7:0]  opcode_q;
          logic [31:0] flags_q;
          logic [31:0] cmd_addr_q;
          logic [31:0] src0_addr_q, src1_addr_q, bias_addr_q, dst_addr_q;
          logic [15:0] M_q, N_q, K_q;
          logic [15:0] stride0_q, stride1_q, stride_dst_q;
          logic [31:0] scale_q;
          logic [15:0] shift_q, zero_point_q;
          logic [31:0] conv_in_hw_q, conv_channels_q, conv_cfg_q;
          logic [7:0]  conv_desc_version_q;
        
          logic [15:0] m0_q, m0_d;
          logic [15:0] n0_q, n0_d;
          logic [15:0] k0_q, k0_d;
          logic [15:0] kk_q, kk_d;
          logic [15:0] store_row_q, store_row_d;
          logic [15:0] store_col_q, store_col_d;
          logic [15:0] bias_col_q, bias_col_d;
          logic [15:0] vec_idx_q, vec_idx_d;
          logic [4:0]  desc_word_idx_q, desc_word_idx_d;
        
          logic        store_stage_done_q;
          logic        store_stage_done_d;
          logic        dma_inflight_q;
          logic        dma_inflight_d;
          logic        bias_inflight_q;
          logic        bias_inflight_d;
          logic        vec_inflight_q;
          logic        vec_inflight_d;
          logic        desc_inflight_q;
          logic        desc_inflight_d;
        
          logic [15:0] conv_out_y_q, conv_out_y_d;
          logic [15:0] conv_out_x_q, conv_out_x_d;
          logic [3:0]  conv_kh_q, conv_kh_d;
          logic [3:0]  conv_kw_q, conv_kw_d;
          logic [15:0] conv_ic_q, conv_ic_d;
        
          logic [15:0] active_tile_m;
          logic [15:0] active_tile_n;
          logic [15:0] active_tile_k;
        
          logic [TILE_M-1:0] row_mask;
          logic [TILE_N-1:0] col_mask;
        
          logic [7:0] a_rd_addr [0:TILE_M-1];
          logic [7:0] a_rd_data [0:TILE_M-1];
          logic [7:0] b_rd_addr [0:TILE_N-1];
          logic [7:0] b_rd_data [0:TILE_N-1];
        
          logic signed [INT8_W-1:0] a_vec [0:TILE_M-1];
          logic signed [INT8_W-1:0] b_vec [0:TILE_N-1];
          logic signed [ACC_W-1:0]  c_tile [0:TILE_M-1][0:TILE_N-1];
        
          logic                     array_clear_acc;
          logic                     array_mac_en;
        
          logic                     spm_dma_wr_en;
          logic [1:0]               spm_dma_region;
          logic [8:0]               spm_dma_addr;
          logic [31:0]              spm_dma_wdata;
          logic [3:0]               spm_dma_wstrb;
          logic [31:0]              spm_dma_rdata;
        
          logic                     c_wr_en;
          logic [7:0]               c_wr_addr;
          logic [31:0]              c_wr_data;
          logic [7:0]               c_rd_addr;
          logic [31:0]              c_rd_data;
        
          logic                     epi_start;
          logic                     epi_busy;
          logic                     epi_done;
          logic                     epi_mul_start;
          logic signed [ACC_W-1:0]  epi_mul_a;
          logic signed [31:0]       epi_mul_b;
          logic signed [ACC_W-1:0]  bias_vec [0:TILE_N-1];
          logic                     epi_out_valid;
          logic [7:0]               epi_out_index;
          logic signed [ACC_W-1:0]  epi_out_i32;
          logic signed [INT8_W-1:0] epi_out_i8;
          logic signed [ACC_W-1:0]  epi_shadow_i32 [0:TILE_M-1][0:TILE_N-1];
          logic signed [INT8_W-1:0] epi_shadow_i8 [0:TILE_M-1][0:TILE_N-1];
          logic signed [INT8_W-1:0] vec_x_q;
          logic signed [INT8_W-1:0] vec_y_q;
          logic signed [ACC_W-1:0]  vec_result_raw;
          logic signed [ACC_W-1:0]  vec_result_post;
          logic signed [INT8_W-1:0] vec_result_i8;
          logic signed [31:0]        zero_point_ext;
          logic [31:0]              vec_store_addr_q;
          logic [31:0]              vec_store_wdata_q;
          logic [3:0]               vec_store_wstrb_q;
          logic signed [ACC_W-1:0]  vec_result_raw_q;   // pipeline stage 1
          logic signed [ACC_W-1:0]  vec_result_post_q;  // pipeline stage 2
          logic signed [ACC_W-1:0]  vec_scaled_q;        // pipeline stage 3
          logic                     vec_mul_start;
          logic                     vec_mul_busy;
          logic                     vec_mul_done;
          logic signed [ACC_W-1:0]  vec_mul_product;
          logic                     shared_mul_start;
          logic                     shared_mul_busy;
          logic                     shared_mul_done;
          logic signed [ACC_W-1:0]  shared_mul_product;
          logic signed [ACC_W-1:0]  shared_mul_a;
          logic signed [31:0]       shared_mul_b;
        
          logic                     dma_start;
          logic                     dma_busy_status;
          logic                     dma_done;
          logic                     dma_error;
          logic                     dma_mem_req;
          logic                     dma_mem_we;
          logic [31:0]              dma_mem_addr;
          logic [31:0]              dma_mem_wdata;
          logic [3:0]               dma_mem_wstrb;
          logic                     bias_mem_req;
          logic                     bias_mem_we;
          logic [31:0]              bias_mem_addr_mux;
          logic [31:0]              bias_mem_wdata;
          logic [3:0]               bias_mem_wstrb;
          logic                     vec_mem_req;
          logic                     vec_mem_we;
          logic [31:0]              vec_mem_addr;
          logic [31:0]              vec_mem_wdata;
          logic [3:0]               vec_mem_wstrb;
          logic                     desc_mem_req;
          logic                     desc_mem_we;
          logic [31:0]              desc_mem_addr;
          logic [31:0]              desc_mem_wdata;
          logic [3:0]               desc_mem_wstrb;
          logic                     dma_launch_pending_q;
          logic                     dma_launch_pending_d;
          logic [1:0]               dma_op_kind_q;
          logic [31:0]              dma_base_addr_q;
          logic [15:0]              dma_rows_q;
          logic [15:0]              dma_cols_q;
          logic [15:0]              dma_stride_bytes_q;
          logic [1:0]               dma_spm_region_q;
          logic [8:0]               dma_spm_base_q;
        
          logic                     conv_start;
          logic                     conv_start_q;
          logic                     conv_busy_status;
          logic                     conv_done;
          logic                     conv_error;
          logic                     conv_inflight_q;
          logic                     conv_inflight_d;
          logic                     conv_mem_req;
          logic [31:0]              conv_mem_addr;
          logic [2:0]               mem_client_sel;
          logic [31:0]              client_mem_rdata;
          logic                     dma_mem_ready;
          logic                     dma_mem_rvalid;
          logic                     desc_mem_ready;
          logic                     desc_mem_rvalid;
          logic                     conv_mem_ready;
          logic                     conv_mem_rvalid;
          logic                     vec_mem_ready;
          logic                     vec_mem_rvalid;
          logic                     bias_mem_ready;
          logic                     bias_mem_rvalid;
          logic                     conv_spm_wr_en;
          logic [8:0]               conv_spm_addr;
          logic [31:0]              conv_spm_wdata;
          logic [3:0]               conv_spm_wstrb;
          logic [15:0]              conv_next_out_y;
          logic [15:0]              conv_next_out_x;
          logic [3:0]               conv_next_kh;
          logic [3:0]               conv_next_kw;
          logic [15:0]              conv_next_ic;
        
          logic        latch_cmd;
          logic        latch_cmd_addr;
          logic        clear_cmd_fields;
          logic        load_desc_word;
          logic        latch_vec_store_cmd;
          logic        latch_dma_cmd;
          logic        clear_status;
          logic        set_illegal_opcode;
          logic        set_shape_error;
          logic        set_memory_error;
          logic        set_unsupported_format;
        
          logic        opcode_ok;
          logic        dst_flags_ok;
          logic        dims_ok;
          logic        more_k_tiles;
          logic        more_n_tiles;
          logic        more_m_tiles;
          logic        use_dst_i8;
          logic        store_stage_last;
          logic        clear_bias_regs;
          logic        load_bias_reg;
          logic        load_vec_x_reg;
          logic        load_vec_y_reg;
          logic        is_vector_opcode;
          logic        is_vector_opcode_q;
          logic        is_conv_opcode;
          logic        vec_needs_y;
          logic        latch_vec_raw;
          logic        latch_vec_post;
          logic        latch_vec_scaled;
          logic        state_is_bias;
          logic        state_is_vec;
          logic        state_is_desc;
          logic        state_is_conv;
          logic [15:0] effective_n;
          logic [15:0] effective_n_q;
          logic [31:0] src0_row_base_q;
          logic [31:0] src0_row_base_d;
          logic [31:0] src1_k_base_q;
          logic [31:0] src1_k_base_d;
          logic [31:0] src1_n_offset_q;
          logic [31:0] src1_n_offset_d;
          logic [31:0] dst_row_base_q;
          logic [31:0] dst_row_base_d;
          logic [31:0] dst_n_offset_q;
          logic [31:0] dst_n_offset_d;
          logic [31:0] bias_base_q;
          logic [31:0] bias_base_d;
          logic [31:0] src0_m_step_q;
          logic [31:0] src0_m_step_d;
          logic [31:0] stride1_k_step_q;
          logic [31:0] stride1_k_step_d;
          logic [31:0] dst_m_step_q;
          logic [31:0] dst_m_step_d;
          logic [31:0] dst_n_step_q;
          logic [31:0] dst_n_step_d;
          logic [31:0] bias_n_step_q;
          logic [31:0] bias_n_step_d;
        
          logic [31:0] dma_store_base_addr;
          logic [31:0] bias_mem_addr;
          logic [15:0] vec_src0_stride_bytes;
          logic [15:0] vec_src1_stride_bytes;
          logic [15:0] vec_dst_stride_bytes;
          logic [31:0] vec_src0_elem_addr;
          logic [31:0] vec_src1_elem_addr;
          logic [31:0] vec_dst_elem_addr;
          logic [31:0] vec_store_aligned_addr;
          logic [31:0] vec_src0_read_addr;
          logic [31:0] vec_src1_read_addr;
          logic [1:0]  vec_src0_lane_sel;
          logic [1:0]  vec_src1_lane_sel;
          logic [7:0]  vec_load_byte;
          logic [31:0] vec_store_addr_next;
          logic [31:0] vec_store_wdata_next;
          logic [3:0]  vec_store_wstrb_next;
          logic [1:0]  dma_op_kind_cmd_n;
          logic [31:0] dma_base_addr_cmd_n;
          logic [15:0] dma_rows_cmd_n;
          logic [15:0] dma_cols_cmd_n;
          logic [15:0] dma_stride_bytes_cmd_n;
          logic [1:0]  dma_spm_region_cmd_n;
          logic [8:0]  dma_spm_base_cmd_n;
        
          logic [15:0] conv_input_h;
          logic [15:0] conv_input_w;
          logic [15:0] conv_input_c;
          logic [15:0] conv_output_c;
          logic [3:0]  conv_kernel_h;
          logic [3:0]  conv_kernel_w;
          logic [3:0]  conv_stride_h;
          logic [3:0]  conv_stride_w;
          logic [3:0]  conv_pad_h;
          logic [3:0]  conv_pad_w;
          logic [31:0] conv_out_h_calc;
          logic [31:0] conv_out_w_calc;
          logic [31:0] conv_m_calc;
          logic [31:0] conv_k_calc;
          logic [31:0] conv_input_row_stride;
          logic [15:0] stride1_eff;
          logic [15:0] stride_dst_eff;
          logic        conv_shape_ok;
          logic [4:0]  desc_words_expected;
        
          logic unused_c_rd_data;
        
 1056281   function automatic signed [INT8_W-1:0] sat_i8(input signed [31:0] x);
 1056281     begin
~000051       if (x > 32'sd127)
~000051         sat_i8 = 8'sd127;
~1053426       else if (x < -32'sd128)
~002804         sat_i8 = -8'sd128;
              else
 1053426         sat_i8 = x[INT8_W-1:0];
            end
          endfunction
        
~547894   function automatic signed [31:0] clamp32(
            input signed [31:0] x,
            input signed [31:0] lo,
            input signed [31:0] hi
          );
~547894     begin
~000047       if (x < lo)
~000047         clamp32 = lo;
~547816       else if (x > hi)
~000031         clamp32 = hi;
              else
~547816         clamp32 = x;
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
~978739   assign mem_client_sel = state_is_desc ? 3'd1 :
~784267                           state_is_conv ? 3'd2 :
~742011                           state_is_vec  ? 3'd3 :
~725653                           state_is_bias ? 3'd4 : 3'd0;
~759943   assign vec_src0_stride_bytes = (stride0_q != 16'd0) ? stride0_q : 16'd1;
~756027   assign vec_src1_stride_bytes = (stride1_q != 16'd0) ? stride1_q : 16'd1;
~752133   assign vec_dst_stride_bytes  = (stride_dst_q != 16'd0) ? stride_dst_q : (use_dst_i8 ? 16'd1 : 16'd4);
          assign vec_src0_elem_addr = src0_addr_q + (vec_idx_q * vec_src0_stride_bytes);
          assign vec_src1_elem_addr = src1_addr_q + (vec_idx_q * vec_src1_stride_bytes);
          assign vec_dst_elem_addr  = dst_addr_q  + (vec_idx_q * vec_dst_stride_bytes);
~538165   assign vec_store_aligned_addr = use_dst_i8 ? {vec_dst_elem_addr[31:2], 2'b00} : vec_dst_elem_addr;
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
~759943   assign conv_input_row_stride = (stride0_q != 0) ? {16'd0, stride0_q} : ({16'd0, conv_input_w} * {16'd0, conv_input_c});
~558261   assign stride1_eff = is_conv_opcode ? ((stride1_q != 0) ? stride1_q : conv_output_c) : stride1_q;
~558261   assign stride_dst_eff = is_conv_opcode ? ((stride_dst_q != 0) ? stride_dst_q :
~558261                           (use_dst_i8 ? conv_output_c : (conv_output_c << 2))) : stride_dst_q;
~558261   assign desc_words_expected = (opcode_q == OP_CONV2D) ? DESC_WORDS_CONV : DESC_WORDS_BASE;
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
        
 1056281   always @* begin
 1056281     vec_store_addr_next = vec_store_aligned_addr;
 1056281     vec_store_wdata_next = vec_result_post_q;
 1056281     vec_store_wstrb_next = 4'b1111;
        
~538165     if (use_dst_i8) begin
~538165       case (vec_dst_elem_addr[1:0])
~520957         2'd0: begin
~520957           vec_store_wdata_next = {24'd0, vec_result_i8};
~520957           vec_store_wstrb_next = 4'b0001;
                end
~006660         2'd1: begin
~006660           vec_store_wdata_next = {16'd0, vec_result_i8, 8'd0};
~006660           vec_store_wstrb_next = 4'b0010;
                end
~005871         2'd2: begin
~005871           vec_store_wdata_next = {8'd0, vec_result_i8, 16'd0};
~005871           vec_store_wstrb_next = 4'b0100;
                end
~004677         default: begin
~004677           vec_store_wdata_next = {vec_result_i8, 24'd0};
~004677           vec_store_wstrb_next = 4'b1000;
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
~1051241   assign shared_mul_a     = epi_mul_start ? epi_mul_a : vec_result_post_q;
~1051241   assign shared_mul_b     = epi_mul_start ? epi_mul_b : scale_q;
          assign vec_mul_busy     = shared_mul_busy;
          assign vec_mul_done     = shared_mul_done;
          assign vec_mul_product  = shared_mul_product;
        
 1056281   always @* begin
 1056281     case (state_q)
~008939       S_VEC_LOAD_Y: begin
~008939         case (vec_src1_lane_sel)
~002806           2'd0: vec_load_byte = client_mem_rdata[7:0];
~002696           2'd1: vec_load_byte = client_mem_rdata[15:8];
~002055           2'd2: vec_load_byte = client_mem_rdata[23:16];
~001382           default: vec_load_byte = client_mem_rdata[31:24];
                endcase
              end
 1047342       default: begin
 1047342         case (vec_src0_lane_sel)
 1018250           2'd0: vec_load_byte = client_mem_rdata[7:0];
~011091           2'd1: vec_load_byte = client_mem_rdata[15:8];
~009784           2'd2: vec_load_byte = client_mem_rdata[23:16];
~008217           default: vec_load_byte = client_mem_rdata[31:24];
                endcase
              end
            endcase
          end
        
 1056281   always @* begin
 1056281     vec_result_post = vec_result_raw_q;
        
~915993     if (flags_q[FLAG_RELU_EN] && (vec_result_post < 0))
~140288       vec_result_post = 32'sd0;
        
~547894     if (flags_q[FLAG_CLAMP_EN])
~547894       vec_result_post = clamp32(vec_result_post, -32'sd128, 32'sd127);
        
~764478     if (flags_q[FLAG_REQUANT_EN]) begin
~222563       if ($signed(shift_q) >= 0)
~222563         vec_result_i8 = sat_i8(($signed(vec_scaled_q) >>> shift_q) + zero_point_ext);
              else
~069240         vec_result_i8 = sat_i8(($signed(vec_scaled_q) <<< (-$signed(shift_q))) + zero_point_ext);
 764478     end else begin
 764478       vec_result_i8 = sat_i8(vec_result_post_q);  // use registered value
            end
          end
        
 1056280   always_ff @(posedge clk or negedge rst_n) begin
~1056276     if (!rst_n) begin
%000004       state_q           <= S_IDLE;
%000004       opcode_q          <= '0;
%000004       flags_q           <= '0;
%000004       cmd_addr_q        <= '0;
%000004       src0_addr_q       <= '0;
%000004       src1_addr_q       <= '0;
%000004       bias_addr_q       <= '0;
%000004       dst_addr_q        <= '0;
%000004       M_q               <= '0;
%000004       N_q               <= '0;
%000004       K_q               <= '0;
%000004       stride0_q         <= '0;
%000004       stride1_q         <= '0;
%000004       stride_dst_q      <= '0;
%000004       scale_q           <= '0;
%000004       shift_q           <= '0;
%000004       zero_point_q      <= '0;
%000004       conv_in_hw_q      <= '0;
%000004       conv_channels_q   <= '0;
%000004       conv_cfg_q        <= '0;
%000004       conv_desc_version_q <= '0;
%000004       effective_n_q     <= '0;
%000004       m0_q              <= '0;
%000004       n0_q              <= '0;
%000004       k0_q              <= '0;
%000004       kk_q              <= '0;
%000004       store_row_q       <= '0;
%000004       store_col_q       <= '0;
%000004       bias_col_q        <= '0;
%000004       vec_idx_q         <= '0;
%000004       desc_word_idx_q   <= '0;
%000004       store_stage_done_q <= 1'b0;
%000004       dma_inflight_q    <= 1'b0;
%000004       bias_inflight_q   <= 1'b0;
%000004       vec_inflight_q    <= 1'b0;
%000004       desc_inflight_q   <= 1'b0;
%000004       conv_inflight_q   <= 1'b0;
%000004       conv_start_q      <= 1'b0;
%000004       conv_out_y_q      <= '0;
%000004       conv_out_x_q      <= '0;
%000004       conv_kh_q         <= '0;
%000004       conv_kw_q         <= '0;
%000004       conv_ic_q         <= '0;
%000004       dma_launch_pending_q <= 1'b0;
%000004       dma_op_kind_q     <= '0;
%000004       dma_base_addr_q   <= '0;
%000004       dma_rows_q        <= '0;
%000004       dma_cols_q        <= '0;
%000004       dma_stride_bytes_q <= '0;
%000004       dma_spm_region_q  <= '0;
%000004       dma_spm_base_q    <= '0;
%000004       vec_x_q           <= '0;
%000004       vec_y_q           <= '0;
%000004       vec_result_raw_q  <= '0;
%000004       vec_result_post_q <= '0;
%000004       vec_scaled_q      <= '0;
%000004       is_vector_opcode_q <= 1'b0;
%000004       src0_row_base_q   <= '0;
%000004       src1_k_base_q     <= '0;
%000004       src1_n_offset_q   <= '0;
%000004       dst_row_base_q    <= '0;
%000004       dst_n_offset_q    <= '0;
%000004       bias_base_q       <= '0;
%000004       src0_m_step_q     <= '0;
%000004       stride1_k_step_q  <= '0;
%000004       dst_m_step_q      <= '0;
%000004       dst_n_step_q      <= '0;
%000004       bias_n_step_q     <= '0;
%000004       vec_store_addr_q  <= '0;
%000004       vec_store_wdata_q <= '0;
%000004       vec_store_wstrb_q <= '0;
~000016       for (int c = 0; c < TILE_N; c++) begin
~000016         bias_vec[c] <= '0;
              end
~1056275     end else if (soft_reset) begin
%000001       state_q           <= S_IDLE;
%000001       opcode_q          <= '0;
%000001       flags_q           <= '0;
%000001       cmd_addr_q        <= '0;
%000001       src0_addr_q       <= '0;
%000001       src1_addr_q       <= '0;
%000001       bias_addr_q       <= '0;
%000001       dst_addr_q        <= '0;
%000001       M_q               <= '0;
%000001       N_q               <= '0;
%000001       K_q               <= '0;
%000001       stride0_q         <= '0;
%000001       stride1_q         <= '0;
%000001       stride_dst_q      <= '0;
%000001       scale_q           <= '0;
%000001       shift_q           <= '0;
%000001       zero_point_q      <= '0;
%000001       conv_in_hw_q      <= '0;
%000001       conv_channels_q   <= '0;
%000001       conv_cfg_q        <= '0;
%000001       conv_desc_version_q <= '0;
%000001       effective_n_q     <= '0;
%000001       m0_q              <= '0;
%000001       n0_q              <= '0;
%000001       k0_q              <= '0;
%000001       kk_q              <= '0;
%000001       store_row_q       <= '0;
%000001       store_col_q       <= '0;
%000001       bias_col_q        <= '0;
%000001       vec_idx_q         <= '0;
%000001       desc_word_idx_q   <= '0;
%000001       store_stage_done_q <= 1'b0;
%000001       dma_inflight_q    <= 1'b0;
%000001       bias_inflight_q   <= 1'b0;
%000001       vec_inflight_q    <= 1'b0;
%000001       desc_inflight_q   <= 1'b0;
%000001       conv_inflight_q   <= 1'b0;
%000001       conv_start_q      <= 1'b0;
%000001       conv_out_y_q      <= '0;
%000001       conv_out_x_q      <= '0;
%000001       conv_kh_q         <= '0;
%000001       conv_kw_q         <= '0;
%000001       conv_ic_q         <= '0;
%000001       dma_launch_pending_q <= 1'b0;
%000001       dma_op_kind_q     <= '0;
%000001       dma_base_addr_q   <= '0;
%000001       dma_rows_q        <= '0;
%000001       dma_cols_q        <= '0;
%000001       dma_stride_bytes_q <= '0;
%000001       dma_spm_region_q  <= '0;
%000001       dma_spm_base_q    <= '0;
%000001       vec_x_q           <= '0;
%000001       vec_y_q           <= '0;
%000001       vec_store_addr_q  <= '0;
%000001       vec_store_wdata_q <= '0;
%000001       vec_store_wstrb_q <= '0;
%000001       vec_result_raw_q  <= '0;
%000001       vec_result_post_q <= '0;
%000001       vec_scaled_q      <= '0;
%000001       is_vector_opcode_q <= 1'b0;
%000001       src0_row_base_q   <= '0;
%000001       src1_k_base_q     <= '0;
%000001       src1_n_offset_q   <= '0;
%000001       dst_row_base_q    <= '0;
%000001       dst_n_offset_q    <= '0;
%000001       bias_base_q       <= '0;
%000001       src0_m_step_q     <= '0;
%000001       stride1_k_step_q  <= '0;
%000001       dst_m_step_q      <= '0;
%000001       dst_n_step_q      <= '0;
%000001       bias_n_step_q     <= '0;
%000004       for (int c = 0; c < TILE_N; c++) begin
%000004         bias_vec[c] <= '0;
              end
 1056275     end else begin
 1056275       state_q            <= state_d;
 1056275       m0_q               <= m0_d;
 1056275       n0_q               <= n0_d;
 1056275       k0_q               <= k0_d;
 1056275       kk_q               <= kk_d;
 1056275       store_row_q        <= store_row_d;
 1056275       store_col_q        <= store_col_d;
 1056275       bias_col_q         <= bias_col_d;
 1056275       vec_idx_q          <= vec_idx_d;
 1056275       desc_word_idx_q    <= desc_word_idx_d;
 1056275       store_stage_done_q <= store_stage_done_d;
 1056275       src0_row_base_q    <= src0_row_base_d;
 1056275       src1_k_base_q      <= src1_k_base_d;
 1056275       src1_n_offset_q    <= src1_n_offset_d;
 1056275       dst_row_base_q     <= dst_row_base_d;
 1056275       dst_n_offset_q     <= dst_n_offset_d;
 1056275       bias_base_q        <= bias_base_d;
 1056275       src0_m_step_q      <= src0_m_step_d;
 1056275       stride1_k_step_q   <= stride1_k_step_d;
 1056275       dst_m_step_q       <= dst_m_step_d;
 1056275       dst_n_step_q       <= dst_n_step_d;
 1056275       bias_n_step_q      <= bias_n_step_d;
 1056275       dma_inflight_q     <= dma_inflight_d;
 1056275       bias_inflight_q    <= bias_inflight_d;
 1056275       vec_inflight_q     <= vec_inflight_d;
 1056275       desc_inflight_q    <= desc_inflight_d;
 1056275       conv_inflight_q    <= conv_inflight_d;
~1056275       conv_start_q       <= (state_q == S_CONV_LOAD_A) && !conv_inflight_q;
 1056275       conv_out_y_q       <= conv_out_y_d;
 1056275       conv_out_x_q       <= conv_out_x_d;
 1056275       conv_kh_q          <= conv_kh_d;
 1056275       conv_kw_q          <= conv_kw_d;
 1056275       conv_ic_q          <= conv_ic_d;
 1056275       dma_launch_pending_q <= dma_launch_pending_d;
        
~1055132       if (latch_cmd_addr)
~001143         cmd_addr_q <= cmd_addr;
        
~1055610       if (latch_cmd) begin
~000665         opcode_q     <= opcode;
~000665         flags_q      <= flags;
~000665         src0_addr_q  <= src0_addr;
~000665         src1_addr_q  <= src1_addr;
~000665         bias_addr_q  <= bias_addr;
~000665         dst_addr_q   <= dst_addr;
~000665         M_q          <= M;
~000665         N_q          <= N;
~000665         K_q          <= K;
~000665         stride0_q    <= stride0;
~000665         stride1_q    <= stride1;
~000665         stride_dst_q <= stride_dst;
~000665         scale_q      <= scale;
~000665         shift_q      <= shift;
~000665         zero_point_q <= zero_point;
~000665         conv_in_hw_q <= conv_in_hw;
~000665         conv_channels_q <= conv_channels;
~000665         conv_cfg_q <= conv_cfg;
~000665         conv_desc_version_q <= ABI_VERSION;
              end
        
~1055797       if (clear_cmd_fields) begin
~000478         opcode_q     <= '0;
~000478         flags_q      <= '0;
~000478         src0_addr_q  <= '0;
~000478         src1_addr_q  <= '0;
~000478         bias_addr_q  <= '0;
~000478         dst_addr_q   <= '0;
~000478         M_q          <= '0;
~000478         N_q          <= '0;
~000478         K_q          <= '0;
~000478         stride0_q    <= '0;
~000478         stride1_q    <= '0;
~000478         stride_dst_q <= '0;
~000478         scale_q      <= '0;
~000478         shift_q      <= '0;
~000478         zero_point_q <= '0;
~000478         conv_in_hw_q <= '0;
~000478         conv_channels_q <= '0;
~000478         conv_cfg_q <= '0;
~000478         conv_desc_version_q <= '0;
              end
        
~1048879       if (load_desc_word) begin
~007396         case (desc_word_idx_q)
~000478           5'd0:  opcode_q     <= client_mem_rdata[7:0];
~000478           5'd1:  flags_q      <= client_mem_rdata;
~000478           5'd2:  src0_addr_q  <= client_mem_rdata;
~000478           5'd3:  src1_addr_q  <= client_mem_rdata;
~000478           5'd4:  bias_addr_q  <= client_mem_rdata;
~000478           5'd5:  dst_addr_q   <= client_mem_rdata;
~000478           5'd6:  M_q          <= client_mem_rdata[15:0];
~000478           5'd7:  N_q          <= client_mem_rdata[15:0];
~000478           5'd8:  K_q          <= client_mem_rdata[15:0];
~000478           5'd9:  stride0_q    <= client_mem_rdata[15:0];
~000478           5'd10: stride1_q    <= client_mem_rdata[15:0];
~000478           5'd11: stride_dst_q <= client_mem_rdata[15:0];
~000478           5'd12: scale_q      <= client_mem_rdata;
~000478           5'd13: begin
~000478             shift_q      <= client_mem_rdata[31:16];
~000478             zero_point_q <= client_mem_rdata[15:0];
                  end
~000176           5'd14: conv_desc_version_q <= client_mem_rdata[7:0];
~000176           5'd15: conv_in_hw_q <= client_mem_rdata;
~000176           5'd16: conv_channels_q <= client_mem_rdata;
~000176           5'd17: conv_cfg_q <= client_mem_rdata;
%000000           default: begin
                  end
                endcase
              end
        
~1055991       if ((state_q == S_VALIDATE) && is_conv_opcode && conv_shape_ok) begin
~000284         M_q <= conv_m_calc[15:0];
~000284         N_q <= conv_output_c;
~000284         K_q <= conv_k_calc[15:0];
              end
        
~001194       if (clear_bias_regs) begin
~004776         for (int c = 0; c < TILE_N; c++) begin
~004776           bias_vec[c] <= '0;
                end
~1053530       end else if (load_bias_reg) begin
~001551         bias_vec[int'(bias_col_q)] <= $signed(client_mem_rdata);
              end
        
~1054482       if (load_vec_x_reg)
~001793         vec_x_q <= $signed(vec_load_byte);
~1055425       if (load_vec_y_reg)
~000850         vec_y_q <= $signed(vec_load_byte);
~1054482       if (latch_vec_raw)
~001793         vec_result_raw_q <= vec_result_raw;
~1054482       if (latch_vec_post)
~001793         vec_result_post_q <= vec_result_post;
~1055840       if (latch_vec_scaled)
~000435         vec_scaled_q <= vec_mul_product;
 1056275       is_vector_opcode_q <= (opcode_q == OP_VEC_ADD) || (opcode_q == OP_VEC_MUL) ||
~1056275                             (opcode_q == OP_RELU)    || (opcode_q == OP_CLAMP);
~1056275       effective_n_q      <= (opcode_q == OP_GEMV) ? 16'd1 : N_q;
        
~1054482       if (latch_vec_store_cmd) begin
~001793         vec_store_addr_q  <= vec_store_addr_next;
~001793         vec_store_wdata_q <= vec_store_wdata_next;
~001793         vec_store_wstrb_q <= vec_store_wstrb_next;
              end
        
~1052742       if (latch_dma_cmd) begin
~003533         dma_op_kind_q      <= dma_op_kind_cmd_n;
~003533         dma_base_addr_q    <= dma_base_addr_cmd_n;
~003533         dma_rows_q         <= dma_rows_cmd_n;
~003533         dma_cols_q         <= dma_cols_cmd_n;
~003533         dma_stride_bytes_q <= dma_stride_bytes_cmd_n;
~003533         dma_spm_region_q   <= dma_spm_region_cmd_n;
~003533         dma_spm_base_q     <= dma_spm_base_cmd_n;
              end
            end
          end
        
 1056280   always_ff @(posedge clk or negedge rst_n) begin
~1056276     if (!rst_n) begin
%000004       illegal_opcode     <= 1'b0;
%000004       shape_error        <= 1'b0;
%000004       memory_error       <= 1'b0;
%000004       unsupported_format <= 1'b0;
~1055132     end else if (soft_reset || clear_status) begin
~001144       illegal_opcode     <= 1'b0;
~001144       shape_error        <= 1'b0;
~001144       memory_error       <= 1'b0;
~001144       unsupported_format <= 1'b0;
 1055132     end else begin
~1055088       if (set_illegal_opcode)
~000044         illegal_opcode <= 1'b1;
~1054975       if (set_shape_error)
~000157         shape_error <= 1'b1;
~1055132       if (set_memory_error)
%000000         memory_error <= 1'b1;
~1055074       if (set_unsupported_format)
~000058         unsupported_format <= 1'b1;
            end
          end
        
 1056281   always @* begin
 1056281     opcode_ok = 1'b0;
 1056281     case (opcode_q)
              OP_GEMM,
              OP_GEMV,
              OP_VEC_ADD,
              OP_VEC_MUL,
              OP_RELU,
~552541       OP_CLAMP: opcode_ok = 1'b1;
~498020       OP_CONV2D: opcode_ok = ENABLE_CONV;
 005720       default: opcode_ok = 1'b0;
            endcase
        
~1056281     dst_flags_ok = !(flags_q[FLAG_DST_INT8] && flags_q[FLAG_DST_INT32]);
        
 1056281     dims_ok = 1'b1;
 1056281     case (opcode_q)
~991912       OP_GEMM: dims_ok = (M_q != 16'd0) && (N_q != 16'd0) && (K_q != 16'd0);
~991912       OP_GEMV: dims_ok = (M_q != 16'd0) && (K_q != 16'd0);
~498020       OP_CONV2D: dims_ok = conv_shape_ok;
              OP_VEC_ADD,
              OP_VEC_MUL,
              OP_RELU,
~074990       OP_CLAMP: dims_ok = (M_q != 16'd0);
 005720       default: dims_ok = 1'b0;
            endcase
          end
        
 1056281   always @* begin
~659684     if ((M_q - m0_q) >= TILE_M_U16)
~659684       active_tile_m = TILE_M_U16;
            else
 396597       active_tile_m = M_q - m0_q;
        
~685609     if ((effective_n - n0_q) >= TILE_N_U16)
~370672       active_tile_n = TILE_N_U16;
            else
 685609       active_tile_n = effective_n - n0_q;
        
~636720     if ((K_q - k0_q) >= TILE_K_U16)
~419561       active_tile_k = TILE_K_U16;
            else
 636720       active_tile_k = K_q - k0_q;
          end
        
%000001   always @* begin
%000004     for (int r = 0; r < TILE_M; r++) begin
%000004       row_mask[r]  = ((m0_q + 16'(r)) < M_q);
%000004       a_rd_addr[r] = 8'((r * TILE_K) + kk_q);
%000004       a_vec[r]     = $signed(a_rd_data[r]);
            end
        
%000004     for (int c = 0; c < TILE_N; c++) begin
%000004       col_mask[c]  = ((n0_q + 16'(c)) < effective_n);
%000004       b_rd_addr[c] = 8'((kk_q * TILE_N) + c);
%000004       b_vec[c]     = $signed(b_rd_data[c]);
            end
          end
        
 1056281   always @* begin
 1056281     m0_d               = m0_q;
 1056281     n0_d               = n0_q;
 1056281     k0_d               = k0_q;
 1056281     kk_d               = kk_q;
 1056281     store_row_d        = store_row_q;
 1056281     store_col_d        = store_col_q;
 1056281     bias_col_d         = bias_col_q;
 1056281     vec_idx_d          = vec_idx_q;
 1056281     desc_word_idx_d    = desc_word_idx_q;
 1056281     store_stage_done_d = store_stage_done_q;
 1056281     src0_row_base_d    = src0_row_base_q;
 1056281     src1_k_base_d      = src1_k_base_q;
 1056281     src1_n_offset_d    = src1_n_offset_q;
 1056281     dst_row_base_d     = dst_row_base_q;
 1056281     dst_n_offset_d     = dst_n_offset_q;
 1056281     bias_base_d        = bias_base_q;
 1056281     src0_m_step_d      = src0_m_step_q;
 1056281     stride1_k_step_d   = stride1_k_step_q;
 1056281     dst_m_step_d       = dst_m_step_q;
 1056281     dst_n_step_d       = dst_n_step_q;
 1056281     bias_n_step_d      = bias_n_step_q;
 1056281     conv_out_y_d       = conv_out_y_q;
 1056281     conv_out_x_d       = conv_out_x_q;
 1056281     conv_kh_d          = conv_kh_q;
 1056281     conv_kw_d          = conv_kw_q;
 1056281     conv_ic_d          = conv_ic_q;
        
 1056281     case (state_q)
 023295       S_IDLE: begin
 023295         m0_d               = '0;
 023295         n0_d               = '0;
 023295         k0_d               = '0;
 023295         kk_d               = '0;
 023295         store_row_d        = '0;
 023295         store_col_d        = '0;
 023295         bias_col_d         = '0;
 023295         vec_idx_d          = '0;
 023295         desc_word_idx_d    = '0;
 023295         store_stage_done_d = 1'b0;
 023295         src0_row_base_d    = '0;
 023295         src1_k_base_d      = '0;
 023295         src1_n_offset_d    = '0;
 023295         dst_row_base_d     = '0;
 023295         dst_n_offset_d     = '0;
 023295         bias_base_d        = '0;
 023295         src0_m_step_d      = '0;
 023295         stride1_k_step_d   = '0;
 023295         dst_m_step_d       = '0;
 023295         dst_n_step_d       = '0;
 023295         bias_n_step_d      = '0;
 023295         conv_out_y_d       = '0;
 023295         conv_out_x_d       = '0;
 023295         conv_kh_d          = '0;
 023295         conv_kw_d          = '0;
 023295         conv_ic_d          = '0;
              end
        
~000884       S_INIT_TILE: begin
~000884         k0_d               = '0;
~000884         kk_d               = '0;
~000884         store_row_d        = '0;
~000884         store_col_d        = '0;
~000884         bias_col_d         = '0;
~000884         vec_idx_d          = '0;
~000884         desc_word_idx_d    = '0;
~000884         store_stage_done_d = 1'b0;
~000884         conv_out_y_d       = '0;
~000884         conv_out_x_d       = '0;
~000884         conv_kh_d          = '0;
~000884         conv_kw_d          = '0;
~000884         conv_ic_d          = '0;
              end
        
~001143       S_VALIDATE: begin
~993473         if (opcode_ok && dims_ok && dst_flags_ok) begin
~000884           src0_row_base_d  = src0_addr_q;
~000884           src1_k_base_d    = src1_addr_q;
~000884           src1_n_offset_d  = '0;
~000884           dst_row_base_d   = dst_addr_q;
~000884           dst_n_offset_d   = '0;
~000884           bias_base_d      = bias_addr_q;
~000884           src0_m_step_d    = ({16'd0, stride0_q} << TILE_M_SHIFT);
~000884           stride1_k_step_d = ({16'd0, stride1_eff} << TILE_K_SHIFT);
~000884           dst_m_step_d     = ({16'd0, stride_dst_eff} << TILE_M_SHIFT);
~000884           dst_n_step_d     = use_dst_i8 ? {16'd0, TILE_N_U16} : ({16'd0, TILE_N_U16} << 2);
~000884           bias_n_step_d    = ({16'd0, TILE_N_U16} << 2);
                end
              end
        
~077542       S_DESC_LOAD: begin
~1048885         if (desc_inflight_q && desc_mem_rvalid) begin
~006918           if (desc_word_idx_q + 5'd1 < desc_words_expected)
~006918             desc_word_idx_d = desc_word_idx_q + 5'd1;
                end
              end
        
~001194       S_CLEAR_ACC: begin
~001194         kk_d = '0;
~001194         bias_col_d = '0;
~001194         vec_idx_d = '0;
              end
        
~011269       S_COMPUTE_K: begin
~009684         if (kk_q + 16'd1 < active_tile_k)
~009684           kk_d = kk_q + 16'd1;
                else
~001585           kk_d = '0;
              end
        
~001585       S_NEXT_K: begin
~001194         if (more_k_tiles) begin
~000391           k0_d = k0_q + TILE_K_U16;
~000391           src1_k_base_d = src1_k_base_q + stride1_k_step_q;
~001194         end else begin
~001194           store_row_d        = '0;
~001194           store_col_d        = '0;
~001194           bias_col_d         = '0;
~001194           store_stage_done_d = 1'b0;
                end
              end
        
~016358       S_LOAD_BIAS: begin
~1054730         if (flags_q[FLAG_BIAS_EN] && bias_inflight_q && bias_mem_rvalid) begin
~000929           if (bias_col_q + 16'd1 < active_tile_n)
~000929             bias_col_d = bias_col_q + 16'd1;
                  else
~000622             bias_col_d = '0;
                end
              end
        
~194472       S_CONV_LOAD_A: begin
~193641         if (conv_done) begin
~000831           conv_kh_d = conv_next_kh;
~000831           conv_kw_d = conv_next_kw;
~000831           conv_ic_d = conv_next_ic;
                end
              end
        
~001793       S_VEC_STORE: begin
~1049202         if (((!vec_inflight_q) && vec_mem_ready) || (vec_inflight_q && vec_mem_ready)) begin
~001515           if (vec_idx_q + 16'd1 < M_q)
~001515             vec_idx_d = vec_idx_q + 16'd1;
                  else
~000278             vec_idx_d = '0;
                end
              end
        
~085256       S_STORE_C: begin
~978658         if (!store_stage_done_q) begin
~005727           if (store_col_q + 16'd1 < active_tile_n) begin
~005727             store_col_d = store_col_q + 16'd1;
~003706           end else begin
~003706             store_col_d = '0;
~002512             if (store_row_q + 16'd1 < active_tile_m)
~002512               store_row_d = store_row_q + 16'd1;
                  end
        
~008239           if (store_stage_last) begin
~001194             store_row_d        = '0;
~001194             store_col_d        = '0;
~001194             store_stage_done_d = 1'b1;
                  end
                end
              end
        
~000209       S_NEXT_TILE_N: begin
~000209         n0_d               = n0_q + TILE_N_U16;
~000209         k0_d               = '0;
~000209         kk_d               = '0;
~000209         store_row_d        = '0;
~000209         store_col_d        = '0;
~000209         bias_col_d         = '0;
~000209         vec_idx_d          = '0;
~000209         store_stage_done_d = 1'b0;
~000209         src1_k_base_d      = src1_addr_q;
~000209         src1_n_offset_d    = src1_n_offset_q + {16'd0, TILE_N_U16};
~000209         dst_n_offset_d     = dst_n_offset_q + dst_n_step_q;
~000209         bias_base_d        = bias_base_q + bias_n_step_q;
~000209         conv_kh_d          = '0;
~000209         conv_kw_d          = '0;
~000209         conv_ic_d          = '0;
              end
        
~000379       S_NEXT_TILE_M: begin
~000379         m0_d               = m0_q + TILE_M_U16;
~000379         n0_d               = '0;
~000379         k0_d               = '0;
~000379         kk_d               = '0;
~000379         store_row_d        = '0;
~000379         store_col_d        = '0;
~000379         bias_col_d         = '0;
~000379         vec_idx_d          = '0;
~000379         store_stage_done_d = 1'b0;
~000379         src0_row_base_d    = src0_row_base_q + src0_m_step_q;
~000379         src1_k_base_d      = src1_addr_q;
~000379         src1_n_offset_d    = '0;
~000379         dst_row_base_d     = dst_row_base_q + dst_m_step_q;
~000379         dst_n_offset_d     = '0;
~000379         bias_base_d        = bias_addr_q;
~000379         conv_out_y_d       = conv_next_out_y;
~000379         conv_out_x_d       = conv_next_out_x;
~000379         conv_kh_d          = '0;
~000379         conv_kw_d          = '0;
~000379         conv_ic_d          = '0;
              end
        
~640902       default: begin
              end
            endcase
          end
        
 3168841   always @* begin
 3168841     state_d                = state_q;
 3168841     latch_cmd              = 1'b0;
 3168841     latch_cmd_addr         = 1'b0;
 3168841     clear_cmd_fields       = 1'b0;
 3168841     load_desc_word         = 1'b0;
 3168841     clear_status           = 1'b0;
 3168841     set_illegal_opcode     = 1'b0;
 3168841     set_shape_error        = 1'b0;
 3168841     set_memory_error       = 1'b0;
 3168841     set_unsupported_format = 1'b0;
 3168841     dma_inflight_d         = dma_inflight_q;
 3168841     bias_inflight_d        = bias_inflight_q;
 3168841     vec_inflight_d         = vec_inflight_q;
 3168841     desc_inflight_d        = desc_inflight_q;
 3168841     conv_inflight_d        = conv_inflight_q;
 3168841     dma_launch_pending_d   = dma_launch_pending_q;
        
 3168841     busy          = 1'b1;
 3168841     done          = 1'b0;
        
 3168841     cnt_cmd_start = 1'b0;
 3168841     cnt_cmd_done  = 1'b0;
~3168841     cnt_busy      = (state_q != S_IDLE) && (state_q != S_DONE) && (state_q != S_ERROR);
 3168841     cnt_active    = (state_q == S_COMPUTE_K) || (state_q == S_VEC_EXEC) ||
~3168841                     (state_q == S_VEC_EXEC2) || (state_q == S_VEC_EXEC3);
 3168841     cnt_stall     = 1'b0;
 3168841     clear_bias_regs = 1'b0;
 3168841     load_bias_reg   = 1'b0;
 3168841     load_vec_x_reg  = 1'b0;
 3168841     load_vec_y_reg  = 1'b0;
 3168841     latch_vec_store_cmd = 1'b0;
 3168841     latch_dma_cmd       = 1'b0;
 3168841     latch_vec_raw       = 1'b0;
 3168841     latch_vec_post      = 1'b0;
 3168841     latch_vec_scaled    = 1'b0;
        
 3168841     array_clear_acc = 1'b0;
 3168841     array_mac_en    = 1'b0;
 3168841     epi_start       = 1'b0;
        
 3168841     dma_start        = 1'b0;
 3168841     vec_mul_start    = 1'b0;
        
 3168841     c_wr_en         = 1'b0;
 3168841     c_wr_addr       = '0;
 3168841     c_wr_data       = '0;
 3168841     c_rd_addr       = '0;
        
 3168841     bias_mem_req      = 1'b0;
 3168841     bias_mem_we       = 1'b0;
 3168841     bias_mem_addr_mux = bias_mem_addr;
 3168841     bias_mem_wdata    = '0;
 3168841     bias_mem_wstrb    = 4'b0000;
 3168841     vec_mem_req       = 1'b0;
 3168841     vec_mem_we        = 1'b0;
 3168841     vec_mem_addr      = '0;
 3168841     vec_mem_wdata     = '0;
 3168841     vec_mem_wstrb     = 4'b0000;
 3168841     desc_mem_req      = 1'b0;
 3168841     desc_mem_we       = 1'b0;
 3168841     desc_mem_wdata    = '0;
 3168841     desc_mem_wstrb    = 4'b0000;
 3168841     dma_op_kind_cmd_n      = DMA_OP_LOAD_I8;
 3168841     dma_base_addr_cmd_n    = '0;
 3168841     dma_rows_cmd_n         = '0;
 3168841     dma_cols_cmd_n         = '0;
 3168841     dma_stride_bytes_cmd_n = '0;
 3168841     dma_spm_region_cmd_n   = SPM_REGION_A;
 3168841     dma_spm_base_cmd_n     = 9'd0;
        
 3168841     case (state_q)
 069883       S_IDLE: begin
 069883         busy = 1'b0;
 069883         dma_inflight_d = 1'b0;
 069883         bias_inflight_d = 1'b0;
 069883         vec_inflight_d = 1'b0;
 069883         desc_inflight_d = 1'b0;
 069883         conv_inflight_d = 1'b0;
 069883         dma_launch_pending_d = 1'b0;
 069883         clear_status = start;
~067597         if (start) begin
~002286           latch_cmd_addr = 1'b1;
~002286           cnt_cmd_start = 1'b1;
~001330           if (start_direct_mode) begin
~001330             latch_cmd = 1'b1;
~001330             state_d   = S_VALIDATE;
~000956           end else begin
~000956             clear_cmd_fields = 1'b1;
~000956             state_d          = S_DESC_LOAD;
                  end
                end
              end
        
~232626       S_DESC_LOAD: begin
~232626         dma_inflight_d = 1'b0;
~232626         bias_inflight_d = 1'b0;
~232626         vec_inflight_d = 1'b0;
~232626         cnt_stall = 1'b1;
        
~2958403         if (!desc_inflight_q) begin
~022188           desc_mem_req = 1'b1;
~022188           if (desc_mem_ready)
~022188             desc_inflight_d = 1'b1;
~188250         end else if (desc_mem_rvalid) begin
~022188           load_desc_word = 1'b1;
~022188           desc_inflight_d = 1'b0;
~020754           if (desc_word_idx_q + 5'd1 >= desc_words_expected)
~001434             state_d = S_VALIDATE;
                end
              end
        
 003429       S_VALIDATE: begin
 003429         dma_inflight_d = 1'b0;
 003429         bias_inflight_d = 1'b0;
 003429         vec_inflight_d = 1'b0;
 003429         desc_inflight_d = 1'b0;
 003429         conv_inflight_d = 1'b0;
 003429         dma_launch_pending_d = 1'b0;
~3151681         if (!opcode_ok) begin
~000132           set_illegal_opcode = 1'b1;
~000132           state_d = S_ERROR;
~002826         end else if (!dims_ok) begin
~000471           set_shape_error = 1'b1;
~000471           state_d = S_ERROR;
~002652         end else if (!dst_flags_ok) begin
~000174           set_unsupported_format = 1'b1;
~000174           state_d = S_ERROR;
~002652         end else begin
~002652           state_d = S_INIT_TILE;
                end
              end
        
~002652       S_INIT_TILE: begin
~002652         dma_inflight_d = 1'b0;
~002652         bias_inflight_d = 1'b0;
~002652         vec_inflight_d = 1'b0;
~002652         desc_inflight_d = 1'b0;
~002652         conv_inflight_d = 1'b0;
~002652         dma_launch_pending_d = 1'b0;
~001818         if (is_vector_opcode)
~000834           state_d = S_VEC_LOAD_X;
                else
~001818           state_d = S_CLEAR_ACC;
              end
        
~003582       S_CLEAR_ACC: begin
~003582         dma_inflight_d = 1'b0;
~003582         bias_inflight_d = 1'b0;
~003582         vec_inflight_d = 1'b0;
~003582         desc_inflight_d = 1'b0;
~003582         conv_inflight_d = 1'b0;
~003582         dma_launch_pending_d = 1'b0;
~003582         clear_bias_regs = 1'b1;
~003582         array_clear_acc = 1'b1;
~001974         if (is_conv_opcode)
~001974           state_d = S_CONV_LOAD_A;
                else
~001608           state_d = S_LOAD_A;
              end
        
~583416       S_CONV_LOAD_A: begin
~583416         dma_inflight_d = 1'b0;
~583416         bias_inflight_d = 1'b0;
~583416         vec_inflight_d = 1'b0;
~583416         desc_inflight_d = 1'b0;
~583416         dma_launch_pending_d = 1'b0;
~583416         cnt_stall = 1'b1;
        
~2587918         if (!conv_inflight_q) begin
~002493           conv_inflight_d = 1'b1;
%000000         end else if (conv_error) begin
%000000           set_memory_error = 1'b1;
%000000           conv_inflight_d = 1'b0;
%000000           state_d = S_ERROR;
~578430         end else if (conv_done) begin
~002493           conv_inflight_d = 1'b0;
~002493           state_d = S_LOAD_B;
                end
              end
        
~566724       S_LOAD_A: begin
~566724         desc_inflight_d        = 1'b0;
~566724         dma_op_kind_cmd_n      = DMA_OP_LOAD_I8;
~566724         dma_base_addr_cmd_n    = src0_row_base_q + {16'd0, k0_q};
~566724         dma_rows_cmd_n         = active_tile_m;
~566724         dma_cols_cmd_n         = active_tile_k;
~566724         dma_stride_bytes_cmd_n = stride0_q;
~566724         dma_spm_region_cmd_n   = SPM_REGION_A;
~566724         dma_spm_base_cmd_n     = 9'd0;
        
~1787946         if (!dma_launch_pending_q && !dma_inflight_q) begin
~002262           latch_dma_cmd        = 1'b1;
~002262           dma_launch_pending_d = 1'b1;
~002262           cnt_stall            = 1'b1;
~002262         end else if (dma_launch_pending_q) begin
~002262           dma_start            = 1'b1;
~002262           dma_launch_pending_d = 1'b0;
~002262           dma_inflight_d       = 1'b1;
~002262           cnt_stall            = 1'b1;
%000000         end else if (dma_error) begin
%000000           set_memory_error = 1'b1;
%000000           dma_inflight_d       = 1'b0;
%000000           dma_launch_pending_d = 1'b0;
%000000           state_d = S_ERROR;
~559938         end else if (dma_done) begin
~002262           dma_inflight_d       = 1'b0;
~002262           dma_launch_pending_d = 1'b0;
~002262           state_d = S_LOAD_B;
~559938         end else begin
~559938           cnt_stall = 1'b1;
                end
              end
        
~986652       S_LOAD_B: begin
~986652         desc_inflight_d        = 1'b0;
~986652         dma_op_kind_cmd_n      = DMA_OP_LOAD_I8;
~986652         dma_base_addr_cmd_n    = src1_k_base_q + src1_n_offset_q;
~986652         dma_rows_cmd_n         = active_tile_k;
~986652         dma_cols_cmd_n         = active_tile_n;
~986652         dma_stride_bytes_cmd_n = stride1_eff;
~986652         dma_spm_region_cmd_n   = SPM_REGION_B;
~986652         dma_spm_base_cmd_n     = 9'd0;
        
~1787946         if (!dma_launch_pending_q && !dma_inflight_q) begin
~004755           latch_dma_cmd        = 1'b1;
~004755           dma_launch_pending_d = 1'b1;
~004755           cnt_stall            = 1'b1;
~004755         end else if (dma_launch_pending_q) begin
~004755           dma_start            = 1'b1;
~004755           dma_launch_pending_d = 1'b0;
~004755           dma_inflight_d       = 1'b1;
~004755           cnt_stall            = 1'b1;
%000000         end else if (dma_error) begin
%000000           set_memory_error = 1'b1;
%000000           dma_inflight_d       = 1'b0;
%000000           dma_launch_pending_d = 1'b0;
%000000           state_d = S_ERROR;
~972387         end else if (dma_done) begin
~004755           dma_inflight_d       = 1'b0;
~004755           dma_launch_pending_d = 1'b0;
~004755           state_d = S_COMPUTE_K;
~972387         end else begin
~972387           cnt_stall = 1'b1;
                end
              end
        
~033807       S_COMPUTE_K: begin
~033807         dma_inflight_d = 1'b0;
~033807         bias_inflight_d = 1'b0;
~033807         vec_inflight_d = 1'b0;
~033807         desc_inflight_d = 1'b0;
~033807         dma_launch_pending_d = 1'b0;
~033807         array_mac_en = 1'b1;
~029052         if (kk_q + 16'd1 >= active_tile_k)
~004755           state_d = S_NEXT_K;
              end
        
~004755       S_NEXT_K: begin
~004755         dma_inflight_d = 1'b0;
~004755         bias_inflight_d = 1'b0;
~004755         vec_inflight_d = 1'b0;
~004755         desc_inflight_d = 1'b0;
~004755         dma_launch_pending_d = 1'b0;
~001173         if (more_k_tiles) begin
~000654           if (is_conv_opcode)
~000519             state_d = S_CONV_LOAD_A;
                  else
~000654             state_d = S_LOAD_A;
                end
~001866         else if (flags_q[FLAG_BIAS_EN])
~001866           state_d = S_LOAD_BIAS;
                else
~001716           state_d = S_EPILOGUE;
              end
        
~049074       S_LOAD_BIAS: begin
~049074         dma_inflight_d = 1'b0;
~049074         vec_inflight_d = 1'b0;
~049074         desc_inflight_d = 1'b0;
~049074         dma_launch_pending_d = 1'b0;
~049074         cnt_stall = 1'b1;
        
~1605088         if (!flags_q[FLAG_BIAS_EN]) begin
%000000           bias_inflight_d = 1'b0;
%000000           state_d = S_EPILOGUE;
~044421         end else if (!bias_inflight_q) begin
~004653           bias_mem_req = 1'b1;
~004653           if (bias_mem_ready)
~004653             bias_inflight_d = 1'b1;
~039768         end else if (bias_mem_rvalid) begin
~004653           load_bias_reg = 1'b1;
~004653           bias_inflight_d = 1'b0;
~002787           if (bias_col_q + 16'd1 >= active_tile_n)
~001866             state_d = S_EPILOGUE;
                end
              end
        
~224460       S_EPILOGUE: begin
~224460         dma_inflight_d = 1'b0;
~224460         bias_inflight_d = 1'b0;
~224460         vec_inflight_d = 1'b0;
~224460         desc_inflight_d = 1'b0;
~224460         dma_launch_pending_d = 1'b0;
~2947963         if (!epi_busy && !epi_done)
~003582           epi_start = 1'b1;
        
~167148         if (epi_out_valid) begin
~057312           c_wr_en = 1'b1;
~057312           c_wr_addr = epi_out_index;
~057312           c_wr_data = use_dst_i8 ? {24'd0, epi_out_i8} : epi_out_i32;
                end
        
~220878         if (epi_done)
~003582           state_d = S_STORE_C;
              end
        
~255768       S_STORE_C: begin
~255768         desc_inflight_d = 1'b0;
~255768         vec_inflight_d = 1'b0;
~1614495         dma_op_kind_cmd_n      = use_dst_i8 ? DMA_OP_STORE_I8 : DMA_OP_STORE_I32;
~255768         dma_base_addr_cmd_n    = dma_store_base_addr;
~255768         dma_rows_cmd_n         = active_tile_m;
~255768         dma_cols_cmd_n         = active_tile_n;
~255768         dma_stride_bytes_cmd_n = stride_dst_eff;
~255768         dma_spm_region_cmd_n   = SPM_REGION_C;
~255768         dma_spm_base_cmd_n     = 9'd0;
        
~1787946         if (!dma_launch_pending_q && !dma_inflight_q) begin
~003582           latch_dma_cmd        = 1'b1;
~003582           dma_launch_pending_d = 1'b1;
~003582           cnt_stall            = 1'b1;
~003582         end else if (dma_launch_pending_q) begin
~003582           dma_start            = 1'b1;
~003582           dma_launch_pending_d = 1'b0;
~003582           dma_inflight_d       = 1'b1;
~003582           cnt_stall            = 1'b1;
%000000         end else if (dma_error) begin
%000000           set_memory_error = 1'b1;
%000000           dma_inflight_d       = 1'b0;
%000000           dma_launch_pending_d = 1'b0;
%000000           state_d = S_ERROR;
~245022         end else if (dma_done) begin
~003582           dma_inflight_d       = 1'b0;
~003582           dma_launch_pending_d = 1'b0;
~000627           if (more_n_tiles)
~000627             state_d = S_NEXT_TILE_N;
~001818           else if (more_m_tiles)
~001137             state_d = S_NEXT_TILE_M;
                  else
~001818             state_d = S_DONE;
~245022         end else begin
~245022           cnt_stall = 1'b1;
                end
              end
        
~094572       S_VEC_LOAD_X: begin
~094572         dma_inflight_d = 1'b0;
~094572         bias_inflight_d = 1'b0;
~094572         desc_inflight_d = 1'b0;
~094572         dma_launch_pending_d = 1'b0;
~094572         cnt_stall = 1'b1;
        
~094572         vec_mem_we   = 1'b0;
~094572         vec_mem_addr = vec_src0_read_addr;
        
~3093043         if (!vec_inflight_q) begin
~043041           vec_mem_req = 1'b1;
~037662           if (vec_mem_ready)
~005379             vec_inflight_d = 1'b1;
~046152         end else if (vec_mem_rvalid) begin
~005379           load_vec_x_reg = 1'b1;
~005379           vec_inflight_d = 1'b0;
~002829           if (vec_needs_y)
~002550             state_d = S_VEC_LOAD_Y;
                  else
~002829             state_d = S_VEC_EXEC;
                end
              end
        
~026817       S_VEC_LOAD_Y: begin
~026817         dma_inflight_d = 1'b0;
~026817         bias_inflight_d = 1'b0;
~026817         desc_inflight_d = 1'b0;
~026817         dma_launch_pending_d = 1'b0;
~026817         cnt_stall = 1'b1;
        
~026817         vec_mem_we   = 1'b0;
~026817         vec_mem_addr = vec_src1_read_addr;
        
~3093043         if (!vec_inflight_q) begin
~002550           vec_mem_req = 1'b1;
~002550           if (vec_mem_ready)
~002550             vec_inflight_d = 1'b1;
~021717         end else if (vec_mem_rvalid) begin
~002550           load_vec_y_reg = 1'b1;
~002550           vec_inflight_d = 1'b0;
~002550           state_d = S_VEC_EXEC;
                end
              end
        
~005379       S_VEC_EXEC: begin
~005379         dma_inflight_d = 1'b0;
~005379         bias_inflight_d = 1'b0;
~005379         vec_inflight_d = 1'b0;
~005379         desc_inflight_d = 1'b0;
~005379         dma_launch_pending_d = 1'b0;
~005379         latch_vec_raw = 1'b1;
~005379         state_d = S_VEC_EXEC2;
              end
        
~005379       S_VEC_EXEC2: begin
~005379         dma_inflight_d = 1'b0;
~005379         bias_inflight_d = 1'b0;
~005379         vec_inflight_d = 1'b0;
~005379         desc_inflight_d = 1'b0;
~005379         dma_launch_pending_d = 1'b0;
~005379         latch_vec_post = 1'b1;
~004074         if (flags_q[FLAG_REQUANT_EN])
~001305           state_d = S_VEC_EXEC3;
                else
~004074           state_d = S_VEC_EXEC4;
              end
        
~003915       S_VEC_EXEC3: begin
~003915         dma_inflight_d = 1'b0;
~003915         bias_inflight_d = 1'b0;
~003915         vec_inflight_d = 1'b0;
~003915         desc_inflight_d = 1'b0;
~003915         dma_launch_pending_d = 1'b0;
~003915         if (flags_q[FLAG_REQUANT_EN]) begin
~003915           cnt_stall = 1'b1;
~001305           if (!vec_mul_busy && !vec_mul_done) begin
~001305             vec_mul_start = 1'b1;
~001305           end else if (vec_mul_done) begin
~001305             latch_vec_scaled = 1'b1;
~001305             state_d = S_VEC_EXEC4;
                  end
%000000         end else begin
%000000           state_d = S_VEC_EXEC4;
                end
              end
        
~005379       S_VEC_EXEC4: begin
~005379         dma_inflight_d = 1'b0;
~005379         bias_inflight_d = 1'b0;
~005379         vec_inflight_d = 1'b0;
~005379         desc_inflight_d = 1'b0;
~005379         dma_launch_pending_d = 1'b0;
~005379         latch_vec_store_cmd = 1'b1;
~005379         state_d = S_VEC_STORE;
              end
        
~005379       S_VEC_STORE: begin
~005379         dma_inflight_d = 1'b0;
~005379         bias_inflight_d = 1'b0;
~005379         desc_inflight_d = 1'b0;
~005379         dma_launch_pending_d = 1'b0;
~005379         cnt_stall = 1'b1;
        
~005379         vec_mem_req  = 1'b1;
~005379         vec_mem_we   = 1'b1;
~005379         vec_mem_addr = vec_store_addr_q;
~005379         vec_mem_wdata = vec_store_wdata_q;
~005379         vec_mem_wstrb = vec_store_wstrb_q;
        
~005379         if (vec_mem_ready) begin
~005379           vec_inflight_d = 1'b0;
~004545           if (vec_idx_q + 16'd1 < M_q)
~004545             state_d = S_VEC_LOAD_X;
                  else
~000834             state_d = S_DONE;
%000000         end else begin
%000000           vec_inflight_d = 1'b1;
                end
              end
        
~000627       S_NEXT_TILE_N: begin
~000627         dma_inflight_d = 1'b0;
~000627         bias_inflight_d = 1'b0;
~000627         vec_inflight_d = 1'b0;
~000627         desc_inflight_d = 1'b0;
~000627         dma_launch_pending_d = 1'b0;
~000627         state_d = S_CLEAR_ACC;
              end
        
~001137       S_NEXT_TILE_M: begin
~001137         dma_inflight_d = 1'b0;
~001137         bias_inflight_d = 1'b0;
~001137         vec_inflight_d = 1'b0;
~001137         desc_inflight_d = 1'b0;
~001137         dma_launch_pending_d = 1'b0;
~001137         state_d = S_CLEAR_ACC;
              end
        
~002652       S_DONE: begin
~002652         busy         = 1'b0;
~002652         done         = 1'b1;
~002652         cnt_cmd_done = 1'b1;
~002652         dma_inflight_d = 1'b0;
~002652         bias_inflight_d = 1'b0;
~002652         vec_inflight_d = 1'b0;
~002652         desc_inflight_d = 1'b0;
~002652         dma_launch_pending_d = 1'b0;
~002652         state_d      = S_IDLE;
              end
        
~000777       S_ERROR: begin
~000777         busy    = 1'b0;
~000777         done    = 1'b1;
~000777         cnt_cmd_done = 1'b1;
~000777         dma_inflight_d = 1'b0;
~000777         bias_inflight_d = 1'b0;
~000777         vec_inflight_d = 1'b0;
~000777         desc_inflight_d = 1'b0;
~000777         dma_launch_pending_d = 1'b0;
~000777         state_d = S_IDLE;
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
 1056280   always @(posedge clk or negedge rst_n) begin
~1056276     if (!rst_n) begin
~1056275     end else if (!soft_reset) begin
              // Branch-closure proof point: the FSM default branch is defensive only.
              // After reset, legal transitions must keep state_q inside the declared
              // command-state encoding.
 1056275       assert (state_q <= S_ERROR);
 1056275       assert (m0_q <= M_q);
 1056275       assert (n0_q <= effective_n);
 1056275       assert (k0_q <= K_q);
~1056275       assert (!array_mac_en || state_q == S_COMPUTE_K);
~1056275       assert (!(conv_spm_wr_en && !state_is_conv));
~1056275       assert (!dma_busy_status || dma_inflight_q || dma_launch_pending_q);
~1056275       assert (!conv_busy_status || conv_inflight_q);
~1056275       assert (!(dma_launch_pending_q && dma_inflight_q));
~1056275       assert (!done || (state_q == S_DONE) || (state_q == S_ERROR));
~1056275       assert (!(done && busy));
~1037171       if (epi_out_valid) begin
~019104         assert (epi_shadow_i32[int'(epi_out_index) / TILE_N][int'(epi_out_index) % TILE_N] == epi_out_i32);
~019104         assert (epi_shadow_i8[int'(epi_out_index) / TILE_N][int'(epi_out_index) % TILE_N] == epi_out_i8);
              end
            end
          end
        `endif
        
        endmodule
        
