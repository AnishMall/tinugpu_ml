module tinygpu_epilogue_shared
  import tinygpu_pkg::*;
(
  input  logic                           clk,
  input  logic                           rst_n,

  input  logic                           start,
  output logic                           busy,
  output logic                           done,

  input  logic [31:0]                    flags,
  input  logic signed [31:0]             scale,
  input  logic signed [15:0]             shift,
  input  logic signed [15:0]             zero_point,

  input  logic signed [ACC_W-1:0]        c_in [0:TILE_M-1][0:TILE_N-1],
  input  logic signed [ACC_W-1:0]        bias [0:TILE_N-1],
  input  logic [TILE_M-1:0]              row_mask,
  input  logic [TILE_N-1:0]              col_mask,

  output logic                           mul_start,
  output logic signed [ACC_W-1:0]        mul_a,
  output logic signed [31:0]             mul_b,
  input  logic                           mul_done,
  input  logic signed [ACC_W-1:0]        mul_product,

  output logic                           out_valid,
  output logic [7:0]                     out_index,
  output logic signed [ACC_W-1:0]        out_i32,
  output logic signed [INT8_W-1:0]       out_i8,

  output logic signed [ACC_W-1:0]        c_out_i32 [0:TILE_M-1][0:TILE_N-1],
  output logic signed [INT8_W-1:0]       c_out_i8  [0:TILE_M-1][0:TILE_N-1]
);

  localparam logic signed [31:0] CLAMP_MIN_DFLT = -32'sd128;
  localparam logic signed [31:0] CLAMP_MAX_DFLT =  32'sd127;
  localparam int EPI_ROW_W = (TILE_M <= 1) ? 1 : $clog2(TILE_M);
  localparam int EPI_COL_W = (TILE_N <= 1) ? 1 : $clog2(TILE_N);

  typedef enum logic [2:0] {
    EPI_IDLE,
    EPI_POST,
    EPI_SCALE_START,
    EPI_SCALE_WAIT,
    EPI_WRITE,
    EPI_NEXT
  } epi_state_e;

  epi_state_e state_q;
  logic [EPI_ROW_W-1:0] row_q;
  logic [EPI_COL_W-1:0] col_q;
  logic signed [ACC_W-1:0] post_elem_q;
  logic signed [ACC_W-1:0] scaled_elem_q;
  logic                    elem_valid;
  logic                    last_elem;
  logic signed [ACC_W-1:0] post_elem_n;
  logic signed [31:0]      x_shifted;
  logic signed [31:0]      zero_point_ext;

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

  function automatic signed [31:0] postprocess_elem(
    input signed [31:0] x_in,
    input signed [31:0] bias_in,
    input logic         valid_elem,
    input logic [31:0]  flags_in
  );
    reg signed [31:0] x;
    begin
      x = x_in;

      if (valid_elem) begin
        if (flags_in[FLAG_BIAS_EN])
          x = x + bias_in;

        if (flags_in[FLAG_RELU_EN] && (x < 0))
          x = 32'sd0;

        if (flags_in[FLAG_CLAMP_EN])
          x = clamp32(x, CLAMP_MIN_DFLT, CLAMP_MAX_DFLT);
      end else begin
        x = 32'sd0;
      end

      postprocess_elem = x;
    end
  endfunction

  assign elem_valid = row_mask[row_q] && col_mask[col_q];
  assign last_elem  = (row_q == EPI_ROW_W'(TILE_M - 1)) && (col_q == EPI_COL_W'(TILE_N - 1));
  assign post_elem_n = postprocess_elem(c_in[row_q][col_q], bias[col_q], elem_valid, flags);
  assign mul_a = post_elem_q;
  assign mul_b = scale;
  assign zero_point_ext = {{16{zero_point[15]}}, zero_point};

  always_comb begin
    if (flags[FLAG_REQUANT_EN]) begin
      if ($signed(shift) >= 0)
        x_shifted = ($signed(scaled_elem_q) >>> shift) + zero_point_ext;
      else
        x_shifted = ($signed(scaled_elem_q) <<< (-$signed(shift))) + zero_point_ext;
    end else begin
      x_shifted = post_elem_q;
    end
  end

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      state_q       <= EPI_IDLE;
      busy          <= 1'b0;
      done          <= 1'b0;
      mul_start     <= 1'b0;
      out_valid     <= 1'b0;
      out_index     <= '0;
      out_i32       <= '0;
      out_i8        <= '0;
      row_q         <= '0;
      col_q         <= '0;
      post_elem_q   <= '0;
      scaled_elem_q <= '0;
      for (int r = 0; r < TILE_M; r++) begin
        for (int c = 0; c < TILE_N; c++) begin
          c_out_i32[r][c] <= '0;
          c_out_i8[r][c]  <= '0;
        end
      end
    end else begin
      done      <= 1'b0;
      mul_start <= 1'b0;
      out_valid <= 1'b0;

      case (state_q)
        EPI_IDLE: begin
          busy <= 1'b0;
          if (start) begin
            busy    <= 1'b1;
            row_q   <= '0;
            col_q   <= '0;
            state_q <= EPI_POST;
          end
        end

        EPI_POST: begin
          post_elem_q <= post_elem_n;
          c_out_i32[row_q][col_q] <= post_elem_n;
          if (flags[FLAG_REQUANT_EN]) begin
            mul_start <= 1'b1;
            state_q   <= EPI_SCALE_START;
          end else begin
            scaled_elem_q <= post_elem_n;
            state_q       <= EPI_WRITE;
          end
        end

        EPI_SCALE_START: begin
          state_q <= EPI_SCALE_WAIT;
        end

        EPI_SCALE_WAIT: begin
          if (mul_done) begin
            scaled_elem_q <= mul_product;
            state_q       <= EPI_WRITE;
          end
        end

        EPI_WRITE: begin
          c_out_i8[row_q][col_q] <= sat_i8(x_shifted);
          out_valid <= 1'b1;
          out_index <= 8'((row_q * TILE_N) + col_q);
          out_i32 <= post_elem_q;
          out_i8 <= sat_i8(x_shifted);
          state_q <= EPI_NEXT;
        end

        EPI_NEXT: begin
          if (last_elem) begin
            busy    <= 1'b0;
            done    <= 1'b1;
            state_q <= EPI_IDLE;
          end else begin
            if (col_q == EPI_COL_W'(TILE_N - 1)) begin
              col_q <= '0;
              row_q <= row_q + EPI_ROW_W'(1);
            end else begin
              col_q <= col_q + EPI_COL_W'(1);
            end
            state_q <= EPI_POST;
          end
        end

        default: begin
          state_q <= EPI_IDLE;
          busy    <= 1'b0;
        end
      endcase
    end
  end

endmodule
