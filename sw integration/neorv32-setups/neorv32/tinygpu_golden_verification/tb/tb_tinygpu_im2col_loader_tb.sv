module tb_tinygpu_im2col_loader_tb;
  logic clk = 0;
  logic rst_n = 0;
  logic start;
  logic busy, done, error;
  logic mem_req;
  logic [31:0] mem_addr;
  logic [31:0] mem_rdata;
  logic mem_ready, mem_rvalid;
  logic spm_wr_en;
  logic [8:0] spm_addr;
  logic [31:0] spm_wdata;
  logic [3:0] spm_wstrb;
  logic [15:0] next_out_y, next_out_x;
  logic [3:0] next_kh, next_kw;
  logic [15:0] next_ic;
  logic [7:0] memory [0:255];
  logic [7:0] tile [0:63];
  logic rd_pending;
  logic [31:0] rd_addr;

  always #5 clk = ~clk;
  assign mem_ready = 1'b1;

  tinygpu_im2col_loader dut (
    .clk(clk), .rst_n(rst_n), .start(start), .busy(busy), .done(done), .error(error),
    .input_base(32'h40), .input_h(16'd3), .input_w(16'd3), .input_c(16'd1),
    .input_row_stride(32'd3), .kernel_h(4'd3), .kernel_w(4'd3),
    .stride_h(4'd1), .stride_w(4'd1), .pad_h(4'd1), .pad_w(4'd1),
    .tile_out_y(16'd0), .tile_out_x(16'd0), .output_w(16'd3),
    .active_rows(16'd4), .active_k(16'd9), .start_kh(4'd0), .start_kw(4'd0), .start_ic(16'd0),
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
    if (mem_req)
      rd_addr <= mem_addr;
    if (spm_wr_en && spm_wstrb[0])
      tile[spm_addr] <= spm_wdata[7:0];
  end

  task automatic check_byte(input int addr, input int expected);
    if (tile[addr] !== expected[7:0])
      $fatal(1, "im2col[%0d] expected %0d got %0d", addr, expected, tile[addr]);
  endtask

  initial begin
    start = 0;
    mem_rvalid = 0;
    mem_rdata = 0;
    rd_pending = 0;
    rd_addr = 0;
    for (int i = 0; i < 256; i++) memory[i] = 0;
    for (int i = 0; i < 64; i++) tile[i] = 8'hxx;
    for (int i = 0; i < 9; i++) memory[8'h40+i] = i + 1;

    repeat (2) @(posedge clk);
    rst_n = 1;
    @(negedge clk); start = 1;
    @(negedge clk); start = 0;
    wait(done);
    @(posedge clk);

    // Output (0,0): [0 0 0; 0 1 2; 0 4 5]
    check_byte(0,0); check_byte(1,0); check_byte(2,0);
    check_byte(3,0); check_byte(4,1); check_byte(5,2);
    check_byte(6,0); check_byte(7,4); check_byte(8,5);
    // Output (0,1): [0 0 0; 1 2 3; 4 5 6]
    check_byte(16+0,0); check_byte(16+1,0); check_byte(16+2,0);
    check_byte(16+3,1); check_byte(16+4,2); check_byte(16+5,3);
    check_byte(16+6,4); check_byte(16+7,5); check_byte(16+8,6);
    if ({next_out_y,next_out_x} !== {16'd1,16'd1})
      $fatal(1, "next output position mismatch: y=%0d x=%0d", next_out_y, next_out_x);
    if (error) $fatal(1, "unexpected im2col error");
    $display("tb_tinygpu_im2col_loader_tb PASS");
    $finish;
  end
endmodule
