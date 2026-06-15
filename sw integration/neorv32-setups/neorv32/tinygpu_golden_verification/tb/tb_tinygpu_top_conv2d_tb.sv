module tb_tinygpu_top_conv2d_tb;
  localparam logic [31:0] REG_CTRL          = 32'h00;
  localparam logic [31:0] REG_CMD_ADDR      = 32'h08;
  localparam logic [31:0] REG_DIRECT_OP     = 32'h0c;
  localparam logic [31:0] REG_SRC0_ADDR     = 32'h10;
  localparam logic [31:0] REG_SRC1_ADDR     = 32'h14;
  localparam logic [31:0] REG_DST_ADDR      = 32'h1c;
  localparam logic [31:0] REG_STRIDE0       = 32'h2c;
  localparam logic [31:0] REG_STRIDE1       = 32'h30;
  localparam logic [31:0] REG_STRIDE_DST    = 32'h34;
  localparam logic [31:0] REG_FLAGS         = 32'h38;
  localparam logic [31:0] REG_CONV_IN_HW    = 32'h58;
  localparam logic [31:0] REG_CONV_CHANNELS = 32'h5c;
  localparam logic [31:0] REG_CONV_CFG      = 32'h60;
  localparam logic [31:0] REG_CAPS          = 32'h64;
  localparam logic [31:0] CTRL_START        = 32'h1;
  localparam logic [31:0] CTRL_DIRECT       = 32'h8;
  localparam logic [31:0] FLAGS_I32_SIGNED  = 32'h60;

  logic clk = 0;
  logic rst_n = 0;
  logic mmio_valid, mmio_we;
  logic [31:0] mmio_addr, mmio_wdata, mmio_rdata;
  logic [3:0] mmio_wstrb;
  logic mmio_ready;
  logic mem_req, mem_we;
  logic [31:0] mem_addr, mem_wdata, mem_rdata;
  logic [3:0] mem_wstrb;
  logic mem_ready, mem_rvalid;
  logic irq;
  logic [7:0] memory [0:4095];
  logic rd_pending;
  logic [31:0] rd_addr;
  logic [31:0] caps;

  always #5 clk = ~clk;
  assign mem_ready = 1'b1;

  tinygpu_top dut (
    .clk(clk), .rst_n(rst_n),
    .mmio_valid(mmio_valid), .mmio_we(mmio_we), .mmio_addr(mmio_addr),
    .mmio_wdata(mmio_wdata), .mmio_wstrb(mmio_wstrb),
    .mmio_rdata(mmio_rdata), .mmio_ready(mmio_ready),
    .mem_req(mem_req), .mem_we(mem_we), .mem_addr(mem_addr),
    .mem_wdata(mem_wdata), .mem_wstrb(mem_wstrb),
    .mem_rdata(mem_rdata), .mem_ready(mem_ready), .mem_rvalid(mem_rvalid), .irq(irq)
  );

  always_ff @(posedge clk) begin
    mem_rvalid <= rd_pending;
    if (rd_pending)
      mem_rdata <= {memory[rd_addr+3], memory[rd_addr+2], memory[rd_addr+1], memory[rd_addr]};
    rd_pending <= mem_req && !mem_we;
    if (mem_req && !mem_we)
      rd_addr <= mem_addr;
    if (mem_req && mem_we)
      for (int i = 0; i < 4; i++)
        if (mem_wstrb[i]) memory[mem_addr+i] <= mem_wdata[8*i +: 8];
  end

  task automatic mmio_wr(input logic [31:0] addr, input logic [31:0] data);
    @(negedge clk);
    mmio_valid = 1; mmio_we = 1; mmio_addr = addr; mmio_wdata = data; mmio_wstrb = 4'hf;
    @(negedge clk);
    mmio_valid = 0; mmio_we = 0; mmio_addr = 0; mmio_wdata = 0; mmio_wstrb = 0;
  endtask

  task automatic mmio_rd(input logic [31:0] addr, output logic [31:0] data);
    @(negedge clk);
    mmio_valid = 1; mmio_we = 0; mmio_addr = addr; mmio_wstrb = 0;
    #1 data = mmio_rdata;
    @(negedge clk);
    mmio_valid = 0; mmio_addr = 0;
  endtask

  task automatic write_word(input int addr, input logic [31:0] data);
    memory[addr+0] = data[7:0];
    memory[addr+1] = data[15:8];
    memory[addr+2] = data[23:16];
    memory[addr+3] = data[31:24];
  endtask

  function automatic logic signed [31:0] read_word(input int addr);
    read_word = {memory[addr+3],memory[addr+2],memory[addr+1],memory[addr]};
  endfunction

  task automatic wait_command(input int limit);
    int cycles;
    cycles = 0;
    while (!dut.ctrl_busy && cycles < 20) begin @(posedge clk); cycles++; end
    while (dut.ctrl_busy && cycles < limit) begin @(posedge clk); cycles++; end
    if (dut.ctrl_busy) $fatal(1, "Conv2D command timeout");
    repeat (3) @(posedge clk);
  endtask

  task automatic check_word(input int addr, input int expected);
    if (read_word(addr) !== expected)
      $fatal(1, "result @%0h expected %0d got %0d", addr, expected, read_word(addr));
  endtask

  initial begin
    mmio_valid = 0; mmio_we = 0; mmio_addr = 0; mmio_wdata = 0; mmio_wstrb = 0;
    mem_rvalid = 0; mem_rdata = 0; rd_pending = 0; rd_addr = 0;
    for (int i = 0; i < 4096; i++) memory[i] = 0;
    repeat (2) @(posedge clk); rst_n = 1;

    mmio_rd(REG_CAPS, caps);
    if (!caps[16]) $fatal(1, "CAPS does not advertise Conv2D");
    if (caps[15:0] !== 16'h1044) $fatal(1, "CAPS tile mismatch: %h", caps);

    // Direct mode: 3x3 input, 3x3 all-ones kernel, stride 1, padding 1.
    for (int i = 0; i < 9; i++) memory[12'h100+i] = i+1;
    for (int i = 0; i < 9; i++) memory[12'h200+i] = 1;
    mmio_wr(REG_DIRECT_OP, 7);
    mmio_wr(REG_SRC0_ADDR, 12'h100);
    mmio_wr(REG_SRC1_ADDR, 12'h200);
    mmio_wr(REG_DST_ADDR, 12'h300);
    mmio_wr(REG_STRIDE0, 3);
    mmio_wr(REG_STRIDE1, 1);
    mmio_wr(REG_STRIDE_DST, 4);
    mmio_wr(REG_FLAGS, FLAGS_I32_SIGNED);
    mmio_wr(REG_CONV_IN_HW, {16'd3,16'd3});
    mmio_wr(REG_CONV_CHANNELS, {16'd1,16'd1});
    mmio_wr(REG_CONV_CFG, 32'h0011_1133);
    mmio_wr(REG_CTRL, CTRL_DIRECT | CTRL_START);
    wait_command(20000);
    check_word('h300,12); check_word('h304,21); check_word('h308,16);
    check_word('h30c,27); check_word('h310,45); check_word('h314,33);
    check_word('h318,24); check_word('h31c,39); check_word('h320,28);

    // Descriptor mode: 1x1, Cin=2, Cout=3, four output pixels.
    memory['h400]=1; memory['h401]=2; memory['h402]=3; memory['h403]=4;
    memory['h404]=5; memory['h405]=6; memory['h406]=7; memory['h407]=8;
    memory['h500]=1; memory['h501]=2; memory['h502]=3;
    memory['h503]=4; memory['h504]=5; memory['h505]=6;
    write_word('h700+0*4, 7);
    write_word('h700+1*4, FLAGS_I32_SIGNED);
    write_word('h700+2*4, 'h400);
    write_word('h700+3*4, 'h500);
    write_word('h700+4*4, 0);
    write_word('h700+5*4, 'h600);
    write_word('h700+6*4, 0); write_word('h700+7*4, 0); write_word('h700+8*4, 0);
    write_word('h700+9*4, 4); write_word('h700+10*4, 3); write_word('h700+11*4, 12);
    write_word('h700+12*4, 0); write_word('h700+13*4, 0);
    write_word('h700+14*4, 1);
    write_word('h700+15*4, {16'd2,16'd2});
    write_word('h700+16*4, {16'd3,16'd2});
    write_word('h700+17*4, 32'h0000_1111);
    mmio_wr(REG_CTRL, 0);
    mmio_wr(REG_CMD_ADDR, 'h700);
    mmio_wr(REG_CTRL, CTRL_START);
    wait_command(20000);
    check_word('h600,9);  check_word('h604,12); check_word('h608,15);
    check_word('h60c,19); check_word('h610,26); check_word('h614,33);
    check_word('h618,29); check_word('h61c,40); check_word('h620,51);
    check_word('h624,39); check_word('h628,54); check_word('h62c,69);

    $display("tb_tinygpu_top_conv2d_tb PASS");
    $finish;
  end
endmodule
