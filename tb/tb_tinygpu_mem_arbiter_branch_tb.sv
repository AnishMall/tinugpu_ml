module tb_tinygpu_mem_arbiter_branch_tb;

  localparam logic [2:0] CLIENT_DMA  = 3'd0;
  localparam logic [2:0] CLIENT_DESC = 3'd1;
  localparam logic [2:0] CLIENT_CONV = 3'd2;
  localparam logic [2:0] CLIENT_VEC  = 3'd3;
  localparam logic [2:0] CLIENT_BIAS = 3'd4;

  logic [2:0] select_i;
  logic dma_req_i, dma_we_i;
  logic [31:0] dma_addr_i, dma_wdata_i;
  logic [3:0] dma_wstrb_i;
  logic desc_req_i, desc_we_i;
  logic [31:0] desc_addr_i, desc_wdata_i;
  logic [3:0] desc_wstrb_i;
  logic conv_req_i;
  logic [31:0] conv_addr_i;
  logic vec_req_i, vec_we_i;
  logic [31:0] vec_addr_i, vec_wdata_i;
  logic [3:0] vec_wstrb_i;
  logic bias_req_i, bias_we_i;
  logic [31:0] bias_addr_i, bias_wdata_i;
  logic [3:0] bias_wstrb_i;
  logic mem_req_o, mem_we_o;
  logic [31:0] mem_addr_o, mem_wdata_o;
  logic [3:0] mem_wstrb_o;
  logic [31:0] mem_rdata_i;
  logic mem_ready_i, mem_rvalid_i;
  logic [31:0] client_rdata_o;
  logic dma_ready_o, dma_rvalid_o;
  logic desc_ready_o, desc_rvalid_o;
  logic conv_ready_o, conv_rvalid_o;
  logic vec_ready_o, vec_rvalid_o;
  logic bias_ready_o, bias_rvalid_o;

  tinygpu_mem_arbiter dut (
    .select_i(select_i),
    .dma_req_i(dma_req_i), .dma_we_i(dma_we_i), .dma_addr_i(dma_addr_i), .dma_wdata_i(dma_wdata_i), .dma_wstrb_i(dma_wstrb_i),
    .desc_req_i(desc_req_i), .desc_we_i(desc_we_i), .desc_addr_i(desc_addr_i), .desc_wdata_i(desc_wdata_i), .desc_wstrb_i(desc_wstrb_i),
    .conv_req_i(conv_req_i), .conv_addr_i(conv_addr_i),
    .vec_req_i(vec_req_i), .vec_we_i(vec_we_i), .vec_addr_i(vec_addr_i), .vec_wdata_i(vec_wdata_i), .vec_wstrb_i(vec_wstrb_i),
    .bias_req_i(bias_req_i), .bias_we_i(bias_we_i), .bias_addr_i(bias_addr_i), .bias_wdata_i(bias_wdata_i), .bias_wstrb_i(bias_wstrb_i),
    .mem_req_o(mem_req_o), .mem_we_o(mem_we_o), .mem_addr_o(mem_addr_o), .mem_wdata_o(mem_wdata_o), .mem_wstrb_o(mem_wstrb_o),
    .mem_rdata_i(mem_rdata_i), .mem_ready_i(mem_ready_i), .mem_rvalid_i(mem_rvalid_i),
    .client_rdata_o(client_rdata_o),
    .dma_ready_o(dma_ready_o), .dma_rvalid_o(dma_rvalid_o),
    .desc_ready_o(desc_ready_o), .desc_rvalid_o(desc_rvalid_o),
    .conv_ready_o(conv_ready_o), .conv_rvalid_o(conv_rvalid_o),
    .vec_ready_o(vec_ready_o), .vec_rvalid_o(vec_rvalid_o),
    .bias_ready_o(bias_ready_o), .bias_rvalid_o(bias_rvalid_o)
  );

  task automatic clear_inputs;
    begin
      select_i = CLIENT_DMA;
      dma_req_i = 0; dma_we_i = 0; dma_addr_i = 32'h1000; dma_wdata_i = 32'hd00d_0000; dma_wstrb_i = 4'h1;
      desc_req_i = 0; desc_we_i = 0; desc_addr_i = 32'h2000; desc_wdata_i = 32'hd00d_0001; desc_wstrb_i = 4'h2;
      conv_req_i = 0; conv_addr_i = 32'h3000;
      vec_req_i = 0; vec_we_i = 0; vec_addr_i = 32'h4000; vec_wdata_i = 32'hd00d_0003; vec_wstrb_i = 4'h4;
      bias_req_i = 0; bias_we_i = 0; bias_addr_i = 32'h5000; bias_wdata_i = 32'hd00d_0004; bias_wstrb_i = 4'h8;
      mem_rdata_i = 32'h55aa_1234;
      mem_ready_i = 0;
      mem_rvalid_i = 0;
      #1;
    end
  endtask

  task automatic check_selected(
    input logic [2:0] sel,
    input logic req,
    input logic we,
    input logic [31:0] addr,
    input logic [31:0] wdata,
    input logic [3:0] wstrb
  );
    begin
      select_i = sel;
      mem_ready_i = 1'b1;
      mem_rvalid_i = 1'b1;
      #1;
      if (mem_req_o !== req) $fatal(1, "req mismatch sel=%0d", sel);
      if (mem_we_o !== we) $fatal(1, "we mismatch sel=%0d", sel);
      if (mem_addr_o !== addr) $fatal(1, "addr mismatch sel=%0d got %h", sel, mem_addr_o);
      if (mem_wdata_o !== wdata) $fatal(1, "wdata mismatch sel=%0d got %h", sel, mem_wdata_o);
      if (mem_wstrb_o !== wstrb) $fatal(1, "wstrb mismatch sel=%0d got %h", sel, mem_wstrb_o);
      if (client_rdata_o !== mem_rdata_i) $fatal(1, "rdata passthrough mismatch");
    end
  endtask

  initial begin
    clear_inputs();
    // No-client idle path.
    check_selected(CLIENT_DMA, 1'b0, 1'b0, dma_addr_i, dma_wdata_i, dma_wstrb_i);

    dma_req_i = 1; dma_we_i = 1;
    desc_req_i = 1; desc_we_i = 0;
    conv_req_i = 1;
    vec_req_i = 1; vec_we_i = 1;
    bias_req_i = 1; bias_we_i = 0;

    check_selected(CLIENT_DMA, 1'b1, 1'b1, dma_addr_i, dma_wdata_i, dma_wstrb_i);
    if (!dma_ready_o || !dma_rvalid_o || desc_ready_o || vec_ready_o || bias_ready_o)
      $fatal(1, "DMA ready routing mismatch");

    check_selected(CLIENT_DESC, 1'b1, 1'b0, desc_addr_i, desc_wdata_i, desc_wstrb_i);
    if (!desc_ready_o || !desc_rvalid_o || dma_ready_o || conv_ready_o)
      $fatal(1, "DESC ready routing mismatch");

    check_selected(CLIENT_CONV, 1'b1, 1'b0, conv_addr_i, 32'd0, 4'd0);
    if (!conv_ready_o || !conv_rvalid_o || mem_we_o)
      $fatal(1, "CONV routing mismatch");

    check_selected(CLIENT_VEC, 1'b1, 1'b1, vec_addr_i, vec_wdata_i, vec_wstrb_i);
    if (!vec_ready_o || !vec_rvalid_o || bias_ready_o)
      $fatal(1, "VEC ready routing mismatch");

    check_selected(CLIENT_BIAS, 1'b1, 1'b0, bias_addr_i, bias_wdata_i, bias_wstrb_i);
    if (!bias_ready_o || !bias_rvalid_o || dma_ready_o)
      $fatal(1, "BIAS ready routing mismatch");

    mem_ready_i = 1'b0;
    mem_rvalid_i = 1'b0;
    #1;
    if (dma_ready_o || desc_ready_o || conv_ready_o || vec_ready_o || bias_ready_o ||
        dma_rvalid_o || desc_rvalid_o || conv_rvalid_o || vec_rvalid_o || bias_rvalid_o)
      $fatal(1, "ready/rvalid should be gated by memory response");

    $display("tb_tinygpu_mem_arbiter_branch_tb PASS");
    $finish;
  end

endmodule
