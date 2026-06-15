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

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      busy      <= 1'b0;
      done      <= 1'b0;
      product_o <= '0;
    end else begin
      done <= 1'b0;

      if (start && !busy) begin
        busy      <= 1'b1;
        product_o <= OUT_W'($signed(a_i) * $signed(b_i));
      end else if (busy) begin
        busy <= 1'b0;
        done <= 1'b1;
      end
    end
  end

endmodule
