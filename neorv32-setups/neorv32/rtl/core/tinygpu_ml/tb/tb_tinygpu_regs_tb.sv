module tb_tinygpu_regs_tb;

  logic clk;
  logic rst_n;
  logic mmio_valid;
  logic mmio_we;
  logic [31:0] mmio_addr;
  logic [31:0] mmio_wdata;
  logic [3:0]  mmio_wstrb;
  logic [31:0] mmio_rdata;
  logic mmio_ready;

  logic cmd_busy_i;
  logic cmd_done_i;
  logic illegal_opcode_i;
  logic shape_error_i;
  logic memory_error_i;
  logic unsupported_fmt_i;
  logic [31:0] cycle_count_i;
  logic [31:0] active_count_i;
  logic [31:0] stall_count_i;
  logic [31:0] cmd_count_i;
  logic start_pulse_o;
  logic soft_reset_o;
  logic irq_enable_o;
  logic direct_mode_o;
  logic irq_pending_o;
  logic [31:0] cmd_addr_o;
  logic [7:0]  opcode_o;
  logic [31:0] src0_addr_o;
  logic [31:0] src1_addr_o;
  logic [31:0] bias_addr_o;
  logic [31:0] dst_addr_o;
  logic [15:0] dim_m_o;
  logic [15:0] dim_n_o;
  logic [15:0] dim_k_o;
  logic [15:0] stride0_o;
  logic [15:0] stride1_o;
  logic [15:0] stride_dst_o;
  logic [31:0] flags_o;
  logic [31:0] scale_o;
  logic [15:0] shift_o;
  logic [15:0] zero_point_o;

  tinygpu_regs dut (
    .clk(clk), .rst_n(rst_n),
    .mmio_valid(mmio_valid), .mmio_we(mmio_we), .mmio_addr(mmio_addr), .mmio_wdata(mmio_wdata), .mmio_wstrb(mmio_wstrb),
    .mmio_rdata(mmio_rdata), .mmio_ready(mmio_ready),
    .cmd_busy_i(cmd_busy_i), .cmd_done_i(cmd_done_i),
    .illegal_opcode_i(illegal_opcode_i), .shape_error_i(shape_error_i), .memory_error_i(memory_error_i), .unsupported_fmt_i(unsupported_fmt_i),
    .cycle_count_i(cycle_count_i), .active_count_i(active_count_i), .stall_count_i(stall_count_i), .cmd_count_i(cmd_count_i),
    .start_pulse_o(start_pulse_o), .soft_reset_o(soft_reset_o), .irq_enable_o(irq_enable_o), .direct_mode_o(direct_mode_o), .irq_pending_o(irq_pending_o),
    .cmd_addr_o(cmd_addr_o), .opcode_o(opcode_o), .src0_addr_o(src0_addr_o), .src1_addr_o(src1_addr_o), .bias_addr_o(bias_addr_o), .dst_addr_o(dst_addr_o),
    .dim_m_o(dim_m_o), .dim_n_o(dim_n_o), .dim_k_o(dim_k_o), .stride0_o(stride0_o), .stride1_o(stride1_o), .stride_dst_o(stride_dst_o),
    .flags_o(flags_o), .scale_o(scale_o), .shift_o(shift_o), .zero_point_o(zero_point_o)
  );

  initial clk = 0;
  always #5 clk = ~clk;

  task automatic wr(input [31:0] addr, input [31:0] data);
    begin
      @(negedge clk);
      mmio_valid = 1'b1;
      mmio_we    = 1'b1;
      mmio_addr  = addr;
      mmio_wdata = data;
      mmio_wstrb = 4'hf;
      @(posedge clk);
      @(negedge clk);
      mmio_valid = 1'b0;
      mmio_we    = 1'b0;
    end
  endtask

  initial begin
    rst_n = 0;
    mmio_valid = 0;
    mmio_we = 0;
    mmio_addr = 0;
    mmio_wdata = 0;
    mmio_wstrb = 0;
    cmd_busy_i = 0;
    cmd_done_i = 0;
    illegal_opcode_i = 0;
    shape_error_i = 0;
    memory_error_i = 0;
    unsupported_fmt_i = 0;
    cycle_count_i = 32'd10;
    active_count_i = 32'd7;
    stall_count_i = 32'd3;
    cmd_count_i = 32'd1;
    repeat (2) @(posedge clk);
    rst_n = 1;

    wr(32'h0c, 32'h0000_0001);
    if (opcode_o !== 8'h01) $fatal(1, "opcode write failed");

    wr(32'h10, 32'h1234_5678);
    if (src0_addr_o !== 32'h1234_5678) $fatal(1, "src0 write failed");

    wr(32'h00, 32'h0000_000c);
    if (!irq_enable_o || !direct_mode_o) $fatal(1, "ctrl bits failed");

    wr(32'h00, 32'h0000_0001);
    if (!start_pulse_o) $fatal(1, "start pulse missing");

    @(negedge clk);
    cmd_done_i = 1'b1;
    @(posedge clk);
    @(negedge clk);
    cmd_done_i = 1'b0;
    if (!irq_pending_o) $fatal(1, "irq pending not set");

    mmio_addr = 32'h04;
    #1;
    if (!mmio_rdata[1]) $fatal(1, "done sticky missing from status");

    wr(32'h54, 32'h0000_0001);
    if (irq_pending_o) $fatal(1, "irq pending clear failed");

    $display("tb_tinygpu_regs_tb PASS");
    $finish;
  end

endmodule
