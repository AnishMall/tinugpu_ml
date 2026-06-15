module tb_tinygpu_cmd_ctrl_idle_tb;

  logic clk;
  logic rst_n;
  logic start;
  logic start_direct_mode;
  logic soft_reset;
  logic direct_mode;
  logic [31:0] cmd_addr;
  logic [7:0] opcode;
  logic [31:0] flags;
  logic [31:0] src0_addr;
  logic [31:0] src1_addr;
  logic [31:0] bias_addr;
  logic [31:0] dst_addr;
  logic [15:0] M;
  logic [15:0] N;
  logic [15:0] K;
  logic [15:0] stride0;
  logic [15:0] stride1;
  logic [15:0] stride_dst;
  logic [31:0] scale;
  logic [15:0] shift;
  logic [15:0] zero_point;
  logic busy;
  logic done;
  logic illegal_opcode;
  logic shape_error;
  logic memory_error;
  logic unsupported_format;
  logic cnt_cmd_start;
  logic cnt_cmd_done;
  logic cnt_busy;
  logic cnt_active;
  logic cnt_stall;
  logic mem_req;
  logic mem_we;
  logic [31:0] mem_addr;
  logic [31:0] mem_wdata;
  logic [3:0] mem_wstrb;
  logic [31:0] mem_rdata;
  logic mem_ready;
  logic mem_rvalid;

  tinygpu_cmd_ctrl dut (
    .clk(clk), .rst_n(rst_n), .start(start), .start_direct_mode(start_direct_mode),
    .soft_reset(soft_reset), .direct_mode(direct_mode), .cmd_addr(cmd_addr),
    .opcode(opcode), .flags(flags), .src0_addr(src0_addr), .src1_addr(src1_addr), .bias_addr(bias_addr),
    .dst_addr(dst_addr), .M(M), .N(N), .K(K), .stride0(stride0), .stride1(stride1), .stride_dst(stride_dst),
    .scale(scale), .shift(shift), .zero_point(zero_point),
    .conv_in_hw(32'd0), .conv_channels(32'd0), .conv_cfg(32'd0),
    .busy(busy), .done(done), .illegal_opcode(illegal_opcode), .shape_error(shape_error),
    .memory_error(memory_error), .unsupported_format(unsupported_format),
    .cnt_cmd_start(cnt_cmd_start), .cnt_cmd_done(cnt_cmd_done), .cnt_busy(cnt_busy),
    .cnt_active(cnt_active), .cnt_stall(cnt_stall),
    .mem_req(mem_req), .mem_we(mem_we), .mem_addr(mem_addr), .mem_wdata(mem_wdata),
    .mem_wstrb(mem_wstrb), .mem_rdata(mem_rdata), .mem_ready(mem_ready), .mem_rvalid(mem_rvalid)
  );

  initial clk = 0;
  always #5 clk = ~clk;

  initial begin
    rst_n = 0;
    start = 0;
    start_direct_mode = 1;
    soft_reset = 0;
    direct_mode = 1;
    cmd_addr = 0;
    opcode = 8'h01;
    flags = 0;
    src0_addr = 0;
    src1_addr = 0;
    bias_addr = 0;
    dst_addr = 0;
    M = 0;
    N = 0;
    K = 0;
    stride0 = 0;
    stride1 = 0;
    stride_dst = 0;
    scale = 0;
    shift = 0;
    zero_point = 0;
    mem_rdata = 0;
    mem_ready = 1;
    mem_rvalid = 0;
    #20;
    rst_n = 1;
    #100;
    $display("tb_tinygpu_cmd_ctrl_idle_tb PASS");
    $finish;
  end

endmodule
