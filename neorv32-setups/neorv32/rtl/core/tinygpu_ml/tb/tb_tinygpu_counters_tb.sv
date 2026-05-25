module tb_tinygpu_counters_tb;

  logic clk;
  logic rst_n;
  logic cmd_start_i;
  logic cmd_done_i;
  logic busy_i;
  logic active_i;
  logic stall_i;
  logic [31:0] cycle_count_o;
  logic [31:0] active_count_o;
  logic [31:0] stall_count_o;
  logic [31:0] cmd_count_o;

  tinygpu_counters dut (
    .clk(clk),
    .rst_n(rst_n),
    .cmd_start_i(cmd_start_i),
    .cmd_done_i(cmd_done_i),
    .busy_i(busy_i),
    .active_i(active_i),
    .stall_i(stall_i),
    .cycle_count_o(cycle_count_o),
    .active_count_o(active_count_o),
    .stall_count_o(stall_count_o),
    .cmd_count_o(cmd_count_o)
  );

  initial clk = 0;
  always #5 clk = ~clk;

  initial begin
    rst_n = 0;
    cmd_start_i = 0;
    cmd_done_i = 0;
    busy_i = 0;
    active_i = 0;
    stall_i = 0;
    repeat (2) @(posedge clk);
    rst_n = 1;

    @(negedge clk);
    cmd_start_i = 1;
    @(posedge clk);
    @(negedge clk);
    cmd_start_i = 0;

    repeat (5) begin
      @(negedge clk);
      busy_i = 1;
      active_i = 1;
      stall_i = 0;
      @(posedge clk);
    end

    repeat (2) begin
      @(negedge clk);
      busy_i = 1;
      active_i = 0;
      stall_i = 1;
      @(posedge clk);
    end

    @(negedge clk);
    busy_i = 0;
    active_i = 0;
    stall_i = 0;
    cmd_done_i = 1;
    @(posedge clk);
    @(negedge clk);
    cmd_done_i = 0;

    if (cycle_count_o !== 32'd7) $fatal(1, "cycle count mismatch: %0d", cycle_count_o);
    if (active_count_o !== 32'd5) $fatal(1, "active count mismatch: %0d", active_count_o);
    if (stall_count_o !== 32'd2) $fatal(1, "stall count mismatch: %0d", stall_count_o);
    if (cmd_count_o !== 32'd1) $fatal(1, "cmd count mismatch: %0d", cmd_count_o);

    $display("tb_tinygpu_counters_tb PASS");
    $finish;
  end

endmodule
