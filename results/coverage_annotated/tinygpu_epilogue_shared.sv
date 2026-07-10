//      // verilator_coverage annotation
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
        
~038208   function automatic signed [INT8_W-1:0] sat_i8(input signed [31:0] x);
~038208     begin
~000784       if (x > 32'sd127)
~000784         sat_i8 = 8'sd127;
~037060       else if (x < -32'sd128)
~000364         sat_i8 = -8'sd128;
              else
~037060         sat_i8 = x[INT8_W-1:0];
            end
          endfunction
        
~130739   function automatic signed [31:0] clamp32(
            input signed [31:0] x,
            input signed [31:0] lo,
            input signed [31:0] hi
          );
~130739     begin
~000343       if (x < lo)
~000343         clamp32 = lo;
~127410       else if (x > hi)
~002986         clamp32 = hi;
              else
~127410         clamp32 = x;
            end
          endfunction
        
 1056281   function automatic signed [31:0] postprocess_elem(
            input signed [31:0] x_in,
            input signed [31:0] bias_in,
            input logic         valid_elem,
            input logic [31:0]  flags_in
          );
 1056281     reg signed [31:0] x;
 1056281     begin
 1056281       x = x_in;
        
 806845       if (valid_elem) begin
~131267         if (flags_in[FLAG_BIAS_EN])
~131267           x = x + bias_in;
        
~226359         if (flags_in[FLAG_RELU_EN] && (x < 0))
~023947           x = 32'sd0;
        
~130739         if (flags_in[FLAG_CLAMP_EN])
~130739           x = clamp32(x, CLAMP_MIN_DFLT, CLAMP_MAX_DFLT);
 806845       end else begin
 806845         x = 32'sd0;
              end
        
 1056281       postprocess_elem = x;
            end
          endfunction
        
          assign elem_valid = row_mask[row_q] && col_mask[col_q];
          assign last_elem  = (row_q == EPI_ROW_W'(TILE_M - 1)) && (col_q == EPI_COL_W'(TILE_N - 1));
          assign post_elem_n = postprocess_elem(c_in[row_q][col_q], bias[col_q], elem_valid, flags);
          assign mul_a = post_elem_q;
          assign mul_b = scale;
          assign zero_point_ext = {{16{zero_point[15]}}, zero_point};
        
 1056281   always_comb begin
~764478     if (flags[FLAG_REQUANT_EN]) begin
~222563       if ($signed(shift) >= 0)
~222563         x_shifted = ($signed(scaled_elem_q) >>> shift) + zero_point_ext;
              else
~069240         x_shifted = ($signed(scaled_elem_q) <<< (-$signed(shift))) + zero_point_ext;
 764478     end else begin
 764478       x_shifted = post_elem_q;
            end
          end
        
 1056280   always_ff @(posedge clk or negedge rst_n) begin
~1056276     if (!rst_n) begin
%000004       state_q       <= EPI_IDLE;
%000004       busy          <= 1'b0;
%000004       done          <= 1'b0;
%000004       mul_start     <= 1'b0;
%000004       out_valid     <= 1'b0;
%000004       out_index     <= '0;
%000004       out_i32       <= '0;
%000004       out_i8        <= '0;
%000004       row_q         <= '0;
%000004       col_q         <= '0;
%000004       post_elem_q   <= '0;
%000004       scaled_elem_q <= '0;
~000016       for (int r = 0; r < TILE_M; r++) begin
~000064         for (int c = 0; c < TILE_N; c++) begin
 000064           c_out_i32[r][c] <= '0;
 000064           c_out_i8[r][c]  <= '0;
                end
              end
 1056276     end else begin
 1056276       done      <= 1'b0;
 1056276       mul_start <= 1'b0;
 1056276       out_valid <= 1'b0;
        
 1056276       case (state_q)
 983844         EPI_IDLE: begin
 983844           busy <= 1'b0;
~982650           if (start) begin
~001194             busy    <= 1'b1;
~001194             row_q   <= '0;
~001194             col_q   <= '0;
~001194             state_q <= EPI_POST;
                  end
                end
        
~019104         EPI_POST: begin
~019104           post_elem_q <= post_elem_n;
~019104           c_out_i32[row_q][col_q] <= post_elem_n;
~014064           if (flags[FLAG_REQUANT_EN]) begin
~005040             mul_start <= 1'b1;
~005040             state_q   <= EPI_SCALE_START;
~014064           end else begin
~014064             scaled_elem_q <= post_elem_n;
~014064             state_q       <= EPI_WRITE;
                  end
                end
        
~005040         EPI_SCALE_START: begin
~005040           state_q <= EPI_SCALE_WAIT;
                end
        
~010080         EPI_SCALE_WAIT: begin
~005040           if (mul_done) begin
~005040             scaled_elem_q <= mul_product;
~005040             state_q       <= EPI_WRITE;
                  end
                end
        
~019104         EPI_WRITE: begin
~019104           c_out_i8[row_q][col_q] <= sat_i8(x_shifted);
~019104           out_valid <= 1'b1;
~019104           out_index <= 8'((row_q * TILE_N) + col_q);
~019104           out_i32 <= post_elem_q;
~019104           out_i8 <= sat_i8(x_shifted);
~019104           state_q <= EPI_NEXT;
                end
        
~019104         EPI_NEXT: begin
~017910           if (last_elem) begin
~001194             busy    <= 1'b0;
~001194             done    <= 1'b1;
~001194             state_q <= EPI_IDLE;
~017910           end else begin
~014328             if (col_q == EPI_COL_W'(TILE_N - 1)) begin
~003582               col_q <= '0;
~003582               row_q <= row_q + EPI_ROW_W'(1);
~014328             end else begin
~014328               col_q <= col_q + EPI_COL_W'(1);
                    end
~017910             state_q <= EPI_POST;
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
        
