module tb_tinygpu_regs_branch_tb;
  import tinygpu_pkg::*;

  localparam logic [31:0] REG_CTRL        = 32'h00;
  localparam logic [31:0] REG_STATUS      = 32'h04;
  localparam logic [31:0] REG_CMD_ADDR    = 32'h08;
  localparam logic [31:0] REG_DIRECT_OP   = 32'h0c;
  localparam logic [31:0] REG_SRC0_ADDR   = 32'h10;
  localparam logic [31:0] REG_SRC1_ADDR   = 32'h14;
  localparam logic [31:0] REG_BIAS_ADDR   = 32'h18;
  localparam logic [31:0] REG_DST_ADDR    = 32'h1c;
  localparam logic [31:0] REG_DIM_M       = 32'h20;
  localparam logic [31:0] REG_DIM_N       = 32'h24;
  localparam logic [31:0] REG_DIM_K       = 32'h28;
  localparam logic [31:0] REG_STRIDE0     = 32'h2c;
  localparam logic [31:0] REG_STRIDE1     = 32'h30;
  localparam logic [31:0] REG_STRIDE_DST  = 32'h34;
  localparam logic [31:0] REG_FLAGS       = 32'h38;
  localparam logic [31:0] REG_SCALE       = 32'h3c;
  localparam logic [31:0] REG_SHIFT_ZP    = 32'h40;
  localparam logic [31:0] REG_CYCLE_COUNT = 32'h44;
  localparam logic [31:0] REG_ACTIVE_CNT  = 32'h48;
  localparam logic [31:0] REG_STALL_CNT   = 32'h4c;
  localparam logic [31:0] REG_CMD_COUNT   = 32'h50;
  localparam logic [31:0] REG_IRQ_STATUS  = 32'h54;
  localparam logic [31:0] REG_CONV_IN_HW  = 32'h58;
  localparam logic [31:0] REG_CONV_CHAN   = 32'h5c;
  localparam logic [31:0] REG_CONV_CFG    = 32'h60;
  localparam logic [31:0] REG_CAPS        = 32'h64;

  logic        clk;
  logic        rst_n;
  logic        mmio_valid;
  logic        mmio_we;
  logic [31:0] mmio_addr;
  logic [31:0] mmio_wdata;
  logic [3:0]  mmio_wstrb;
  logic [31:0] mmio_rdata;
  logic        mmio_ready;

  logic        cmd_busy_i;
  logic        cmd_done_i;
  logic        illegal_opcode_i;
  logic        shape_error_i;
  logic        memory_error_i;
  logic        unsupported_fmt_i;
  logic [31:0] cycle_count_i;
  logic [31:0] active_count_i;
  logic [31:0] stall_count_i;
  logic [31:0] cmd_count_i;

  logic        start_pulse_o;
  logic        start_direct_mode_o;
  logic        soft_reset_o;
  logic        irq_enable_o;
  logic        direct_mode_o;
  logic        irq_pending_o;
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
    .clk(clk),
    .rst_n(rst_n),
    .mmio_valid(mmio_valid),
    .mmio_we(mmio_we),
    .mmio_addr(mmio_addr),
    .mmio_wdata(mmio_wdata),
    .mmio_wstrb(mmio_wstrb),
    .mmio_rdata(mmio_rdata),
    .mmio_ready(mmio_ready),
    .cmd_busy_i(cmd_busy_i),
    .cmd_done_i(cmd_done_i),
    .illegal_opcode_i(illegal_opcode_i),
    .shape_error_i(shape_error_i),
    .memory_error_i(memory_error_i),
    .unsupported_fmt_i(unsupported_fmt_i),
    .cycle_count_i(cycle_count_i),
    .active_count_i(active_count_i),
    .stall_count_i(stall_count_i),
    .cmd_count_i(cmd_count_i),
    .start_pulse_o(start_pulse_o),
    .start_direct_mode_o(start_direct_mode_o),
    .soft_reset_o(soft_reset_o),
    .irq_enable_o(irq_enable_o),
    .direct_mode_o(direct_mode_o),
    .irq_pending_o(irq_pending_o),
    .cmd_addr_o(cmd_addr_o),
    .opcode_o(opcode_o),
    .src0_addr_o(src0_addr_o),
    .src1_addr_o(src1_addr_o),
    .bias_addr_o(bias_addr_o),
    .dst_addr_o(dst_addr_o),
    .dim_m_o(dim_m_o),
    .dim_n_o(dim_n_o),
    .dim_k_o(dim_k_o),
    .stride0_o(stride0_o),
    .stride1_o(stride1_o),
    .stride_dst_o(stride_dst_o),
    .flags_o(flags_o),
    .scale_o(scale_o),
    .shift_o(shift_o),
    .zero_point_o(zero_point_o),
    .conv_in_hw_o(conv_in_hw_o),
    .conv_channels_o(conv_channels_o),
    .conv_cfg_o(conv_cfg_o)
  );

  always #5 clk = ~clk;

  task automatic wr(input logic [31:0] addr, input logic [31:0] data, input logic [3:0] strb);
    begin
      @(negedge clk);
      mmio_valid = 1'b1;
      mmio_we    = 1'b1;
      mmio_addr  = addr;
      mmio_wdata = data;
      mmio_wstrb = strb;
      @(posedge clk);
      #1;
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
      mmio_wdata = '0;
      mmio_wstrb = '0;
      #1;
      data = mmio_rdata;
      @(negedge clk);
      mmio_valid = 1'b0;
      mmio_addr  = '0;
    end
  endtask

  task automatic expect_read(input logic [31:0] addr, input logic [31:0] exp, input string name);
    logic [31:0] got;
    begin
      rd(addr, got);
      if (got !== exp)
        $fatal(1, "%s read mismatch exp=%h got=%h", name, exp, got);
    end
  endtask

  initial begin
    logic [31:0] got;

    clk = 1'b0;
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
    cycle_count_i = 32'h1122_3344;
    active_count_i = 32'h5566_7788;
    stall_count_i = 32'h99aa_bbcc;
    cmd_count_i = 32'h0000_0042;

    repeat (3) @(posedge clk);
    rst_n = 1'b1;
    repeat (2) @(posedge clk);

    if (!mmio_ready)
      $fatal(1, "MMIO ready should be tied high");

    wr(REG_CMD_ADDR, 32'h1234_5678, 4'b1111);
    wr(REG_CMD_ADDR, 32'haaaa_bbbb, 4'b0101);
    expect_read(REG_CMD_ADDR, 32'h12aa_56bb, "CMD_ADDR byte strobes");

    wr(REG_DIRECT_OP, {24'h0, OP_CONV2D}, 4'b0001);
    expect_read(REG_DIRECT_OP, {24'h0, OP_CONV2D}, "DIRECT_OP");

    wr(REG_SRC0_ADDR, 32'h0000_1001, 4'b1111);
    wr(REG_SRC1_ADDR, 32'h0000_2002, 4'b1111);
    wr(REG_BIAS_ADDR, 32'h0000_3003, 4'b1111);
    wr(REG_DST_ADDR,  32'h0000_4004, 4'b1111);
    expect_read(REG_SRC0_ADDR, 32'h0000_1001, "SRC0");
    expect_read(REG_SRC1_ADDR, 32'h0000_2002, "SRC1");
    expect_read(REG_BIAS_ADDR, 32'h0000_3003, "BIAS");
    expect_read(REG_DST_ADDR,  32'h0000_4004, "DST");

    wr(REG_DIM_M, 32'h0000_00ff, 4'b0001);
    wr(REG_DIM_M, 32'h0000_5500, 4'b0010);
    wr(REG_DIM_N, 32'h0000_0004, 4'b0011);
    wr(REG_DIM_K, 32'h0000_0020, 4'b0011);
    wr(REG_STRIDE0, 32'h0000_0010, 4'b0011);
    wr(REG_STRIDE1, 32'h0000_0020, 4'b0011);
    wr(REG_STRIDE_DST, 32'h0000_0030, 4'b0011);
    expect_read(REG_DIM_M, 32'h0000_55ff, "DIM_M strobes");
    expect_read(REG_DIM_N, 32'h0000_0004, "DIM_N");
    expect_read(REG_DIM_K, 32'h0000_0020, "DIM_K");
    expect_read(REG_STRIDE0, 32'h0000_0010, "STRIDE0");
    expect_read(REG_STRIDE1, 32'h0000_0020, "STRIDE1");
    expect_read(REG_STRIDE_DST, 32'h0000_0030, "STRIDE_DST");

    wr(REG_FLAGS, 32'h0000_00ff, 4'b1111);
    wr(REG_SCALE, 32'h0000_0007, 4'b1111);
    wr(REG_SHIFT_ZP, 32'hfffe_0080, 4'b1111);
    expect_read(REG_FLAGS, 32'h0000_00ff, "FLAGS");
    expect_read(REG_SCALE, 32'h0000_0007, "SCALE");
    expect_read(REG_SHIFT_ZP, 32'hfffe_0080, "SHIFT_ZP");

    wr(REG_CONV_IN_HW, 32'h0005_0006, 4'b1111);
    wr(REG_CONV_CHAN, 32'h0007_0008, 4'b1111);
    wr(REG_CONV_CFG, 32'h0000_1234, 4'b1111);
    expect_read(REG_CONV_IN_HW, 32'h0005_0006, "CONV_IN_HW");
    expect_read(REG_CONV_CHAN, 32'h0007_0008, "CONV_CHAN");
    expect_read(REG_CONV_CFG, 32'h0000_1234, "CONV_CFG");

    expect_read(REG_CYCLE_COUNT, 32'h1122_3344, "CYCLE_COUNT");
    expect_read(REG_ACTIVE_CNT, 32'h5566_7788, "ACTIVE_CNT");
    expect_read(REG_STALL_CNT, 32'h99aa_bbcc, "STALL_CNT");
    expect_read(REG_CMD_COUNT, 32'h0000_0042, "CMD_COUNT");

    wr(REG_CAPS, 32'hffff_ffff, 4'b1111);
    rd(REG_CAPS, got);
    if (got[7:4] !== TILE_N[3:0] || got[3:0] !== TILE_M[3:0])
      $fatal(1, "CAPS tile dimensions wrong: %h", got);

    wr(REG_CYCLE_COUNT, 32'hdead_beef, 4'b1111);
    expect_read(REG_CYCLE_COUNT, 32'h1122_3344, "read-only counter write ignored");
    wr(32'h0000_00fc, 32'hffff_ffff, 4'b1111);
    expect_read(32'h0000_00fc, 32'h0000_0000, "reserved read");

    cmd_busy_i = 1'b1;
    illegal_opcode_i = 1'b1;
    shape_error_i = 1'b1;
    memory_error_i = 1'b1;
    unsupported_fmt_i = 1'b1;
    rd(REG_STATUS, got);
    if (got[0] !== 1'b1 || got[2] !== 1'b1 || got[3] !== 1'b1 ||
        got[4] !== 1'b1 || got[5] !== 1'b1 || got[6] !== 1'b0)
      $fatal(1, "STATUS error/busy bits wrong: %h", got);
    cmd_busy_i = 1'b0;
    illegal_opcode_i = 1'b0;
    shape_error_i = 1'b0;
    memory_error_i = 1'b0;
    unsupported_fmt_i = 1'b0;

    cmd_done_i = 1'b1;
    @(posedge clk);
    #1;
    cmd_done_i = 1'b0;
    expect_read(REG_IRQ_STATUS, 32'h0000_0001, "IRQ pending set");
    wr(REG_IRQ_STATUS, 32'h0000_0001, 4'b1111);
    expect_read(REG_IRQ_STATUS, 32'h0000_0000, "IRQ pending clear");

    wr(REG_CTRL, 32'h0000_000d, 4'b0001);
    if (!irq_enable_o || !direct_mode_o || !start_pulse_o || !start_direct_mode_o)
      $fatal(1, "CTRL start/direct/irq branch failed");

    wr(REG_CTRL, 32'h0000_0002, 4'b0001);
    @(posedge clk);
    #1;
    if (cmd_addr_o !== 32'd0 || flags_o !== 32'd0 || conv_cfg_o !== 32'd0)
      $fatal(1, "soft reset did not clear registers");

    $display("tb_tinygpu_regs_branch_tb PASS");
    $finish;
  end
endmodule
