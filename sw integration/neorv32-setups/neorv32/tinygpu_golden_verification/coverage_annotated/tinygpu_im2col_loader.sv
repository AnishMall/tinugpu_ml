//      // verilator_coverage annotation
        module tinygpu_im2col_loader
          import tinygpu_pkg::*;
        (
 016633   input  logic         clk,
%000007   input  logic         rst_n,
 000039   input  logic         start,
 000039   output logic         busy,
 000039   output logic         done,
%000000   output logic         error,
        
~000064   input  logic [31:0]  input_base,
%000006   input  logic [15:0]  input_h,
%000008   input  logic [15:0]  input_w,
~000011   input  logic [15:0]  input_c,
~000029   input  logic [31:0]  input_row_stride,
~000011   input  logic [3:0]   kernel_h,
~000011   input  logic [3:0]   kernel_w,
~000011   input  logic [3:0]   stride_h,
~000011   input  logic [3:0]   stride_w,
%000000   input  logic [3:0]   pad_h,
%000000   input  logic [3:0]   pad_w,
~000011   input  logic [15:0]  tile_out_y,
%000007   input  logic [15:0]  tile_out_x,
~000010   input  logic [15:0]  output_w,
~000034   input  logic [15:0]  active_rows,
~000037   input  logic [15:0]  active_k,
~000039   input  logic [3:0]   start_kh,
%000000   input  logic [3:0]   start_kw,
%000000   input  logic [15:0]  start_ic,
        
~000015   output logic [15:0]  next_out_y,
%000007   output logic [15:0]  next_out_x,
%000002   output logic [3:0]   next_kh,
%000000   output logic [3:0]   next_kw,
%000000   output logic [15:0]  next_ic,
        
 000148   output logic         mem_req,
~000064   output logic [31:0]  mem_addr,
 000101   input  logic [31:0]  mem_rdata,
 000187   input  logic         mem_ready,
 000148   input  logic         mem_rvalid,
        
 000148   output logic         spm_wr_en,
~000073   output logic [8:0]   spm_addr,
~000042   output logic [31:0]  spm_wdata,
%000001   output logic [3:0]   spm_wstrb
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
        
 000335   im2col_state_e state_q, state_d;
~000073   logic [15:0] row_q, row_d;
%000000   logic [15:0] k_q, k_d;
~000021   logic [15:0] out_y_q, out_y_d;
~000069   logic [15:0] out_x_q, out_x_d;
%000000   logic [3:0]  kh_q, kh_d;
%000000   logic [3:0]  kw_q, kw_d;
%000000   logic [15:0] ic_q, ic_d;
%000000   logic [3:0]  first_kh_q;
%000000   logic [3:0]  first_kw_q;
%000000   logic [15:0] first_ic_q;
 000042   logic [7:0]  sample_q;
%000002   logic        sample_valid_q;
        
~000024   logic signed [31:0] input_y;
~000069   logic signed [31:0] input_x;
~000076   logic [31:0] elem_addr;
~000064   logic [31:0] aligned_addr;
 000076   logic [1:0] lane_sel;
 000011   logic coord_valid;
 000042   logic last_k;
 000089   logic last_row;
%000001   logic [3:0]  step_kh;
%000000   logic [3:0]  step_kw;
%000000   logic [15:0] step_ic;
        
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
        
 099807   always_comb begin
 099807     step_kh = kh_q;
 099807     step_kw = kw_q;
 099807     step_ic = ic_q;
~099807     if (ic_q + 16'd1 < input_c) begin
%000000       step_ic = ic_q + 16'd1;
 099807     end else begin
 099807       step_ic = '0;
~099807       if (kw_q + 4'd1 < kernel_w) begin
%000000         step_kw = kw_q + 4'd1;
 099807       end else begin
 099807         step_kw = '0;
 099807         step_kh = kh_q + 4'd1;
              end
            end
          end
        
 099807   always_comb begin
 099807     state_d = state_q;
 099807     row_d = row_q;
 099807     k_d = k_q;
 099807     out_y_d = out_y_q;
 099807     out_x_d = out_x_q;
 099807     kh_d = kh_q;
 099807     kw_d = kw_q;
 099807     ic_d = ic_q;
        
 099807     busy = 1'b1;
 099807     done = 1'b0;
 099807     error = 1'b0;
 099807     mem_req = 1'b0;
 099807     mem_addr = aligned_addr;
 099807     spm_wr_en = 1'b0;
 099807     spm_addr = 9'((row_q << 4) + k_q);
 099807     spm_wdata = {24'd0, sample_q};
 099807     spm_wstrb = 4'b0001;
        
 099807     case (state_q)
 093357       IM2COL_IDLE: begin
 093357         busy = 1'b0;
 093123         if (start) begin
 000234           row_d = '0;
 000234           k_d = '0;
 000234           out_y_d = tile_out_y;
 000234           out_x_d = tile_out_x;
 000234           kh_d = start_kh;
 000234           kw_d = start_kw;
 000234           ic_d = start_ic;
~000234           if ((active_rows == 0) || (active_rows > 16'(TILE_M)) ||
                      (active_k == 0) || (active_k > 16'(TILE_K)) || (output_w == 0) ||
~000234               (input_c == 0) || (kernel_h == 0) || (kernel_w == 0))
%000000             state_d = IM2COL_ERROR;
                  else
 000234             state_d = IM2COL_PREP;
                end
              end
        
 000888       IM2COL_PREP: begin
~000888         if (coord_valid)
 000888           state_d = IM2COL_ISSUE;
                else
%000000           state_d = IM2COL_WRITE;
              end
        
 000888       IM2COL_ISSUE: begin
 000888         mem_req = 1'b1;
~000888         if (mem_ready)
 000888           state_d = IM2COL_WAIT;
              end
        
 002664       IM2COL_WAIT: begin
 001776         if (mem_rvalid)
 000888           state_d = IM2COL_WRITE;
              end
        
 000888       IM2COL_WRITE: begin
 000888         spm_wr_en = 1'b1;
~072167         if (!sample_valid_q)
%000000           spm_wdata = 32'd0;
 000888         state_d = IM2COL_ADVANCE;
              end
        
 000888       IM2COL_ADVANCE: begin
~000888         if (last_k) begin
 000888           k_d = '0;
 000888           kh_d = first_kh_q;
 000888           kw_d = first_kw_q;
 000888           ic_d = first_ic_q;
 000660           if (out_x_q + 16'd1 < output_w) begin
 000660             out_x_d = out_x_q + 16'd1;
 000228           end else begin
 000228             out_x_d = '0;
 000228             out_y_d = out_y_q + 16'd1;
                  end
        
 000654           if (last_row)
 000234             state_d = IM2COL_DONE;
 000654           else begin
 000654             row_d = row_q + 16'd1;
 000654             state_d = IM2COL_PREP;
                  end
%000000         end else begin
%000000           k_d = k_q + 16'd1;
%000000           kh_d = step_kh;
%000000           kw_d = step_kw;
%000000           ic_d = step_ic;
%000000           state_d = IM2COL_PREP;
                end
              end
        
 000234       IM2COL_DONE: begin
 000234         busy = 1'b0;
 000234         done = 1'b1;
 000234         state_d = IM2COL_IDLE;
              end
        
%000000       default: begin
%000000         busy = 1'b0;
%000000         error = 1'b1;
%000000         state_d = IM2COL_IDLE;
              end
            endcase
          end
        
 016639   always_ff @(posedge clk or negedge rst_n) begin
 016605     if (!rst_n) begin
 000034       state_q <= IM2COL_IDLE;
 000034       row_q <= '0;
 000034       k_q <= '0;
 000034       out_y_q <= '0;
 000034       out_x_q <= '0;
 000034       kh_q <= '0;
 000034       kw_q <= '0;
 000034       ic_q <= '0;
 000034       first_kh_q <= '0;
 000034       first_kw_q <= '0;
 000034       first_ic_q <= '0;
 000034       sample_q <= '0;
 000034       sample_valid_q <= 1'b0;
 000034       next_out_y <= '0;
 000034       next_out_x <= '0;
 000034       next_kh <= '0;
 000034       next_kw <= '0;
 000034       next_ic <= '0;
 016605     end else begin
 016605       state_q <= state_d;
 016605       row_q <= row_d;
 016605       k_q <= k_d;
 016605       out_y_q <= out_y_d;
 016605       out_x_q <= out_x_d;
 016605       kh_q <= kh_d;
 016605       kw_q <= kw_d;
 016605       ic_q <= ic_d;
        
 016566       if (state_q == IM2COL_IDLE && start) begin
 000039         first_kh_q <= start_kh;
 000039         first_kw_q <= start_kw;
 000039         first_ic_q <= start_ic;
              end
        
 016457       if (state_q == IM2COL_PREP)
 000148         sample_valid_q <= coord_valid;
        
 016457       if (state_q == IM2COL_WAIT && mem_rvalid) begin
 000148         case (lane_sel)
 000039           2'd0: sample_q <= mem_rdata[7:0];
 000038           2'd1: sample_q <= mem_rdata[15:8];
 000036           2'd2: sample_q <= mem_rdata[23:16];
 000035           default: sample_q <= mem_rdata[31:24];
                endcase
~016457       end else if (state_q == IM2COL_PREP && !coord_valid) begin
%000000         sample_q <= '0;
              end
        
 016566       if (state_q == IM2COL_ADVANCE && row_q == 0 && last_k) begin
 000039         next_kh <= step_kh;
 000039         next_kw <= step_kw;
 000039         next_ic <= step_ic;
              end
        
 016566       if (state_q == IM2COL_ADVANCE && last_row && last_k) begin
 000039         next_out_y <= out_y_d;
 000039         next_out_x <= out_x_d;
              end
            end
          end
        
        `ifndef SYNTHESIS
 000148   logic read_outstanding_q;
        
 016639   always @(posedge clk or negedge rst_n) begin
 016605     if (!rst_n) begin
 000034       read_outstanding_q <= 1'b0;
 016605     end else begin
~016605       assert (!(mem_req && !coord_valid));
~016605       assert (!(mem_req && mem_ready && read_outstanding_q));
 016457       if (mem_req && mem_ready)
 000148         read_outstanding_q <= 1'b1;
 016457       if (mem_rvalid)
 000148         read_outstanding_q <= 1'b0;
~016605       assert (!(mem_rvalid && !read_outstanding_q));
~016605       assert (!spm_wr_en || state_q == IM2COL_WRITE);
~016605       assert (!done || state_q == IM2COL_DONE);
~016605       assert (!error || state_q == IM2COL_ERROR);
~016605       assert (!(done && error));
~016605       assert (row_q < 16'(TILE_M) || state_q == IM2COL_IDLE || state_q == IM2COL_DONE);
~016605       assert (k_q < 16'(TILE_K) || state_q == IM2COL_IDLE || state_q == IM2COL_DONE);
            end
          end
        `endif
        
        endmodule
        
