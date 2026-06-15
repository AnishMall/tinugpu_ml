//      // verilator_coverage annotation
        module tinygpu_im2col_loader
          import tinygpu_pkg::*;
        (
 017302   input  logic         clk,
%000007   input  logic         rst_n,
 000041   input  logic         start,
 000041   output logic         busy,
 000041   output logic         done,
%000000   output logic         error,
        
~000064   input  logic [31:0]  input_base,
%000006   input  logic [15:0]  input_h,
%000008   input  logic [15:0]  input_w,
~000011   input  logic [15:0]  input_c,
~000035   input  logic [31:0]  input_row_stride,
~000011   input  logic [3:0]   kernel_h,
~000011   input  logic [3:0]   kernel_w,
~000011   input  logic [3:0]   stride_h,
~000011   input  logic [3:0]   stride_w,
%000000   input  logic [3:0]   pad_h,
%000000   input  logic [3:0]   pad_w,
~000013   input  logic [15:0]  tile_out_y,
%000008   input  logic [15:0]  tile_out_x,
%000008   input  logic [15:0]  output_w,
~000032   input  logic [15:0]  active_rows,
~000032   input  logic [15:0]  active_k,
~000041   input  logic [3:0]   start_kh,
%000000   input  logic [3:0]   start_kw,
%000000   input  logic [15:0]  start_ic,
        
~000015   output logic [15:0]  next_out_y,
%000008   output logic [15:0]  next_out_x,
%000002   output logic [3:0]   next_kh,
%000000   output logic [3:0]   next_kw,
%000000   output logic [15:0]  next_ic,
        
 000156   output logic         mem_req,
~000064   output logic [31:0]  mem_addr,
 000116   input  logic [31:0]  mem_rdata,
 000197   input  logic         mem_ready,
 000156   input  logic         mem_rvalid,
        
 000156   output logic         spm_wr_en,
~000078   output logic [8:0]   spm_addr,
~000046   output logic [31:0]  spm_wdata,
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
        
 000353   im2col_state_e state_q, state_d;
~000078   logic [15:0] row_q, row_d;
%000000   logic [15:0] k_q, k_d;
~000021   logic [15:0] out_y_q, out_y_d;
~000067   logic [15:0] out_x_q, out_x_d;
%000000   logic [3:0]  kh_q, kh_d;
%000000   logic [3:0]  kw_q, kw_d;
%000000   logic [15:0] ic_q, ic_d;
%000000   logic [3:0]  first_kh_q;
%000000   logic [3:0]  first_kw_q;
%000000   logic [15:0] first_ic_q;
 000046   logic [7:0]  sample_q;
%000002   logic        sample_valid_q;
        
~000023   logic signed [31:0] input_y;
~000067   logic signed [31:0] input_x;
~000080   logic [31:0] elem_addr;
~000064   logic [31:0] aligned_addr;
 000080   logic [1:0] lane_sel;
 000011   logic coord_valid;
 000050   logic last_k;
 000080   logic last_row;
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
        
 103821   always_comb begin
 103821     step_kh = kh_q;
 103821     step_kw = kw_q;
 103821     step_ic = ic_q;
~103821     if (ic_q + 16'd1 < input_c) begin
%000000       step_ic = ic_q + 16'd1;
 103821     end else begin
 103821       step_ic = '0;
~103821       if (kw_q + 4'd1 < kernel_w) begin
%000000         step_kw = kw_q + 4'd1;
 103821       end else begin
 103821         step_kw = '0;
 103821         step_kh = kh_q + 4'd1;
              end
            end
          end
        
 103821   always_comb begin
 103821     state_d = state_q;
 103821     row_d = row_q;
 103821     k_d = k_q;
 103821     out_y_d = out_y_q;
 103821     out_x_d = out_x_q;
 103821     kh_d = kh_q;
 103821     kw_d = kw_q;
 103821     ic_d = ic_q;
        
 103821     busy = 1'b1;
 103821     done = 1'b0;
 103821     error = 1'b0;
 103821     mem_req = 1'b0;
 103821     mem_addr = aligned_addr;
 103821     spm_wr_en = 1'b0;
 103821     spm_addr = 9'((row_q << 4) + k_q);
 103821     spm_wdata = {24'd0, sample_q};
 103821     spm_wstrb = 4'b0001;
        
 103821     case (state_q)
 097023       IM2COL_IDLE: begin
 097023         busy = 1'b0;
 096777         if (start) begin
 000246           row_d = '0;
 000246           k_d = '0;
 000246           out_y_d = tile_out_y;
 000246           out_x_d = tile_out_x;
 000246           kh_d = start_kh;
 000246           kw_d = start_kw;
 000246           ic_d = start_ic;
~000246           if ((active_rows == 0) || (active_rows > 16'(TILE_M)) ||
                      (active_k == 0) || (active_k > 16'(TILE_K)) || (output_w == 0) ||
~000246               (input_c == 0) || (kernel_h == 0) || (kernel_w == 0))
%000000             state_d = IM2COL_ERROR;
                  else
 000246             state_d = IM2COL_PREP;
                end
              end
        
 000936       IM2COL_PREP: begin
~000936         if (coord_valid)
 000936           state_d = IM2COL_ISSUE;
                else
%000000           state_d = IM2COL_WRITE;
              end
        
 000936       IM2COL_ISSUE: begin
 000936         mem_req = 1'b1;
~000936         if (mem_ready)
 000936           state_d = IM2COL_WAIT;
              end
        
 002808       IM2COL_WAIT: begin
 001872         if (mem_rvalid)
 000936           state_d = IM2COL_WRITE;
              end
        
 000936       IM2COL_WRITE: begin
 000936         spm_wr_en = 1'b1;
~074903         if (!sample_valid_q)
%000000           spm_wdata = 32'd0;
 000936         state_d = IM2COL_ADVANCE;
              end
        
 000936       IM2COL_ADVANCE: begin
~000936         if (last_k) begin
 000936           k_d = '0;
 000936           kh_d = first_kh_q;
 000936           kw_d = first_kw_q;
 000936           ic_d = first_ic_q;
 000702           if (out_x_q + 16'd1 < output_w) begin
 000702             out_x_d = out_x_q + 16'd1;
 000234           end else begin
 000234             out_x_d = '0;
 000234             out_y_d = out_y_q + 16'd1;
                  end
        
 000690           if (last_row)
 000246             state_d = IM2COL_DONE;
 000690           else begin
 000690             row_d = row_q + 16'd1;
 000690             state_d = IM2COL_PREP;
                  end
%000000         end else begin
%000000           k_d = k_q + 16'd1;
%000000           kh_d = step_kh;
%000000           kw_d = step_kw;
%000000           ic_d = step_ic;
%000000           state_d = IM2COL_PREP;
                end
              end
        
 000246       IM2COL_DONE: begin
 000246         busy = 1'b0;
 000246         done = 1'b1;
 000246         state_d = IM2COL_IDLE;
              end
        
%000000       default: begin
%000000         busy = 1'b0;
%000000         error = 1'b1;
%000000         state_d = IM2COL_IDLE;
              end
            endcase
          end
        
 017308   always_ff @(posedge clk or negedge rst_n) begin
 017274     if (!rst_n) begin
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
 017274     end else begin
 017274       state_q <= state_d;
 017274       row_q <= row_d;
 017274       k_q <= k_d;
 017274       out_y_q <= out_y_d;
 017274       out_x_q <= out_x_d;
 017274       kh_q <= kh_d;
 017274       kw_q <= kw_d;
 017274       ic_q <= ic_d;
        
 017233       if (state_q == IM2COL_IDLE && start) begin
 000041         first_kh_q <= start_kh;
 000041         first_kw_q <= start_kw;
 000041         first_ic_q <= start_ic;
              end
        
 017118       if (state_q == IM2COL_PREP)
 000156         sample_valid_q <= coord_valid;
        
 017118       if (state_q == IM2COL_WAIT && mem_rvalid) begin
 000156         case (lane_sel)
 000041           2'd0: sample_q <= mem_rdata[7:0];
 000041           2'd1: sample_q <= mem_rdata[15:8];
 000037           2'd2: sample_q <= mem_rdata[23:16];
 000037           default: sample_q <= mem_rdata[31:24];
                endcase
~017118       end else if (state_q == IM2COL_PREP && !coord_valid) begin
%000000         sample_q <= '0;
              end
        
 017233       if (state_q == IM2COL_ADVANCE && row_q == 0 && last_k) begin
 000041         next_kh <= step_kh;
 000041         next_kw <= step_kw;
 000041         next_ic <= step_ic;
              end
        
 017233       if (state_q == IM2COL_ADVANCE && last_row && last_k) begin
 000041         next_out_y <= out_y_d;
 000041         next_out_x <= out_x_d;
              end
            end
          end
        
        `ifndef SYNTHESIS
 000156   logic read_outstanding_q;
        
 017308   always @(posedge clk or negedge rst_n) begin
 017274     if (!rst_n) begin
 000034       read_outstanding_q <= 1'b0;
 017274     end else begin
~017274       assert (!(mem_req && !coord_valid));
~017274       assert (!(mem_req && mem_ready && read_outstanding_q));
 017118       if (mem_req && mem_ready)
 000156         read_outstanding_q <= 1'b1;
 017118       if (mem_rvalid)
 000156         read_outstanding_q <= 1'b0;
~017274       assert (!(mem_rvalid && !read_outstanding_q));
~017274       assert (!spm_wr_en || state_q == IM2COL_WRITE);
~017274       assert (!done || state_q == IM2COL_DONE);
~017274       assert (!error || state_q == IM2COL_ERROR);
~017274       assert (!(done && error));
~017274       assert (row_q < 16'(TILE_M) || state_q == IM2COL_IDLE || state_q == IM2COL_DONE);
~017274       assert (k_q < 16'(TILE_K) || state_q == IM2COL_IDLE || state_q == IM2COL_DONE);
            end
          end
        `endif
        
        endmodule
        
