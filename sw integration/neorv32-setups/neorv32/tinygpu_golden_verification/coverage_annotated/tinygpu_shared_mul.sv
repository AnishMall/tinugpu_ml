//      // verilator_coverage annotation
        module tinygpu_shared_mul
          import tinygpu_pkg::*;
        #(
          parameter int A_W   = ACC_W,
          parameter int B_W   = 32,
          parameter int OUT_W = ACC_W
        ) (
 016633   input  logic                       clk,
%000007   input  logic                       rst_n,
%000000   input  logic                       start,
%000004   input  logic signed [A_W-1:0]      a_i,
%000000   input  logic signed [B_W-1:0]      b_i,
%000000   output logic                       busy,
%000000   output logic                       done,
%000000   output logic signed [OUT_W-1:0]    product_o
        );
        
 016639   always_ff @(posedge clk or negedge rst_n) begin
 016605     if (!rst_n) begin
 000034       busy      <= 1'b0;
 000034       done      <= 1'b0;
 000034       product_o <= '0;
 016605     end else begin
 016605       done <= 1'b0;
        
~016605       if (start && !busy) begin
%000000         busy      <= 1'b1;
%000000         product_o <= OUT_W'($signed(a_i) * $signed(b_i));
~016605       end else if (busy) begin
%000000         busy <= 1'b0;
%000000         done <= 1'b1;
              end
            end
          end
        
        endmodule
        
