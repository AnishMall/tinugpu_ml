module tb_tinygpu_array4x4_tb;

  logic clk;
  logic rst_n;
  logic clear_acc;
  logic mac_en;
  logic signed [7:0] a_vec [0:3];
  logic signed [7:0] b_vec [0:3];
  logic [3:0] row_mask;
  logic [3:0] col_mask;
  logic signed [31:0] c_tile [0:3][0:3];

  tinygpu_array4x4 dut (
    .clk       (clk),
    .rst_n     (rst_n),
    .clear_acc (clear_acc),
    .mac_en    (mac_en),
    .a_vec     (a_vec),
    .b_vec     (b_vec),
    .row_mask  (row_mask),
    .col_mask  (col_mask),
    .c_tile    (c_tile)
  );

  initial clk = 1'b0;
  always #5 clk = ~clk;

  initial begin
    rst_n = 1'b0;
    clear_acc = 1'b0;
    mac_en = 1'b0;
    row_mask = 4'b1111;
    col_mask = 4'b1111;

    a_vec[0] = 8'sd1;
    a_vec[1] = 8'sd2;
    a_vec[2] = 8'sd3;
    a_vec[3] = 8'sd4;

    b_vec[0] = 8'sd5;
    b_vec[1] = 8'sd6;
    b_vec[2] = 8'sd7;
    b_vec[3] = 8'sd8;

    repeat (2) @(posedge clk);
    rst_n = 1'b1;

    @(negedge clk);
    clear_acc = 1'b1;
    @(posedge clk);
    @(negedge clk);
    clear_acc = 1'b0;
    mac_en = 1'b1;
    @(posedge clk);
    @(negedge clk);
    mac_en = 1'b0;

    if (c_tile[0][0] !== 32'sd5)  $fatal(1, "Array smoke failed c00: %0d", c_tile[0][0]);
    if (c_tile[0][3] !== 32'sd8)  $fatal(1, "Array smoke failed c03: %0d", c_tile[0][3]);
    if (c_tile[3][0] !== 32'sd20) $fatal(1, "Array smoke failed c30: %0d", c_tile[3][0]);
    if (c_tile[3][3] !== 32'sd32) $fatal(1, "Array smoke failed c33: %0d", c_tile[3][3]);

    @(negedge clk);
    clear_acc = 1'b1;
    row_mask = 4'b0011;
    col_mask = 4'b0101;
    @(posedge clk);
    @(negedge clk);
    clear_acc = 1'b0;
    mac_en = 1'b1;
    @(posedge clk);
    @(negedge clk);
    mac_en = 1'b0;

    if (c_tile[0][0] !== 32'sd5)  $fatal(1, "Array mask failed c00: %0d", c_tile[0][0]);
    if (c_tile[1][2] !== 32'sd14) $fatal(1, "Array mask failed c12: %0d", c_tile[1][2]);
    if (c_tile[2][0] !== 32'sd0)  $fatal(1, "Array mask failed c20: %0d", c_tile[2][0]);
    if (c_tile[0][1] !== 32'sd0)  $fatal(1, "Array mask failed c01: %0d", c_tile[0][1]);

    $display("tb_tinygpu_array4x4_tb PASS");
    $finish;
  end

endmodule
