module tb_tinygpu_dma_lane_and_error_tb;

  localparam logic [1:0] DMA_OP_LOAD_I8   = 2'd0;
  localparam logic [1:0] DMA_OP_STORE_I32 = 2'd2;
  localparam logic [1:0] DMA_OP_STORE_I8  = 2'd3;

  logic clk;
  logic rst_n;
  logic        start;
  logic        busy;
  logic        done;
  logic        error;
  logic [1:0]  op_kind;
  logic [31:0] base_addr;
  logic [15:0] rows;
  logic [15:0] cols;
  logic [15:0] stride_bytes;
  logic [1:0]  spm_region;
  logic [8:0]  spm_base;
  logic        mem_req;
  logic        mem_we;
  logic [31:0] mem_addr;
  logic [31:0] mem_wdata;
  logic [3:0]  mem_wstrb;
  logic [31:0] mem_rdata;
  logic        mem_ready;
  logic        mem_rvalid;
  logic        spm_wr_en;
  logic [1:0]  spm_region_o;
  logic [8:0]  spm_addr;
  logic [31:0] spm_wdata;
  logic [3:0]  spm_wstrb;
  logic [31:0] spm_rdata;
  logic [7:0]  a_rd_addr [0:3];
  logic [7:0]  a_rd_data [0:3];
  logic [7:0]  b_rd_addr [0:3];
  logic [7:0]  b_rd_data [0:3];
  logic        c_wr_en;
  logic [7:0]  c_wr_addr;
  logic [31:0] c_wr_data;
  logic [7:0]  c_rd_addr;
  logic [31:0] c_rd_data;

  logic [7:0] mem_bytes [0:1023];
  logic       rd_pending_q;
  logic [31:0] rd_addr_q;
  integer ready_stall_q;
  logic        held_req_q;
  logic        held_we_q;
  logic [31:0] held_addr_q;
  logic [31:0] held_wdata_q;
  logic [3:0]  held_wstrb_q;

  tinygpu_dma dut (
    .clk(clk), .rst_n(rst_n),
    .start(start), .busy(busy), .done(done), .error(error),
    .op_kind(op_kind), .base_addr(base_addr), .rows(rows), .cols(cols),
    .stride_bytes(stride_bytes), .spm_region(spm_region), .spm_base(spm_base),
    .mem_req(mem_req), .mem_we(mem_we), .mem_addr(mem_addr), .mem_wdata(mem_wdata), .mem_wstrb(mem_wstrb),
    .mem_rdata(mem_rdata), .mem_ready(mem_ready), .mem_rvalid(mem_rvalid),
    .spm_wr_en(spm_wr_en), .spm_region_o(spm_region_o), .spm_addr(spm_addr), .spm_wdata(spm_wdata), .spm_wstrb(spm_wstrb),
    .spm_rdata(spm_rdata)
  );

  tinygpu_spm u_spm (
    .clk(clk), .rst_n(rst_n),
    .dma_wr_en(spm_wr_en), .dma_region(spm_region_o), .dma_addr(spm_addr), .dma_wdata(spm_wdata), .dma_wstrb(spm_wstrb),
    .dma_rdata(spm_rdata),
    .a_rd_addr(a_rd_addr), .a_rd_data(a_rd_data),
    .b_rd_addr(b_rd_addr), .b_rd_data(b_rd_data),
    .c_wr_en(c_wr_en), .c_wr_addr(c_wr_addr), .c_wr_data(c_wr_data),
    .c_rd_addr(c_rd_addr), .c_rd_data(c_rd_data)
  );

  initial clk = 1'b0;
  always #5 clk = ~clk;
  assign mem_ready = (ready_stall_q == 0);

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      rd_pending_q <= 1'b0;
      rd_addr_q    <= '0;
      mem_rvalid   <= 1'b0;
      mem_rdata    <= '0;
      ready_stall_q <= 0;
      held_req_q <= 1'b0;
      held_we_q <= 1'b0;
      held_addr_q <= '0;
      held_wdata_q <= '0;
      held_wstrb_q <= '0;
      for (int i = 0; i < 1024; i++) mem_bytes[i] <= '0;
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
      if (mem_req && !mem_we && mem_ready) begin
        rd_pending_q <= 1'b1;
        rd_addr_q <= mem_addr;
      end
      if (mem_req && mem_we && mem_ready) begin
        for (int i = 0; i < 4; i++) begin
          if (mem_wstrb[i]) mem_bytes[mem_addr + i] <= mem_wdata[8*i +: 8];
        end
      end

      if (ready_stall_q > 0)
        ready_stall_q <= ready_stall_q - 1;

      if (held_req_q) begin
        if (!mem_req || mem_we !== held_we_q || mem_addr !== held_addr_q ||
            mem_wdata !== held_wdata_q || mem_wstrb !== held_wstrb_q)
          $fatal(1, "DMA request mutated while waiting for mem_ready");
      end
      held_req_q <= mem_req && !mem_ready;
      if (mem_req && !mem_ready) begin
        held_we_q <= mem_we;
        held_addr_q <= mem_addr;
        held_wdata_q <= mem_wdata;
        held_wstrb_q <= mem_wstrb;
      end
    end
  end

  task automatic wait_done(input int max_cycles);
    int cycles;
    begin
      cycles = 0;
      while (!done && cycles < max_cycles) begin
        @(posedge clk);
        cycles++;
      end
      if (!done) $fatal(1, "DMA timeout");
      @(negedge clk);
    end
  endtask

  task automatic wait_error(input int max_cycles);
    int cycles;
    begin
      cycles = 0;
      while (!error && cycles < max_cycles) begin
        @(posedge clk);
        cycles++;
      end
      if (!error) $fatal(1, "DMA error timeout");
      @(negedge clk);
    end
  endtask

  task automatic launch_dma(
    input logic [1:0] op_kind_i,
    input logic [31:0] base_addr_i,
    input logic [15:0] rows_i,
    input logic [15:0] cols_i,
    input logic [15:0] stride_i
  );
    begin
      @(negedge clk);
      op_kind = op_kind_i;
      base_addr = base_addr_i;
      rows = rows_i;
      cols = cols_i;
      stride_bytes = stride_i;
      spm_region = 2'd2;
      spm_base = 9'd0;
      start = 1'b1;
      @(posedge clk);
      @(negedge clk);
      start = 1'b0;
    end
  endtask

  task automatic write_c_word(input logic [7:0] addr, input logic [31:0] data);
    begin
      @(negedge clk);
      c_wr_addr = addr;
      c_wr_data = data;
      c_wr_en = 1'b1;
      @(posedge clk);
      @(negedge clk);
      c_wr_en = 1'b0;
    end
  endtask

  initial begin
    rst_n = 1'b0;
    start = 1'b0;
    op_kind = '0;
    base_addr = '0;
    rows = '0;
    cols = '0;
    stride_bytes = '0;
    spm_region = '0;
    spm_base = '0;
    c_wr_en = 1'b0;
    c_wr_addr = '0;
    c_wr_data = '0;
    c_rd_addr = '0;
    for (int i = 0; i < 4; i++) begin
      a_rd_addr[i] = '0;
      b_rd_addr[i] = '0;
    end

    repeat (2) @(posedge clk);
    rst_n = 1'b1;

    // Cover request-hold logic on store_i32.
    write_c_word(8'd0, 32'h1122_3344);
    ready_stall_q = 3;
    launch_dma(DMA_OP_STORE_I32, 32'h0000_0204, 16'd1, 16'd1, 16'd4);
    wait_done(100);
    if ({mem_bytes['h207], mem_bytes['h206], mem_bytes['h205], mem_bytes['h204]} !== 32'h1122_3344)
      $fatal(1, "store_i32 data mismatch");

    // Cover all byte lanes for store_i8.
    for (int lane = 0; lane < 4; lane++) begin
      write_c_word(8'd0, {24'd0, 8'(8'hA0 + lane)});
      launch_dma(DMA_OP_STORE_I8, 32'(32'h0000_0300 + lane), 16'd1, 16'd1, 16'd1);
      wait_done(100);
      if (mem_bytes['h300 + lane] !== 8'(8'hA0 + lane))
        $fatal(1, "store_i8 lane %0d mismatch: %h", lane, mem_bytes['h300 + lane]);
    end

    // Invalid opcode should hit DMA_ERROR.
    launch_dma(2'd1, 32'h0000_0400, 16'd1, 16'd1, 16'd1);
    wait_error(40);

    $display("tb_tinygpu_dma_lane_and_error_tb PASS");
    $finish;
  end

endmodule
