module tb_tinygpu_top_dst_int8_tb;

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
  localparam logic [31:0] REG_SCALE       = 32'h3c;
  localparam logic [31:0] REG_SHIFT_ZP    = 32'h40;

  localparam logic [31:0] CTRL_START      = 32'h0000_0001;
  localparam logic [31:0] CTRL_IRQ_EN     = 32'h0000_0004;
  localparam logic [31:0] CTRL_DIRECT     = 32'h0000_0008;
  localparam logic [31:0] FLAG_REQUANT_EN = 32'h0000_0008;
  localparam logic [31:0] FLAG_DST_INT8   = 32'h0000_0010;

  localparam int M_DIM = 3;
  localparam int N_DIM = 3;
  localparam int K_DIM = 2;
  localparam int A_BASE = 'h100;
  localparam int B_BASE = 'h200;
  localparam int C_BASE = 'h300;

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

  function automatic logic signed [31:0] raw_sum(input int row, input int col);
    logic signed [31:0] sum;
    logic signed [7:0] a_val;
    logic signed [7:0] b_val;
    begin
      sum = 0;
      for (int kk = 0; kk < K_DIM; kk++) begin
        a_val = $signed(mem_bytes[A_BASE + (row * K_DIM) + kk]);
        b_val = $signed(mem_bytes[B_BASE + (kk * N_DIM) + col]);
        sum = sum + (a_val * b_val);
      end
      raw_sum = sum;
    end
  endfunction

  function automatic logic signed [7:0] sat_i8(input logic signed [31:0] val);
    begin
      if (val > 32'sd127)
        sat_i8 = 8'sd127;
      else if (val < -32'sd128)
        sat_i8 = -8'sd128;
      else
        sat_i8 = val[7:0];
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

    // Chosen so outputs fit cleanly in signed int8 after requant pass-through.
    mem_bytes[A_BASE + 0] = 8'sd1;
    mem_bytes[A_BASE + 1] = 8'sd2;
    mem_bytes[A_BASE + 2] = -8'sd1;
    mem_bytes[A_BASE + 3] = 8'sd3;
    mem_bytes[A_BASE + 4] = 8'sd4;
    mem_bytes[A_BASE + 5] = -8'sd2;

    mem_bytes[B_BASE + 0] = 8'sd5;
    mem_bytes[B_BASE + 1] = -8'sd1;
    mem_bytes[B_BASE + 2] = 8'sd2;
    mem_bytes[B_BASE + 3] = 8'sd3;
    mem_bytes[B_BASE + 4] = 8'sd4;
    mem_bytes[B_BASE + 5] = -8'sd2;

    mmio_wr(REG_DIRECT_OP, 32'h0000_0001);
    mmio_wr(REG_SRC0_ADDR, A_BASE);
    mmio_wr(REG_SRC1_ADDR, B_BASE);
    mmio_wr(REG_DST_ADDR,  C_BASE);
    mmio_wr(REG_DIM_M,     M_DIM);
    mmio_wr(REG_DIM_N,     N_DIM);
    mmio_wr(REG_DIM_K,     K_DIM);
    mmio_wr(REG_STRIDE0,   K_DIM);
    mmio_wr(REG_STRIDE1,   N_DIM);
    mmio_wr(REG_STRIDE_DST,N_DIM);
    mmio_wr(REG_FLAGS,     FLAG_REQUANT_EN | FLAG_DST_INT8);
    mmio_wr(REG_SCALE,     32'd1);
    mmio_wr(REG_SHIFT_ZP,  32'd0);
    mmio_wr(REG_CTRL,      CTRL_IRQ_EN | CTRL_DIRECT);
    mmio_wr(REG_CTRL,      CTRL_IRQ_EN | CTRL_DIRECT | CTRL_START);

    wait_irq(1200);
    mmio_rd_task(REG_STATUS, status_word);

    if (!status_word[1])
      $fatal(1, "done sticky was not set");
    if (status_word[0])
      $fatal(1, "busy should be low after completion");

    for (int r = 0; r < M_DIM; r++) begin
      for (int c = 0; c < N_DIM; c++) begin
        if ($signed(mem_bytes[C_BASE + (r * N_DIM) + c]) !== sat_i8(raw_sum(r, c))) begin
          $fatal(
            1,
            "dst_int8 mismatch at (%0d,%0d): got %0d expected %0d",
            r,
            c,
            $signed(mem_bytes[C_BASE + (r * N_DIM) + c]),
            sat_i8(raw_sum(r, c))
          );
        end
      end
    end

    $display("tb_tinygpu_top_dst_int8_tb PASS");
    $finish;
  end

endmodule
