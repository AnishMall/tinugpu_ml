module tinygpu_spm
  import tinygpu_pkg::*;
#(
    parameter int A_BYTES = SPM_A_BYTES,
    parameter int B_BYTES = SPM_B_BYTES,
    parameter int C_BYTES = SPM_C_BYTES
) (
    input logic clk,
    input logic rst_n,

    input  logic        dma_wr_en,
    input  logic [ 1:0] dma_region,
    input  logic [ 8:0] dma_addr,
    input  logic [31:0] dma_wdata,
    input  logic [ 3:0] dma_wstrb,
    output logic [31:0] dma_rdata,

    input  logic [7:0] a_rd_addr[0:TILE_M-1],
    output logic [7:0] a_rd_data[0:TILE_M-1],

    input  logic [7:0] b_rd_addr[0:TILE_N-1],
    output logic [7:0] b_rd_data[0:TILE_N-1],

    input  logic        c_wr_en,
    input  logic [ 7:0] c_wr_addr,
    input  logic [31:0] c_wr_data,
    input  logic [ 7:0] c_rd_addr,
    output logic [31:0] c_rd_data
);

  localparam logic [1:0] REGION_A = 2'd0;
  localparam logic [1:0] REGION_B = 2'd1;
  localparam logic [1:0] REGION_C = 2'd2;

  logic [7:0] a_mem[0:A_BYTES-1];
  logic [7:0] b_mem[0:B_BYTES-1];
  logic [7:0] c_mem[0:C_BYTES-1];

  function automatic logic [7:0] read_byte_region(input logic [1:0] region,
                                                  input int unsigned addr);
    begin
      read_byte_region = '0;
      case (region)
        REGION_A: begin
          if (addr < A_BYTES) read_byte_region = a_mem[addr];
        end
        REGION_B: begin
          if (addr < B_BYTES) read_byte_region = b_mem[addr];
        end
        REGION_C: begin
          if (addr < C_BYTES) read_byte_region = c_mem[addr];
        end
        default: begin
          read_byte_region = '0;
        end
      endcase
    end
  endfunction

  task automatic write_byte_region(input logic [1:0] region, input int unsigned addr,
                                   input logic [7:0] data);
    begin
      case (region)
        REGION_A: begin
          if (addr < A_BYTES) a_mem[addr] = data;
        end
        REGION_B: begin
          if (addr < B_BYTES) b_mem[addr] = data;
        end
        REGION_C: begin
          if (addr < C_BYTES) c_mem[addr] = data;
        end
        default: begin
        end
      endcase
    end
  endtask

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      for (int i = 0; i < A_BYTES; i++) begin
        a_mem[i] <= '0;
      end
      for (int i = 0; i < B_BYTES; i++) begin
        b_mem[i] <= '0;
      end
      for (int i = 0; i < C_BYTES; i++) begin
        c_mem[i] <= '0;
      end
    end else begin
      if (dma_wr_en) begin
        for (int byte_idx = 0; byte_idx < 4; byte_idx++) begin
          if (dma_wstrb[byte_idx]) begin
            write_byte_region(
              dma_region,
              {23'd0, dma_addr} + 32'(byte_idx),
              dma_wdata[8*byte_idx+:8]
            );
          end
        end
      end

      if (c_wr_en) begin
        if ((c_wr_addr * 4) + 3 < C_BYTES) begin
          c_mem[(c_wr_addr*4)+0] <= c_wr_data[7:0];
          c_mem[(c_wr_addr*4)+1] <= c_wr_data[15:8];
          c_mem[(c_wr_addr*4)+2] <= c_wr_data[23:16];
          c_mem[(c_wr_addr*4)+3] <= c_wr_data[31:24];
        end
      end
    end
  end

  always_comb begin
    dma_rdata = {
      read_byte_region(dma_region, {23'd0, dma_addr} + 32'd3),
      read_byte_region(dma_region, {23'd0, dma_addr} + 32'd2),
      read_byte_region(dma_region, {23'd0, dma_addr} + 32'd1),
      read_byte_region(dma_region, {23'd0, dma_addr})
    };

    for (int r = 0; r < TILE_M; r++) begin
      if (int'(a_rd_addr[r]) < A_BYTES) a_rd_data[r] = a_mem[a_rd_addr[r]];
      else a_rd_data[r] = '0;
    end

    for (int c = 0; c < TILE_N; c++) begin
      if (int'(b_rd_addr[c]) < B_BYTES) b_rd_data[c] = b_mem[b_rd_addr[c]];
      else b_rd_data[c] = '0;
    end

    if ((c_rd_addr * 4) + 3 < C_BYTES) begin
      c_rd_data = {
        c_mem[(c_rd_addr*4)+3],
        c_mem[(c_rd_addr*4)+2],
        c_mem[(c_rd_addr*4)+1],
        c_mem[(c_rd_addr*4)+0]
      };
    end else begin
      c_rd_data = '0;
    end
  end

endmodule
