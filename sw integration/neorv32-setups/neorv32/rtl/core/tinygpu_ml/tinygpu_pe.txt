module tinygpu_pe 
import tinygpu_pkg::*; 
(
  input  logic                     clk,
  input  logic                     rst_n,

  input  logic                     clear_acc,
  input  logic                     mac_en,
  input  logic signed [INT8_W-1:0] a_i,
  input  logic signed [INT8_W-1:0] b_i,

  output logic signed [ACC_W-1:0]  acc_o
);

  logic signed [2*INT8_W-1:0] product;

  assign product = a_i * b_i;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n)
      acc_o <= '0;
    else if (clear_acc)
      acc_o <= '0;
    else if (mac_en)
      acc_o <= acc_o + $signed(product);
  end

endmodule
