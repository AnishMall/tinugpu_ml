module tb_tinygpu_array4x4_tb;

  import tinygpu_pkg::*;

  logic clk;
  logic rst_n;
  logic clear_acc;
  logic mac_en;
  logic signed [INT8_W-1:0] a_vec [0:TILE_M-1];
  logic signed [INT8_W-1:0] b_vec [0:TILE_N-1];
  logic [TILE_M-1:0] row_mask;
  logic [TILE_N-1:0] col_mask;
  logic signed [ACC_W-1:0] c_tile [0:TILE_M-1][0:TILE_N-1];

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

  task automatic check_products(input bit expect_masked);
    int r;
    int c;
    logic signed [ACC_W-1:0] expected;
    begin
      for (r = 0; r < TILE_M; r++) begin
        for (c = 0; c < TILE_N; c++) begin
          expected = a_vec[r] * b_vec[c];
          if (expect_masked && (!row_mask[r] || !col_mask[c]))
            expected = '0;
          if (c_tile[r][c] !== expected) begin
            $fatal(1, "Array check failed at (%0d,%0d): got %0d expected %0d",
              r, c, c_tile[r][c], expected);
          end
        end
      end
    end
  endtask

  initial begin
    rst_n = 1'b0;
    clear_acc = 1'b0;
    mac_en = 1'b0;
    row_mask = '1;
    col_mask = '1;

    for (int r = 0; r < TILE_M; r++) begin
      a_vec[r] = r + 1;
    end
    for (int c = 0; c < TILE_N; c++) begin
      b_vec[c] = c + 5;
    end

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

    check_products(1'b0);

    @(negedge clk);
    clear_acc = 1'b1;
    row_mask = '0;
    col_mask = '0;
    row_mask[0] = 1'b1;
    col_mask[0] = 1'b1;
    @(posedge clk);
    @(negedge clk);
    clear_acc = 1'b0;
    mac_en = 1'b1;
    @(posedge clk);
    @(negedge clk);
    mac_en = 1'b0;

    check_products(1'b1);

    $display("tb_tinygpu_array4x4_tb PASS");
    $finish;
  end

endmodule
