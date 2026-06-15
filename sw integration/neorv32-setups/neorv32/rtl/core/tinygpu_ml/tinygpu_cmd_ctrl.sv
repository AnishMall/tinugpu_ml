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

  function automatic signed [INT8_W-1:0] sat_i8(input signed [31:0] x);
    begin
      if (x > 32'sd127)
        sat_i8 = 8'sd127;
      else if (x < -32'sd128)
        sat_i8 = -8'sd128;
      else
        sat_i8 = x[INT8_W-1:0];
    end
  endfunction

  function automatic signed [31:0] clamp32(
    input signed [31:0] x,
    input signed [31:0] lo,
    input signed [31:0] hi
  );
    begin
      if (x < lo)
        clamp32 = lo;
      else if (x > hi)
        clamp32 = hi;
      else
        clamp32 = x;
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
  assign mem_client_sel = state_is_desc ? 3'd1 :
                          state_is_conv ? 3'd2 :
                          state_is_vec  ? 3'd3 :
                          state_is_bias ? 3'd4 : 3'd0;
  assign vec_src0_stride_bytes = (stride0_q != 16'd0) ? stride0_q : 16'd1;
  assign vec_src1_stride_bytes = (stride1_q != 16'd0) ? stride1_q : 16'd1;
  assign vec_dst_stride_bytes  = (stride_dst_q != 16'd0) ? stride_dst_q : (use_dst_i8 ? 16'd1 : 16'd4);
  assign vec_src0_elem_addr = src0_addr_q + (vec_idx_q * vec_src0_stride_bytes);
  assign vec_src1_elem_addr = src1_addr_q + (vec_idx_q * vec_src1_stride_bytes);
  assign vec_dst_elem_addr  = dst_addr_q  + (vec_idx_q * vec_dst_stride_bytes);
  assign vec_store_aligned_addr = use_dst_i8 ? {vec_dst_elem_addr[31:2], 2'b00} : vec_dst_elem_addr;
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
  assign conv_input_row_stride = (stride0_q != 0) ? {16'd0, stride0_q} : ({16'd0, conv_input_w} * {16'd0, conv_input_c});
  assign stride1_eff = is_conv_opcode ? ((stride1_q != 0) ? stride1_q : conv_output_c) : stride1_q;
  assign stride_dst_eff = is_conv_opcode ? ((stride_dst_q != 0) ? stride_dst_q :
                          (use_dst_i8 ? conv_output_c : (conv_output_c << 2))) : stride_dst_q;
  assign desc_words_expected = (opcode_q == OP_CONV2D) ? DESC_WORDS_CONV : DESC_WORDS_BASE;
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

  always @* begin
    vec_store_addr_next = vec_store_aligned_addr;
    vec_store_wdata_next = vec_result_post_q;
    vec_store_wstrb_next = 4'b1111;

    if (use_dst_i8) begin
      case (vec_dst_elem_addr[1:0])
        2'd0: begin
          vec_store_wdata_next = {24'd0, vec_result_i8};
          vec_store_wstrb_next = 4'b0001;
        end
        2'd1: begin
          vec_store_wdata_next = {16'd0, vec_result_i8, 8'd0};
          vec_store_wstrb_next = 4'b0010;
        end
        2'd2: begin
          vec_store_wdata_next = {8'd0, vec_result_i8, 16'd0};
          vec_store_wstrb_next = 4'b0100;
        end
        default: begin
          vec_store_wdata_next = {vec_result_i8, 24'd0};
          vec_store_wstrb_next = 4'b1000;
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
  assign shared_mul_a     = epi_mul_start ? epi_mul_a : vec_result_post_q;
  assign shared_mul_b     = epi_mul_start ? epi_mul_b : scale_q;
  assign vec_mul_busy     = shared_mul_busy;
  assign vec_mul_done     = shared_mul_done;
  assign vec_mul_product  = shared_mul_product;

  always @* begin
    case (state_q)
      S_VEC_LOAD_Y: begin
        case (vec_src1_lane_sel)
          2'd0: vec_load_byte = client_mem_rdata[7:0];
          2'd1: vec_load_byte = client_mem_rdata[15:8];
          2'd2: vec_load_byte = client_mem_rdata[23:16];
          default: vec_load_byte = client_mem_rdata[31:24];
        endcase
      end
      default: begin
        case (vec_src0_lane_sel)
          2'd0: vec_load_byte = client_mem_rdata[7:0];
          2'd1: vec_load_byte = client_mem_rdata[15:8];
          2'd2: vec_load_byte = client_mem_rdata[23:16];
          default: vec_load_byte = client_mem_rdata[31:24];
        endcase
      end
    endcase
  end

  always @* begin
    vec_result_post = vec_result_raw_q;

    if (flags_q[FLAG_RELU_EN] && (vec_result_post < 0))
      vec_result_post = 32'sd0;

    if (flags_q[FLAG_CLAMP_EN])
      vec_result_post = clamp32(vec_result_post, -32'sd128, 32'sd127);

    if (flags_q[FLAG_REQUANT_EN]) begin
      if ($signed(shift_q) >= 0)
        vec_result_i8 = sat_i8(($signed(vec_scaled_q) >>> shift_q) + zero_point_ext);
      else
        vec_result_i8 = sat_i8(($signed(vec_scaled_q) <<< (-$signed(shift_q))) + zero_point_ext);
    end else begin
      vec_result_i8 = sat_i8(vec_result_post_q);  // use registered value
    end
  end

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      state_q           <= S_IDLE;
      opcode_q          <= '0;
      flags_q           <= '0;
      cmd_addr_q        <= '0;
      src0_addr_q       <= '0;
      src1_addr_q       <= '0;
      bias_addr_q       <= '0;
      dst_addr_q        <= '0;
      M_q               <= '0;
      N_q               <= '0;
      K_q               <= '0;
      stride0_q         <= '0;
      stride1_q         <= '0;
      stride_dst_q      <= '0;
      scale_q           <= '0;
      shift_q           <= '0;
      zero_point_q      <= '0;
      conv_in_hw_q      <= '0;
      conv_channels_q   <= '0;
      conv_cfg_q        <= '0;
      conv_desc_version_q <= '0;
      effective_n_q     <= '0;
      m0_q              <= '0;
      n0_q              <= '0;
      k0_q              <= '0;
      kk_q              <= '0;
      store_row_q       <= '0;
      store_col_q       <= '0;
      bias_col_q        <= '0;
      vec_idx_q         <= '0;
      desc_word_idx_q   <= '0;
      store_stage_done_q <= 1'b0;
      dma_inflight_q    <= 1'b0;
      bias_inflight_q   <= 1'b0;
      vec_inflight_q    <= 1'b0;
      desc_inflight_q   <= 1'b0;
      conv_inflight_q   <= 1'b0;
      conv_start_q      <= 1'b0;
      conv_out_y_q      <= '0;
      conv_out_x_q      <= '0;
      conv_kh_q         <= '0;
      conv_kw_q         <= '0;
      conv_ic_q         <= '0;
      dma_launch_pending_q <= 1'b0;
      dma_op_kind_q     <= '0;
      dma_base_addr_q   <= '0;
      dma_rows_q        <= '0;
      dma_cols_q        <= '0;
      dma_stride_bytes_q <= '0;
      dma_spm_region_q  <= '0;
      dma_spm_base_q    <= '0;
      vec_x_q           <= '0;
      vec_y_q           <= '0;
      vec_result_raw_q  <= '0;
      vec_result_post_q <= '0;
      vec_scaled_q      <= '0;
      is_vector_opcode_q <= 1'b0;
      src0_row_base_q   <= '0;
      src1_k_base_q     <= '0;
      src1_n_offset_q   <= '0;
      dst_row_base_q    <= '0;
      dst_n_offset_q    <= '0;
      bias_base_q       <= '0;
      src0_m_step_q     <= '0;
      stride1_k_step_q  <= '0;
      dst_m_step_q      <= '0;
      dst_n_step_q      <= '0;
      bias_n_step_q     <= '0;
      vec_store_addr_q  <= '0;
      vec_store_wdata_q <= '0;
      vec_store_wstrb_q <= '0;
      for (int c = 0; c < TILE_N; c++) begin
        bias_vec[c] <= '0;
      end
    end else if (soft_reset) begin
      state_q           <= S_IDLE;
      opcode_q          <= '0;
      flags_q           <= '0;
      cmd_addr_q        <= '0;
      src0_addr_q       <= '0;
      src1_addr_q       <= '0;
      bias_addr_q       <= '0;
      dst_addr_q        <= '0;
      M_q               <= '0;
      N_q               <= '0;
      K_q               <= '0;
      stride0_q         <= '0;
      stride1_q         <= '0;
      stride_dst_q      <= '0;
      scale_q           <= '0;
      shift_q           <= '0;
      zero_point_q      <= '0;
      conv_in_hw_q      <= '0;
      conv_channels_q   <= '0;
      conv_cfg_q        <= '0;
      conv_desc_version_q <= '0;
      effective_n_q     <= '0;
      m0_q              <= '0;
      n0_q              <= '0;
      k0_q              <= '0;
      kk_q              <= '0;
      store_row_q       <= '0;
      store_col_q       <= '0;
      bias_col_q        <= '0;
      vec_idx_q         <= '0;
      desc_word_idx_q   <= '0;
      store_stage_done_q <= 1'b0;
      dma_inflight_q    <= 1'b0;
      bias_inflight_q   <= 1'b0;
      vec_inflight_q    <= 1'b0;
      desc_inflight_q   <= 1'b0;
      conv_inflight_q   <= 1'b0;
      conv_start_q      <= 1'b0;
      conv_out_y_q      <= '0;
      conv_out_x_q      <= '0;
      conv_kh_q         <= '0;
      conv_kw_q         <= '0;
      conv_ic_q         <= '0;
      dma_launch_pending_q <= 1'b0;
      dma_op_kind_q     <= '0;
      dma_base_addr_q   <= '0;
      dma_rows_q        <= '0;
      dma_cols_q        <= '0;
      dma_stride_bytes_q <= '0;
      dma_spm_region_q  <= '0;
      dma_spm_base_q    <= '0;
      vec_x_q           <= '0;
      vec_y_q           <= '0;
      vec_store_addr_q  <= '0;
      vec_store_wdata_q <= '0;
      vec_store_wstrb_q <= '0;
      vec_result_raw_q  <= '0;
      vec_result_post_q <= '0;
      vec_scaled_q      <= '0;
      is_vector_opcode_q <= 1'b0;
      src0_row_base_q   <= '0;
      src1_k_base_q     <= '0;
      src1_n_offset_q   <= '0;
      dst_row_base_q    <= '0;
      dst_n_offset_q    <= '0;
      bias_base_q       <= '0;
      src0_m_step_q     <= '0;
      stride1_k_step_q  <= '0;
      dst_m_step_q      <= '0;
      dst_n_step_q      <= '0;
      bias_n_step_q     <= '0;
      for (int c = 0; c < TILE_N; c++) begin
        bias_vec[c] <= '0;
      end
    end else begin
      state_q            <= state_d;
      m0_q               <= m0_d;
      n0_q               <= n0_d;
      k0_q               <= k0_d;
      kk_q               <= kk_d;
      store_row_q        <= store_row_d;
      store_col_q        <= store_col_d;
      bias_col_q         <= bias_col_d;
      vec_idx_q          <= vec_idx_d;
      desc_word_idx_q    <= desc_word_idx_d;
      store_stage_done_q <= store_stage_done_d;
      src0_row_base_q    <= src0_row_base_d;
      src1_k_base_q      <= src1_k_base_d;
      src1_n_offset_q    <= src1_n_offset_d;
      dst_row_base_q     <= dst_row_base_d;
      dst_n_offset_q     <= dst_n_offset_d;
      bias_base_q        <= bias_base_d;
      src0_m_step_q      <= src0_m_step_d;
      stride1_k_step_q   <= stride1_k_step_d;
      dst_m_step_q       <= dst_m_step_d;
      dst_n_step_q       <= dst_n_step_d;
      bias_n_step_q      <= bias_n_step_d;
      dma_inflight_q     <= dma_inflight_d;
      bias_inflight_q    <= bias_inflight_d;
      vec_inflight_q     <= vec_inflight_d;
      desc_inflight_q    <= desc_inflight_d;
      conv_inflight_q    <= conv_inflight_d;
      conv_start_q       <= (state_q == S_CONV_LOAD_A) && !conv_inflight_q;
      conv_out_y_q       <= conv_out_y_d;
      conv_out_x_q       <= conv_out_x_d;
      conv_kh_q          <= conv_kh_d;
      conv_kw_q          <= conv_kw_d;
      conv_ic_q          <= conv_ic_d;
      dma_launch_pending_q <= dma_launch_pending_d;

      if (latch_cmd_addr)
        cmd_addr_q <= cmd_addr;

      if (latch_cmd) begin
        opcode_q     <= opcode;
        flags_q      <= flags;
        src0_addr_q  <= src0_addr;
        src1_addr_q  <= src1_addr;
        bias_addr_q  <= bias_addr;
        dst_addr_q   <= dst_addr;
        M_q          <= M;
        N_q          <= N;
        K_q          <= K;
        stride0_q    <= stride0;
        stride1_q    <= stride1;
        stride_dst_q <= stride_dst;
        scale_q      <= scale;
        shift_q      <= shift;
        zero_point_q <= zero_point;
        conv_in_hw_q <= conv_in_hw;
        conv_channels_q <= conv_channels;
        conv_cfg_q <= conv_cfg;
        conv_desc_version_q <= ABI_VERSION;
      end

      if (clear_cmd_fields) begin
        opcode_q     <= '0;
        flags_q      <= '0;
        src0_addr_q  <= '0;
        src1_addr_q  <= '0;
        bias_addr_q  <= '0;
        dst_addr_q   <= '0;
        M_q          <= '0;
        N_q          <= '0;
        K_q          <= '0;
        stride0_q    <= '0;
        stride1_q    <= '0;
        stride_dst_q <= '0;
        scale_q      <= '0;
        shift_q      <= '0;
        zero_point_q <= '0;
        conv_in_hw_q <= '0;
        conv_channels_q <= '0;
        conv_cfg_q <= '0;
        conv_desc_version_q <= '0;
      end

      if (load_desc_word) begin
        case (desc_word_idx_q)
          5'd0:  opcode_q     <= client_mem_rdata[7:0];
          5'd1:  flags_q      <= client_mem_rdata;
          5'd2:  src0_addr_q  <= client_mem_rdata;
          5'd3:  src1_addr_q  <= client_mem_rdata;
          5'd4:  bias_addr_q  <= client_mem_rdata;
          5'd5:  dst_addr_q   <= client_mem_rdata;
          5'd6:  M_q          <= client_mem_rdata[15:0];
          5'd7:  N_q          <= client_mem_rdata[15:0];
          5'd8:  K_q          <= client_mem_rdata[15:0];
          5'd9:  stride0_q    <= client_mem_rdata[15:0];
          5'd10: stride1_q    <= client_mem_rdata[15:0];
          5'd11: stride_dst_q <= client_mem_rdata[15:0];
          5'd12: scale_q      <= client_mem_rdata;
          5'd13: begin
            shift_q      <= client_mem_rdata[31:16];
            zero_point_q <= client_mem_rdata[15:0];
          end
          5'd14: conv_desc_version_q <= client_mem_rdata[7:0];
          5'd15: conv_in_hw_q <= client_mem_rdata;
          5'd16: conv_channels_q <= client_mem_rdata;
          5'd17: conv_cfg_q <= client_mem_rdata;
          default: begin
          end
        endcase
      end

      if ((state_q == S_VALIDATE) && is_conv_opcode && conv_shape_ok) begin
        M_q <= conv_m_calc[15:0];
        N_q <= conv_output_c;
        K_q <= conv_k_calc[15:0];
      end

      if (clear_bias_regs) begin
        for (int c = 0; c < TILE_N; c++) begin
          bias_vec[c] <= '0;
        end
      end else if (load_bias_reg) begin
        bias_vec[int'(bias_col_q)] <= $signed(client_mem_rdata);
      end

      if (load_vec_x_reg)
        vec_x_q <= $signed(vec_load_byte);
      if (load_vec_y_reg)
        vec_y_q <= $signed(vec_load_byte);
      if (latch_vec_raw)
        vec_result_raw_q <= vec_result_raw;
      if (latch_vec_post)
        vec_result_post_q <= vec_result_post;
      if (latch_vec_scaled)
        vec_scaled_q <= vec_mul_product;
      is_vector_opcode_q <= (opcode_q == OP_VEC_ADD) || (opcode_q == OP_VEC_MUL) ||
                            (opcode_q == OP_RELU)    || (opcode_q == OP_CLAMP);
      effective_n_q      <= (opcode_q == OP_GEMV) ? 16'd1 : N_q;

      if (latch_vec_store_cmd) begin
        vec_store_addr_q  <= vec_store_addr_next;
        vec_store_wdata_q <= vec_store_wdata_next;
        vec_store_wstrb_q <= vec_store_wstrb_next;
      end

      if (latch_dma_cmd) begin
        dma_op_kind_q      <= dma_op_kind_cmd_n;
        dma_base_addr_q    <= dma_base_addr_cmd_n;
        dma_rows_q         <= dma_rows_cmd_n;
        dma_cols_q         <= dma_cols_cmd_n;
        dma_stride_bytes_q <= dma_stride_bytes_cmd_n;
        dma_spm_region_q   <= dma_spm_region_cmd_n;
        dma_spm_base_q     <= dma_spm_base_cmd_n;
      end
    end
  end

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      illegal_opcode     <= 1'b0;
      shape_error        <= 1'b0;
      memory_error       <= 1'b0;
      unsupported_format <= 1'b0;
    end else if (soft_reset || clear_status) begin
      illegal_opcode     <= 1'b0;
      shape_error        <= 1'b0;
      memory_error       <= 1'b0;
      unsupported_format <= 1'b0;
    end else begin
      if (set_illegal_opcode)
        illegal_opcode <= 1'b1;
      if (set_shape_error)
        shape_error <= 1'b1;
      if (set_memory_error)
        memory_error <= 1'b1;
      if (set_unsupported_format)
        unsupported_format <= 1'b1;
    end
  end

  always @* begin
    opcode_ok = 1'b0;
    case (opcode_q)
      OP_GEMM,
      OP_GEMV,
      OP_VEC_ADD,
      OP_VEC_MUL,
      OP_RELU,
      OP_CLAMP: opcode_ok = 1'b1;
      OP_CONV2D: opcode_ok = ENABLE_CONV;
      default: opcode_ok = 1'b0;
    endcase

    dst_flags_ok = !(flags_q[FLAG_DST_INT8] && flags_q[FLAG_DST_INT32]);

    dims_ok = 1'b1;
    case (opcode_q)
      OP_GEMM: dims_ok = (M_q != 16'd0) && (N_q != 16'd0) && (K_q != 16'd0);
      OP_GEMV: dims_ok = (M_q != 16'd0) && (K_q != 16'd0);
      OP_CONV2D: dims_ok = conv_shape_ok;
      OP_VEC_ADD,
      OP_VEC_MUL,
      OP_RELU,
      OP_CLAMP: dims_ok = (M_q != 16'd0);
      default: dims_ok = 1'b0;
    endcase
  end

  always @* begin
    if ((M_q - m0_q) >= TILE_M_U16)
      active_tile_m = TILE_M_U16;
    else
      active_tile_m = M_q - m0_q;

    if ((effective_n - n0_q) >= TILE_N_U16)
      active_tile_n = TILE_N_U16;
    else
      active_tile_n = effective_n - n0_q;

    if ((K_q - k0_q) >= TILE_K_U16)
      active_tile_k = TILE_K_U16;
    else
      active_tile_k = K_q - k0_q;
  end

  always @* begin
    for (int r = 0; r < TILE_M; r++) begin
      row_mask[r]  = ((m0_q + 16'(r)) < M_q);
      a_rd_addr[r] = 8'((r * TILE_K) + kk_q);
      a_vec[r]     = $signed(a_rd_data[r]);
    end

    for (int c = 0; c < TILE_N; c++) begin
      col_mask[c]  = ((n0_q + 16'(c)) < effective_n);
      b_rd_addr[c] = 8'((kk_q * TILE_N) + c);
      b_vec[c]     = $signed(b_rd_data[c]);
    end
  end

  always @* begin
    m0_d               = m0_q;
    n0_d               = n0_q;
    k0_d               = k0_q;
    kk_d               = kk_q;
    store_row_d        = store_row_q;
    store_col_d        = store_col_q;
    bias_col_d         = bias_col_q;
    vec_idx_d          = vec_idx_q;
    desc_word_idx_d    = desc_word_idx_q;
    store_stage_done_d = store_stage_done_q;
    src0_row_base_d    = src0_row_base_q;
    src1_k_base_d      = src1_k_base_q;
    src1_n_offset_d    = src1_n_offset_q;
    dst_row_base_d     = dst_row_base_q;
    dst_n_offset_d     = dst_n_offset_q;
    bias_base_d        = bias_base_q;
    src0_m_step_d      = src0_m_step_q;
    stride1_k_step_d   = stride1_k_step_q;
    dst_m_step_d       = dst_m_step_q;
    dst_n_step_d       = dst_n_step_q;
    bias_n_step_d      = bias_n_step_q;
    conv_out_y_d       = conv_out_y_q;
    conv_out_x_d       = conv_out_x_q;
    conv_kh_d          = conv_kh_q;
    conv_kw_d          = conv_kw_q;
    conv_ic_d          = conv_ic_q;

    case (state_q)
      S_IDLE: begin
        m0_d               = '0;
        n0_d               = '0;
        k0_d               = '0;
        kk_d               = '0;
        store_row_d        = '0;
        store_col_d        = '0;
        bias_col_d         = '0;
        vec_idx_d          = '0;
        desc_word_idx_d    = '0;
        store_stage_done_d = 1'b0;
        src0_row_base_d    = '0;
        src1_k_base_d      = '0;
        src1_n_offset_d    = '0;
        dst_row_base_d     = '0;
        dst_n_offset_d     = '0;
        bias_base_d        = '0;
        src0_m_step_d      = '0;
        stride1_k_step_d   = '0;
        dst_m_step_d       = '0;
        dst_n_step_d       = '0;
        bias_n_step_d      = '0;
        conv_out_y_d       = '0;
        conv_out_x_d       = '0;
        conv_kh_d          = '0;
        conv_kw_d          = '0;
        conv_ic_d          = '0;
      end

      S_INIT_TILE: begin
        k0_d               = '0;
        kk_d               = '0;
        store_row_d        = '0;
        store_col_d        = '0;
        bias_col_d         = '0;
        vec_idx_d          = '0;
        desc_word_idx_d    = '0;
        store_stage_done_d = 1'b0;
        conv_out_y_d       = '0;
        conv_out_x_d       = '0;
        conv_kh_d          = '0;
        conv_kw_d          = '0;
        conv_ic_d          = '0;
      end

      S_VALIDATE: begin
        if (opcode_ok && dims_ok && dst_flags_ok) begin
          src0_row_base_d  = src0_addr_q;
          src1_k_base_d    = src1_addr_q;
          src1_n_offset_d  = '0;
          dst_row_base_d   = dst_addr_q;
          dst_n_offset_d   = '0;
          bias_base_d      = bias_addr_q;
          src0_m_step_d    = ({16'd0, stride0_q} << TILE_M_SHIFT);
          stride1_k_step_d = ({16'd0, stride1_eff} << TILE_K_SHIFT);
          dst_m_step_d     = ({16'd0, stride_dst_eff} << TILE_M_SHIFT);
          dst_n_step_d     = use_dst_i8 ? {16'd0, TILE_N_U16} : ({16'd0, TILE_N_U16} << 2);
          bias_n_step_d    = ({16'd0, TILE_N_U16} << 2);
        end
      end

      S_DESC_LOAD: begin
        if (desc_inflight_q && desc_mem_rvalid) begin
          if (desc_word_idx_q + 5'd1 < desc_words_expected)
            desc_word_idx_d = desc_word_idx_q + 5'd1;
        end
      end

      S_CLEAR_ACC: begin
        kk_d = '0;
        bias_col_d = '0;
        vec_idx_d = '0;
      end

      S_COMPUTE_K: begin
        if (kk_q + 16'd1 < active_tile_k)
          kk_d = kk_q + 16'd1;
        else
          kk_d = '0;
      end

      S_NEXT_K: begin
        if (more_k_tiles) begin
          k0_d = k0_q + TILE_K_U16;
          src1_k_base_d = src1_k_base_q + stride1_k_step_q;
        end else begin
          store_row_d        = '0;
          store_col_d        = '0;
          bias_col_d         = '0;
          store_stage_done_d = 1'b0;
        end
      end

      S_LOAD_BIAS: begin
        if (flags_q[FLAG_BIAS_EN] && bias_inflight_q && bias_mem_rvalid) begin
          if (bias_col_q + 16'd1 < active_tile_n)
            bias_col_d = bias_col_q + 16'd1;
          else
            bias_col_d = '0;
        end
      end

      S_CONV_LOAD_A: begin
        if (conv_done) begin
          conv_kh_d = conv_next_kh;
          conv_kw_d = conv_next_kw;
          conv_ic_d = conv_next_ic;
        end
      end

      S_VEC_STORE: begin
        if (((!vec_inflight_q) && vec_mem_ready) || (vec_inflight_q && vec_mem_ready)) begin
          if (vec_idx_q + 16'd1 < M_q)
            vec_idx_d = vec_idx_q + 16'd1;
          else
            vec_idx_d = '0;
        end
      end

      S_STORE_C: begin
        if (!store_stage_done_q) begin
          if (store_col_q + 16'd1 < active_tile_n) begin
            store_col_d = store_col_q + 16'd1;
          end else begin
            store_col_d = '0;
            if (store_row_q + 16'd1 < active_tile_m)
              store_row_d = store_row_q + 16'd1;
          end

          if (store_stage_last) begin
            store_row_d        = '0;
            store_col_d        = '0;
            store_stage_done_d = 1'b1;
          end
        end
      end

      S_NEXT_TILE_N: begin
        n0_d               = n0_q + TILE_N_U16;
        k0_d               = '0;
        kk_d               = '0;
        store_row_d        = '0;
        store_col_d        = '0;
        bias_col_d         = '0;
        vec_idx_d          = '0;
        store_stage_done_d = 1'b0;
        src1_k_base_d      = src1_addr_q;
        src1_n_offset_d    = src1_n_offset_q + {16'd0, TILE_N_U16};
        dst_n_offset_d     = dst_n_offset_q + dst_n_step_q;
        bias_base_d        = bias_base_q + bias_n_step_q;
        conv_kh_d          = '0;
        conv_kw_d          = '0;
        conv_ic_d          = '0;
      end

      S_NEXT_TILE_M: begin
        m0_d               = m0_q + TILE_M_U16;
        n0_d               = '0;
        k0_d               = '0;
        kk_d               = '0;
        store_row_d        = '0;
        store_col_d        = '0;
        bias_col_d         = '0;
        vec_idx_d          = '0;
        store_stage_done_d = 1'b0;
        src0_row_base_d    = src0_row_base_q + src0_m_step_q;
        src1_k_base_d      = src1_addr_q;
        src1_n_offset_d    = '0;
        dst_row_base_d     = dst_row_base_q + dst_m_step_q;
        dst_n_offset_d     = '0;
        bias_base_d        = bias_addr_q;
        conv_out_y_d       = conv_next_out_y;
        conv_out_x_d       = conv_next_out_x;
        conv_kh_d          = '0;
        conv_kw_d          = '0;
        conv_ic_d          = '0;
      end

      default: begin
      end
    endcase
  end

  always @* begin
    state_d                = state_q;
    latch_cmd              = 1'b0;
    latch_cmd_addr         = 1'b0;
    clear_cmd_fields       = 1'b0;
    load_desc_word         = 1'b0;
    clear_status           = 1'b0;
    set_illegal_opcode     = 1'b0;
    set_shape_error        = 1'b0;
    set_memory_error       = 1'b0;
    set_unsupported_format = 1'b0;
    dma_inflight_d         = dma_inflight_q;
    bias_inflight_d        = bias_inflight_q;
    vec_inflight_d         = vec_inflight_q;
    desc_inflight_d        = desc_inflight_q;
    conv_inflight_d        = conv_inflight_q;
    dma_launch_pending_d   = dma_launch_pending_q;

    busy          = 1'b1;
    done          = 1'b0;

    cnt_cmd_start = 1'b0;
    cnt_cmd_done  = 1'b0;
    cnt_busy      = (state_q != S_IDLE) && (state_q != S_DONE) && (state_q != S_ERROR);
    cnt_active    = (state_q == S_COMPUTE_K) || (state_q == S_VEC_EXEC) ||
                    (state_q == S_VEC_EXEC2) || (state_q == S_VEC_EXEC3);
    cnt_stall     = 1'b0;
    clear_bias_regs = 1'b0;
    load_bias_reg   = 1'b0;
    load_vec_x_reg  = 1'b0;
    load_vec_y_reg  = 1'b0;
    latch_vec_store_cmd = 1'b0;
    latch_dma_cmd       = 1'b0;
    latch_vec_raw       = 1'b0;
    latch_vec_post      = 1'b0;
    latch_vec_scaled    = 1'b0;

    array_clear_acc = 1'b0;
    array_mac_en    = 1'b0;
    epi_start       = 1'b0;

    dma_start        = 1'b0;
    vec_mul_start    = 1'b0;

    c_wr_en         = 1'b0;
    c_wr_addr       = '0;
    c_wr_data       = '0;
    c_rd_addr       = '0;

    bias_mem_req      = 1'b0;
    bias_mem_we       = 1'b0;
    bias_mem_addr_mux = bias_mem_addr;
    bias_mem_wdata    = '0;
    bias_mem_wstrb    = 4'b0000;
    vec_mem_req       = 1'b0;
    vec_mem_we        = 1'b0;
    vec_mem_addr      = '0;
    vec_mem_wdata     = '0;
    vec_mem_wstrb     = 4'b0000;
    desc_mem_req      = 1'b0;
    desc_mem_we       = 1'b0;
    desc_mem_wdata    = '0;
    desc_mem_wstrb    = 4'b0000;
    dma_op_kind_cmd_n      = DMA_OP_LOAD_I8;
    dma_base_addr_cmd_n    = '0;
    dma_rows_cmd_n         = '0;
    dma_cols_cmd_n         = '0;
    dma_stride_bytes_cmd_n = '0;
    dma_spm_region_cmd_n   = SPM_REGION_A;
    dma_spm_base_cmd_n     = 9'd0;

    case (state_q)
      S_IDLE: begin
        busy = 1'b0;
        dma_inflight_d = 1'b0;
        bias_inflight_d = 1'b0;
        vec_inflight_d = 1'b0;
        desc_inflight_d = 1'b0;
        conv_inflight_d = 1'b0;
        dma_launch_pending_d = 1'b0;
        clear_status = start;
        if (start) begin
          latch_cmd_addr = 1'b1;
          cnt_cmd_start = 1'b1;
          if (start_direct_mode) begin
            latch_cmd = 1'b1;
            state_d   = S_VALIDATE;
          end else begin
            clear_cmd_fields = 1'b1;
            state_d          = S_DESC_LOAD;
          end
        end
      end

      S_DESC_LOAD: begin
        dma_inflight_d = 1'b0;
        bias_inflight_d = 1'b0;
        vec_inflight_d = 1'b0;
        cnt_stall = 1'b1;

        if (!desc_inflight_q) begin
          desc_mem_req = 1'b1;
          if (desc_mem_ready)
            desc_inflight_d = 1'b1;
        end else if (desc_mem_rvalid) begin
          load_desc_word = 1'b1;
          desc_inflight_d = 1'b0;
          if (desc_word_idx_q + 5'd1 >= desc_words_expected)
            state_d = S_VALIDATE;
        end
      end

      S_VALIDATE: begin
        dma_inflight_d = 1'b0;
        bias_inflight_d = 1'b0;
        vec_inflight_d = 1'b0;
        desc_inflight_d = 1'b0;
        conv_inflight_d = 1'b0;
        dma_launch_pending_d = 1'b0;
        if (!opcode_ok) begin
          set_illegal_opcode = 1'b1;
          state_d = S_ERROR;
        end else if (!dims_ok) begin
          set_shape_error = 1'b1;
          state_d = S_ERROR;
        end else if (!dst_flags_ok) begin
          set_unsupported_format = 1'b1;
          state_d = S_ERROR;
        end else begin
          state_d = S_INIT_TILE;
        end
      end

      S_INIT_TILE: begin
        dma_inflight_d = 1'b0;
        bias_inflight_d = 1'b0;
        vec_inflight_d = 1'b0;
        desc_inflight_d = 1'b0;
        conv_inflight_d = 1'b0;
        dma_launch_pending_d = 1'b0;
        if (is_vector_opcode)
          state_d = S_VEC_LOAD_X;
        else
          state_d = S_CLEAR_ACC;
      end

      S_CLEAR_ACC: begin
        dma_inflight_d = 1'b0;
        bias_inflight_d = 1'b0;
        vec_inflight_d = 1'b0;
        desc_inflight_d = 1'b0;
        conv_inflight_d = 1'b0;
        dma_launch_pending_d = 1'b0;
        clear_bias_regs = 1'b1;
        array_clear_acc = 1'b1;
        if (is_conv_opcode)
          state_d = S_CONV_LOAD_A;
        else
          state_d = S_LOAD_A;
      end

      S_CONV_LOAD_A: begin
        dma_inflight_d = 1'b0;
        bias_inflight_d = 1'b0;
        vec_inflight_d = 1'b0;
        desc_inflight_d = 1'b0;
        dma_launch_pending_d = 1'b0;
        cnt_stall = 1'b1;

        if (!conv_inflight_q) begin
          conv_inflight_d = 1'b1;
        end else if (conv_error) begin
          set_memory_error = 1'b1;
          conv_inflight_d = 1'b0;
          state_d = S_ERROR;
        end else if (conv_done) begin
          conv_inflight_d = 1'b0;
          state_d = S_LOAD_B;
        end
      end

      S_LOAD_A: begin
        desc_inflight_d        = 1'b0;
        dma_op_kind_cmd_n      = DMA_OP_LOAD_I8;
        dma_base_addr_cmd_n    = src0_row_base_q + {16'd0, k0_q};
        dma_rows_cmd_n         = active_tile_m;
        dma_cols_cmd_n         = active_tile_k;
        dma_stride_bytes_cmd_n = stride0_q;
        dma_spm_region_cmd_n   = SPM_REGION_A;
        dma_spm_base_cmd_n     = 9'd0;

        if (!dma_launch_pending_q && !dma_inflight_q) begin
          latch_dma_cmd        = 1'b1;
          dma_launch_pending_d = 1'b1;
          cnt_stall            = 1'b1;
        end else if (dma_launch_pending_q) begin
          dma_start            = 1'b1;
          dma_launch_pending_d = 1'b0;
          dma_inflight_d       = 1'b1;
          cnt_stall            = 1'b1;
        end else if (dma_error) begin
          set_memory_error = 1'b1;
          dma_inflight_d       = 1'b0;
          dma_launch_pending_d = 1'b0;
          state_d = S_ERROR;
        end else if (dma_done) begin
          dma_inflight_d       = 1'b0;
          dma_launch_pending_d = 1'b0;
          state_d = S_LOAD_B;
        end else begin
          cnt_stall = 1'b1;
        end
      end

      S_LOAD_B: begin
        desc_inflight_d        = 1'b0;
        dma_op_kind_cmd_n      = DMA_OP_LOAD_I8;
        dma_base_addr_cmd_n    = src1_k_base_q + src1_n_offset_q;
        dma_rows_cmd_n         = active_tile_k;
        dma_cols_cmd_n         = active_tile_n;
        dma_stride_bytes_cmd_n = stride1_eff;
        dma_spm_region_cmd_n   = SPM_REGION_B;
        dma_spm_base_cmd_n     = 9'd0;

        if (!dma_launch_pending_q && !dma_inflight_q) begin
          latch_dma_cmd        = 1'b1;
          dma_launch_pending_d = 1'b1;
          cnt_stall            = 1'b1;
        end else if (dma_launch_pending_q) begin
          dma_start            = 1'b1;
          dma_launch_pending_d = 1'b0;
          dma_inflight_d       = 1'b1;
          cnt_stall            = 1'b1;
        end else if (dma_error) begin
          set_memory_error = 1'b1;
          dma_inflight_d       = 1'b0;
          dma_launch_pending_d = 1'b0;
          state_d = S_ERROR;
        end else if (dma_done) begin
          dma_inflight_d       = 1'b0;
          dma_launch_pending_d = 1'b0;
          state_d = S_COMPUTE_K;
        end else begin
          cnt_stall = 1'b1;
        end
      end

      S_COMPUTE_K: begin
        dma_inflight_d = 1'b0;
        bias_inflight_d = 1'b0;
        vec_inflight_d = 1'b0;
        desc_inflight_d = 1'b0;
        dma_launch_pending_d = 1'b0;
        array_mac_en = 1'b1;
        if (kk_q + 16'd1 >= active_tile_k)
          state_d = S_NEXT_K;
      end

      S_NEXT_K: begin
        dma_inflight_d = 1'b0;
        bias_inflight_d = 1'b0;
        vec_inflight_d = 1'b0;
        desc_inflight_d = 1'b0;
        dma_launch_pending_d = 1'b0;
        if (more_k_tiles) begin
          if (is_conv_opcode)
            state_d = S_CONV_LOAD_A;
          else
            state_d = S_LOAD_A;
        end
        else if (flags_q[FLAG_BIAS_EN])
          state_d = S_LOAD_BIAS;
        else
          state_d = S_EPILOGUE;
      end

      S_LOAD_BIAS: begin
        dma_inflight_d = 1'b0;
        vec_inflight_d = 1'b0;
        desc_inflight_d = 1'b0;
        dma_launch_pending_d = 1'b0;
        cnt_stall = 1'b1;

        if (!flags_q[FLAG_BIAS_EN]) begin
          bias_inflight_d = 1'b0;
          state_d = S_EPILOGUE;
        end else if (!bias_inflight_q) begin
          bias_mem_req = 1'b1;
          if (bias_mem_ready)
            bias_inflight_d = 1'b1;
        end else if (bias_mem_rvalid) begin
          load_bias_reg = 1'b1;
          bias_inflight_d = 1'b0;
          if (bias_col_q + 16'd1 >= active_tile_n)
            state_d = S_EPILOGUE;
        end
      end

      S_EPILOGUE: begin
        dma_inflight_d = 1'b0;
        bias_inflight_d = 1'b0;
        vec_inflight_d = 1'b0;
        desc_inflight_d = 1'b0;
        dma_launch_pending_d = 1'b0;
        if (!epi_busy && !epi_done)
          epi_start = 1'b1;

        if (epi_out_valid) begin
          c_wr_en = 1'b1;
          c_wr_addr = epi_out_index;
          c_wr_data = use_dst_i8 ? {24'd0, epi_out_i8} : epi_out_i32;
        end

        if (epi_done)
          state_d = S_STORE_C;
      end

      S_STORE_C: begin
        desc_inflight_d = 1'b0;
        vec_inflight_d = 1'b0;
        dma_op_kind_cmd_n      = use_dst_i8 ? DMA_OP_STORE_I8 : DMA_OP_STORE_I32;
        dma_base_addr_cmd_n    = dma_store_base_addr;
        dma_rows_cmd_n         = active_tile_m;
        dma_cols_cmd_n         = active_tile_n;
        dma_stride_bytes_cmd_n = stride_dst_eff;
        dma_spm_region_cmd_n   = SPM_REGION_C;
        dma_spm_base_cmd_n     = 9'd0;

        if (!dma_launch_pending_q && !dma_inflight_q) begin
          latch_dma_cmd        = 1'b1;
          dma_launch_pending_d = 1'b1;
          cnt_stall            = 1'b1;
        end else if (dma_launch_pending_q) begin
          dma_start            = 1'b1;
          dma_launch_pending_d = 1'b0;
          dma_inflight_d       = 1'b1;
          cnt_stall            = 1'b1;
        end else if (dma_error) begin
          set_memory_error = 1'b1;
          dma_inflight_d       = 1'b0;
          dma_launch_pending_d = 1'b0;
          state_d = S_ERROR;
        end else if (dma_done) begin
          dma_inflight_d       = 1'b0;
          dma_launch_pending_d = 1'b0;
          if (more_n_tiles)
            state_d = S_NEXT_TILE_N;
          else if (more_m_tiles)
            state_d = S_NEXT_TILE_M;
          else
            state_d = S_DONE;
        end else begin
          cnt_stall = 1'b1;
        end
      end

      S_VEC_LOAD_X: begin
        dma_inflight_d = 1'b0;
        bias_inflight_d = 1'b0;
        desc_inflight_d = 1'b0;
        dma_launch_pending_d = 1'b0;
        cnt_stall = 1'b1;

        vec_mem_we   = 1'b0;
        vec_mem_addr = vec_src0_read_addr;

        if (!vec_inflight_q) begin
          vec_mem_req = 1'b1;
          if (vec_mem_ready)
            vec_inflight_d = 1'b1;
        end else if (vec_mem_rvalid) begin
          load_vec_x_reg = 1'b1;
          vec_inflight_d = 1'b0;
          if (vec_needs_y)
            state_d = S_VEC_LOAD_Y;
          else
            state_d = S_VEC_EXEC;
        end
      end

      S_VEC_LOAD_Y: begin
        dma_inflight_d = 1'b0;
        bias_inflight_d = 1'b0;
        desc_inflight_d = 1'b0;
        dma_launch_pending_d = 1'b0;
        cnt_stall = 1'b1;

        vec_mem_we   = 1'b0;
        vec_mem_addr = vec_src1_read_addr;

        if (!vec_inflight_q) begin
          vec_mem_req = 1'b1;
          if (vec_mem_ready)
            vec_inflight_d = 1'b1;
        end else if (vec_mem_rvalid) begin
          load_vec_y_reg = 1'b1;
          vec_inflight_d = 1'b0;
          state_d = S_VEC_EXEC;
        end
      end

      S_VEC_EXEC: begin
        dma_inflight_d = 1'b0;
        bias_inflight_d = 1'b0;
        vec_inflight_d = 1'b0;
        desc_inflight_d = 1'b0;
        dma_launch_pending_d = 1'b0;
        latch_vec_raw = 1'b1;
        state_d = S_VEC_EXEC2;
      end

      S_VEC_EXEC2: begin
        dma_inflight_d = 1'b0;
        bias_inflight_d = 1'b0;
        vec_inflight_d = 1'b0;
        desc_inflight_d = 1'b0;
        dma_launch_pending_d = 1'b0;
        latch_vec_post = 1'b1;
        if (flags_q[FLAG_REQUANT_EN])
          state_d = S_VEC_EXEC3;
        else
          state_d = S_VEC_EXEC4;
      end

      S_VEC_EXEC3: begin
        dma_inflight_d = 1'b0;
        bias_inflight_d = 1'b0;
        vec_inflight_d = 1'b0;
        desc_inflight_d = 1'b0;
        dma_launch_pending_d = 1'b0;
        if (flags_q[FLAG_REQUANT_EN]) begin
          cnt_stall = 1'b1;
          if (!vec_mul_busy && !vec_mul_done) begin
            vec_mul_start = 1'b1;
          end else if (vec_mul_done) begin
            latch_vec_scaled = 1'b1;
            state_d = S_VEC_EXEC4;
          end
        end else begin
          state_d = S_VEC_EXEC4;
        end
      end

      S_VEC_EXEC4: begin
        dma_inflight_d = 1'b0;
        bias_inflight_d = 1'b0;
        vec_inflight_d = 1'b0;
        desc_inflight_d = 1'b0;
        dma_launch_pending_d = 1'b0;
        latch_vec_store_cmd = 1'b1;
        state_d = S_VEC_STORE;
      end

      S_VEC_STORE: begin
        dma_inflight_d = 1'b0;
        bias_inflight_d = 1'b0;
        desc_inflight_d = 1'b0;
        dma_launch_pending_d = 1'b0;
        cnt_stall = 1'b1;

        vec_mem_req  = 1'b1;
        vec_mem_we   = 1'b1;
        vec_mem_addr = vec_store_addr_q;
        vec_mem_wdata = vec_store_wdata_q;
        vec_mem_wstrb = vec_store_wstrb_q;

        if (vec_mem_ready) begin
          vec_inflight_d = 1'b0;
          if (vec_idx_q + 16'd1 < M_q)
            state_d = S_VEC_LOAD_X;
          else
            state_d = S_DONE;
        end else begin
          vec_inflight_d = 1'b1;
        end
      end

      S_NEXT_TILE_N: begin
        dma_inflight_d = 1'b0;
        bias_inflight_d = 1'b0;
        vec_inflight_d = 1'b0;
        desc_inflight_d = 1'b0;
        dma_launch_pending_d = 1'b0;
        state_d = S_CLEAR_ACC;
      end

      S_NEXT_TILE_M: begin
        dma_inflight_d = 1'b0;
        bias_inflight_d = 1'b0;
        vec_inflight_d = 1'b0;
        desc_inflight_d = 1'b0;
        dma_launch_pending_d = 1'b0;
        state_d = S_CLEAR_ACC;
      end

      S_DONE: begin
        busy         = 1'b0;
        done         = 1'b1;
        cnt_cmd_done = 1'b1;
        dma_inflight_d = 1'b0;
        bias_inflight_d = 1'b0;
        vec_inflight_d = 1'b0;
        desc_inflight_d = 1'b0;
        dma_launch_pending_d = 1'b0;
        state_d      = S_IDLE;
      end

      S_ERROR: begin
        busy    = 1'b0;
        done    = 1'b1;
        cnt_cmd_done = 1'b1;
        dma_inflight_d = 1'b0;
        bias_inflight_d = 1'b0;
        vec_inflight_d = 1'b0;
        desc_inflight_d = 1'b0;
        dma_launch_pending_d = 1'b0;
        state_d = S_IDLE;
      end

      default: begin
        state_d = S_IDLE;
      end
    endcase
  end

  // TODO:
  // - Add dedicated vector tiling / multi-lane execution instead of scalar sequencing.
  // - Extend vector path to support richer clamp parameterization if the register map grows.
`ifndef SYNTHESIS
  always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
    end else if (!soft_reset) begin
      assert (state_q <= S_ERROR);
      assert (m0_q <= M_q);
      assert (n0_q <= effective_n);
      assert (k0_q <= K_q);
      assert (!array_mac_en || state_q == S_COMPUTE_K);
      assert (!(conv_spm_wr_en && !state_is_conv));
      assert (!dma_busy_status || dma_inflight_q || dma_launch_pending_q);
      assert (!conv_busy_status || conv_inflight_q);
      if (epi_out_valid) begin
        assert (epi_shadow_i32[int'(epi_out_index) / TILE_N][int'(epi_out_index) % TILE_N] == epi_out_i32);
        assert (epi_shadow_i8[int'(epi_out_index) / TILE_N][int'(epi_out_index) % TILE_N] == epi_out_i8);
      end
    end
  end
`endif

endmodule
