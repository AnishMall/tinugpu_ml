module tb_tinygpu_top_branch_cov_tb;

  localparam logic [31:0] REG_CTRL          = 32'h00;
  localparam logic [31:0] REG_STATUS        = 32'h04;
  localparam logic [31:0] REG_CMD_ADDR      = 32'h08;
  localparam logic [31:0] REG_DIRECT_OP     = 32'h0c;
  localparam logic [31:0] REG_SRC0_ADDR     = 32'h10;
  localparam logic [31:0] REG_SRC1_ADDR     = 32'h14;
  localparam logic [31:0] REG_BIAS_ADDR     = 32'h18;
  localparam logic [31:0] REG_DST_ADDR      = 32'h1c;
  localparam logic [31:0] REG_DIM_M         = 32'h20;
  localparam logic [31:0] REG_DIM_N         = 32'h24;
  localparam logic [31:0] REG_DIM_K         = 32'h28;
  localparam logic [31:0] REG_STRIDE0       = 32'h2c;
  localparam logic [31:0] REG_STRIDE1       = 32'h30;
  localparam logic [31:0] REG_STRIDE_DST    = 32'h34;
  localparam logic [31:0] REG_FLAGS         = 32'h38;
  localparam logic [31:0] REG_SCALE         = 32'h3c;
  localparam logic [31:0] REG_SHIFT_ZP      = 32'h40;
  localparam logic [31:0] REG_IRQ_STATUS    = 32'h54;
  localparam logic [31:0] REG_CONV_IN_HW    = 32'h58;
  localparam logic [31:0] REG_CONV_CHANNELS = 32'h5c;
  localparam logic [31:0] REG_CONV_CFG      = 32'h60;

  localparam logic [31:0] CTRL_START        = 32'h0000_0001;
  localparam logic [31:0] CTRL_IRQ_EN       = 32'h0000_0004;
  localparam logic [31:0] CTRL_DIRECT       = 32'h0000_0008;

  localparam logic [31:0] FLAG_BIAS_EN      = 32'h0000_0001;
  localparam logic [31:0] FLAG_RELU_EN      = 32'h0000_0002;
  localparam logic [31:0] FLAG_REQUANT_EN   = 32'h0000_0008;
  localparam logic [31:0] FLAG_DST_INT8     = 32'h0000_0010;
  localparam logic [31:0] FLAG_DST_INT32    = 32'h0000_0020;
  localparam logic [31:0] FLAG_SIGNED       = 32'h0000_0040;
  localparam logic [31:0] FLAGS_I32_SIGNED  = FLAG_DST_INT32 | FLAG_SIGNED;

  localparam int MEM_BYTES = 32768;
  localparam int A_BASE    = 'h0100;
  localparam int B_BASE    = 'h0900;
  localparam int BIAS_BASE = 'h1100;
  localparam int C_BASE    = 'h1800;
  localparam int IN_BASE   = 'h2000;
  localparam int WT_BASE   = 'h2600;
  localparam int OUT_BASE  = 'h2c00;
  localparam int DESC_BASE = 'h3200;
  localparam int VEC_X_BASE = 'h3800;
  localparam int VEC_Y_BASE = 'h3900;
  localparam int VEC_Z_BASE = 'h3a01;

  logic clk;
  logic rst_n;
  logic        mmio_valid;
  logic        mmio_we;
  logic [31:0] mmio_addr;
  logic [31:0] mmio_wdata;
  logic [3:0]  mmio_wstrb;
  logic [31:0] mmio_rdata;
  logic        mmio_ready;
  logic        mem_req;
  logic        mem_we;
  logic [31:0] mem_addr;
  logic [31:0] mem_wdata;
  logic [3:0]  mem_wstrb;
  logic [31:0] mem_rdata;
  logic        mem_ready;
  logic        mem_rvalid;
  logic        irq;

  logic [7:0]  mem_bytes [0:MEM_BYTES-1];
  logic        read_pending_q;
  logic [31:0] read_addr_q;
  logic [1:0]  read_delay_q;
  logic [1:0]  ready_delay_q;
  logic [31:0] status_word;

  tinygpu_top dut (
    .clk(clk),
    .rst_n(rst_n),
    .mmio_valid(mmio_valid),
    .mmio_we(mmio_we),
    .mmio_addr(mmio_addr),
    .mmio_wdata(mmio_wdata),
    .mmio_wstrb(mmio_wstrb),
    .mmio_rdata(mmio_rdata),
    .mmio_ready(mmio_ready),
    .mem_req(mem_req),
    .mem_we(mem_we),
    .mem_addr(mem_addr),
    .mem_wdata(mem_wdata),
    .mem_wstrb(mem_wstrb),
    .mem_rdata(mem_rdata),
    .mem_ready(mem_ready),
    .mem_rvalid(mem_rvalid),
    .irq(irq)
  );

  initial clk = 1'b0;
  always #5 clk = ~clk;

  assign mem_ready = (ready_delay_q == 0);

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      read_pending_q <= 1'b0;
      read_addr_q    <= '0;
      read_delay_q   <= '0;
      ready_delay_q  <= '0;
      mem_rvalid     <= 1'b0;
      mem_rdata      <= '0;
      for (int i = 0; i < MEM_BYTES; i++) mem_bytes[i] <= '0;
    end else begin
      mem_rvalid <= 1'b0;

      if (read_pending_q) begin
        if (read_delay_q != 0) begin
          read_delay_q <= read_delay_q - 2'd1;
        end else begin
          mem_rvalid <= 1'b1;
          mem_rdata <= {
            mem_bytes[read_addr_q + 3],
            mem_bytes[read_addr_q + 2],
            mem_bytes[read_addr_q + 1],
            mem_bytes[read_addr_q + 0]
          };
          read_pending_q <= 1'b0;
        end
      end

      if (ready_delay_q != 0)
        ready_delay_q <= ready_delay_q - 2'd1;

      if (mem_req && mem_ready) begin
        ready_delay_q <= mem_addr[3:2];
        if (mem_we) begin
          for (int i = 0; i < 4; i++) begin
            if (mem_wstrb[i])
              mem_bytes[mem_addr + i] <= mem_wdata[8*i +: 8];
          end
        end else begin
          read_pending_q <= 1'b1;
          read_addr_q <= mem_addr;
          read_delay_q <= mem_addr[2] ? 2'd2 : 2'd1;
        end
      end
    end
  end

  function automatic logic signed [31:0] read_word(input int unsigned addr);
    read_word = {
      mem_bytes[addr + 3],
      mem_bytes[addr + 2],
      mem_bytes[addr + 1],
      mem_bytes[addr + 0]
    };
  endfunction

  task automatic write_word_mem(input int unsigned addr, input logic [31:0] data);
    begin
      mem_bytes[addr + 0] = data[7:0];
      mem_bytes[addr + 1] = data[15:8];
      mem_bytes[addr + 2] = data[23:16];
      mem_bytes[addr + 3] = data[31:24];
    end
  endtask

  task automatic mmio_wr(input logic [31:0] addr, input logic [31:0] data);
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
      mmio_addr  = '0;
      mmio_wdata = '0;
      mmio_wstrb = '0;
    end
  endtask

  task automatic mmio_rd(input logic [31:0] addr, output logic [31:0] data);
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

  task automatic wait_irq(input int max_cycles);
    int cycles;
    begin
      cycles = 0;
      while (!irq && cycles < max_cycles) begin
        @(posedge clk);
        cycles++;
      end
      if (!irq)
        $fatal(1, "IRQ timeout after %0d cycles", max_cycles);
      @(negedge clk);
    end
  endtask

  task automatic clear_irq;
    begin
      mmio_wr(REG_IRQ_STATUS, 32'h1);
    end
  endtask

  task automatic start_direct_and_check(input int max_cycles);
    begin
      mmio_wr(REG_CTRL, CTRL_IRQ_EN | CTRL_DIRECT);
      mmio_wr(REG_CTRL, CTRL_IRQ_EN | CTRL_DIRECT | CTRL_START);
      repeat (8) @(posedge clk);
      mmio_rd(REG_STATUS, status_word);
      if (!status_word[0])
        $fatal(1, "long direct command did not expose busy status");
      wait_irq(max_cycles);
      mmio_rd(REG_STATUS, status_word);
      if (!status_word[1] || status_word[0])
        $fatal(1, "direct terminal status bad: 0x%08x", status_word);
    end
  endtask

  task automatic start_desc_and_check(input int max_cycles);
    begin
      mmio_wr(REG_CTRL, CTRL_IRQ_EN);
      mmio_wr(REG_CMD_ADDR, DESC_BASE);
      mmio_wr(REG_CTRL, CTRL_IRQ_EN | CTRL_START);
      repeat (8) @(posedge clk);
      mmio_rd(REG_STATUS, status_word);
      if (!status_word[0])
        $fatal(1, "long descriptor command did not expose busy status");
      wait_irq(max_cycles);
      mmio_rd(REG_STATUS, status_word);
      if (!status_word[1] || status_word[0])
        $fatal(1, "descriptor terminal status bad: 0x%08x", status_word);
    end
  endtask

  task automatic write_gemm_descriptor(
    input logic [31:0] flags,
    input int unsigned m,
    input int unsigned n,
    input int unsigned k,
    input int unsigned stride_dst,
    input int signed scale,
    input int signed shift,
    input int signed zero_point
  );
    begin
      write_word_mem(DESC_BASE +  0, 32'h0000_0001);
      write_word_mem(DESC_BASE +  4, flags);
      write_word_mem(DESC_BASE +  8, A_BASE);
      write_word_mem(DESC_BASE + 12, B_BASE);
      write_word_mem(DESC_BASE + 16, BIAS_BASE);
      write_word_mem(DESC_BASE + 20, C_BASE);
      write_word_mem(DESC_BASE + 24, m[31:0]);
      write_word_mem(DESC_BASE + 28, n[31:0]);
      write_word_mem(DESC_BASE + 32, k[31:0]);
      write_word_mem(DESC_BASE + 36, k[31:0]);
      write_word_mem(DESC_BASE + 40, n[31:0]);
      write_word_mem(DESC_BASE + 44, stride_dst[31:0]);
      write_word_mem(DESC_BASE + 48, scale[31:0]);
      write_word_mem(DESC_BASE + 52, {shift[15:0], zero_point[15:0]});
    end
  endtask

  task automatic write_conv_descriptor(input int unsigned abi_version);
    begin
      write_word_mem(DESC_BASE +  0, 32'h0000_0007);
      write_word_mem(DESC_BASE +  4, FLAGS_I32_SIGNED);
      write_word_mem(DESC_BASE +  8, IN_BASE);
      write_word_mem(DESC_BASE + 12, WT_BASE);
      write_word_mem(DESC_BASE + 16, 32'd0);
      write_word_mem(DESC_BASE + 20, OUT_BASE);
      write_word_mem(DESC_BASE + 24, 32'd0);
      write_word_mem(DESC_BASE + 28, 32'd0);
      write_word_mem(DESC_BASE + 32, 32'd0);
      write_word_mem(DESC_BASE + 36, 32'd0);
      write_word_mem(DESC_BASE + 40, 32'd0);
      write_word_mem(DESC_BASE + 44, 32'd0);
      write_word_mem(DESC_BASE + 48, 32'd1);
      write_word_mem(DESC_BASE + 52, 32'd0);
      write_word_mem(DESC_BASE + 56, abi_version[31:0]);
      write_word_mem(DESC_BASE + 60, {16'd3, 16'd3});
      write_word_mem(DESC_BASE + 64, {16'd2, 16'd1});
      write_word_mem(DESC_BASE + 68, 32'h0000_1111);
    end
  endtask

  initial begin
    rst_n = 1'b0;
    mmio_valid = 1'b0;
    mmio_we = 1'b0;
    mmio_addr = '0;
    mmio_wdata = '0;
    mmio_wstrb = '0;
    repeat (3) @(posedge clk);
    rst_n = 1'b1;

    // Multi-K, edge-tile, descriptor GEMM with bias, ReLU, negative shift
    // requantization, INT8 stores, and delayed memory acceptance.
    for (int row = 0; row < 5; row++) begin
      for (int kk = 0; kk < 31; kk++)
        mem_bytes[A_BASE + row * 31 + kk] = 8'sd1;
    end
    for (int kk = 0; kk < 31; kk++) begin
      for (int col = 0; col < 5; col++)
        mem_bytes[B_BASE + kk * 5 + col] = 8'sd1;
    end
    write_word_mem(BIAS_BASE +  0, 32'sd2);
    write_word_mem(BIAS_BASE +  4, -32'sd50);
    write_word_mem(BIAS_BASE +  8, 32'sd0);
    write_word_mem(BIAS_BASE + 12, -32'sd40);
    write_word_mem(BIAS_BASE + 16, 32'sd3);
    write_gemm_descriptor(FLAG_BIAS_EN | FLAG_RELU_EN | FLAG_REQUANT_EN |
                          FLAG_DST_INT8 | FLAG_SIGNED,
                          5, 5, 31, 5, 4, -1, 0);
    start_desc_and_check(40000);
    for (int row = 0; row < 5; row++) begin
      if ($signed(mem_bytes[C_BASE + row * 5 + 0]) !== 8'sd127) $fatal(1, "gemm col0 sat mismatch");
      if ($signed(mem_bytes[C_BASE + row * 5 + 1]) !== 8'sd0)   $fatal(1, "gemm col1 relu mismatch");
      if ($signed(mem_bytes[C_BASE + row * 5 + 2]) !== 8'sd127) $fatal(1, "gemm col2 sat mismatch");
      if ($signed(mem_bytes[C_BASE + row * 5 + 3]) !== 8'sd0)   $fatal(1, "gemm col3 relu mismatch");
      if ($signed(mem_bytes[C_BASE + row * 5 + 4]) !== 8'sd127) $fatal(1, "gemm col4 sat mismatch");
    end
    clear_irq();

    // Descriptor GEMV with K > TILE_K to cover GEMV validation and NEXT_K.
    for (int row = 0; row < 5; row++) begin
      for (int kk = 0; kk < 17; kk++)
        mem_bytes[A_BASE + row * 17 + kk] = 8'sd1;
    end
    for (int kk = 0; kk < 17; kk++)
      mem_bytes[B_BASE + kk] = 8'sd1;
    write_gemm_descriptor(FLAGS_I32_SIGNED, 5, 1, 17, 4, 1, 0, 0);
    write_word_mem(DESC_BASE + 0, 32'h0000_0002);
    start_desc_and_check(30000);
    for (int row = 0; row < 5; row++) begin
      if (read_word(C_BASE + row * 4) !== 32'sd17)
        $fatal(1, "descriptor GEMV row %0d mismatch: %0d", row, read_word(C_BASE + row * 4));
    end
    clear_irq();

    // Direct vector multiply with INT8 destination and an unaligned output base.
    mem_bytes[VEC_X_BASE + 0] = 8'sd2;
    mem_bytes[VEC_X_BASE + 1] = -8'sd4;
    mem_bytes[VEC_X_BASE + 2] = 8'sd10;
    mem_bytes[VEC_X_BASE + 3] = -8'sd20;
    mem_bytes[VEC_X_BASE + 4] = 8'sd50;
    mem_bytes[VEC_X_BASE + 5] = -8'sd50;
    mem_bytes[VEC_Y_BASE + 0] = 8'sd3;
    mem_bytes[VEC_Y_BASE + 1] = 8'sd4;
    mem_bytes[VEC_Y_BASE + 2] = 8'sd20;
    mem_bytes[VEC_Y_BASE + 3] = 8'sd20;
    mem_bytes[VEC_Y_BASE + 4] = 8'sd4;
    mem_bytes[VEC_Y_BASE + 5] = 8'sd4;
    mmio_wr(REG_DIRECT_OP, 32'h0000_0004);
    mmio_wr(REG_SRC0_ADDR, VEC_X_BASE);
    mmio_wr(REG_SRC1_ADDR, VEC_Y_BASE);
    mmio_wr(REG_DST_ADDR,  VEC_Z_BASE);
    mmio_wr(REG_DIM_M,     32'd6);
    mmio_wr(REG_DIM_N,     32'd1);
    mmio_wr(REG_DIM_K,     32'd1);
    mmio_wr(REG_STRIDE0,   32'd1);
    mmio_wr(REG_STRIDE1,   32'd1);
    mmio_wr(REG_STRIDE_DST,32'd1);
    mmio_wr(REG_FLAGS,     FLAG_DST_INT8 | FLAG_SIGNED);
    start_direct_and_check(5000);
    if ($signed(mem_bytes[VEC_Z_BASE + 0]) !== 8'sd6)    $fatal(1, "vec mul lane0 mismatch");
    if ($signed(mem_bytes[VEC_Z_BASE + 1]) !== -8'sd16)  $fatal(1, "vec mul lane1 mismatch");
    if ($signed(mem_bytes[VEC_Z_BASE + 2]) !== 8'sd127)  $fatal(1, "vec mul lane2 sat mismatch");
    if ($signed(mem_bytes[VEC_Z_BASE + 3]) !== -8'sd128) $fatal(1, "vec mul lane3 sat mismatch");
    if ($signed(mem_bytes[VEC_Z_BASE + 4]) !== 8'sd127)  $fatal(1, "vec mul lane4 sat mismatch");
    if ($signed(mem_bytes[VEC_Z_BASE + 5]) !== -8'sd128) $fatal(1, "vec mul lane5 sat mismatch");
    clear_irq();

    // Valid 18-word descriptor Conv2D: 1x1, Cout=2, default packed strides.
    for (int i = 0; i < 9; i++)
      mem_bytes[IN_BASE + i] = 8'(i + 1);
    mem_bytes[WT_BASE + 0] = 8'sd1;
    mem_bytes[WT_BASE + 1] = -8'sd1;
    write_conv_descriptor(1);
    start_desc_and_check(40000);
    for (int pos = 0; pos < 9; pos++) begin
      if (read_word(OUT_BASE + pos * 8 + 0) !== pos + 1)
        $fatal(1, "conv descriptor oc0 mismatch at %0d", pos);
      if (read_word(OUT_BASE + pos * 8 + 4) !== -(pos + 1))
        $fatal(1, "conv descriptor oc1 mismatch at %0d", pos);
    end
    clear_irq();

    // Direct 3x3 Conv2D with stride=2 and pad=1 to hit the padded im2col branch
    // through the full controller path.
    for (int i = 0; i < 16; i++)
      mem_bytes[IN_BASE + i] = 8'sd1;
    for (int i = 0; i < 9; i++)
      mem_bytes[WT_BASE + i] = 8'sd1;
    mmio_wr(REG_DIRECT_OP,     32'h0000_0007);
    mmio_wr(REG_SRC0_ADDR,     IN_BASE);
    mmio_wr(REG_SRC1_ADDR,     WT_BASE);
    mmio_wr(REG_DST_ADDR,      OUT_BASE);
    mmio_wr(REG_FLAGS,         FLAGS_I32_SIGNED);
    mmio_wr(REG_STRIDE0,       32'd0);
    mmio_wr(REG_STRIDE1,       32'd0);
    mmio_wr(REG_STRIDE_DST,    32'd0);
    mmio_wr(REG_CONV_IN_HW,    {16'd4, 16'd4});
    mmio_wr(REG_CONV_CHANNELS, {16'd1, 16'd1});
    mmio_wr(REG_CONV_CFG,      32'h0011_2233);
    start_direct_and_check(40000);
    if (read_word(OUT_BASE + 0)  !== 32'sd4)
      $fatal(1, "direct conv 3x3 p1 s2 out0 mismatch got=%0d", read_word(OUT_BASE + 0));
    if (read_word(OUT_BASE + 4)  !== 32'sd6)
      $fatal(1, "direct conv 3x3 p1 s2 out1 mismatch got=%0d", read_word(OUT_BASE + 4));
    if (read_word(OUT_BASE + 8)  !== 32'sd6)
      $fatal(1, "direct conv 3x3 p1 s2 out2 mismatch got=%0d", read_word(OUT_BASE + 8));
    if (read_word(OUT_BASE + 12) !== 32'sd9)
      $fatal(1, "direct conv 3x3 p1 s2 out3 mismatch got=%0d", read_word(OUT_BASE + 12));
    clear_irq();

    // Invalid 18-word Conv2D descriptor ABI version should terminate as shape error.
    write_conv_descriptor(2);
    mmio_wr(REG_CTRL, CTRL_IRQ_EN);
    mmio_wr(REG_CMD_ADDR, DESC_BASE);
    mmio_wr(REG_CTRL, CTRL_IRQ_EN | CTRL_START);
    wait_irq(1000);
    mmio_rd(REG_STATUS, status_word);
    if (!status_word[3])
      $fatal(1, "invalid Conv2D descriptor ABI did not raise shape_error: 0x%08x", status_word);
    clear_irq();

    // Conflicting destination flags should use the unsupported-format branch.
    mmio_wr(REG_DIRECT_OP, 32'h0000_0001);
    mmio_wr(REG_SRC0_ADDR, A_BASE);
    mmio_wr(REG_SRC1_ADDR, B_BASE);
    mmio_wr(REG_DST_ADDR,  C_BASE);
    mmio_wr(REG_DIM_M,     32'd1);
    mmio_wr(REG_DIM_N,     32'd1);
    mmio_wr(REG_DIM_K,     32'd1);
    mmio_wr(REG_STRIDE0,   32'd1);
    mmio_wr(REG_STRIDE1,   32'd1);
    mmio_wr(REG_STRIDE_DST,32'd4);
    mmio_wr(REG_FLAGS,     FLAG_DST_INT8 | FLAG_DST_INT32 | FLAG_SIGNED);
    mmio_wr(REG_CTRL,      CTRL_IRQ_EN | CTRL_DIRECT | CTRL_START);
    wait_irq(1000);
    mmio_rd(REG_STATUS, status_word);
    if (!status_word[5])
      $fatal(1, "conflicting destination flags did not raise unsupported_format: 0x%08x", status_word);
    clear_irq();

    // Direct Conv2D invalid config with reserved high bits.
    mmio_wr(REG_DIRECT_OP,     32'h0000_0007);
    mmio_wr(REG_SRC0_ADDR,     IN_BASE);
    mmio_wr(REG_SRC1_ADDR,     WT_BASE);
    mmio_wr(REG_DST_ADDR,      OUT_BASE);
    mmio_wr(REG_FLAGS,         FLAGS_I32_SIGNED);
    mmio_wr(REG_STRIDE0,       32'd0);
    mmio_wr(REG_STRIDE1,       32'd0);
    mmio_wr(REG_STRIDE_DST,    32'd0);
    mmio_wr(REG_CONV_IN_HW,    {16'd3, 16'd3});
    mmio_wr(REG_CONV_CHANNELS, {16'd1, 16'd1});
    mmio_wr(REG_CONV_CFG,      32'h0100_1111);
    mmio_wr(REG_CTRL,          CTRL_IRQ_EN | CTRL_DIRECT | CTRL_START);
    wait_irq(1000);
    mmio_rd(REG_STATUS, status_word);
    if (!status_word[3])
      $fatal(1, "invalid Conv2D reserved config did not raise shape_error: 0x%08x", status_word);
    clear_irq();

    $display("tb_tinygpu_top_branch_cov_tb PASS");
    $finish;
  end

endmodule
