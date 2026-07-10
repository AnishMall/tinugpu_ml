//      // verilator_coverage annotation
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
        
 1056281   always_comb begin
 1056281     step_kh = kh_q;
 1056281     step_kw = kw_q;
 1056281     step_ic = ic_q;
~629952     if (ic_q + 16'd1 < input_c) begin
~426329       step_ic = ic_q + 16'd1;
 629952     end else begin
 629952       step_ic = '0;
~430596       if (kw_q + 4'd1 < kernel_w) begin
~199356         step_kw = kw_q + 4'd1;
 430596       end else begin
 430596         step_kw = '0;
 430596         step_kh = kh_q + 4'd1;
              end
            end
          end
        
 1056281   always_comb begin
 1056281     state_d = state_q;
 1056281     row_d = row_q;
 1056281     k_d = k_q;
 1056281     out_y_d = out_y_q;
 1056281     out_x_d = out_x_q;
 1056281     kh_d = kh_q;
 1056281     kw_d = kw_q;
 1056281     ic_d = ic_q;
        
 1056281     busy = 1'b1;
 1056281     done = 1'b0;
 1056281     error = 1'b0;
 1056281     mem_req = 1'b0;
 1056281     mem_addr = aligned_addr;
 1056281     spm_wr_en = 1'b0;
 1056281     spm_addr = 9'((row_q << 4) + k_q);
 1056281     spm_wdata = {24'd0, sample_q};
 1056281     spm_wstrb = 4'b0001;
        
 1056281     case (state_q)
 863471       IM2COL_IDLE: begin
 863471         busy = 1'b0;
~862640         if (start) begin
~000831           row_d = '0;
~000831           k_d = '0;
~000831           out_y_d = tile_out_y;
~000831           out_x_d = tile_out_x;
~000831           kh_d = start_kh;
~000831           kw_d = start_kw;
~000831           ic_d = start_ic;
~000831           if ((active_rows == 0) || (active_rows > 16'(TILE_M)) ||
                      (active_k == 0) || (active_k > 16'(TILE_K)) || (output_w == 0) ||
~000831               (input_c == 0) || (kernel_h == 0) || (kernel_w == 0))
~000018             state_d = IM2COL_ERROR;
                  else
~000831             state_d = IM2COL_PREP;
                end
              end
        
~016670       IM2COL_PREP: begin
~013434         if (coord_valid)
~013434           state_d = IM2COL_ISSUE;
                else
~003236           state_d = IM2COL_WRITE;
              end
        
~014390       IM2COL_ISSUE: begin
~014390         mem_req = 1'b1;
~013434         if (mem_ready)
~013434           state_d = IM2COL_WAIT;
              end
        
~127579       IM2COL_WAIT: begin
~114145         if (mem_rvalid)
~013434           state_d = IM2COL_WRITE;
              end
        
~016670       IM2COL_WRITE: begin
~016670         spm_wr_en = 1'b1;
~674931         if (!sample_valid_q)
~003236           spm_wdata = 32'd0;
~016670         state_d = IM2COL_ADVANCE;
              end
        
~016670       IM2COL_ADVANCE: begin
~013803         if (last_k) begin
~002867           k_d = '0;
~002867           kh_d = first_kh_q;
~002867           kw_d = first_kw_q;
~002867           ic_d = first_ic_q;
~001712           if (out_x_q + 16'd1 < output_w) begin
~001712             out_x_d = out_x_q + 16'd1;
~001155           end else begin
~001155             out_x_d = '0;
~001155             out_y_d = out_y_q + 16'd1;
                  end
        
~002036           if (last_row)
~000831             state_d = IM2COL_DONE;
~002036           else begin
~002036             row_d = row_q + 16'd1;
~002036             state_d = IM2COL_PREP;
                  end
~013803         end else begin
~013803           k_d = k_q + 16'd1;
~013803           kh_d = step_kh;
~013803           kw_d = step_kw;
~013803           ic_d = step_ic;
~013803           state_d = IM2COL_PREP;
                end
              end
        
~000831       IM2COL_DONE: begin
~000831         busy = 1'b0;
~000831         done = 1'b1;
~000831         state_d = IM2COL_IDLE;
              end
        
~000024       default: begin
~000024         busy = 1'b0;
~000024         error = 1'b1;
~000024         state_d = IM2COL_IDLE;
              end
            endcase
          end
        
 1056280   always_ff @(posedge clk or negedge rst_n) begin
~1056276     if (!rst_n) begin
%000004       state_q <= IM2COL_IDLE;
%000004       row_q <= '0;
%000004       k_q <= '0;
%000004       out_y_q <= '0;
%000004       out_x_q <= '0;
%000004       kh_q <= '0;
%000004       kw_q <= '0;
%000004       ic_q <= '0;
%000004       first_kh_q <= '0;
%000004       first_kw_q <= '0;
%000004       first_ic_q <= '0;
%000004       sample_q <= '0;
%000004       sample_valid_q <= 1'b0;
%000004       next_out_y <= '0;
%000004       next_out_x <= '0;
%000004       next_kh <= '0;
%000004       next_kw <= '0;
%000004       next_ic <= '0;
 1056276     end else begin
 1056276       state_q <= state_d;
 1056276       row_q <= row_d;
 1056276       k_q <= k_d;
 1056276       out_y_q <= out_y_d;
 1056276       out_x_q <= out_x_d;
 1056276       kh_q <= kh_d;
 1056276       kw_q <= kw_d;
 1056276       ic_q <= ic_d;
        
~1055445       if (state_q == IM2COL_IDLE && start) begin
~000831         first_kh_q <= start_kh;
~000831         first_kw_q <= start_kw;
~000831         first_ic_q <= start_ic;
              end
        
~1039606       if (state_q == IM2COL_PREP)
~016670         sample_valid_q <= coord_valid;
        
~1042842       if (state_q == IM2COL_WAIT && mem_rvalid) begin
~013434         case (lane_sel)
~003601           2'd0: sample_q <= mem_rdata[7:0];
~003455           2'd1: sample_q <= mem_rdata[15:8];
~003211           2'd2: sample_q <= mem_rdata[23:16];
~003167           default: sample_q <= mem_rdata[31:24];
                endcase
~1039606       end else if (state_q == IM2COL_PREP && !coord_valid) begin
~003236         sample_q <= '0;
              end
        
~1055445       if (state_q == IM2COL_ADVANCE && row_q == 0 && last_k) begin
~000831         next_kh <= step_kh;
~000831         next_kw <= step_kw;
~000831         next_ic <= step_ic;
              end
        
~1055445       if (state_q == IM2COL_ADVANCE && last_row && last_k) begin
~000831         next_out_y <= out_y_d;
~000831         next_out_x <= out_x_d;
              end
            end
          end
        
        `ifndef SYNTHESIS
          logic read_outstanding_q;
        
 1056280   always @(posedge clk or negedge rst_n) begin
~1056276     if (!rst_n) begin
%000004       read_outstanding_q <= 1'b0;
 1056276     end else begin
~1056276       assert (!(mem_req && !coord_valid));
~1056276       assert (!(mem_req && mem_ready && read_outstanding_q));
~1042842       if (mem_req && mem_ready)
~013434         read_outstanding_q <= 1'b1;
~1042842       if (mem_rvalid)
~013434         read_outstanding_q <= 1'b0;
~1056276       assert (!(mem_rvalid && !read_outstanding_q));
~1056276       assert (!spm_wr_en || state_q == IM2COL_WRITE);
~1056276       assert (!done || state_q == IM2COL_DONE);
~1056276       assert (!error || state_q == IM2COL_ERROR);
~1056276       assert (!(done && error));
~1056276       assert (row_q < 16'(TILE_M) || state_q == IM2COL_IDLE || state_q == IM2COL_DONE);
~1056276       assert (k_q < 16'(TILE_K) || state_q == IM2COL_IDLE || state_q == IM2COL_DONE);
            end
          end
        `endif
        
        endmodule
        
