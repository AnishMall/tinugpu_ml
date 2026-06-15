module tb_tinygpu_regs_extended_tb;

  localparam logic [31:0] REG_CTRL         = 32'h00;
  localparam logic [31:0] REG_STATUS       = 32'h04;
  localparam logic [31:0] REG_CMD_ADDR     = 32'h08;
  localparam logic [31:0] REG_DIRECT_OP    = 32'h0c;
  localparam logic [31:0] REG_SCALE        = 32'h3c;
  localparam logic [31:0] REG_SHIFT_ZP     = 32'h40;
  localparam logic [31:0] REG_CYCLE_COUNT  = 32'h44;
  localparam logic [31:0] REG_ACTIVE_CNT   = 32'h48;
  localparam logic [31:0] REG_STALL_CNT    = 32'h4c;
  localparam logic [31:0] REG_CMD_COUNT    = 32'h50;
  localparam logic [31:0] REG_IRQ_STATUS   = 32'h54;
  localparam logic [31:0] REG_CONV_IN_HW   = 32'h58;
  localparam logic [31:0] REG_CONV_CHAN    = 32'h5c;
  localparam logic [31:0] REG_CONV_CFG     = 32'h60;
  localparam logic [31:0] REG_CAPS         = 32'h64;

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
  logic start_direct_mode_o;
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
  logic [31:0] conv_in_hw_o;
  logic [31:0] conv_channels_o;
  logic [31:0] conv_cfg_o;

  tinygpu_regs dut (
    .clk(clk), .rst_n(rst_n),
    .mmio_valid(mmio_valid), .mmio_we(mmio_we), .mmio_addr(mmio_addr), .mmio_wdata(mmio_wdata), .mmio_wstrb(mmio_wstrb),
    .mmio_rdata(mmio_rdata), .mmio_ready(mmio_ready),
    .cmd_busy_i(cmd_busy_i), .cmd_done_i(cmd_done_i),
    .illegal_opcode_i(illegal_opcode_i), .shape_error_i(shape_error_i), .memory_error_i(memory_error_i), .unsupported_fmt_i(unsupported_fmt_i),
    .cycle_count_i(cycle_count_i), .active_count_i(active_count_i), .stall_count_i(stall_count_i), .cmd_count_i(cmd_count_i),
    .start_pulse_o(start_pulse_o), .start_direct_mode_o(start_direct_mode_o), .soft_reset_o(soft_reset_o),
    .irq_enable_o(irq_enable_o), .direct_mode_o(direct_mode_o), .irq_pending_o(irq_pending_o),
    .cmd_addr_o(cmd_addr_o), .opcode_o(opcode_o), .src0_addr_o(src0_addr_o), .src1_addr_o(src1_addr_o),
    .bias_addr_o(bias_addr_o), .dst_addr_o(dst_addr_o), .dim_m_o(dim_m_o), .dim_n_o(dim_n_o), .dim_k_o(dim_k_o),
    .stride0_o(stride0_o), .stride1_o(stride1_o), .stride_dst_o(stride_dst_o),
    .flags_o(flags_o), .scale_o(scale_o), .shift_o(shift_o), .zero_point_o(zero_point_o),
    .conv_in_hw_o(conv_in_hw_o), .conv_channels_o(conv_channels_o), .conv_cfg_o(conv_cfg_o)
  );

  initial clk = 1'b0;
  always #5 clk = ~clk;

  task automatic wr(input logic [31:0] addr, input logic [31:0] data, input logic [3:0] strb = 4'hf);
    begin
      @(negedge clk);
      mmio_valid = 1'b1;
      mmio_we    = 1'b1;
      mmio_addr  = addr;
      mmio_wdata = data;
      mmio_wstrb = strb;
      @(posedge clk);
      @(negedge clk);
      mmio_valid = 1'b0;
      mmio_we    = 1'b0;
      mmio_addr  = '0;
      mmio_wdata = '0;
      mmio_wstrb = '0;
    end
  endtask

  task automatic rd(input logic [31:0] addr, output logic [31:0] data);
    begin
      @(negedge clk);
      mmio_valid = 1'b1;
      mmio_we    = 1'b0;
      mmio_addr  = addr;
      #1;
      data = mmio_rdata;
      @(negedge clk);
      mmio_valid = 1'b0;
      mmio_addr  = '0;
    end
  endtask

  logic [31:0] rd_word;

  initial begin
    rst_n = 1'b0;
    mmio_valid = 1'b0;
    mmio_we = 1'b0;
    mmio_addr = '0;
    mmio_wdata = '0;
    mmio_wstrb = '0;
    cmd_busy_i = 1'b0;
    cmd_done_i = 1'b0;
    illegal_opcode_i = 1'b0;
    shape_error_i = 1'b0;
    memory_error_i = 1'b0;
    unsupported_fmt_i = 1'b0;
    cycle_count_i = 32'd101;
    active_count_i = 32'd55;
    stall_count_i = 32'd46;
    cmd_count_i = 32'd7;

    repeat (2) @(posedge clk);
    rst_n = 1'b1;

    rd(REG_CAPS, rd_word);
    if (rd_word[31:24] !== 8'd1) $fatal(1, "ABI version mismatch: %h", rd_word);
    if (rd_word[23:16] !== 8'h1f) $fatal(1, "feature bits mismatch: %h", rd_word);
    if (rd_word[15:8] !== 8'd16) $fatal(1, "tile K mismatch: %h", rd_word);
    if (rd_word[7:4] !== 4'd4) $fatal(1, "tile N mismatch: %h", rd_word);
    if (rd_word[3:0] !== 4'd4) $fatal(1, "tile M mismatch: %h", rd_word);

    wr(REG_CMD_ADDR, 32'h1234_5678);
    if (cmd_addr_o !== 32'h1234_5678) $fatal(1, "cmd_addr write failed");
    rd(REG_CMD_ADDR, rd_word);
    if (rd_word !== 32'h1234_5678) $fatal(1, "cmd_addr readback failed");

    wr(REG_SCALE, 32'h0102_0304);
    if (scale_o !== 32'h0102_0304) $fatal(1, "scale write failed");
    rd(REG_SCALE, rd_word);
    if (rd_word !== 32'h0102_0304) $fatal(1, "scale readback failed");

    wr(REG_SHIFT_ZP, 32'h0012_fff0);
    if (shift_o !== 16'h0012 || zero_point_o !== 16'hfff0)
      $fatal(1, "shift/zp full write failed");
    wr(REG_SHIFT_ZP, 32'h0000_00aa, 4'b0001);
    if (shift_o !== 16'h0012 || zero_point_o !== 16'hffaa)
      $fatal(1, "shift/zp partial write failed");

    wr(REG_CONV_IN_HW, 32'h0003_0005);
    wr(REG_CONV_CHAN,  32'h0007_0002);
    wr(REG_CONV_CFG,   32'h0011_2133);
    rd(REG_CONV_IN_HW, rd_word);
    if (rd_word !== 32'h0003_0005) $fatal(1, "conv_in_hw readback failed");
    rd(REG_CONV_CHAN, rd_word);
    if (rd_word !== 32'h0007_0002) $fatal(1, "conv_channels readback failed");
    rd(REG_CONV_CFG, rd_word);
    if (rd_word !== 32'h0011_2133) $fatal(1, "conv_cfg readback failed");

    wr(REG_DIRECT_OP, 32'h0000_0007);
    wr(REG_CTRL, 32'h0000_000d);
    if (!start_pulse_o) $fatal(1, "start pulse missing");
    if (!start_direct_mode_o) $fatal(1, "start_direct_mode missing");
    if (!irq_enable_o || !direct_mode_o) $fatal(1, "control bits failed");

    @(negedge clk);
    cmd_done_i = 1'b1;
    @(posedge clk);
    @(negedge clk);
    cmd_done_i = 1'b0;

    rd(REG_STATUS, rd_word);
    if (!rd_word[1]) $fatal(1, "done sticky not visible");
    rd(REG_IRQ_STATUS, rd_word);
    if (!rd_word[0] || !irq_pending_o) $fatal(1, "irq pending not set");
    wr(REG_IRQ_STATUS, 32'h1);
    rd(REG_IRQ_STATUS, rd_word);
    if (rd_word[0] || irq_pending_o) $fatal(1, "irq clear failed");

    rd(REG_CYCLE_COUNT, rd_word);
    if (rd_word !== 32'd101) $fatal(1, "cycle count readback failed");
    rd(REG_ACTIVE_CNT, rd_word);
    if (rd_word !== 32'd55) $fatal(1, "active count readback failed");
    rd(REG_STALL_CNT, rd_word);
    if (rd_word !== 32'd46) $fatal(1, "stall count readback failed");
    rd(REG_CMD_COUNT, rd_word);
    if (rd_word !== 32'd7) $fatal(1, "cmd count readback failed");

    wr(REG_CTRL, 32'h0000_0002);
    if (!soft_reset_o) $fatal(1, "soft reset pulse missing");
    if (cmd_addr_o !== 32'd0 || opcode_o !== 8'd0 || scale_o !== 32'd0 ||
        shift_o !== 16'd0 || zero_point_o !== 16'd0 || conv_cfg_o !== 32'd0 ||
        irq_enable_o || direct_mode_o || irq_pending_o)
      $fatal(1, "soft reset did not clear state");

    rd(32'h0000_00fc, rd_word);
    if (rd_word !== 32'd0 || !mmio_ready) $fatal(1, "reserved read behavior failed");

    $display("tb_tinygpu_regs_extended_tb PASS");
    $finish;
  end

endmodule
