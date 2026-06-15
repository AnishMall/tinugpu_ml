//      // verilator_coverage annotation
        module tinygpu_epilogue_shared
          import tinygpu_pkg::*;
        (
 017302   input  logic                           clk,
%000007   input  logic                           rst_n,
        
 000092   input  logic                           start,
 000092   output logic                           busy,
 000092   output logic                           done,
        
~000064   input  logic [31:0]                    flags,
%000000   input  logic signed [31:0]             scale,
%000000   input  logic signed [15:0]             shift,
%000000   input  logic signed [15:0]             zero_point,
        
          input  logic signed [ACC_W-1:0]        c_in [0:TILE_M-1][0:TILE_N-1],
%000000   input  logic signed [ACC_W-1:0]        bias [0:TILE_N-1],
 000064   input  logic [TILE_M-1:0]              row_mask,
 000064   input  logic [TILE_N-1:0]              col_mask,
        
%000000   output logic                           mul_start,
 000184   output logic signed [ACC_W-1:0]        mul_a,
%000000   output logic signed [31:0]             mul_b,
%000000   input  logic                           mul_done,
%000000   input  logic signed [ACC_W-1:0]        mul_product,
        
 001472   output logic                           out_valid,
~000736   output logic [7:0]                     out_index,
 000184   output logic signed [ACC_W-1:0]        out_i32,
 000184   output logic signed [INT8_W-1:0]       out_i8,
        
          output logic signed [ACC_W-1:0]        c_out_i32 [0:TILE_M-1][0:TILE_N-1],
~000029   output logic signed [INT8_W-1:0]       c_out_i8  [0:TILE_M-1][0:TILE_N-1]
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
        
~001564   epi_state_e state_q;
 000184   logic [EPI_ROW_W-1:0] row_q;
 000736   logic [EPI_COL_W-1:0] col_q;
 000184   logic signed [ACC_W-1:0] post_elem_q;
 000184   logic signed [ACC_W-1:0] scaled_elem_q;
 000264   logic                    elem_valid;
 000092   logic                    last_elem;
 000189   logic signed [ACC_W-1:0] post_elem_n;
 000184   logic signed [31:0]      x_shifted;
%000000   logic signed [31:0]      zero_point_ext;
        
 002944   function automatic signed [INT8_W-1:0] sat_i8(input signed [31:0] x);
 002944     begin
%000008       if (x > 32'sd127)
%000008         sat_i8 = 8'sd127;
~002934       else if (x < -32'sd128)
%000002         sat_i8 = -8'sd128;
              else
 002934         sat_i8 = x[INT8_W-1:0];
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
        
 104290   function automatic signed [31:0] postprocess_elem(
            input signed [31:0] x_in,
            input signed [31:0] bias_in,
            input logic         valid_elem,
            input logic [31:0]  flags_in
          );
 104290     reg signed [31:0] x;
 104290     begin
 104290       x = x_in;
        
 086332       if (valid_elem) begin
~017958         if (flags_in[FLAG_BIAS_EN])
%000000           x = x + bias_in;
        
~017958         if (flags_in[FLAG_RELU_EN] && (x < 0))
%000000           x = 32'sd0;
        
~017958         if (flags_in[FLAG_CLAMP_EN])
%000000           x = clamp32(x, CLAMP_MIN_DFLT, CLAMP_MAX_DFLT);
 086332       end else begin
 086332         x = 32'sd0;
              end
        
 104290       postprocess_elem = x;
            end
          endfunction
        
          assign elem_valid = row_mask[row_q] && col_mask[col_q];
          assign last_elem  = (row_q == EPI_ROW_W'(TILE_M - 1)) && (col_q == EPI_COL_W'(TILE_N - 1));
          assign post_elem_n = postprocess_elem(c_in[row_q][col_q], bias[col_q], elem_valid, flags);
          assign mul_a = post_elem_q;
          assign mul_b = scale;
          assign zero_point_ext = {{16{zero_point[15]}}, zero_point};
        
 103821   always_comb begin
~103821     if (flags[FLAG_REQUANT_EN]) begin
%000000       if ($signed(shift) >= 0)
%000000         x_shifted = ($signed(scaled_elem_q) >>> shift) + zero_point_ext;
              else
%000000         x_shifted = ($signed(scaled_elem_q) <<< (-$signed(shift))) + zero_point_ext;
 103821     end else begin
 103821       x_shifted = post_elem_q;
            end
          end
        
 017308   always_ff @(posedge clk or negedge rst_n) begin
 017274     if (!rst_n) begin
 000034       state_q       <= EPI_IDLE;
 000034       busy          <= 1'b0;
 000034       done          <= 1'b0;
 000034       mul_start     <= 1'b0;
 000034       out_valid     <= 1'b0;
 000034       out_index     <= '0;
 000034       out_i32       <= '0;
 000034       out_i8        <= '0;
 000034       row_q         <= '0;
 000034       col_q         <= '0;
 000034       post_elem_q   <= '0;
 000034       scaled_elem_q <= '0;
 000136       for (int r = 0; r < TILE_M; r++) begin
 000544         for (int c = 0; c < TILE_N; c++) begin
 000544           c_out_i32[r][c] <= '0;
 000544           c_out_i8[r][c]  <= '0;
                end
              end
 017274     end else begin
 017274       done      <= 1'b0;
 017274       mul_start <= 1'b0;
 017274       out_valid <= 1'b0;
        
 017274       case (state_q)
 012858         EPI_IDLE: begin
 012858           busy <= 1'b0;
 012766           if (start) begin
 000092             busy    <= 1'b1;
 000092             row_q   <= '0;
 000092             col_q   <= '0;
 000092             state_q <= EPI_POST;
                  end
                end
        
 001472         EPI_POST: begin
 001472           post_elem_q <= post_elem_n;
 001472           c_out_i32[row_q][col_q] <= post_elem_n;
~001472           if (flags[FLAG_REQUANT_EN]) begin
%000000             mul_start <= 1'b1;
%000000             state_q   <= EPI_SCALE_START;
 001472           end else begin
 001472             scaled_elem_q <= post_elem_n;
 001472             state_q       <= EPI_WRITE;
                  end
                end
        
%000000         EPI_SCALE_START: begin
%000000           state_q <= EPI_SCALE_WAIT;
                end
        
%000000         EPI_SCALE_WAIT: begin
%000000           if (mul_done) begin
%000000             scaled_elem_q <= mul_product;
%000000             state_q       <= EPI_WRITE;
                  end
                end
        
 001472         EPI_WRITE: begin
 001472           c_out_i8[row_q][col_q] <= sat_i8(x_shifted);
 001472           out_valid <= 1'b1;
 001472           out_index <= 8'((row_q * TILE_N) + col_q);
 001472           out_i32 <= post_elem_q;
 001472           out_i8 <= sat_i8(x_shifted);
 001472           state_q <= EPI_NEXT;
                end
        
 001472         EPI_NEXT: begin
 001380           if (last_elem) begin
 000092             busy    <= 1'b0;
 000092             done    <= 1'b1;
 000092             state_q <= EPI_IDLE;
 001380           end else begin
 001104             if (col_q == EPI_COL_W'(TILE_N - 1)) begin
 000276               col_q <= '0;
 000276               row_q <= row_q + EPI_ROW_W'(1);
 001104             end else begin
 001104               col_q <= col_q + EPI_COL_W'(1);
                    end
 001380             state_q <= EPI_POST;
                  end
                end
        
%000000         default: begin
%000000           state_q <= EPI_IDLE;
%000000           busy    <= 1'b0;
                end
              endcase
            end
          end
        
        endmodule
        
