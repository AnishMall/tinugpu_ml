module tb_tinygpu_gemm_tile_tb;

  localparam logic [1:0] DMA_OP_LOAD_I8   = 2'd0;
  localparam logic [1:0] DMA_OP_STORE_I32 = 2'd2;

  logic clk;
  logic rst_n;

  logic        dma_start;
  logic        dma_busy;
  logic        dma_done;
  logic        dma_error;
  logic [1:0]  dma_op_kind;
  logic [31:0] dma_base_addr;
  logic [15:0] dma_rows;
  logic [15:0] dma_cols;
  logic [15:0] dma_stride_bytes;
  logic [1:0]  dma_spm_region;
  logic [8:0]  dma_spm_base;

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

  logic        clear_acc;
  logic        mac_en;
  logic signed [7:0]  a_vec [0:3];
  logic signed [7:0]  b_vec [0:3];
  logic [3:0]         row_mask;
  logic [3:0]         col_mask;
  logic signed [31:0] c_tile [0:3][0:3];

  logic        epi_start;
  logic        epi_busy;
  logic        epi_done;
  logic [31:0] flags;
  logic signed [31:0] scale;
  logic signed [15:0] shift;
  logic signed [15:0] zero_point;
  logic signed [31:0] bias [0:3];
  logic signed [31:0] c_epi_i32 [0:3][0:3];
  logic signed [7:0]  c_epi_i8  [0:3][0:3];

  logic [7:0] mem_bytes [0:4095];
  logic       rd_pending_q;
  logic [31:0] rd_addr_q;

  tinygpu_dma u_dma (
    .clk          (clk),
    .rst_n        (rst_n),
    .start        (dma_start),
    .busy         (dma_busy),
    .done         (dma_done),
    .error        (dma_error),
    .op_kind      (dma_op_kind),
    .base_addr    (dma_base_addr),
    .rows         (dma_rows),
    .cols         (dma_cols),
    .stride_bytes (dma_stride_bytes),
    .spm_region   (dma_spm_region),
    .spm_base     (dma_spm_base),
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

  tinygpu_array4x4 u_array (
    .clk       (clk),
    .rst_n     (rst_n),
    .clear_acc (clear_acc),
    .mac_en    (mac_en),
    .a_vec     (a_vec),
    .b_vec     (b_vec),
    .row_mask  (row_mask),
    .col_mask  (col_mask),
    .c_tile    (c_tile)
  );

  tinygpu_epilogue u_epi (
    .clk        (clk),
    .rst_n      (rst_n),
    .start      (epi_start),
    .busy       (epi_busy),
    .done       (epi_done),
    .flags      (flags),
    .scale      (scale),
    .shift      (shift),
    .zero_point (zero_point),
    .c_in       (c_tile),
    .bias       (bias),
    .row_mask   (row_mask),
    .col_mask   (col_mask),
    .c_out_i32  (c_epi_i32),
    .c_out_i8   (c_epi_i8)
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

  task automatic wait_dma_done(input int max_cycles);
    int cycles;
    begin
      cycles = 0;
      while (!dma_done && cycles < max_cycles) begin
        @(posedge clk);
        cycles++;
      end
      if (!dma_done)
        $fatal(1, "DMA timeout after %0d cycles", max_cycles);
      @(negedge clk);
    end
  endtask

  task automatic wait_epi_done(input int max_cycles);
    int cycles;
    begin
      cycles = 0;
      while (!epi_done && cycles < max_cycles) begin
        @(posedge clk);
        cycles++;
      end
      if (!epi_done)
        $fatal(1, "Epilogue timeout after %0d cycles", max_cycles);
      @(negedge clk);
    end
  endtask

  initial begin
    rst_n = 1'b0;
    dma_start = 1'b0;
    dma_op_kind = '0;
    dma_base_addr = '0;
    dma_rows = '0;
    dma_cols = '0;
    dma_stride_bytes = '0;
    dma_spm_region = '0;
    dma_spm_base = '0;
    c_wr_en = 1'b0;
    c_wr_addr = '0;
    c_wr_data = '0;
    c_rd_addr = '0;
    clear_acc = 1'b0;
    mac_en = 1'b0;
    row_mask = 4'b0011;
    col_mask = 4'b0011;
    flags = 32'd0;
    scale = 32'sd1;
    shift = 16'sd0;
    zero_point = 16'sd0;
    epi_start = 1'b0;
    for (int i = 0; i < 4; i++) begin
      a_rd_addr[i] = '0;
      b_rd_addr[i] = '0;
      bias[i] = '0;
      a_vec[i] = '0;
      b_vec[i] = '0;
    end

    repeat (2) @(posedge clk);
    rst_n = 1'b1;

    // A = [[1,2],[3,4]]
    mem_bytes['h100] = 8'd1;
    mem_bytes['h101] = 8'd2;
    mem_bytes['h102] = 8'd3;
    mem_bytes['h103] = 8'd4;

    // B = [[5,6],[7,8]]
    mem_bytes['h200] = 8'd5;
    mem_bytes['h201] = 8'd6;
    mem_bytes['h202] = 8'd7;
    mem_bytes['h203] = 8'd8;

    // Load A tile into SPM
    @(negedge clk);
    dma_op_kind = DMA_OP_LOAD_I8;
    dma_base_addr = 32'h0000_0100;
    dma_rows = 16'd2;
    dma_cols = 16'd2;
    dma_stride_bytes = 16'd2;
    dma_spm_region = 2'd0;
    dma_spm_base = 9'd0;
    dma_start = 1'b1;
    @(posedge clk);
    @(negedge clk);
    dma_start = 1'b0;
    wait_dma_done(200);

    // Load B tile into SPM
    @(negedge clk);
    dma_op_kind = DMA_OP_LOAD_I8;
    dma_base_addr = 32'h0000_0200;
    dma_rows = 16'd2;
    dma_cols = 16'd2;
    dma_stride_bytes = 16'd2;
    dma_spm_region = 2'd1;
    dma_spm_base = 9'd0;
    dma_start = 1'b1;
    @(posedge clk);
    @(negedge clk);
    dma_start = 1'b0;
    wait_dma_done(200);

    // Clear accumulators
    @(negedge clk);
    clear_acc = 1'b1;
    @(posedge clk);
    @(negedge clk);
    clear_acc = 1'b0;

    // kk = 0
    a_rd_addr[0] = 8'd0;
    a_rd_addr[1] = 8'd16;
    a_rd_addr[2] = 8'd0;
    a_rd_addr[3] = 8'd0;
    b_rd_addr[0] = 8'd0;
    b_rd_addr[1] = 8'd1;
    b_rd_addr[2] = 8'd0;
    b_rd_addr[3] = 8'd0;
    #1;
    a_vec[0] = a_rd_data[0];
    a_vec[1] = a_rd_data[1];
    a_vec[2] = a_rd_data[2];
    a_vec[3] = a_rd_data[3];
    b_vec[0] = b_rd_data[0];
    b_vec[1] = b_rd_data[1];
    b_vec[2] = b_rd_data[2];
    b_vec[3] = b_rd_data[3];
    @(negedge clk);
    mac_en = 1'b1;
    @(posedge clk);
    @(negedge clk);
    mac_en = 1'b0;

    // kk = 1
    a_rd_addr[0] = 8'd1;
    a_rd_addr[1] = 8'd17;
    a_rd_addr[2] = 8'd0;
    a_rd_addr[3] = 8'd0;
    b_rd_addr[0] = 8'd4;
    b_rd_addr[1] = 8'd5;
    b_rd_addr[2] = 8'd0;
    b_rd_addr[3] = 8'd0;
    #1;
    a_vec[0] = a_rd_data[0];
    a_vec[1] = a_rd_data[1];
    a_vec[2] = a_rd_data[2];
    a_vec[3] = a_rd_data[3];
    b_vec[0] = b_rd_data[0];
    b_vec[1] = b_rd_data[1];
    b_vec[2] = b_rd_data[2];
    b_vec[3] = b_rd_data[3];
    @(negedge clk);
    mac_en = 1'b1;
    @(posedge clk);
    @(negedge clk);
    mac_en = 1'b0;

    if (c_tile[0][0] !== 32'sd19) $fatal(1, "Raw c00 mismatch: %0d", c_tile[0][0]);
    if (c_tile[0][1] !== 32'sd22) $fatal(1, "Raw c01 mismatch: %0d", c_tile[0][1]);
    if (c_tile[1][0] !== 32'sd43) $fatal(1, "Raw c10 mismatch: %0d", c_tile[1][0]);
    if (c_tile[1][1] !== 32'sd50) $fatal(1, "Raw c11 mismatch: %0d", c_tile[1][1]);

    // Epilogue pass-through
    @(negedge clk);
    epi_start = 1'b1;
    @(posedge clk);
    @(negedge clk);
    epi_start = 1'b0;
    wait_epi_done(50);

    if (c_epi_i32[0][0] !== 32'sd19) $fatal(1, "Epi c00 mismatch: %0d", c_epi_i32[0][0]);
    if (c_epi_i32[0][1] !== 32'sd22) $fatal(1, "Epi c01 mismatch: %0d", c_epi_i32[0][1]);
    if (c_epi_i32[1][0] !== 32'sd43) $fatal(1, "Epi c10 mismatch: %0d", c_epi_i32[1][0]);
    if (c_epi_i32[1][1] !== 32'sd50) $fatal(1, "Epi c11 mismatch: %0d", c_epi_i32[1][1]);

    // Stage epilogue output into C scratchpad
    @(negedge clk);
    c_wr_addr = 8'd0;
    c_wr_data = c_epi_i32[0][0];
    c_wr_en = 1'b1;
    @(posedge clk);
    @(negedge clk);
    c_wr_addr = 8'd1;
    c_wr_data = c_epi_i32[0][1];
    c_wr_en = 1'b1;
    @(posedge clk);
    @(negedge clk);
    c_wr_addr = 8'd4;
    c_wr_data = c_epi_i32[1][0];
    c_wr_en = 1'b1;
    @(posedge clk);
    @(negedge clk);
    c_wr_addr = 8'd5;
    c_wr_data = c_epi_i32[1][1];
    c_wr_en = 1'b1;
    @(posedge clk);
    @(negedge clk);
    c_wr_en = 1'b0;

    // Store C tile back to memory
    @(negedge clk);
    dma_op_kind = DMA_OP_STORE_I32;
    dma_base_addr = 32'h0000_0300;
    dma_rows = 16'd2;
    dma_cols = 16'd2;
    dma_stride_bytes = 16'd8;
    dma_spm_region = 2'd2;
    dma_spm_base = 9'd0;
    dma_start = 1'b1;
    @(posedge clk);
    @(negedge clk);
    dma_start = 1'b0;
    wait_dma_done(200);

    if (read_word('h300) !== 32'sd19) $fatal(1, "Mem c00 mismatch: %0d", read_word('h300));
    if (read_word('h304) !== 32'sd22) $fatal(1, "Mem c01 mismatch: %0d", read_word('h304));
    if (read_word('h308) !== 32'sd43) $fatal(1, "Mem c10 mismatch: %0d", read_word('h308));
    if (read_word('h30c) !== 32'sd50) $fatal(1, "Mem c11 mismatch: %0d", read_word('h30c));

    $display("tb_tinygpu_gemm_tile_tb PASS");
    $finish;
  end

endmodule
