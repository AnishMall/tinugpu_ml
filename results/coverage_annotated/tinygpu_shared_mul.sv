//      // verilator_coverage annotation
        module tinygpu_shared_mul
          import tinygpu_pkg::*;
        #(
          parameter int A_W   = ACC_W,
          parameter int B_W   = 32,
          parameter int OUT_W = ACC_W
        ) (
          input  logic                       clk,
          input  logic                       rst_n,
          input  logic                       start,
          input  logic signed [A_W-1:0]      a_i,
          input  logic signed [B_W-1:0]      b_i,
          output logic                       busy,
          output logic                       done,
          output logic signed [OUT_W-1:0]    product_o
        );
        
 1056280   always_ff @(posedge clk or negedge rst_n) begin
~1056276     if (!rst_n) begin
%000004       busy      <= 1'b0;
%000004       done      <= 1'b0;
%000004       product_o <= '0;
 1056276     end else begin
 1056276       done <= 1'b0;
        
~1050801       if (start && !busy) begin
~005475         busy      <= 1'b1;
~005475         product_o <= OUT_W'($signed(a_i) * $signed(b_i));
~1045326       end else if (busy) begin
~005475         busy <= 1'b0;
~005475         done <= 1'b1;
              end
            end
          end
        
        endmodule
        
