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

  output logic                           out_valid,
  output logic [7:0]                     out_index,
  output logic signed [ACC_W-1:0]        out_i32,
  output logic signed [INT8_W-1:0]       out_i8,

  output logic signed [ACC_W-1:0]        c_out_i32 [0:TILE_M-1][0:TILE_N-1],
  output logic signed [INT8_W-1:0]       c_out_i8  [0:TILE_M-1][0:TILE_N-1]
);

  logic                    mul_start;
  logic                    mul_busy;
  logic signed [ACC_W-1:0] mul_a;
  logic signed [31:0]      mul_b;
  logic                    mul_done;
  logic signed [ACC_W-1:0] mul_product;

  tinygpu_epilogue_shared u_epilogue_shared (
    .clk        (clk),
    .rst_n      (rst_n),
    .start      (start),
    .busy       (busy),
    .done       (done),
    .flags      (flags),
    .scale      (scale),
    .shift      (shift),
    .zero_point (zero_point),
    .c_in       (c_in),
    .bias       (bias),
    .row_mask   (row_mask),
    .col_mask   (col_mask),
    .mul_start  (mul_start),
    .mul_a      (mul_a),
    .mul_b      (mul_b),
    .mul_done   (mul_done),
    .mul_product(mul_product),
    .out_valid  (out_valid),
    .out_index  (out_index),
    .out_i32    (out_i32),
    .out_i8     (out_i8),
    .c_out_i32  (c_out_i32),
    .c_out_i8   (c_out_i8)
  );

  tinygpu_shared_mul #(
    .A_W   (ACC_W),
    .B_W   (32),
    .OUT_W (ACC_W)
  ) u_shared_mul (
    .clk       (clk),
    .rst_n     (rst_n),
    .start     (mul_start && !mul_busy),
    .a_i       (mul_a),
    .b_i       (mul_b),
    .busy      (mul_busy),
    .done      (mul_done),
    .product_o (mul_product)
  );

endmodule
