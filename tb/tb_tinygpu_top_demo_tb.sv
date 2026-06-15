module tb_tinygpu_top_demo_tb;

  localparam logic [31:0] REG_CTRL          = 32'h00;
  localparam logic [31:0] REG_STATUS        = 32'h04;
  localparam logic [31:0] REG_CMD_ADDR      = 32'h08;
  localparam logic [31:0] REG_DIRECT_OP     = 32'h0c;
  localparam logic [31:0] REG_SRC0_ADDR     = 32'h10;
  localparam logic [31:0] REG_SRC1_ADDR     = 32'h14;
  localparam logic [31:0] REG_DST_ADDR      = 32'h1c;
  localparam logic [31:0] REG_DIM_M         = 32'h20;
  localparam logic [31:0] REG_DIM_N         = 32'h24;
  localparam logic [31:0] REG_DIM_K         = 32'h28;
  localparam logic [31:0] REG_STRIDE0       = 32'h2c;
  localparam logic [31:0] REG_STRIDE1       = 32'h30;
  localparam logic [31:0] REG_STRIDE_DST    = 32'h34;
  localparam logic [31:0] REG_FLAGS         = 32'h38;
  localparam logic [31:0] REG_CYCLE_COUNT   = 32'h44;
  localparam logic [31:0] REG_ACTIVE_CNT    = 32'h48;
  localparam logic [31:0] REG_STALL_CNT     = 32'h4c;
  localparam logic [31:0] REG_IRQ_STATUS    = 32'h54;
  localparam logic [31:0] REG_CONV_IN_HW    = 32'h58;
  localparam logic [31:0] REG_CONV_CHANNELS = 32'h5c;
  localparam logic [31:0] REG_CONV_CFG      = 32'h60;

  localparam logic [31:0] CTRL_START        = 32'h0000_0001;
  localparam logic [31:0] CTRL_IRQ_EN       = 32'h0000_0004;
  localparam logic [31:0] CTRL_DIRECT       = 32'h0000_0008;
  localparam logic [31:0] FLAG_DST_INT32    = 32'h0000_0020;
  localparam logic [31:0] FLAG_SIGNED       = 32'h0000_0040;

  localparam int GEMM_A_BASE = 'h100;
  localparam int GEMM_B_BASE = 'h200;
  localparam int GEMM_C_BASE = 'h300;
  localparam int VEC_X_BASE  = 'h400;
  localparam int VEC_Y_BASE  = 'h480;
  localparam int VEC_Z_BASE  = 'h500;
  localparam int CONV_IN_BASE = 'h600;
  localparam int CONV_WT_BASE = 'h700;
  localparam int CONV_OUT_BASE = 'h800;
  localparam int DESC_BASE = 'h900;

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
  logic [7:0]  checkpoint_id;

  logic [7:0] mem_bytes [0:4095];
  logic       rd_pending_q;
  logic [31:0] rd_addr_q;
  logic [31:0] rd_word;

  tinygpu_top dut (
    .clk(clk), .rst_n(rst_n),
    .mmio_valid(mmio_valid), .mmio_we(mmio_we), .mmio_addr(mmio_addr), .mmio_wdata(mmio_wdata), .mmio_wstrb(mmio_wstrb),
    .mmio_rdata(mmio_rdata), .mmio_ready(mmio_ready),
    .mem_req(mem_req), .mem_we(mem_we), .mem_addr(mem_addr), .mem_wdata(mem_wdata), .mem_wstrb(mem_wstrb),
    .mem_rdata(mem_rdata), .mem_ready(mem_ready), .mem_rvalid(mem_rvalid),
    .irq(irq)
  );

  initial begin
    $dumpfile("build/tinygpu_top_demo.vcd");
    $dumpvars(0, tb_tinygpu_top_demo_tb);
  end

  initial clk = 1'b0;
  always #5 clk = ~clk;
  assign mem_ready = 1'b1;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      rd_pending_q <= 1'b0;
      rd_addr_q    <= '0;
      mem_rvalid   <= 1'b0;
      mem_rdata    <= '0;
      checkpoint_id <= 8'h00;
      for (int i = 0; i < 4096; i++) mem_bytes[i] <= '0;
    end else begin
      mem_rvalid <= rd_pending_q;
      if (rd_pending_q) begin
        checkpoint_id <= 8'h20;
        mem_rdata <= {
          mem_bytes[rd_addr_q + 3],
          mem_bytes[rd_addr_q + 2],
          mem_bytes[rd_addr_q + 1],
          mem_bytes[rd_addr_q + 0]
        };
      end
      if (dut.u_cmd_ctrl.array_mac_en)
        checkpoint_id <= 8'h30;
      if (dut.u_cmd_ctrl.epi_out_valid)
        checkpoint_id <= 8'h40;
      if (mem_req && mem_we)
        checkpoint_id <= 8'h50;
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
      checkpoint_id = 8'h10;
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
      if (!irq) $fatal(1, "demo IRQ timeout");
      @(negedge clk);
      mmio_wr(REG_IRQ_STATUS, 32'h1);
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

    $display("TinyGPU-ML RTL demo");
    $display("Checkpoint IDs: 0x10 launch, 0x20 first read, 0x30 first MAC, 0x40 epilogue, 0x50 final store");

    // Direct GEMM.
    mem_bytes[GEMM_A_BASE + 0] = 8'd1;
    mem_bytes[GEMM_A_BASE + 1] = 8'd2;
    mem_bytes[GEMM_A_BASE + 2] = 8'd3;
    mem_bytes[GEMM_A_BASE + 3] = 8'd4;
    mem_bytes[GEMM_B_BASE + 0] = 8'd5;
    mem_bytes[GEMM_B_BASE + 1] = 8'd6;
    mem_bytes[GEMM_B_BASE + 2] = 8'd7;
    mem_bytes[GEMM_B_BASE + 3] = 8'd8;
    $display("[CKPT] Direct GEMM launch");
    mmio_wr(REG_DIRECT_OP, 32'h1);
    mmio_wr(REG_SRC0_ADDR, GEMM_A_BASE);
    mmio_wr(REG_SRC1_ADDR, GEMM_B_BASE);
    mmio_wr(REG_DST_ADDR,  GEMM_C_BASE);
    mmio_wr(REG_DIM_M,     32'd2);
    mmio_wr(REG_DIM_N,     32'd2);
    mmio_wr(REG_DIM_K,     32'd2);
    mmio_wr(REG_STRIDE0,   32'd2);
    mmio_wr(REG_STRIDE1,   32'd2);
    mmio_wr(REG_STRIDE_DST,32'd8);
    mmio_wr(REG_FLAGS,     FLAG_DST_INT32 | FLAG_SIGNED);
    mmio_wr(REG_CTRL,      CTRL_IRQ_EN | CTRL_DIRECT | CTRL_START);
    wait_irq(2000);
    $display("Direct GEMM C = [[%0d, %0d], [%0d, %0d]]",
             read_word(GEMM_C_BASE + 0), read_word(GEMM_C_BASE + 4),
             read_word(GEMM_C_BASE + 8), read_word(GEMM_C_BASE + 12));

    // Descriptor GEMM.
    write_word_mem(DESC_BASE + 0*4, 32'h0000_0001);
    write_word_mem(DESC_BASE + 1*4, FLAG_DST_INT32 | FLAG_SIGNED);
    write_word_mem(DESC_BASE + 2*4, GEMM_A_BASE);
    write_word_mem(DESC_BASE + 3*4, GEMM_B_BASE);
    write_word_mem(DESC_BASE + 4*4, 32'd0);
    write_word_mem(DESC_BASE + 5*4, GEMM_C_BASE + 32);
    write_word_mem(DESC_BASE + 6*4, 32'd2);
    write_word_mem(DESC_BASE + 7*4, 32'd2);
    write_word_mem(DESC_BASE + 8*4, 32'd2);
    write_word_mem(DESC_BASE + 9*4, 32'd2);
    write_word_mem(DESC_BASE + 10*4, 32'd2);
    write_word_mem(DESC_BASE + 11*4, 32'd8);
    write_word_mem(DESC_BASE + 12*4, 32'd0);
    write_word_mem(DESC_BASE + 13*4, 32'd0);
    $display("[CKPT] Descriptor GEMM launch");
    mmio_wr(REG_CTRL, CTRL_IRQ_EN);
    mmio_wr(REG_CMD_ADDR, DESC_BASE);
    mmio_wr(REG_CTRL, CTRL_IRQ_EN | CTRL_START);
    wait_irq(2000);
    $display("Descriptor GEMM C = [[%0d, %0d], [%0d, %0d]]",
             read_word(GEMM_C_BASE + 32), read_word(GEMM_C_BASE + 36),
             read_word(GEMM_C_BASE + 40), read_word(GEMM_C_BASE + 44));

    // Vector add.
    mem_bytes[VEC_X_BASE + 0] = 8'sd1;
    mem_bytes[VEC_X_BASE + 1] = -8'sd2;
    mem_bytes[VEC_X_BASE + 2] = 8'sd3;
    mem_bytes[VEC_X_BASE + 3] = 8'sd4;
    mem_bytes[VEC_Y_BASE + 0] = 8'sd5;
    mem_bytes[VEC_Y_BASE + 1] = 8'sd6;
    mem_bytes[VEC_Y_BASE + 2] = -8'sd7;
    mem_bytes[VEC_Y_BASE + 3] = 8'sd8;
    $display("[CKPT] Vector add launch");
    mmio_wr(REG_DIRECT_OP, 32'h3);
    mmio_wr(REG_SRC0_ADDR, VEC_X_BASE);
    mmio_wr(REG_SRC1_ADDR, VEC_Y_BASE);
    mmio_wr(REG_DST_ADDR,  VEC_Z_BASE);
    mmio_wr(REG_DIM_M,     32'd4);
    mmio_wr(REG_DIM_N,     32'd1);
    mmio_wr(REG_DIM_K,     32'd1);
    mmio_wr(REG_STRIDE0,   32'd1);
    mmio_wr(REG_STRIDE1,   32'd1);
    mmio_wr(REG_STRIDE_DST,32'd4);
    mmio_wr(REG_FLAGS,     FLAG_DST_INT32 | FLAG_SIGNED);
    mmio_wr(REG_CTRL,      CTRL_IRQ_EN | CTRL_DIRECT | CTRL_START);
    wait_irq(2000);
    $display("Vector add z = {%0d, %0d, %0d, %0d}",
             read_word(VEC_Z_BASE + 0), read_word(VEC_Z_BASE + 4),
             read_word(VEC_Z_BASE + 8), read_word(VEC_Z_BASE + 12));

    // Hardware Conv2D.
    for (int i = 0; i < 9; i++) mem_bytes[CONV_IN_BASE + i] = i + 1;
    mem_bytes[CONV_WT_BASE + 0] = 0;
    mem_bytes[CONV_WT_BASE + 1] = 0;
    mem_bytes[CONV_WT_BASE + 2] = 0;
    mem_bytes[CONV_WT_BASE + 3] = 0;
    mem_bytes[CONV_WT_BASE + 4] = 1;
    mem_bytes[CONV_WT_BASE + 5] = 0;
    mem_bytes[CONV_WT_BASE + 6] = 0;
    mem_bytes[CONV_WT_BASE + 7] = 0;
    mem_bytes[CONV_WT_BASE + 8] = 0;
    $display("[CKPT] Conv2D launch");
    mmio_wr(REG_DIRECT_OP, 32'h7);
    mmio_wr(REG_SRC0_ADDR, CONV_IN_BASE);
    mmio_wr(REG_SRC1_ADDR, CONV_WT_BASE);
    mmio_wr(REG_DST_ADDR,  CONV_OUT_BASE);
    mmio_wr(REG_STRIDE0,   32'd3);
    mmio_wr(REG_STRIDE1,   32'd1);
    mmio_wr(REG_STRIDE_DST,32'd4);
    mmio_wr(REG_FLAGS,     FLAG_DST_INT32 | FLAG_SIGNED);
    mmio_wr(REG_CONV_IN_HW, {16'd3, 16'd3});
    mmio_wr(REG_CONV_CHANNELS, {16'd1, 16'd1});
    mmio_wr(REG_CONV_CFG, 32'h0011_1133);
    mmio_wr(REG_CTRL,      CTRL_IRQ_EN | CTRL_DIRECT | CTRL_START);
    wait_irq(4000);
    $display("Conv2D out row0 = {%0d, %0d, %0d}",
             read_word(CONV_OUT_BASE + 0), read_word(CONV_OUT_BASE + 4), read_word(CONV_OUT_BASE + 8));
    $display("Conv2D out row1 = {%0d, %0d, %0d}",
             read_word(CONV_OUT_BASE + 12), read_word(CONV_OUT_BASE + 16), read_word(CONV_OUT_BASE + 20));
    $display("Conv2D out row2 = {%0d, %0d, %0d}",
             read_word(CONV_OUT_BASE + 24), read_word(CONV_OUT_BASE + 28), read_word(CONV_OUT_BASE + 32));

    mmio_rd(REG_CYCLE_COUNT, rd_word);
    $display("Cycles : %0d", rd_word);
    mmio_rd(REG_ACTIVE_CNT, rd_word);
    $display("Active : %0d", rd_word);
    mmio_rd(REG_STALL_CNT, rd_word);
    $display("Stalls : %0d", rd_word);

    $display("tb_tinygpu_top_demo_tb PASS");
    $finish;
  end

endmodule
