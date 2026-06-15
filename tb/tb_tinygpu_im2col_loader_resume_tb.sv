module tb_tinygpu_im2col_loader_resume_tb;

  logic clk = 0;
  logic rst_n = 0;
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

  logic [7:0] memory [0:255];
  logic [7:0] tile [0:63];
  logic rd_pending;
  logic [31:0] rd_addr;
  integer read_count;

  always #5 clk = ~clk;
  assign mem_ready = 1'b1;

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

  always_ff @(posedge clk) begin
    mem_rvalid <= rd_pending;
    if (rd_pending)
      mem_rdata <= {memory[rd_addr+3], memory[rd_addr+2], memory[rd_addr+1], memory[rd_addr]};
    rd_pending <= mem_req;
    if (mem_req) begin
      rd_addr <= mem_addr;
      read_count <= read_count + 1;
    end
    if (spm_wr_en && spm_wstrb[0])
      tile[spm_addr] <= spm_wdata[7:0];
  end

  task automatic kick;
    begin
      @(negedge clk);
      start = 1'b1;
      @(negedge clk);
      start = 1'b0;
      wait(done);
      @(posedge clk);
    end
  endtask

  task automatic check_byte(input int addr, input int expected);
    begin
      if (tile[addr] !== expected[7:0])
        $fatal(1, "tile[%0d] expected %0d got %0d", addr, expected, tile[addr]);
    end
  endtask

  function automatic int input_value(input int y, input int x, input int ic);
    input_value = ((y * 4 + x) * 2) + ic + 1;
  endfunction

  initial begin
    start = 0;
    mem_rvalid = 0;
    mem_rdata = 0;
    rd_pending = 0;
    rd_addr = 0;
    read_count = 0;
    input_base = 32'h40;
    input_h = 16'd3;
    input_w = 16'd4;
    input_c = 16'd2;
    input_row_stride = 32'd8;
    kernel_h = 4'd3;
    kernel_w = 4'd3;
    stride_h = 4'd1;
    stride_w = 4'd1;
    pad_h = 4'd0;
    pad_w = 4'd1;
    tile_out_y = 16'd0;
    tile_out_x = 16'd1;
    output_w = 16'd3;
    active_rows = 16'd2;
    active_k = 16'd5;
    start_kh = 4'd0;
    start_kw = 4'd1;
    start_ic = 16'd1;

    for (int i = 0; i < 256; i++) memory[i] = 0;
    for (int i = 0; i < 64; i++) tile[i] = 8'hxx;
    for (int y = 0; y < 3; y++) begin
      for (int x = 0; x < 4; x++) begin
        for (int ic = 0; ic < 2; ic++) begin
          memory[8'h40 + (y * 8) + (x * 2) + ic] = 8'(((y * 4 + x) * 2) + ic + 1);
        end
      end
    end

    repeat (2) @(posedge clk);
    rst_n = 1;
    kick();

    check_byte(0,  input_value(0, 1, 1));
    check_byte(1,  input_value(0, 2, 0));
    check_byte(2,  input_value(0, 2, 1));
    check_byte(3,  input_value(1, 0, 0));
    check_byte(4,  input_value(1, 0, 1));
    check_byte(16, input_value(0, 2, 1));
    check_byte(17, input_value(0, 3, 0));
    check_byte(18, input_value(0, 3, 1));
    check_byte(19, input_value(1, 1, 0));
    check_byte(20, input_value(1, 1, 1));
    if (next_out_y !== 16'd1 || next_out_x !== 16'd0)
      $fatal(1, "next output mismatch: y=%0d x=%0d", next_out_y, next_out_x);
    if (next_kh !== 4'd1 || next_kw !== 4'd1 || next_ic !== 16'd0)
      $fatal(1, "next K mismatch: kh=%0d kw=%0d ic=%0d", next_kh, next_kw, next_ic);
    if (error) $fatal(1, "unexpected resume-case error");

    // Asymmetric padding case: top row only, all samples invalid, so no reads.
    tile_out_y = 16'd0;
    tile_out_x = 16'd0;
    input_h = 16'd2;
    input_w = 16'd3;
    input_c = 16'd1;
    input_row_stride = 32'd3;
    pad_h = 4'd1;
    pad_w = 4'd0;
    output_w = 16'd1;
    active_rows = 16'd1;
    active_k = 16'd3;
    start_kh = 4'd0;
    start_kw = 4'd0;
    start_ic = 16'd0;
    read_count = 0;
    for (int i = 0; i < 64; i++) tile[i] = 8'h55;

    kick();

    check_byte(0, 0);
    check_byte(1, 0);
    check_byte(2, 0);
    if (read_count !== 0)
      $fatal(1, "padding case should not issue reads, got %0d", read_count);
    if (error) $fatal(1, "unexpected padding-case error");

    $display("tb_tinygpu_im2col_loader_resume_tb PASS");
    $finish;
  end

endmodule
