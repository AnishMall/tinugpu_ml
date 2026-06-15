module tb_tinygpu_top_controller_cov_tb;

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
  localparam logic [31:0] REG_IRQ_STATUS    = 32'h54;
  localparam logic [31:0] REG_CMD_COUNT     = 32'h50;

  localparam logic [31:0] CTRL_START        = 32'h0000_0001;
  localparam logic [31:0] CTRL_SOFT_RESET   = 32'h0000_0002;
  localparam logic [31:0] CTRL_IRQ_EN       = 32'h0000_0004;
  localparam logic [31:0] CTRL_DIRECT       = 32'h0000_0008;
  localparam logic [31:0] FLAG_BIAS_EN      = 32'h0000_0001;
  localparam logic [31:0] FLAG_DST_INT32    = 32'h0000_0020;
  localparam logic [31:0] FLAG_SIGNED       = 32'h0000_0040;

  localparam int A_BASE    = 'h100;
  localparam int B_BASE    = 'h200;
  localparam int BIAS_BASE = 'h300;
  localparam int C_BASE    = 'h400;
  localparam int X_BASE    = 'h700;
  localparam int Z_BASE    = 'h780;
  localparam int DESC_BASE = 'h800;

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

  logic [7:0] mem_bytes [0:4095];
  logic       rd_pending_q;
  logic [31:0] rd_addr_q;
  logic [31:0] rd_word;
  logic [31:0] status_word;
  logic [31:0] cmd_count_word;

  tinygpu_top dut (
    .clk(clk), .rst_n(rst_n),
    .mmio_valid(mmio_valid), .mmio_we(mmio_we), .mmio_addr(mmio_addr), .mmio_wdata(mmio_wdata), .mmio_wstrb(mmio_wstrb),
    .mmio_rdata(mmio_rdata), .mmio_ready(mmio_ready),
    .mem_req(mem_req), .mem_we(mem_we), .mem_addr(mem_addr), .mem_wdata(mem_wdata), .mem_wstrb(mem_wstrb),
    .mem_rdata(mem_rdata), .mem_ready(mem_ready), .mem_rvalid(mem_rvalid),
    .irq(irq)
  );

  initial clk = 1'b0;
  always #5 clk = ~clk;
  assign mem_ready = 1'b1;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      rd_pending_q <= 1'b0;
      rd_addr_q    <= '0;
      mem_rvalid   <= 1'b0;
      mem_rdata    <= '0;
      for (int i = 0; i < 4096; i++) mem_bytes[i] <= '0;
    end else begin
      mem_rvalid <= rd_pending_q;
      if (rd_pending_q) begin
        mem_rdata <= {
          mem_bytes[rd_addr_q + 3],
          mem_bytes[rd_addr_q + 2],
          mem_bytes[rd_addr_q + 1],
          mem_bytes[rd_addr_q + 0]
        };
      end
      rd_pending_q <= 1'b0;
      if (mem_req && !mem_we) begin
        rd_pending_q <= 1'b1;
        rd_addr_q <= mem_addr;
      end
      if (mem_req && mem_we) begin
        for (int i = 0; i < 4; i++) begin
          if (mem_wstrb[i]) mem_bytes[mem_addr + i] <= mem_wdata[8*i +: 8];
        end
      end
    end
  end

  function automatic logic signed [31:0] read_word(input int unsigned addr);
    begin
      read_word = {
        mem_bytes[addr + 3],
        mem_bytes[addr + 2],
        mem_bytes[addr + 1],
        mem_bytes[addr + 0]
      };
    end
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
      if (!irq) $fatal(1, "IRQ timeout after %0d cycles", max_cycles);
      @(negedge clk);
    end
  endtask

  task automatic clear_irq;
    begin
      mmio_wr(REG_IRQ_STATUS, 32'h1);
    end
  endtask

  task automatic start_desc_cmd;
    begin
      mmio_wr(REG_CTRL, CTRL_IRQ_EN);
      mmio_wr(REG_CMD_ADDR, DESC_BASE);
      mmio_wr(REG_CTRL, CTRL_IRQ_EN | CTRL_START);
      wait_irq(12000);
      mmio_rd(REG_STATUS, status_word);
      if (!status_word[1]) $fatal(1, "descriptor command missing done");
      if (status_word[0])  $fatal(1, "descriptor command left busy high");
      clear_irq();
    end
  endtask

  task automatic start_direct_cmd;
    begin
      mmio_wr(REG_CTRL, CTRL_IRQ_EN | CTRL_DIRECT);
      mmio_wr(REG_CTRL, CTRL_IRQ_EN | CTRL_DIRECT | CTRL_START);
      wait_irq(4000);
      mmio_rd(REG_STATUS, status_word);
      if (!status_word[1]) $fatal(1, "direct command missing done");
      if (status_word[0])  $fatal(1, "direct command left busy high");
      clear_irq();
    end
  endtask

  initial begin
    rst_n = 1'b0;
    mmio_valid = 1'b0;
    mmio_we = 1'b0;
    mmio_addr = '0;
    mmio_wdata = '0;
    mmio_wstrb = '0;
    repeat (2) @(posedge clk);
    rst_n = 1'b1;

    // Force the soft-reset path through top -> regs -> cmd_ctrl.
    mmio_wr(REG_DIRECT_OP, 32'h0000_0001);
    mmio_wr(REG_SRC0_ADDR, A_BASE);
    mmio_wr(REG_FLAGS, FLAG_DST_INT32 | FLAG_SIGNED);
    mmio_wr(REG_CTRL, CTRL_SOFT_RESET);
    mmio_rd(REG_STATUS, status_word);
    if (status_word[0]) $fatal(1, "soft reset should leave busy low");

    // Descriptor multi-tile GEMM with bias to hit DESC_LOAD, NEXT_K,
    // NEXT_TILE_N, NEXT_TILE_M, and LOAD_BIAS in the controller.
    for (int i = 0; i < 5*17; i++) mem_bytes[A_BASE + i] = 8'sd1;
    for (int i = 0; i < 17*5; i++) mem_bytes[B_BASE + i] = 8'sd1;
    write_word_mem(BIAS_BASE + 0, 32'sd1);
    write_word_mem(BIAS_BASE + 4, 32'sd2);
    write_word_mem(BIAS_BASE + 8, 32'sd3);
    write_word_mem(BIAS_BASE + 12, 32'sd4);
    write_word_mem(BIAS_BASE + 16, 32'sd5);

    write_word_mem(DESC_BASE + 0*4, 32'h0000_0001);
    write_word_mem(DESC_BASE + 1*4, FLAG_BIAS_EN | FLAG_DST_INT32 | FLAG_SIGNED);
    write_word_mem(DESC_BASE + 2*4, A_BASE);
    write_word_mem(DESC_BASE + 3*4, B_BASE);
    write_word_mem(DESC_BASE + 4*4, BIAS_BASE);
    write_word_mem(DESC_BASE + 5*4, C_BASE);
    write_word_mem(DESC_BASE + 6*4, 32'd5);
    write_word_mem(DESC_BASE + 7*4, 32'd5);
    write_word_mem(DESC_BASE + 8*4, 32'd17);
    write_word_mem(DESC_BASE + 9*4, 32'd17);
    write_word_mem(DESC_BASE + 10*4, 32'd5);
    write_word_mem(DESC_BASE + 11*4, 32'd20);
    write_word_mem(DESC_BASE + 12*4, 32'd0);
    write_word_mem(DESC_BASE + 13*4, 32'd0);

    start_desc_cmd();
    for (int row = 0; row < 5; row++) begin
      for (int col = 0; col < 5; col++) begin
        if (read_word(C_BASE + row*20 + col*4) !== (32'sd17 + (col + 1)))
          $fatal(1, "multi-tile GEMM mismatch at (%0d,%0d): %0d",
                 row, col, read_word(C_BASE + row*20 + col*4));
      end
    end

    // Direct unary vector path to skip VEC_LOAD_Y and exercise RELU flow.
    mem_bytes[X_BASE + 0] = -8'sd3;
    mem_bytes[X_BASE + 1] =  8'sd0;
    mem_bytes[X_BASE + 2] =  8'sd5;
    mem_bytes[X_BASE + 3] = -8'sd1;
    mmio_wr(REG_DIRECT_OP, 32'h0000_0005);
    mmio_wr(REG_SRC0_ADDR, X_BASE);
    mmio_wr(REG_DST_ADDR,  Z_BASE);
    mmio_wr(REG_DIM_M,     32'd4);
    mmio_wr(REG_DIM_N,     32'd1);
    mmio_wr(REG_DIM_K,     32'd1);
    mmio_wr(REG_STRIDE0,   32'd1);
    mmio_wr(REG_STRIDE1,   32'd1);
    mmio_wr(REG_STRIDE_DST,32'd4);
    mmio_wr(REG_FLAGS,     FLAG_DST_INT32 | FLAG_SIGNED);
    start_direct_cmd();
    if (read_word(Z_BASE + 0)  !== 32'sd0) $fatal(1, "relu out0 mismatch");
    if (read_word(Z_BASE + 4)  !== 32'sd0) $fatal(1, "relu out1 mismatch");
    if (read_word(Z_BASE + 8)  !== 32'sd5) $fatal(1, "relu out2 mismatch");
    if (read_word(Z_BASE + 12) !== 32'sd0) $fatal(1, "relu out3 mismatch");

    mmio_rd(REG_CMD_COUNT, cmd_count_word);
    if (cmd_count_word !== 32'd2)
      $fatal(1, "cmd count mismatch: %0d", cmd_count_word);

    $display("tb_tinygpu_top_controller_cov_tb PASS");
    $finish;
  end

endmodule
