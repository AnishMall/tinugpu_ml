module tinygpu_cmd_ctrl 
import tinygpu_pkg::*; 
(
  input  logic         clk,
  input  logic         rst_n,

  input  logic         start,
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

  localparam logic [15:0] TILE_M_U16 = TILE_M;
  localparam logic [15:0] TILE_N_U16 = TILE_N;
  localparam logic [15:0] TILE_K_U16 = TILE_K;

  localparam logic [1:0] DMA_OP_LOAD_I8   = 2'd0;
  localparam logic [1:0] DMA_OP_STORE_I32 = 2'd2;
  localparam logic [1:0] DMA_OP_STORE_I8  = 2'd3;
  localparam logic [4:0] DESC_WORDS       = 5'd14;

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
  logic signed [ACC_W-1:0]  bias_vec [0:TILE_N-1];
  logic signed [ACC_W-1:0]  c_epi_i32 [0:TILE_M-1][0:TILE_N-1];
  logic signed [INT8_W-1:0] c_epi_i8  [0:TILE_M-1][0:TILE_N-1];
  logic signed [INT8_W-1:0] vec_x_q;
  logic signed [INT8_W-1:0] vec_y_q;
  logic signed [ACC_W-1:0]  vec_result_raw;
  logic signed [ACC_W-1:0]  vec_result_post;
  logic signed [INT8_W-1:0] vec_result_i8;

  logic                     dma_start;
  logic                     dma_busy;
  logic                     dma_done;
  logic                     dma_error;
  logic [1:0]               dma_op_kind;
  logic [31:0]              dma_base_addr;
  logic [15:0]              dma_rows;
  logic [15:0]              dma_cols;
  logic [15:0]              dma_stride_bytes;
  logic [1:0]               dma_spm_region;
  logic [8:0]               dma_spm_base;
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

  logic        latch_cmd;
  logic        latch_cmd_addr;
  logic        clear_cmd_fields;
  logic        load_desc_word;
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
  logic        vec_needs_y;
  logic        state_is_bias;
  logic        state_is_vec;
  logic        state_is_desc;
  logic [15:0] effective_n;

  logic [31:0] dma_store_base_addr;
  logic [15:0] c_stage_addr;
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
  assign is_vector_opcode = (opcode_q == OP_VEC_ADD) || (opcode_q == OP_VEC_MUL) ||
                            (opcode_q == OP_RELU) || (opcode_q == OP_CLAMP);
  assign vec_needs_y    = (opcode_q == OP_VEC_ADD) || (opcode_q == OP_VEC_MUL);
  assign effective_n    = (opcode_q == OP_GEMV) ? 16'd1 : N_q;
  assign more_k_tiles   = ((k0_q + active_tile_k) < K_q);
  assign more_n_tiles   = ((n0_q + TILE_N_U16) < effective_n);
  assign more_m_tiles   = ((m0_q + TILE_M_U16) < M_q);
  assign store_stage_last = (store_row_q + 16'd1 >= active_tile_m) &&
                            (store_col_q + 16'd1 >= active_tile_n);

  assign dma_store_base_addr = dst_addr_q + (m0_q * stride_dst_q) +
                               (use_dst_i8 ? n0_q : (n0_q * 16'd4));
  assign c_stage_addr = (store_row_q * TILE_N_U16) + store_col_q;
  assign bias_mem_addr = bias_addr_q + ((n0_q + bias_col_q) * 16'd4);
  assign desc_mem_addr = cmd_addr_q + {25'd0, desc_word_idx_q, 2'b00};
  assign state_is_bias = (state_q == S_LOAD_BIAS);
  assign state_is_vec  = (state_q == S_VEC_LOAD_X) || (state_q == S_VEC_LOAD_Y) || (state_q == S_VEC_STORE);
  assign state_is_desc  = (state_q == S_DESC_LOAD);
  assign mem_req   = state_is_desc ? desc_mem_req      : (state_is_vec  ? vec_mem_req      : (state_is_bias ? bias_mem_req      : dma_mem_req));
  assign mem_we    = state_is_desc ? desc_mem_we       : (state_is_vec  ? vec_mem_we       : (state_is_bias ? bias_mem_we       : dma_mem_we));
  assign mem_addr  = state_is_desc ? desc_mem_addr     : (state_is_vec  ? vec_mem_addr     : (state_is_bias ? bias_mem_addr_mux : dma_mem_addr));
  assign mem_wdata = state_is_desc ? desc_mem_wdata    : (state_is_vec  ? vec_mem_wdata    : (state_is_bias ? bias_mem_wdata    : dma_mem_wdata));
  assign mem_wstrb = state_is_desc ? desc_mem_wstrb    : (state_is_vec  ? vec_mem_wstrb    : (state_is_bias ? bias_mem_wstrb    : dma_mem_wstrb));
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

  tinygpu_spm u_spm (
    .clk        (clk),
    .rst_n      (rst_n),
    .dma_wr_en  (spm_dma_wr_en),
    .dma_region (spm_dma_region),
    .dma_addr   (spm_dma_addr),
    .dma_wdata  (spm_dma_wdata),
    .dma_wstrb  (spm_dma_wstrb),
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

  tinygpu_dma u_dma (
    .clk          (clk),
    .rst_n        (rst_n),
    .start        (dma_start),
    .busy         (dma_busy),
    .done         (dma_done),
    .error        (dma_error),
    .op_kind      (dma_op_kind),
    .base_addr    (dma_base_addr),
    .rows         (dma_rows),
    .cols         (dma_cols),
    .stride_bytes (dma_stride_bytes),
    .spm_region   (dma_spm_region),
    .spm_base     (dma_spm_base),
    .mem_req      (dma_mem_req),
    .mem_we       (dma_mem_we),
    .mem_addr     (dma_mem_addr),
    .mem_wdata    (dma_mem_wdata),
    .mem_wstrb    (dma_mem_wstrb),
    .mem_rdata    (mem_rdata),
    .mem_ready    (mem_ready),
    .mem_rvalid   (mem_rvalid),
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

  tinygpu_epilogue u_epilogue (
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
    .c_out_i32  (c_epi_i32),
    .c_out_i8   (c_epi_i8)
  );

  tinygpu_vec_alu u_vec_alu (
    .opcode (opcode_q),
    .x_i    (vec_x_q),
    .y_i    (vec_y_q),
    .z_o    (vec_result_raw)
  );

  always @* begin
    case (state_q)
      S_VEC_LOAD_Y: begin
        case (vec_src1_lane_sel)
          2'd0: vec_load_byte = mem_rdata[7:0];
          2'd1: vec_load_byte = mem_rdata[15:8];
          2'd2: vec_load_byte = mem_rdata[23:16];
          default: vec_load_byte = mem_rdata[31:24];
        endcase
      end
      default: begin
        case (vec_src0_lane_sel)
          2'd0: vec_load_byte = mem_rdata[7:0];
          2'd1: vec_load_byte = mem_rdata[15:8];
          2'd2: vec_load_byte = mem_rdata[23:16];
          default: vec_load_byte = mem_rdata[31:24];
        endcase
      end
    endcase
  end

  always @* begin
    vec_result_post = vec_result_raw;

    if (flags_q[FLAG_RELU_EN] && (vec_result_post < 0))
      vec_result_post = 32'sd0;

    if (flags_q[FLAG_CLAMP_EN])
      vec_result_post = clamp32(vec_result_post, -32'sd128, 32'sd127);

    if (flags_q[FLAG_REQUANT_EN]) begin
      if ($signed(shift_q) >= 0)
        vec_result_i8 = sat_i8(($signed(vec_result_post * $signed(scale_q)) >>> shift_q) + $signed(zero_point_q));
      else
        vec_result_i8 = sat_i8(($signed(vec_result_post * $signed(scale_q)) <<< (-$signed(shift_q))) + $signed(zero_point_q));
    end else begin
      vec_result_i8 = sat_i8(vec_result_post);
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
      vec_x_q           <= '0;
      vec_y_q           <= '0;
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
      vec_x_q           <= '0;
      vec_y_q           <= '0;
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
      dma_inflight_q     <= dma_inflight_d;
      bias_inflight_q    <= bias_inflight_d;
      vec_inflight_q     <= vec_inflight_d;
      desc_inflight_q    <= desc_inflight_d;

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
      end

      if (load_desc_word) begin
        case (desc_word_idx_q)
          5'd0:  opcode_q     <= mem_rdata[7:0];
          5'd1:  flags_q      <= mem_rdata;
          5'd2:  src0_addr_q  <= mem_rdata;
          5'd3:  src1_addr_q  <= mem_rdata;
          5'd4:  bias_addr_q  <= mem_rdata;
          5'd5:  dst_addr_q   <= mem_rdata;
          5'd6:  M_q          <= mem_rdata[15:0];
          5'd7:  N_q          <= mem_rdata[15:0];
          5'd8:  K_q          <= mem_rdata[15:0];
          5'd9:  stride0_q    <= mem_rdata[15:0];
          5'd10: stride1_q    <= mem_rdata[15:0];
          5'd11: stride_dst_q <= mem_rdata[15:0];
          5'd12: scale_q      <= mem_rdata;
          5'd13: begin
            shift_q      <= mem_rdata[31:16];
            zero_point_q <= mem_rdata[15:0];
          end
          default: begin
          end
        endcase
      end

      if (clear_bias_regs) begin
        for (int c = 0; c < TILE_N; c++) begin
          bias_vec[c] <= '0;
        end
      end else if (load_bias_reg) begin
        bias_vec[bias_col_q[1:0]] <= $signed(mem_rdata);
      end

      if (load_vec_x_reg)
        vec_x_q <= $signed(vec_load_byte);
      if (load_vec_y_reg)
        vec_y_q <= $signed(vec_load_byte);
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
      default: opcode_ok = 1'b0;
    endcase

    dst_flags_ok = !(flags_q[FLAG_DST_INT8] && flags_q[FLAG_DST_INT32]);

    dims_ok = 1'b1;
    case (opcode_q)
      OP_GEMM: dims_ok = (M_q != 16'd0) && (N_q != 16'd0) && (K_q != 16'd0);
      OP_GEMV: dims_ok = (M_q != 16'd0) && (K_q != 16'd0);
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
      row_mask[r]  = ((m0_q + r) < M_q);
      a_rd_addr[r] = (r * TILE_K) + kk_q[7:0];
      a_vec[r]     = $signed(a_rd_data[r]);
    end

    for (int c = 0; c < TILE_N; c++) begin
      col_mask[c]  = ((n0_q + c) < effective_n);
      b_rd_addr[c] = (kk_q[7:0] * TILE_N) + c;
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
      end

      S_DESC_LOAD: begin
        if (desc_inflight_q && mem_rvalid) begin
          if (desc_word_idx_q + 5'd1 < DESC_WORDS)
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
        if (more_k_tiles)
          k0_d = k0_q + TILE_K_U16;
        else begin
          store_row_d        = '0;
          store_col_d        = '0;
          bias_col_d         = '0;
          store_stage_done_d = 1'b0;
        end
      end

      S_LOAD_BIAS: begin
        if (flags_q[FLAG_BIAS_EN] && bias_inflight_q && mem_rvalid) begin
          if (bias_col_q + 16'd1 < active_tile_n)
            bias_col_d = bias_col_q + 16'd1;
          else
            bias_col_d = '0;
        end
      end

      S_VEC_STORE: begin
        if (((!vec_inflight_q) && mem_ready) || (vec_inflight_q && mem_ready)) begin
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

    busy          = 1'b1;
    done          = 1'b0;

    cnt_cmd_start = 1'b0;
    cnt_cmd_done  = 1'b0;
    cnt_busy      = (state_q != S_IDLE) && (state_q != S_DONE) && (state_q != S_ERROR);
    cnt_active    = (state_q == S_COMPUTE_K) || (state_q == S_VEC_EXEC);
    cnt_stall     = 1'b0;
    clear_bias_regs = 1'b0;
    load_bias_reg   = 1'b0;
    load_vec_x_reg  = 1'b0;
    load_vec_y_reg  = 1'b0;

    array_clear_acc = 1'b0;
    array_mac_en    = 1'b0;
    epi_start       = 1'b0;

    dma_start        = 1'b0;
    dma_op_kind      = DMA_OP_LOAD_I8;
    dma_base_addr    = '0;
    dma_rows         = '0;
    dma_cols         = '0;
    dma_stride_bytes = '0;
    dma_spm_region   = SPM_REGION_A;
    dma_spm_base     = 9'd0;

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

    case (state_q)
      S_IDLE: begin
        busy = 1'b0;
        dma_inflight_d = 1'b0;
        bias_inflight_d = 1'b0;
        vec_inflight_d = 1'b0;
        desc_inflight_d = 1'b0;
        clear_status = start;
        if (start) begin
          latch_cmd_addr = 1'b1;
          cnt_cmd_start = 1'b1;
          if (direct_mode) begin
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
          if (mem_ready)
            desc_inflight_d = 1'b1;
        end else if (mem_rvalid) begin
          load_desc_word = 1'b1;
          desc_inflight_d = 1'b0;
          if (desc_word_idx_q + 5'd1 >= DESC_WORDS)
            state_d = S_VALIDATE;
        end
      end

      S_VALIDATE: begin
        dma_inflight_d = 1'b0;
        bias_inflight_d = 1'b0;
        vec_inflight_d = 1'b0;
        desc_inflight_d = 1'b0;
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
        clear_bias_regs = 1'b1;
        array_clear_acc = 1'b1;
        state_d = S_LOAD_A;
      end

      S_LOAD_A: begin
        desc_inflight_d = 1'b0;
        dma_op_kind      = DMA_OP_LOAD_I8;
        dma_base_addr    = src0_addr_q + (m0_q * stride0_q) + k0_q;
        dma_rows         = active_tile_m;
        dma_cols         = active_tile_k;
        dma_stride_bytes = stride0_q;
        dma_spm_region   = SPM_REGION_A;
        dma_spm_base     = 9'd0;

        if (!dma_inflight_q) begin
          dma_start      = 1'b1;
          dma_inflight_d = 1'b1;
          cnt_stall      = 1'b1;
        end else if (dma_error) begin
          set_memory_error = 1'b1;
          dma_inflight_d = 1'b0;
          state_d = S_ERROR;
        end else if (dma_done) begin
          dma_inflight_d = 1'b0;
          state_d = S_LOAD_B;
        end else begin
          cnt_stall = 1'b1;
        end
      end

      S_LOAD_B: begin
        desc_inflight_d = 1'b0;
        dma_op_kind      = DMA_OP_LOAD_I8;
        dma_base_addr    = src1_addr_q + (k0_q * stride1_q) + n0_q;
        dma_rows         = active_tile_k;
        dma_cols         = active_tile_n;
        dma_stride_bytes = stride1_q;
        dma_spm_region   = SPM_REGION_B;
        dma_spm_base     = 9'd0;

        if (!dma_inflight_q) begin
          dma_start      = 1'b1;
          dma_inflight_d = 1'b1;
          cnt_stall      = 1'b1;
        end else if (dma_error) begin
          set_memory_error = 1'b1;
          dma_inflight_d = 1'b0;
          state_d = S_ERROR;
        end else if (dma_done) begin
          dma_inflight_d = 1'b0;
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
        array_mac_en = 1'b1;
        if (kk_q + 16'd1 >= active_tile_k)
          state_d = S_NEXT_K;
      end

      S_NEXT_K: begin
        dma_inflight_d = 1'b0;
        bias_inflight_d = 1'b0;
        vec_inflight_d = 1'b0;
        desc_inflight_d = 1'b0;
        if (more_k_tiles)
          state_d = S_LOAD_A;
        else if (flags_q[FLAG_BIAS_EN])
          state_d = S_LOAD_BIAS;
        else
          state_d = S_EPILOGUE;
      end

      S_LOAD_BIAS: begin
        dma_inflight_d = 1'b0;
        vec_inflight_d = 1'b0;
        desc_inflight_d = 1'b0;
        cnt_stall = 1'b1;

        if (!flags_q[FLAG_BIAS_EN]) begin
          bias_inflight_d = 1'b0;
          state_d = S_EPILOGUE;
        end else if (!bias_inflight_q) begin
          bias_mem_req = 1'b1;
          if (mem_ready)
            bias_inflight_d = 1'b1;
        end else if (mem_rvalid) begin
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
        if (!epi_busy && !epi_done)
          epi_start = 1'b1;

        if (epi_done)
          state_d = S_STORE_C;
      end

      S_STORE_C: begin
        desc_inflight_d = 1'b0;
        vec_inflight_d = 1'b0;
        if (!store_stage_done_q) begin
          c_wr_en   = 1'b1;
          c_wr_addr = c_stage_addr[7:0];
          if (use_dst_i8)
            c_wr_data = {24'd0, c_epi_i8[store_row_q[1:0]][store_col_q[1:0]]};
          else
            c_wr_data = c_epi_i32[store_row_q[1:0]][store_col_q[1:0]];
        end else begin
          dma_op_kind      = use_dst_i8 ? DMA_OP_STORE_I8 : DMA_OP_STORE_I32;
          dma_base_addr    = dma_store_base_addr;
          dma_rows         = active_tile_m;
          dma_cols         = active_tile_n;
          dma_stride_bytes = stride_dst_q;
          dma_spm_region   = SPM_REGION_C;
          dma_spm_base     = 9'd0;

          if (!dma_inflight_q) begin
            dma_start      = 1'b1;
            dma_inflight_d = 1'b1;
            cnt_stall      = 1'b1;
          end else if (dma_error) begin
            set_memory_error = 1'b1;
            dma_inflight_d = 1'b0;
            state_d = S_ERROR;
          end else if (dma_done) begin
            dma_inflight_d = 1'b0;
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
      end

      S_VEC_LOAD_X: begin
        dma_inflight_d = 1'b0;
        bias_inflight_d = 1'b0;
        desc_inflight_d = 1'b0;
        cnt_stall = 1'b1;

        vec_mem_we   = 1'b0;
        vec_mem_addr = vec_src0_read_addr;

        if (!vec_inflight_q) begin
          vec_mem_req = 1'b1;
          if (mem_ready)
            vec_inflight_d = 1'b1;
        end else if (mem_rvalid) begin
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
        cnt_stall = 1'b1;

        vec_mem_we   = 1'b0;
        vec_mem_addr = vec_src1_read_addr;

        if (!vec_inflight_q) begin
          vec_mem_req = 1'b1;
          if (mem_ready)
            vec_inflight_d = 1'b1;
        end else if (mem_rvalid) begin
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
        state_d = S_VEC_STORE;
      end

      S_VEC_STORE: begin
        dma_inflight_d = 1'b0;
        bias_inflight_d = 1'b0;
        desc_inflight_d = 1'b0;
        cnt_stall = 1'b1;

        vec_mem_req  = 1'b1;
        vec_mem_we   = 1'b1;
        vec_mem_addr = vec_store_aligned_addr;

        if (use_dst_i8) begin
          case (vec_dst_elem_addr[1:0])
            2'd0: begin
              vec_mem_wdata = {24'd0, vec_result_i8};
              vec_mem_wstrb = 4'b0001;
            end
            2'd1: begin
              vec_mem_wdata = {16'd0, vec_result_i8, 8'd0};
              vec_mem_wstrb = 4'b0010;
            end
            2'd2: begin
              vec_mem_wdata = {8'd0, vec_result_i8, 16'd0};
              vec_mem_wstrb = 4'b0100;
            end
            default: begin
              vec_mem_wdata = {vec_result_i8, 24'd0};
              vec_mem_wstrb = 4'b1000;
            end
          endcase
        end else begin
          vec_mem_wdata = vec_result_post;
          vec_mem_wstrb = 4'b1111;
        end

        if (mem_ready) begin
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
        state_d = S_CLEAR_ACC;
      end

      S_NEXT_TILE_M: begin
        dma_inflight_d = 1'b0;
        bias_inflight_d = 1'b0;
        vec_inflight_d = 1'b0;
        desc_inflight_d = 1'b0;
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
  // - Tighten mem_ready/mem_rvalid error handling once the top-level memory model exists.

endmodule
