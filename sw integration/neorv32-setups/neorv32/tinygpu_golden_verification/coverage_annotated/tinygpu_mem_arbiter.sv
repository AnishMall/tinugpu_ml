//      // verilator_coverage annotation
        module tinygpu_mem_arbiter (
~000051   input  logic [2:0]  select_i,
        
 001659   input  logic        dma_req_i,
 000470   input  logic        dma_we_i,
~001110   input  logic [31:0] dma_addr_i,
 000233   input  logic [31:0] dma_wdata_i,
 000470   input  logic [3:0]  dma_wstrb_i,
        
%000000   input  logic        desc_req_i,
%000000   input  logic        desc_we_i,
%000000   input  logic [31:0] desc_addr_i,
%000000   input  logic [31:0] desc_wdata_i,
%000000   input  logic [3:0]  desc_wstrb_i,
        
 000156   input  logic        conv_req_i,
~000064   input  logic [31:0] conv_addr_i,
        
 000014   input  logic        vec_req_i,
%000008   input  logic        vec_we_i,
~000012   input  logic [31:0] vec_addr_i,
%000004   input  logic [31:0] vec_wdata_i,
%000008   input  logic [3:0]  vec_wstrb_i,
        
%000000   input  logic        bias_req_i,
%000000   input  logic        bias_we_i,
%000000   input  logic [31:0] bias_addr_i,
%000000   input  logic [31:0] bias_wdata_i,
%000000   input  logic [3:0]  bias_wstrb_i,
        
 001829   output logic        mem_req_o,
 000478   output logic        mem_we_o,
~001122   output logic [31:0] mem_addr_o,
 000236   output logic [31:0] mem_wdata_o,
 000478   output logic [3:0]  mem_wstrb_o,
 000116   input  logic [31:0] mem_rdata_i,
 001836   input  logic        mem_ready_i,
 001357   input  logic        mem_rvalid_i,
        
 000116   output logic [31:0] client_rdata_o,
 001711   output logic        dma_ready_o,
 001189   output logic        dma_rvalid_o,
%000000   output logic        desc_ready_o,
%000000   output logic        desc_rvalid_o,
 000197   output logic        conv_ready_o,
 000156   output logic        conv_rvalid_o,
 000028   output logic        vec_ready_o,
 000012   output logic        vec_rvalid_o,
%000000   output logic        bias_ready_o,
%000000   output logic        bias_rvalid_o
        );
        
          localparam logic [2:0] CLIENT_DMA  = 3'd0;
          localparam logic [2:0] CLIENT_DESC = 3'd1;
          localparam logic [2:0] CLIENT_CONV = 3'd2;
          localparam logic [2:0] CLIENT_VEC  = 3'd3;
          localparam logic [2:0] CLIENT_BIAS = 3'd4;
        
~103821   assign mem_req_o = (select_i == CLIENT_DESC) ? desc_req_i :
 096531                      (select_i == CLIENT_CONV) ? conv_req_i :
 096123                      (select_i == CLIENT_VEC)  ? vec_req_i  :
~096123                      (select_i == CLIENT_BIAS) ? bias_req_i : dma_req_i;
~103821   assign mem_we_o = (select_i == CLIENT_DESC) ? desc_we_i :
 096531                     (select_i == CLIENT_CONV) ? 1'b0 :
 096123                     (select_i == CLIENT_VEC)  ? vec_we_i :
~096123                     (select_i == CLIENT_BIAS) ? bias_we_i : dma_we_i;
~103821   assign mem_addr_o = (select_i == CLIENT_DESC) ? desc_addr_i :
 096531                       (select_i == CLIENT_CONV) ? conv_addr_i :
 096123                       (select_i == CLIENT_VEC)  ? vec_addr_i :
~096123                       (select_i == CLIENT_BIAS) ? bias_addr_i : dma_addr_i;
~103821   assign mem_wdata_o = (select_i == CLIENT_DESC) ? desc_wdata_i :
 096531                        (select_i == CLIENT_CONV) ? 32'd0 :
 096123                        (select_i == CLIENT_VEC)  ? vec_wdata_i :
~096123                        (select_i == CLIENT_BIAS) ? bias_wdata_i : dma_wdata_i;
~103821   assign mem_wstrb_o = (select_i == CLIENT_DESC) ? desc_wstrb_i :
 096531                        (select_i == CLIENT_CONV) ? 4'd0 :
 096123                        (select_i == CLIENT_VEC)  ? vec_wstrb_i :
~096123                        (select_i == CLIENT_BIAS) ? bias_wstrb_i : dma_wstrb_i;
        
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
        
        `ifndef SYNTHESIS
 103821   always @* begin
 102885     if ((select_i == CLIENT_CONV) && conv_req_i)
~000936       assert (!mem_we_o);
          end
        `endif
        
        endmodule
        
