module tb_tinygpu_epilogue_tb;

  import tinygpu_pkg::*;

  logic clk;
  logic rst_n;
  logic start;
  logic busy;
  logic done;
  logic [31:0] flags;
  logic signed [31:0] scale;
  logic signed [15:0] shift;
  logic signed [15:0] zero_point;
  logic signed [ACC_W-1:0] c_in [0:TILE_M-1][0:TILE_N-1];
  logic signed [ACC_W-1:0] bias [0:TILE_N-1];
  logic [TILE_M-1:0] row_mask;
  logic [TILE_N-1:0] col_mask;
  logic signed [ACC_W-1:0] c_out_i32 [0:TILE_M-1][0:TILE_N-1];
  logic signed [INT8_W-1:0] c_out_i8 [0:TILE_M-1][0:TILE_N-1];

  tinygpu_epilogue dut (
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
    .c_out_i32  (c_out_i32),
    .c_out_i8   (c_out_i8)
  );

  initial clk = 1'b0;
  always #5 clk = ~clk;

  task automatic wait_done(input int max_cycles);
    int cycles;
    begin
      cycles = 0;
      while (!done && cycles < max_cycles) begin
        @(posedge clk);
        cycles++;
      end
      if (!done)
        $fatal(1, "Epilogue timeout after %0d cycles", max_cycles);
      @(negedge clk);
    end
  endtask

  initial begin
    rst_n = 1'b0;
    start = 1'b0;
    flags = '0;
    scale = 32'sd1;
    shift = 16'sd0;
    zero_point = 16'sd0;
    row_mask = '0;
    col_mask = '0;

    for (int r = 0; r < TILE_M; r++) begin
      for (int c = 0; c < TILE_N; c++) begin
        c_in[r][c] = '0;
      end
    end
    for (int c = 0; c < TILE_N; c++) begin
      bias[c] = '0;
    end

    repeat (2) @(posedge clk);
    rst_n = 1'b1;

    row_mask = 4'b0011;
    col_mask = 4'b0011;

    c_in[0][0] = 32'sd19;
    c_in[0][1] = -32'sd22;
    c_in[1][0] = 32'sd43;
    c_in[1][1] = -32'sd50;
    bias[0]    = 32'sd1;
    bias[1]    = 32'sd2;

    flags[FLAG_BIAS_EN]    = 1'b1;
    flags[FLAG_RELU_EN]    = 1'b1;
    flags[FLAG_REQUANT_EN] = 1'b1;
    scale                  = 32'sd2;
    shift                  = 16'sd1;
    zero_point             = 16'sd3;

    @(negedge clk);
    start = 1'b1;
    @(posedge clk);
    @(negedge clk);
    start = 1'b0;

    wait_done(300);

    if (c_out_i32[0][0] !== 32'sd20) $fatal(1, "c_out_i32[0][0]=%0d", c_out_i32[0][0]);
    if (c_out_i32[0][1] !== 32'sd0)  $fatal(1, "c_out_i32[0][1]=%0d", c_out_i32[0][1]);
    if (c_out_i32[1][0] !== 32'sd44) $fatal(1, "c_out_i32[1][0]=%0d", c_out_i32[1][0]);
    if (c_out_i32[1][1] !== 32'sd0)  $fatal(1, "c_out_i32[1][1]=%0d", c_out_i32[1][1]);

    if (c_out_i8[0][0] !== 8'sd23) $fatal(1, "c_out_i8[0][0]=%0d", c_out_i8[0][0]);
    if (c_out_i8[0][1] !== 8'sd3)  $fatal(1, "c_out_i8[0][1]=%0d", c_out_i8[0][1]);
    if (c_out_i8[1][0] !== 8'sd47) $fatal(1, "c_out_i8[1][0]=%0d", c_out_i8[1][0]);
    if (c_out_i8[1][1] !== 8'sd3)  $fatal(1, "c_out_i8[1][1]=%0d", c_out_i8[1][1]);

    $display("tb_tinygpu_epilogue_tb PASS");
    $finish;
  end

endmodule
