module tb_tinygpu_top_gemm_tb;

  localparam logic [31:0] REG_CTRL        = 32'h00;
  localparam logic [31:0] REG_STATUS      = 32'h04;
  localparam logic [31:0] REG_DIRECT_OP   = 32'h0c;
  localparam logic [31:0] REG_SRC0_ADDR   = 32'h10;
  localparam logic [31:0] REG_SRC1_ADDR   = 32'h14;
  localparam logic [31:0] REG_DST_ADDR    = 32'h1c;
  localparam logic [31:0] REG_DIM_M       = 32'h20;
  localparam logic [31:0] REG_DIM_N       = 32'h24;
  localparam logic [31:0] REG_DIM_K       = 32'h28;
  localparam logic [31:0] REG_STRIDE0     = 32'h2c;
  localparam logic [31:0] REG_STRIDE1     = 32'h30;
  localparam logic [31:0] REG_STRIDE_DST  = 32'h34;
  localparam logic [31:0] REG_FLAGS       = 32'h38;
  localparam logic [31:0] REG_CYCLE_COUNT = 32'h44;
  localparam logic [31:0] REG_ACTIVE_CNT  = 32'h48;
  localparam logic [31:0] REG_CMD_COUNT   = 32'h50;
  localparam logic [31:0] REG_IRQ_STATUS  = 32'h54;

  localparam logic [31:0] CTRL_START      = 32'h0000_0001;
  localparam logic [31:0] CTRL_IRQ_EN     = 32'h0000_0004;
  localparam logic [31:0] CTRL_DIRECT     = 32'h0000_0008;
  localparam logic [31:0] FLAG_DST_INT32  = 32'h0000_0020;

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
  logic [31:0] status_word;
  logic [31:0] irq_status_word;
  logic [31:0] cmd_count_word;
  logic [31:0] cycle_count_word;
  logic [31:0] active_count_word;

  tinygpu_top dut (
    .clk        (clk),
    .rst_n      (rst_n),
    .mmio_valid (mmio_valid),
    .mmio_we    (mmio_we),
    .mmio_addr  (mmio_addr),
    .mmio_wdata (mmio_wdata),
    .mmio_wstrb (mmio_wstrb),
    .mmio_rdata (mmio_rdata),
    .mmio_ready (mmio_ready),
    .mem_req    (mem_req),
    .mem_we     (mem_we),
    .mem_addr   (mem_addr),
    .mem_wdata  (mem_wdata),
    .mem_wstrb  (mem_wstrb),
    .mem_rdata  (mem_rdata),
    .mem_ready  (mem_ready),
    .mem_rvalid (mem_rvalid),
    .irq        (irq)
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
      for (int i = 0; i < 4096; i++) begin
        mem_bytes[i] <= '0;
      end
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
        rd_addr_q    <= mem_addr;
      end

      if (mem_req && mem_we) begin
        for (int i = 0; i < 4; i++) begin
          if (mem_wstrb[i])
            mem_bytes[mem_addr + i] <= mem_wdata[8*i +: 8];
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

  task automatic mmio_rd_task(
    input  logic [31:0] addr,
    output logic [31:0] data
  );
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

  task automatic wait_irq(input int max_cycles);
    int cycles;
    begin
      cycles = 0;
      while (!irq && (cycles < max_cycles)) begin
        @(posedge clk);
        cycles++;
      end
      if (!irq)
        $fatal(1, "IRQ timeout after %0d cycles", max_cycles);
      @(negedge clk);
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

    // A = [[1, 2], [3, 4]] at 0x100, row-major int8
    mem_bytes[32'h100] = 8'd1;
    mem_bytes[32'h101] = 8'd2;
    mem_bytes[32'h102] = 8'd3;
    mem_bytes[32'h103] = 8'd4;

    // B = [[5, 6], [7, 8]] at 0x200, row-major int8
    mem_bytes[32'h200] = 8'd5;
    mem_bytes[32'h201] = 8'd6;
    mem_bytes[32'h202] = 8'd7;
    mem_bytes[32'h203] = 8'd8;

    mmio_wr(REG_DIRECT_OP, 32'h0000_0001);
    mmio_wr(REG_SRC0_ADDR, 32'h0000_0100);
    mmio_wr(REG_SRC1_ADDR, 32'h0000_0200);
    mmio_wr(REG_DST_ADDR,  32'h0000_0300);
    mmio_wr(REG_DIM_M,     32'h0000_0002);
    mmio_wr(REG_DIM_N,     32'h0000_0002);
    mmio_wr(REG_DIM_K,     32'h0000_0002);
    mmio_wr(REG_STRIDE0,   32'h0000_0002);
    mmio_wr(REG_STRIDE1,   32'h0000_0002);
    mmio_wr(REG_STRIDE_DST,32'h0000_0008);
    mmio_wr(REG_FLAGS,     FLAG_DST_INT32);
    mmio_wr(REG_CTRL,      CTRL_IRQ_EN | CTRL_DIRECT);
    mmio_wr(REG_CTRL,      CTRL_IRQ_EN | CTRL_DIRECT | CTRL_START);

    wait_irq(400);

    mmio_rd_task(REG_STATUS, status_word);
    mmio_rd_task(REG_IRQ_STATUS, irq_status_word);
    mmio_rd_task(REG_CMD_COUNT, cmd_count_word);
    mmio_rd_task(REG_CYCLE_COUNT, cycle_count_word);
    mmio_rd_task(REG_ACTIVE_CNT, active_count_word);

    if (!status_word[1])
      $fatal(1, "done sticky was not set");
    if (status_word[0])
      $fatal(1, "busy should be low after completion");
    if (!irq_status_word[0])
      $fatal(1, "irq pending bit was not set");
    if (cmd_count_word !== 32'd1)
      $fatal(1, "cmd count mismatch: got %0d", cmd_count_word);
    if (cycle_count_word == 32'd0)
      $fatal(1, "cycle count did not advance");
    if (active_count_word == 32'd0)
      $fatal(1, "active count did not advance");

    if (read_word(32'h300) !== 32'sd19)
      $fatal(1, "C[0][0] mismatch: got %0d", read_word(32'h300));
    if (read_word(32'h304) !== 32'sd22)
      $fatal(1, "C[0][1] mismatch: got %0d", read_word(32'h304));
    if (read_word(32'h308) !== 32'sd43)
      $fatal(1, "C[1][0] mismatch: got %0d", read_word(32'h308));
    if (read_word(32'h30c) !== 32'sd50)
      $fatal(1, "C[1][1] mismatch: got %0d", read_word(32'h30c));

    mmio_wr(REG_IRQ_STATUS, 32'h0000_0001);
    mmio_rd_task(REG_IRQ_STATUS, irq_status_word);
    if (irq_status_word[0])
      $fatal(1, "irq pending clear failed");

    $display("tb_tinygpu_top_gemm_tb PASS");
    $finish;
  end

endmodule
