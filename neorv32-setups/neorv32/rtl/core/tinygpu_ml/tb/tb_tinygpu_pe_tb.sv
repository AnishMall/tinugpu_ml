module tb_tinygpu_pe_tb;

  logic clk;
  logic rst_n;
  logic clear_acc;
  logic mac_en;
  logic signed [7:0] a_i;
  logic signed [7:0] b_i;
  logic signed [31:0] acc_o;

  tinygpu_pe dut (
    .clk       (clk),
    .rst_n     (rst_n),
    .clear_acc (clear_acc),
    .mac_en    (mac_en),
    .a_i       (a_i),
    .b_i       (b_i),
    .acc_o     (acc_o)
  );

  initial clk = 1'b0;
  always #5 clk = ~clk;

  initial begin
    rst_n = 1'b0;
    clear_acc = 1'b0;
    mac_en = 1'b0;
    a_i = '0;
    b_i = '0;

    repeat (2) @(posedge clk);
    rst_n = 1'b1;

    @(negedge clk);
    a_i = 8'sd3;
    b_i = 8'sd4;
    mac_en = 1'b1;
    @(posedge clk);
    @(negedge clk);
    mac_en = 1'b0;
    if (acc_o !== 32'sd12)
      $fatal(1, "PE smoke failed after first MAC: expected 12 got %0d", acc_o);

    @(negedge clk);
    a_i = -8'sd2;
    b_i = 8'sd5;
    mac_en = 1'b1;
    @(posedge clk);
    @(negedge clk);
    mac_en = 1'b0;
    if (acc_o !== 32'sd2)
      $fatal(1, "PE smoke failed after accumulation: expected 2 got %0d", acc_o);

    @(negedge clk);
    clear_acc = 1'b1;
    @(posedge clk);
    @(negedge clk);
    clear_acc = 1'b0;
    if (acc_o !== 32'sd0)
      $fatal(1, "PE smoke failed after clear: expected 0 got %0d", acc_o);

    $display("tb_tinygpu_pe_tb PASS");
    $finish;
  end

endmodule
