module tinygpu_epilogue 
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

  output logic signed [ACC_W-1:0]        c_out_i32 [0:TILE_M-1][0:TILE_N-1],
  output logic signed [INT8_W-1:0]       c_out_i8  [0:TILE_M-1][0:TILE_N-1]
);

  localparam logic signed [31:0] CLAMP_MIN_DFLT = -32'sd128;
  localparam logic signed [31:0] CLAMP_MAX_DFLT =  32'sd127;

  typedef enum logic [1:0] {
    EPI_IDLE,
    EPI_POST,
    EPI_SCALE,
    EPI_WRITE
  } epi_state_e;

  epi_state_e state_q;
  logic signed [ACC_W-1:0] post_q   [0:TILE_M-1][0:TILE_N-1];
  logic signed [ACC_W-1:0] scaled_q [0:TILE_M-1][0:TILE_N-1];

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

        // The current interface has no clamp min/max ports.
        // For now, interpret clamp as int8-range clipping before requant.
        if (flags_in[FLAG_CLAMP_EN])
          x = clamp32(x, CLAMP_MIN_DFLT, CLAMP_MAX_DFLT);
      end else begin
        x = 32'sd0;
      end

      postprocess_elem = x;
    end
  endfunction

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      state_q <= EPI_IDLE;
      busy    <= 1'b0;
      done    <= 1'b0;
      for (int r = 0; r < TILE_M; r++) begin
        for (int c = 0; c < TILE_N; c++) begin
          post_q[r][c]    <= '0;
          scaled_q[r][c]  <= '0;
          c_out_i32[r][c] <= '0;
          c_out_i8[r][c]  <= '0;
        end
      end
    end else begin
      done <= 1'b0;

      case (state_q)
        EPI_IDLE: begin
          busy <= 1'b0;
          if (start) begin
            busy    <= 1'b1;
            state_q <= EPI_POST;
          end
        end

        EPI_POST: begin
          for (int r = 0; r < TILE_M; r++) begin
            for (int c = 0; c < TILE_N; c++) begin
              logic valid_elem;
              logic signed [31:0] x_post;
              valid_elem = row_mask[r] && col_mask[c];
              x_post = postprocess_elem(c_in[r][c], bias[c], valid_elem, flags);
              post_q[r][c]    <= x_post;
              c_out_i32[r][c] <= x_post;
            end
          end
          state_q <= EPI_SCALE;
        end

        EPI_SCALE: begin
          for (int r = 0; r < TILE_M; r++) begin
            for (int c = 0; c < TILE_N; c++) begin
              if (flags[FLAG_REQUANT_EN])
                scaled_q[r][c] <= post_q[r][c] * scale;
              else
                scaled_q[r][c] <= post_q[r][c];
            end
          end
          state_q <= EPI_WRITE;
        end

        EPI_WRITE: begin
          for (int r = 0; r < TILE_M; r++) begin
            for (int c = 0; c < TILE_N; c++) begin
              logic signed [31:0] x_shifted;
              if (flags[FLAG_REQUANT_EN]) begin
                if (shift >= 0)
                  x_shifted = (scaled_q[r][c] >>> shift) + zero_point;
                else
                  x_shifted = (scaled_q[r][c] <<< (-shift)) + zero_point;
              end else begin
                x_shifted = post_q[r][c];
              end
              c_out_i8[r][c] <= sat_i8(x_shifted);
            end
          end
          busy    <= 1'b0;
          done    <= 1'b1;
          state_q <= EPI_IDLE;
        end

        default: begin
          state_q <= EPI_IDLE;
          busy    <= 1'b0;
        end
      endcase
    end
  end

endmodule
