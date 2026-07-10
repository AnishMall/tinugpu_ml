module tb_tinygpu_epilogue_branch_tb;

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
  logic mul_start;
  logic signed [ACC_W-1:0] mul_a;
  logic signed [31:0] mul_b;
  logic mul_done;
  logic signed [ACC_W-1:0] mul_product;
  logic out_valid;
  logic [7:0] out_index;
  logic signed [ACC_W-1:0] out_i32;
  logic signed [INT8_W-1:0] out_i8;
  logic signed [ACC_W-1:0] c_out_i32 [0:TILE_M-1][0:TILE_N-1];
  logic signed [INT8_W-1:0] c_out_i8 [0:TILE_M-1][0:TILE_N-1];

  tinygpu_epilogue_shared dut (
    .clk(clk), .rst_n(rst_n), .start(start), .busy(busy), .done(done),
    .flags(flags), .scale(scale), .shift(shift), .zero_point(zero_point),
    .c_in(c_in), .bias(bias), .row_mask(row_mask), .col_mask(col_mask),
    .mul_start(mul_start), .mul_a(mul_a), .mul_b(mul_b),
    .mul_done(mul_done), .mul_product(mul_product),
    .out_valid(out_valid), .out_index(out_index), .out_i32(out_i32), .out_i8(out_i8),
    .c_out_i32(c_out_i32), .c_out_i8(c_out_i8)
  );

  initial clk = 1'b0;
  always #5 clk = ~clk;

  logic mul_start_q;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      mul_start_q <= 1'b0;
      mul_done <= 1'b0;
      mul_product <= '0;
    end else begin
      mul_start_q <= mul_start;
      mul_done <= mul_start | mul_start_q;
      if (mul_start)
        mul_product <= mul_a * mul_b;
    end
  end

  task automatic clear_inputs;
    begin
      flags = '0;
      scale = 32'sd1;
      shift = 16'sd0;
      zero_point = 16'sd0;
      row_mask = '1;
      col_mask = '1;
      for (int r = 0; r < TILE_M; r++) begin
        for (int c = 0; c < TILE_N; c++)
          c_in[r][c] = 32'sd0;
      end
      for (int c = 0; c < TILE_N; c++)
        bias[c] = 32'sd0;
    end
  endtask

  task automatic run_case(input string name);
    int cycles;
    begin
      @(negedge clk);
      start = 1'b1;
      @(negedge clk);
      start = 1'b0;
      cycles = 0;
      while (!done && cycles < 300) begin
        @(posedge clk);
        cycles++;
      end
      if (!done) $fatal(1, "%s timeout", name);
      @(negedge clk);
    end
  endtask

  initial begin
    rst_n = 1'b0;
    start = 1'b0;
    clear_inputs();
    repeat (2) @(posedge clk);
    rst_n = 1'b1;

    // No post-processing: pass-through and INT8 saturation branches.
    clear_inputs();
    c_in[0][0] = 32'sd127;
    c_in[0][1] = 32'sd128;
    c_in[0][2] = -32'sd128;
    c_in[0][3] = -32'sd129;
    run_case("pass-through");
    if (c_out_i32[0][0] !== 32'sd127) $fatal(1, "pass-through i32 mismatch");
    if (c_out_i8[0][0] !== 8'sd127) $fatal(1, "sat pass mismatch");
    if (c_out_i8[0][1] !== 8'sd127) $fatal(1, "sat high mismatch");
    if (c_out_i8[0][2] !== -8'sd128) $fatal(1, "sat min mismatch");
    if (c_out_i8[0][3] !== -8'sd128) $fatal(1, "sat low mismatch");

    // Bias and ReLU: one negative path clamps to zero, one positive passes.
    clear_inputs();
    flags[FLAG_BIAS_EN] = 1'b1;
    flags[FLAG_RELU_EN] = 1'b1;
    c_in[0][0] = -32'sd9;
    c_in[0][1] = 32'sd5;
    bias[0] = 32'sd1;
    bias[1] = 32'sd2;
    run_case("bias_relu");
    if (c_out_i32[0][0] !== 32'sd0) $fatal(1, "relu branch mismatch");
    if (c_out_i32[0][1] !== 32'sd7) $fatal(1, "bias branch mismatch");

    // Clamp-only: exercise low, high, and pass-through clamp branches.
    clear_inputs();
    flags[FLAG_CLAMP_EN] = 1'b1;
    c_in[0][0] = -32'sd200;
    c_in[0][1] = 32'sd200;
    c_in[0][2] = 32'sd33;
    run_case("clamp");
    if (c_out_i32[0][0] !== -32'sd128) $fatal(1, "clamp low mismatch");
    if (c_out_i32[0][1] !== 32'sd127) $fatal(1, "clamp high mismatch");
    if (c_out_i32[0][2] !== 32'sd33) $fatal(1, "clamp pass mismatch");

    // Requant positive and negative shift plus zero point.
    clear_inputs();
    flags[FLAG_REQUANT_EN] = 1'b1;
    c_in[0][0] = 32'sd20;
    scale = 32'sd3;
    shift = 16'sd2;
    zero_point = 16'sd5;
    run_case("requant_pos_shift");
    if (c_out_i8[0][0] !== 8'sd20) $fatal(1, "positive shift mismatch");

    clear_inputs();
    flags[FLAG_REQUANT_EN] = 1'b1;
    c_in[0][0] = 32'sd3;
    scale = 32'sd2;
    shift = -16'sd1;
    zero_point = 16'sd1;
    run_case("requant_neg_shift");
    if (c_out_i8[0][0] !== 8'sd13) $fatal(1, "negative shift mismatch");

    // Masked invalid elements should become zero.
    clear_inputs();
    row_mask = 4'b0001;
    col_mask = 4'b0001;
    c_in[1][1] = 32'sd77;
    run_case("masked");
    if (c_out_i32[1][1] !== 32'sd0) $fatal(1, "masked element mismatch");

    $display("tb_tinygpu_epilogue_branch_tb PASS");
    $finish;
  end

endmodule
