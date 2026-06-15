module tinygpu_mem_arbiter (
  input  logic [2:0]  select_i,

  input  logic        dma_req_i,
  input  logic        dma_we_i,
  input  logic [31:0] dma_addr_i,
  input  logic [31:0] dma_wdata_i,
  input  logic [3:0]  dma_wstrb_i,

  input  logic        desc_req_i,
  input  logic        desc_we_i,
  input  logic [31:0] desc_addr_i,
  input  logic [31:0] desc_wdata_i,
  input  logic [3:0]  desc_wstrb_i,

  input  logic        conv_req_i,
  input  logic [31:0] conv_addr_i,

  input  logic        vec_req_i,
  input  logic        vec_we_i,
  input  logic [31:0] vec_addr_i,
  input  logic [31:0] vec_wdata_i,
  input  logic [3:0]  vec_wstrb_i,

  input  logic        bias_req_i,
  input  logic        bias_we_i,
  input  logic [31:0] bias_addr_i,
  input  logic [31:0] bias_wdata_i,
  input  logic [3:0]  bias_wstrb_i,

  output logic        mem_req_o,
  output logic        mem_we_o,
  output logic [31:0] mem_addr_o,
  output logic [31:0] mem_wdata_o,
  output logic [3:0]  mem_wstrb_o,
  input  logic [31:0] mem_rdata_i,
  input  logic        mem_ready_i,
  input  logic        mem_rvalid_i,

  output logic [31:0] client_rdata_o,
  output logic        dma_ready_o,
  output logic        dma_rvalid_o,
  output logic        desc_ready_o,
  output logic        desc_rvalid_o,
  output logic        conv_ready_o,
  output logic        conv_rvalid_o,
  output logic        vec_ready_o,
  output logic        vec_rvalid_o,
  output logic        bias_ready_o,
  output logic        bias_rvalid_o
);

  localparam logic [2:0] CLIENT_DMA  = 3'd0;
  localparam logic [2:0] CLIENT_DESC = 3'd1;
  localparam logic [2:0] CLIENT_CONV = 3'd2;
  localparam logic [2:0] CLIENT_VEC  = 3'd3;
  localparam logic [2:0] CLIENT_BIAS = 3'd4;

  assign mem_req_o = (select_i == CLIENT_DESC) ? desc_req_i :
                     (select_i == CLIENT_CONV) ? conv_req_i :
                     (select_i == CLIENT_VEC)  ? vec_req_i  :
                     (select_i == CLIENT_BIAS) ? bias_req_i : dma_req_i;
  assign mem_we_o = (select_i == CLIENT_DESC) ? desc_we_i :
                    (select_i == CLIENT_CONV) ? 1'b0 :
                    (select_i == CLIENT_VEC)  ? vec_we_i :
                    (select_i == CLIENT_BIAS) ? bias_we_i : dma_we_i;
  assign mem_addr_o = (select_i == CLIENT_DESC) ? desc_addr_i :
                      (select_i == CLIENT_CONV) ? conv_addr_i :
                      (select_i == CLIENT_VEC)  ? vec_addr_i :
                      (select_i == CLIENT_BIAS) ? bias_addr_i : dma_addr_i;
  assign mem_wdata_o = (select_i == CLIENT_DESC) ? desc_wdata_i :
                       (select_i == CLIENT_CONV) ? 32'd0 :
                       (select_i == CLIENT_VEC)  ? vec_wdata_i :
                       (select_i == CLIENT_BIAS) ? bias_wdata_i : dma_wdata_i;
  assign mem_wstrb_o = (select_i == CLIENT_DESC) ? desc_wstrb_i :
                       (select_i == CLIENT_CONV) ? 4'd0 :
                       (select_i == CLIENT_VEC)  ? vec_wstrb_i :
                       (select_i == CLIENT_BIAS) ? bias_wstrb_i : dma_wstrb_i;

  assign client_rdata_o = mem_rdata_i;
  assign dma_ready_o = (select_i == CLIENT_DMA) && mem_ready_i;
  assign dma_rvalid_o = (select_i == CLIENT_DMA) && mem_rvalid_i;
  assign desc_ready_o = (select_i == CLIENT_DESC) && mem_ready_i;
  assign desc_rvalid_o = (select_i == CLIENT_DESC) && mem_rvalid_i;
  assign conv_ready_o = (select_i == CLIENT_CONV) && mem_ready_i;
  assign conv_rvalid_o = (select_i == CLIENT_CONV) && mem_rvalid_i;
  assign vec_ready_o = (select_i == CLIENT_VEC) && mem_ready_i;
  assign vec_rvalid_o = (select_i == CLIENT_VEC) && mem_rvalid_i;
  assign bias_ready_o = (select_i == CLIENT_BIAS) && mem_ready_i;
  assign bias_rvalid_o = (select_i == CLIENT_BIAS) && mem_rvalid_i;

endmodule
