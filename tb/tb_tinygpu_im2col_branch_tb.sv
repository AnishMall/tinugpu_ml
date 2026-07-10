module tb_tinygpu_im2col_branch_tb;

  logic clk = 1'b0;
  logic rst_n = 1'b0;
  logic start;
  logic busy;
  logic done;
  logic error;
  logic [31:0] input_base;
  logic [15:0] input_h;
  logic [15:0] input_w;
  logic [15:0] input_c;
  logic [31:0] input_row_stride;
  logic [3:0] kernel_h;
  logic [3:0] kernel_w;
  logic [3:0] stride_h;
  logic [3:0] stride_w;
  logic [3:0] pad_h;
  logic [3:0] pad_w;
  logic [15:0] tile_out_y;
  logic [15:0] tile_out_x;
  logic [15:0] output_w;
  logic [15:0] active_rows;
  logic [15:0] active_k;
  logic [3:0] start_kh;
  logic [3:0] start_kw;
  logic [15:0] start_ic;
  logic [15:0] next_out_y;
  logic [15:0] next_out_x;
  logic [3:0] next_kh;
  logic [3:0] next_kw;
  logic [15:0] next_ic;
  logic mem_req;
  logic [31:0] mem_addr;
  logic [31:0] mem_rdata;
  logic mem_ready;
  logic mem_rvalid;
  logic spm_wr_en;
  logic [8:0] spm_addr;
  logic [31:0] spm_wdata;
  logic [3:0] spm_wstrb;

  logic [7:0] memory [0:511];
  logic [7:0] tile [0:127];
  logic rd_pending_q;
  logic [31:0] rd_addr_q;
  int ready_delay_q;
  int read_count;

  always #5 clk = ~clk;
  assign mem_ready = (ready_delay_q == 0);

  tinygpu_im2col_loader dut (
    .clk(clk), .rst_n(rst_n), .start(start), .busy(busy), .done(done), .error(error),
    .input_base(input_base), .input_h(input_h), .input_w(input_w), .input_c(input_c),
    .input_row_stride(input_row_stride), .kernel_h(kernel_h), .kernel_w(kernel_w),
    .stride_h(stride_h), .stride_w(stride_w), .pad_h(pad_h), .pad_w(pad_w),
    .tile_out_y(tile_out_y), .tile_out_x(tile_out_x), .output_w(output_w),
    .active_rows(active_rows), .active_k(active_k),
    .start_kh(start_kh), .start_kw(start_kw), .start_ic(start_ic),
    .next_out_y(next_out_y), .next_out_x(next_out_x),
    .next_kh(next_kh), .next_kw(next_kw), .next_ic(next_ic),
    .mem_req(mem_req), .mem_addr(mem_addr), .mem_rdata(mem_rdata),
    .mem_ready(mem_ready), .mem_rvalid(mem_rvalid),
    .spm_wr_en(spm_wr_en), .spm_addr(spm_addr), .spm_wdata(spm_wdata), .spm_wstrb(spm_wstrb)
  );

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      rd_pending_q <= 1'b0;
      rd_addr_q <= '0;
      mem_rvalid <= 1'b0;
      mem_rdata <= '0;
      ready_delay_q <= 0;
      read_count <= 0;
      for (int i = 0; i < 512; i++) memory[i] <= '0;
      for (int i = 0; i < 128; i++) tile[i] <= '0;
    end else begin
      mem_rvalid <= rd_pending_q;
      if (rd_pending_q) begin
        mem_rdata <= {memory[rd_addr_q+3], memory[rd_addr_q+2], memory[rd_addr_q+1], memory[rd_addr_q]};
      end
      rd_pending_q <= 1'b0;
      if (mem_req && mem_ready) begin
        rd_pending_q <= 1'b1;
        rd_addr_q <= mem_addr;
        read_count <= read_count + 1;
      end
      if (spm_wr_en && spm_wstrb[0])
        tile[spm_addr] <= spm_wdata[7:0];
      if (ready_delay_q > 0)
        ready_delay_q <= ready_delay_q - 1;
    end
  end

  task automatic set_defaults;
    begin
      input_base = 32'h40;
      input_h = 16'd4;
      input_w = 16'd5;
      input_c = 16'd2;
      input_row_stride = 32'd10;
      kernel_h = 4'd3;
      kernel_w = 4'd3;
      stride_h = 4'd1;
      stride_w = 4'd1;
      pad_h = 4'd1;
      pad_w = 4'd1;
      tile_out_y = 16'd0;
      tile_out_x = 16'd0;
      output_w = 16'd5;
      active_rows = 16'd4;
      active_k = 16'd16;
      start_kh = 4'd0;
      start_kw = 4'd0;
      start_ic = 16'd0;
      read_count = 0;
      for (int i = 0; i < 128; i++) tile[i] = 8'h5a;
    end
  endtask

  task automatic kick_expect_done(input string name, input int max_cycles = 500);
    int cycles;
    begin
      @(negedge clk);
      start = 1'b1;
      @(negedge clk);
      start = 1'b0;
      cycles = 0;
      while (!done && cycles < max_cycles) begin
        @(posedge clk);
        cycles++;
      end
      if (!done) $fatal(1, "%s done timeout", name);
      if (error) $fatal(1, "%s unexpected error", name);
      @(negedge clk);
    end
  endtask

  task automatic kick_expect_error(input string name);
    int cycles;
    begin
      @(negedge clk);
      start = 1'b1;
      @(negedge clk);
      start = 1'b0;
      cycles = 0;
      while (!error && cycles < 30) begin
        @(posedge clk);
        cycles++;
      end
      if (!error) $fatal(1, "%s error timeout", name);
      @(negedge clk);
    end
  endtask

  function automatic int input_value(input int y, input int x, input int ic);
    input_value = ((y * 5 + x) * 2) + ic + 1;
  endfunction

  task automatic init_memory;
    begin
      for (int i = 0; i < 512; i++) memory[i] = '0;
      for (int y = 0; y < 4; y++) begin
        for (int x = 0; x < 5; x++) begin
          for (int ic = 0; ic < 2; ic++)
            memory[8'h40 + y * 10 + x * 2 + ic] = 8'(input_value(y, x, ic));
        end
      end
    end
  endtask

  initial begin
    start = 1'b0;
    mem_rvalid = 1'b0;
    mem_rdata = '0;
    rd_pending_q = 1'b0;
    rd_addr_q = '0;
    set_defaults();

    repeat (2) @(posedge clk);
    rst_n = 1'b1;
    init_memory();

    // Invalid parameter branches.
    set_defaults(); active_rows = 16'd0; kick_expect_error("active_rows zero");
    set_defaults(); active_k = 16'd0; kick_expect_error("active_k zero");
    set_defaults(); output_w = 16'd0; kick_expect_error("output_w zero");
    set_defaults(); input_c = 16'd0; kick_expect_error("input_c zero");
    set_defaults(); kernel_h = 4'd0; kick_expect_error("kernel_h zero");
    set_defaults(); kernel_w = 4'd0; kick_expect_error("kernel_w zero");

    // 1x1 stride-1 no padding.
    set_defaults();
    kernel_h = 4'd1;
    kernel_w = 4'd1;
    pad_h = 4'd0;
    pad_w = 4'd0;
    active_rows = 16'd2;
    active_k = 16'd2;
    kick_expect_done("1x1");
    if (tile[0] !== 8'(input_value(0, 0, 0)) || tile[1] !== 8'(input_value(0, 0, 1)))
      $fatal(1, "1x1 tile mismatch");

    // 3x3 stride variants and padding branches.
    set_defaults();
    stride_h = 4'd2;
    stride_w = 4'd1;
    pad_h = 4'd1;
    pad_w = 4'd0;
    active_rows = 16'd2;
    active_k = 16'd8;
    kick_expect_done("stride_21_pad_10");
    if (read_count == 0) $fatal(1, "stride_21 should issue reads");

    set_defaults();
    stride_h = 4'd1;
    stride_w = 4'd2;
    pad_h = 4'd0;
    pad_w = 4'd1;
    tile_out_x = 16'd1;
    active_rows = 16'd2;
    active_k = 16'd6;
    ready_delay_q = 2;
    kick_expect_done("stride_12_pad_01");
    if (read_count == 0) $fatal(1, "stride_12 should issue reads");

    set_defaults();
    stride_h = 4'd2;
    stride_w = 4'd2;
    pad_h = 4'd1;
    pad_w = 4'd1;
    active_rows = 16'd4;
    active_k = 16'd9;
    kick_expect_done("stride_22_pad_11");
    if (tile[0] !== 8'd0) $fatal(1, "padded first element should be zero");
    if (next_out_x === 16'd0 && next_out_y === 16'd0)
      $fatal(1, "next output did not advance");

    // Resume through ic -> kw -> kh rollover.
    set_defaults();
    tile_out_y = 16'd0;
    tile_out_x = 16'd1;
    output_w = 16'd2;
    active_rows = 16'd2;
    active_k = 16'd5;
    start_kh = 4'd0;
    start_kw = 4'd2;
    start_ic = 16'd1;
    kick_expect_done("resume_rollover");
    if (next_kh === 4'd0 && next_kw === 4'd2 && next_ic === 16'd1)
      $fatal(1, "resume next K did not advance");

    $display("tb_tinygpu_im2col_branch_tb PASS");
    $finish;
  end

endmodule
