module tinygpu_im2col_loader
  import tinygpu_pkg::*;
(
  input  logic         clk,
  input  logic         rst_n,
  input  logic         start,
  output logic         busy,
  output logic         done,
  output logic         error,

  input  logic [31:0]  input_base,
  input  logic [15:0]  input_h,
  input  logic [15:0]  input_w,
  input  logic [15:0]  input_c,
  input  logic [31:0]  input_row_stride,
  input  logic [3:0]   kernel_h,
  input  logic [3:0]   kernel_w,
  input  logic [3:0]   stride_h,
  input  logic [3:0]   stride_w,
  input  logic [3:0]   pad_h,
  input  logic [3:0]   pad_w,
  input  logic [15:0]  tile_out_y,
  input  logic [15:0]  tile_out_x,
  input  logic [15:0]  output_w,
  input  logic [15:0]  active_rows,
  input  logic [15:0]  active_k,
  input  logic [3:0]   start_kh,
  input  logic [3:0]   start_kw,
  input  logic [15:0]  start_ic,

  output logic [15:0]  next_out_y,
  output logic [15:0]  next_out_x,
  output logic [3:0]   next_kh,
  output logic [3:0]   next_kw,
  output logic [15:0]  next_ic,

  output logic         mem_req,
  output logic [31:0]  mem_addr,
  input  logic [31:0]  mem_rdata,
  input  logic         mem_ready,
  input  logic         mem_rvalid,

  output logic         spm_wr_en,
  output logic [8:0]   spm_addr,
  output logic [31:0]  spm_wdata,
  output logic [3:0]   spm_wstrb
);

  typedef enum logic [2:0] {
    IM2COL_IDLE,
    IM2COL_PREP,
    IM2COL_ISSUE,
    IM2COL_WAIT,
    IM2COL_WRITE,
    IM2COL_ADVANCE,
    IM2COL_DONE,
    IM2COL_ERROR
  } im2col_state_e;

  im2col_state_e state_q, state_d;
  logic [15:0] row_q, row_d;
  logic [15:0] k_q, k_d;
  logic [15:0] out_y_q, out_y_d;
  logic [15:0] out_x_q, out_x_d;
  logic [3:0]  kh_q, kh_d;
  logic [3:0]  kw_q, kw_d;
  logic [15:0] ic_q, ic_d;
  logic [3:0]  first_kh_q;
  logic [3:0]  first_kw_q;
  logic [15:0] first_ic_q;
  logic [7:0]  sample_q;
  logic        sample_valid_q;

  logic signed [31:0] input_y;
  logic signed [31:0] input_x;
  logic [31:0] elem_addr;
  logic [31:0] aligned_addr;
  logic [1:0] lane_sel;
  logic coord_valid;
  logic last_k;
  logic last_row;
  logic [3:0]  step_kh;
  logic [3:0]  step_kw;
  logic [15:0] step_ic;

  assign input_y = $signed({16'd0, out_y_q}) * $signed({28'd0, stride_h}) +
                   $signed({28'd0, kh_q}) - $signed({28'd0, pad_h});
  assign input_x = $signed({16'd0, out_x_q}) * $signed({28'd0, stride_w}) +
                   $signed({28'd0, kw_q}) - $signed({28'd0, pad_w});
  assign coord_valid = (input_y >= 0) && (input_x >= 0) &&
                       (input_y < $signed({16'd0, input_h})) &&
                       (input_x < $signed({16'd0, input_w}));
  assign elem_addr = input_base + ($unsigned(input_y) * input_row_stride) +
                     ($unsigned(input_x) * {16'd0, input_c}) + {16'd0, ic_q};
  assign aligned_addr = {elem_addr[31:2], 2'b00};
  assign lane_sel = elem_addr[1:0];
  assign last_k = (k_q + 16'd1 >= active_k);
  assign last_row = (row_q + 16'd1 >= active_rows);

  always_comb begin
    step_kh = kh_q;
    step_kw = kw_q;
    step_ic = ic_q;
    if (ic_q + 16'd1 < input_c) begin
      step_ic = ic_q + 16'd1;
    end else begin
      step_ic = '0;
      if (kw_q + 4'd1 < kernel_w) begin
        step_kw = kw_q + 4'd1;
      end else begin
        step_kw = '0;
        step_kh = kh_q + 4'd1;
      end
    end
  end

  always_comb begin
    state_d = state_q;
    row_d = row_q;
    k_d = k_q;
    out_y_d = out_y_q;
    out_x_d = out_x_q;
    kh_d = kh_q;
    kw_d = kw_q;
    ic_d = ic_q;

    busy = 1'b1;
    done = 1'b0;
    error = 1'b0;
    mem_req = 1'b0;
    mem_addr = aligned_addr;
    spm_wr_en = 1'b0;
    spm_addr = 9'((row_q << 4) + k_q);
    spm_wdata = {24'd0, sample_q};
    spm_wstrb = 4'b0001;

    case (state_q)
      IM2COL_IDLE: begin
        busy = 1'b0;
        if (start) begin
          row_d = '0;
          k_d = '0;
          out_y_d = tile_out_y;
          out_x_d = tile_out_x;
          kh_d = start_kh;
          kw_d = start_kw;
          ic_d = start_ic;
          if ((active_rows == 0) || (active_rows > 16'(TILE_M)) ||
              (active_k == 0) || (active_k > 16'(TILE_K)) || (output_w == 0) ||
              (input_c == 0) || (kernel_h == 0) || (kernel_w == 0))
            state_d = IM2COL_ERROR;
          else
            state_d = IM2COL_PREP;
        end
      end

      IM2COL_PREP: begin
        if (coord_valid)
          state_d = IM2COL_ISSUE;
        else
          state_d = IM2COL_WRITE;
      end

      IM2COL_ISSUE: begin
        mem_req = 1'b1;
        if (mem_ready)
          state_d = IM2COL_WAIT;
      end

      IM2COL_WAIT: begin
        if (mem_rvalid)
          state_d = IM2COL_WRITE;
      end

      IM2COL_WRITE: begin
        spm_wr_en = 1'b1;
        if (!sample_valid_q)
          spm_wdata = 32'd0;
        state_d = IM2COL_ADVANCE;
      end

      IM2COL_ADVANCE: begin
        if (last_k) begin
          k_d = '0;
          kh_d = first_kh_q;
          kw_d = first_kw_q;
          ic_d = first_ic_q;
          if (out_x_q + 16'd1 < output_w) begin
            out_x_d = out_x_q + 16'd1;
          end else begin
            out_x_d = '0;
            out_y_d = out_y_q + 16'd1;
          end

          if (last_row)
            state_d = IM2COL_DONE;
          else begin
            row_d = row_q + 16'd1;
            state_d = IM2COL_PREP;
          end
        end else begin
          k_d = k_q + 16'd1;
          kh_d = step_kh;
          kw_d = step_kw;
          ic_d = step_ic;
          state_d = IM2COL_PREP;
        end
      end

      IM2COL_DONE: begin
        busy = 1'b0;
        done = 1'b1;
        state_d = IM2COL_IDLE;
      end

      default: begin
        busy = 1'b0;
        error = 1'b1;
        state_d = IM2COL_IDLE;
      end
    endcase
  end

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      state_q <= IM2COL_IDLE;
      row_q <= '0;
      k_q <= '0;
      out_y_q <= '0;
      out_x_q <= '0;
      kh_q <= '0;
      kw_q <= '0;
      ic_q <= '0;
      first_kh_q <= '0;
      first_kw_q <= '0;
      first_ic_q <= '0;
      sample_q <= '0;
      sample_valid_q <= 1'b0;
      next_out_y <= '0;
      next_out_x <= '0;
      next_kh <= '0;
      next_kw <= '0;
      next_ic <= '0;
    end else begin
      state_q <= state_d;
      row_q <= row_d;
      k_q <= k_d;
      out_y_q <= out_y_d;
      out_x_q <= out_x_d;
      kh_q <= kh_d;
      kw_q <= kw_d;
      ic_q <= ic_d;

      if (state_q == IM2COL_IDLE && start) begin
        first_kh_q <= start_kh;
        first_kw_q <= start_kw;
        first_ic_q <= start_ic;
      end

      if (state_q == IM2COL_PREP)
        sample_valid_q <= coord_valid;

      if (state_q == IM2COL_WAIT && mem_rvalid) begin
        case (lane_sel)
          2'd0: sample_q <= mem_rdata[7:0];
          2'd1: sample_q <= mem_rdata[15:8];
          2'd2: sample_q <= mem_rdata[23:16];
          default: sample_q <= mem_rdata[31:24];
        endcase
      end else if (state_q == IM2COL_PREP && !coord_valid) begin
        sample_q <= '0;
      end

      if (state_q == IM2COL_ADVANCE && row_q == 0 && last_k) begin
        next_kh <= step_kh;
        next_kw <= step_kw;
        next_ic <= step_ic;
      end

      if (state_q == IM2COL_ADVANCE && last_row && last_k) begin
        next_out_y <= out_y_d;
        next_out_x <= out_x_d;
      end
    end
  end

`ifndef SYNTHESIS
  logic read_outstanding_q;

  always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      read_outstanding_q <= 1'b0;
    end else begin
      assert (!(mem_req && !coord_valid));
      assert (!(mem_req && mem_ready && read_outstanding_q));
      if (mem_req && mem_ready)
        read_outstanding_q <= 1'b1;
      if (mem_rvalid)
        read_outstanding_q <= 1'b0;
      assert (row_q < 16'(TILE_M) || state_q == IM2COL_IDLE || state_q == IM2COL_DONE);
      assert (k_q < 16'(TILE_K) || state_q == IM2COL_IDLE || state_q == IM2COL_DONE);
    end
  end
`endif

endmodule
