module tb_tinygpu_dma_tb;

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

  tinygpu_dma dut (
    .clk          (clk),
    .rst_n        (rst_n),
    .start        (start),
    .busy         (busy),
    .done         (done),
    .error        (error),
    .op_kind      (op_kind),
    .base_addr    (base_addr),
    .rows         (rows),
    .cols         (cols),
    .stride_bytes (stride_bytes),
    .spm_region   (spm_region),
    .spm_base     (spm_base),
    .mem_req      (mem_req),
    .mem_we       (mem_we),
    .mem_addr     (mem_addr),
    .mem_wdata    (mem_wdata),
    .mem_wstrb    (mem_wstrb),
    .mem_rdata    (mem_rdata),
    .mem_ready    (mem_ready),
    .mem_rvalid   (mem_rvalid),
    .spm_wr_en    (spm_wr_en),
    .spm_region_o (spm_region_o),
    .spm_addr     (spm_addr),
    .spm_wdata    (spm_wdata),
    .spm_wstrb    (spm_wstrb),
    .spm_rdata    (spm_rdata)
  );

  tinygpu_spm u_spm (
    .clk        (clk),
    .rst_n      (rst_n),
    .dma_wr_en  (spm_wr_en),
    .dma_region (spm_region_o),
    .dma_addr   (spm_addr),
    .dma_wdata  (spm_wdata),
    .dma_wstrb  (spm_wstrb),
    .dma_rdata  (spm_rdata),
    .a_rd_addr  (a_rd_addr),
    .a_rd_data  (a_rd_data),
    .b_rd_addr  (b_rd_addr),
    .b_rd_data  (b_rd_data),
    .c_wr_en    (c_wr_en),
    .c_wr_addr  (c_wr_addr),
    .c_wr_data  (c_wr_data),
    .c_rd_addr  (c_rd_addr),
    .c_rd_data  (c_rd_data)
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
      for (int i = 0; i < 1024; i++) begin
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

  task automatic wait_done;
    begin
      while (!done) @(posedge clk);
      @(negedge clk);
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

    mem_bytes[32'h100] = 8'h11;
    mem_bytes[32'h101] = 8'h22;
    mem_bytes[32'h104] = 8'h33;
    mem_bytes[32'h105] = 8'h44;

    @(negedge clk);
    op_kind = DMA_OP_LOAD_I8;
    base_addr = 32'h0000_0100;
    rows = 16'd2;
    cols = 16'd2;
    stride_bytes = 16'd4;
    spm_region = 2'd0;
    spm_base = 9'd0;
    start = 1'b1;
    @(posedge clk);
    @(negedge clk);
    start = 1'b0;

    wait_done();

    a_rd_addr[0] = 8'd0;
    a_rd_addr[1] = 8'd1;
    a_rd_addr[2] = 8'd16;
    a_rd_addr[3] = 8'd17;
    #1;
    if (a_rd_data[0] !== 8'h11) $fatal(1, "DMA load failed A[0][0]: %h", a_rd_data[0]);
    if (a_rd_data[1] !== 8'h22) $fatal(1, "DMA load failed A[0][1]: %h", a_rd_data[1]);
    if (a_rd_data[2] !== 8'h33) $fatal(1, "DMA load failed A[1][0]: %h", a_rd_data[2]);
    if (a_rd_data[3] !== 8'h44) $fatal(1, "DMA load failed A[1][1]: %h", a_rd_data[3]);

    @(negedge clk);
    c_wr_addr = 8'd0;
    c_wr_data = 32'h11223344;
    c_wr_en = 1'b1;
    @(posedge clk);
    @(negedge clk);
    c_wr_addr = 8'd1;
    c_wr_data = 32'h55667788;
    c_wr_en = 1'b1;
    @(posedge clk);
    @(negedge clk);
    c_wr_en = 1'b0;

    op_kind = DMA_OP_STORE_I32;
    base_addr = 32'h0000_0200;
    rows = 16'd1;
    cols = 16'd2;
    stride_bytes = 16'd8;
    spm_region = 2'd2;
    spm_base = 9'd0;
    start = 1'b1;
    @(posedge clk);
    @(negedge clk);
    start = 1'b0;

    wait_done();

    if ({mem_bytes['h203], mem_bytes['h202], mem_bytes['h201], mem_bytes['h200]} !== 32'h11223344)
      $fatal(1, "DMA store_i32 failed word0");
    if ({mem_bytes['h207], mem_bytes['h206], mem_bytes['h205], mem_bytes['h204]} !== 32'h55667788)
      $fatal(1, "DMA store_i32 failed word1");

    @(negedge clk);
    c_wr_addr = 8'd0;
    c_wr_data = 32'h000000AA;
    c_wr_en = 1'b1;
    @(posedge clk);
    @(negedge clk);
    c_wr_addr = 8'd1;
    c_wr_data = 32'h000000BB;
    c_wr_en = 1'b1;
    @(posedge clk);
    @(negedge clk);
    c_wr_en = 1'b0;

    op_kind = DMA_OP_STORE_I8;
    base_addr = 32'h0000_0300;
    rows = 16'd1;
    cols = 16'd2;
    stride_bytes = 16'd4;
    spm_region = 2'd2;
    spm_base = 9'd0;
    start = 1'b1;
    @(posedge clk);
    @(negedge clk);
    start = 1'b0;

    wait_done();

    if (mem_bytes['h300] !== 8'hAA)
      $fatal(1, "DMA store_i8 failed byte0: %h", mem_bytes['h300]);
    if (mem_bytes['h301] !== 8'hBB)
      $fatal(1, "DMA store_i8 failed byte1: %h", mem_bytes['h301]);

    $display("tb_tinygpu_dma_tb PASS");
    $finish;
  end

endmodule
