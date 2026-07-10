module tb_tinygpu_dma_branch_tb;

  localparam logic [1:0] DMA_OP_LOAD_I8   = 2'd0;
  localparam logic [1:0] DMA_OP_STORE_I32 = 2'd2;
  localparam logic [1:0] DMA_OP_STORE_I8  = 2'd3;

  logic clk;
  logic rst_n;
  logic start;
  logic busy;
  logic done;
  logic error;
  logic [1:0] op_kind;
  logic [31:0] base_addr;
  logic [15:0] rows;
  logic [15:0] cols;
  logic [15:0] stride_bytes;
  logic [1:0] spm_region;
  logic [8:0] spm_base;
  logic mem_req;
  logic mem_we;
  logic [31:0] mem_addr;
  logic [31:0] mem_wdata;
  logic [3:0] mem_wstrb;
  logic [31:0] mem_rdata;
  logic mem_ready;
  logic mem_rvalid;
  logic spm_wr_en;
  logic [1:0] spm_region_o;
  logic [8:0] spm_addr;
  logic [31:0] spm_wdata;
  logic [3:0] spm_wstrb;
  logic [31:0] spm_rdata;

  logic [7:0] mem_bytes [0:2047];
  logic [31:0] spm_words [0:127];
  logic rd_pending_q;
  logic [31:0] rd_addr_q;
  int ready_delay_q;
  int read_valid_delay_q;

  tinygpu_dma dut (
    .clk(clk), .rst_n(rst_n), .start(start), .busy(busy), .done(done), .error(error),
    .op_kind(op_kind), .base_addr(base_addr), .rows(rows), .cols(cols),
    .stride_bytes(stride_bytes), .spm_region(spm_region), .spm_base(spm_base),
    .mem_req(mem_req), .mem_we(mem_we), .mem_addr(mem_addr), .mem_wdata(mem_wdata), .mem_wstrb(mem_wstrb),
    .mem_rdata(mem_rdata), .mem_ready(mem_ready), .mem_rvalid(mem_rvalid),
    .spm_wr_en(spm_wr_en), .spm_region_o(spm_region_o), .spm_addr(spm_addr), .spm_wdata(spm_wdata), .spm_wstrb(spm_wstrb),
    .spm_rdata(spm_rdata)
  );

  initial clk = 1'b0;
  always #5 clk = ~clk;
  assign mem_ready = (ready_delay_q == 0);
  assign spm_rdata = spm_words[spm_addr[8:2]];

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      rd_pending_q <= 1'b0;
      rd_addr_q <= '0;
      mem_rvalid <= 1'b0;
      mem_rdata <= '0;
      ready_delay_q <= 0;
      read_valid_delay_q <= 0;
      for (int i = 0; i < 2048; i++) mem_bytes[i] <= '0;
      for (int i = 0; i < 128; i++) spm_words[i] <= '0;
    end else begin
      mem_rvalid <= 1'b0;
      if (read_valid_delay_q > 0)
        read_valid_delay_q <= read_valid_delay_q - 1;
      if (rd_pending_q && read_valid_delay_q == 0) begin
        mem_rvalid <= 1'b1;
        mem_rdata <= {
          mem_bytes[rd_addr_q + 3],
          mem_bytes[rd_addr_q + 2],
          mem_bytes[rd_addr_q + 1],
          mem_bytes[rd_addr_q + 0]
        };
        rd_pending_q <= 1'b0;
      end

      if (mem_req && !mem_we && mem_ready) begin
        rd_pending_q <= 1'b1;
        rd_addr_q <= mem_addr;
        read_valid_delay_q <= 2;
      end
      if (mem_req && mem_we && mem_ready) begin
        for (int i = 0; i < 4; i++) begin
          if (mem_wstrb[i]) mem_bytes[mem_addr + i] <= mem_wdata[8*i +: 8];
        end
      end
      if (spm_wr_en && spm_wstrb[0])
        spm_words[spm_addr[8:2]][8*(spm_addr[1:0]) +: 8] <= spm_wdata[7:0];
      if (ready_delay_q > 0)
        ready_delay_q <= ready_delay_q - 1;
    end
  end

  task automatic launch(
    input logic [1:0] op_i,
    input logic [31:0] base_i,
    input logic [15:0] rows_i,
    input logic [15:0] cols_i,
    input logic [15:0] stride_i,
    input logic [1:0] region_i,
    input logic [8:0] spm_base_i
  );
    begin
      @(negedge clk);
      op_kind = op_i;
      base_addr = base_i;
      rows = rows_i;
      cols = cols_i;
      stride_bytes = stride_i;
      spm_region = region_i;
      spm_base = spm_base_i;
      start = 1'b1;
      @(negedge clk);
      start = 1'b0;
    end
  endtask

  task automatic wait_done(input int max_cycles);
    int cycles;
    begin
      cycles = 0;
      while (!done && cycles < max_cycles) begin
        @(posedge clk);
        cycles++;
      end
      if (!done) $fatal(1, "DMA done timeout");
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

  function automatic logic [7:0] spm_byte(input int addr);
    spm_byte = spm_words[addr >> 2][8*(addr & 3) +: 8];
  endfunction

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
    repeat (2) @(posedge clk);
    rst_n = 1'b1;

    // Zero dimensions should complete immediately.
    launch(DMA_OP_LOAD_I8, 32'h100, 16'd0, 16'd4, 16'd4, 2'd0, 9'd0);
    wait_done(20);
    launch(DMA_OP_LOAD_I8, 32'h100, 16'd2, 16'd0, 16'd4, 2'd0, 9'd0);
    wait_done(20);

    // LOAD_I8 over all byte lanes with delayed ready/rvalid.
    for (int i = 0; i < 16; i++) mem_bytes[32'h100 + i] = 8'(8'h10 + i);
    ready_delay_q = 2;
    launch(DMA_OP_LOAD_I8, 32'h101, 16'd2, 16'd4, 16'd8, 2'd0, 9'd0);
    wait_done(200);
    if (spm_byte(0) !== 8'h11 || spm_byte(1) !== 8'h12 ||
        spm_byte(2) !== 8'h13 || spm_byte(3) !== 8'h14)
      $fatal(1, "A-region load lanes mismatch");
    if (spm_byte(16) !== 8'h19 || spm_byte(17) !== 8'h1a)
      $fatal(1, "A-region row stride mismatch");

    launch(DMA_OP_LOAD_I8, 32'h102, 16'd2, 16'd3, 16'd8, 2'd1, 9'd32);
    wait_done(200);
    if (spm_byte(32) !== 8'h12 || spm_byte(36) !== 8'h1a)
      $fatal(1, "B-region row stride mismatch");

    // STORE_I32 multi-column and STORE_I8 all lanes.
    spm_words[0] = 32'h1122_3344;
    spm_words[1] = 32'h5566_7788;
    ready_delay_q = 2;
    launch(DMA_OP_STORE_I32, 32'h300, 16'd1, 16'd2, 16'd8, 2'd2, 9'd0);
    wait_done(100);
    if ({mem_bytes['h303], mem_bytes['h302], mem_bytes['h301], mem_bytes['h300]} !== 32'h1122_3344)
      $fatal(1, "STORE_I32 first word mismatch");
    if ({mem_bytes['h307], mem_bytes['h306], mem_bytes['h305], mem_bytes['h304]} !== 32'h5566_7788)
      $fatal(1, "STORE_I32 second word mismatch");

    for (int lane = 0; lane < 4; lane++) begin
      spm_words[0] = {24'd0, 8'(8'hc0 + lane)};
      launch(DMA_OP_STORE_I8, 32'(32'h400 + lane), 16'd1, 16'd1, 16'd1, 2'd2, 9'd0);
      wait_done(80);
      if (mem_bytes['h400 + lane] !== 8'(8'hc0 + lane))
        $fatal(1, "STORE_I8 lane %0d mismatch", lane);
    end

    launch(2'd1, 32'h500, 16'd1, 16'd1, 16'd1, 2'd0, 9'd0);
    wait_error(40);

    $display("tb_tinygpu_dma_branch_tb PASS");
    $finish;
  end

endmodule
