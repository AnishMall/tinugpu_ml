module tinygpu_spm import tinygpu_pkg::*; #(
  parameter int A_BYTES = TILE_M * TILE_K,
  parameter int B_BYTES = TILE_K * TILE_N,
  parameter int C_BYTES = TILE_M * TILE_N * 4
)(
  input  logic                       clk,
  input  logic                       rst_n,

  input  logic                       dma_wr_en,
  input  logic [1:0]                 dma_region,
  input  logic [8:0]                 dma_addr,
  input  logic [31:0]                dma_wdata,
  input  logic [3:0]                 dma_wstrb,
  output logic [31:0]                dma_rdata,

  input  logic [7:0]                 a_rd_addr [0:TILE_M-1],
  output logic [7:0]                 a_rd_data [0:TILE_M-1],

  input  logic [7:0]                 b_rd_addr [0:TILE_N-1],
  output logic [7:0]                 b_rd_data [0:TILE_N-1],

  input  logic                       c_wr_en,
  input  logic [7:0]                 c_wr_addr,
  input  logic [31:0]                c_wr_data,
  input  logic [7:0]                 c_rd_addr,
  output logic [31:0]                c_rd_data
);

  localparam logic [1:0] REGION_A = 2'd0;
  localparam logic [1:0] REGION_B = 2'd1;
  localparam logic [1:0] REGION_C = 2'd2;
  localparam int A_CAPACITY = TILE_M * TILE_K;
  localparam int B_CAPACITY = TILE_K * TILE_N;
  localparam int C_WORDS = TILE_M * TILE_N;
  localparam int C_INDEX_W = (C_WORDS <= 1) ? 1 : $clog2(C_WORDS);

  // Banking matches the array read pattern: one A read per row and one B read
  // per column. This avoids synthesizing replicated multi-read byte memories.
  logic [7:0]  a_bank [0:TILE_M-1][0:TILE_K-1];
  logic [7:0]  b_bank [0:TILE_N-1][0:TILE_K-1];
  logic [31:0] c_words [0:C_WORDS-1];

  function automatic logic [7:0] read_linear_byte(
    input logic [1:0] region,
    input int unsigned addr
  );
    int unsigned bank;
    int unsigned offset;
    int unsigned word_index;
    begin
      read_linear_byte = '0;
      case (region)
        REGION_A: begin
          bank = addr / TILE_K;
          offset = addr % TILE_K;
          if ((addr < A_CAPACITY) && (bank < TILE_M))
            read_linear_byte = a_bank[bank][offset];
        end
        REGION_B: begin
          bank = addr % TILE_N;
          offset = addr / TILE_N;
          if ((addr < B_CAPACITY) && (bank < TILE_N) && (offset < TILE_K))
            read_linear_byte = b_bank[bank][offset];
        end
        REGION_C: begin
          word_index = addr >> 2;
          if (word_index < C_WORDS) begin
            case (addr[1:0])
              2'd0: read_linear_byte = c_words[word_index][7:0];
              2'd1: read_linear_byte = c_words[word_index][15:8];
              2'd2: read_linear_byte = c_words[word_index][23:16];
              default: read_linear_byte = c_words[word_index][31:24];
            endcase
          end
        end
        default: read_linear_byte = '0;
      endcase
    end
  endfunction

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      for (int r = 0; r < TILE_M; r++)
        for (int k = 0; k < TILE_K; k++)
          a_bank[r][k] <= '0;
      for (int c = 0; c < TILE_N; c++)
        for (int k = 0; k < TILE_K; k++)
          b_bank[c][k] <= '0;
      for (int i = 0; i < C_WORDS; i++)
        c_words[i] <= '0;
    end else begin
      if (dma_wr_en) begin
        for (int byte_idx = 0; byte_idx < 4; byte_idx++) begin
          if (dma_wstrb[byte_idx]) begin
            case (dma_region)
              REGION_A: begin
                if ((int'(dma_addr) + byte_idx) < A_CAPACITY)
                  a_bank[(int'(dma_addr) + byte_idx) / TILE_K]
                        [(int'(dma_addr) + byte_idx) % TILE_K]
                    <= dma_wdata[8*byte_idx +: 8];
              end
              REGION_B: begin
                if ((int'(dma_addr) + byte_idx) < B_CAPACITY)
                  b_bank[(int'(dma_addr) + byte_idx) % TILE_N]
                        [(int'(dma_addr) + byte_idx) / TILE_N]
                    <= dma_wdata[8*byte_idx +: 8];
              end
              REGION_C: begin
                if (((int'(dma_addr) + byte_idx) >> 2) < C_WORDS)
                  c_words[(int'(dma_addr) + byte_idx) >> 2]
                         [8*((int'(dma_addr) + byte_idx) & 3) +: 8]
                    <= dma_wdata[8*byte_idx +: 8];
              end
              default: begin
              end
            endcase
          end
        end
      end

      if (c_wr_en && (int'(c_wr_addr) < C_WORDS))
        c_words[C_INDEX_W'(c_wr_addr)] <= c_wr_data;
    end
  end

  always_comb begin
    dma_rdata = {
      read_linear_byte(dma_region, int'(dma_addr) + 3),
      read_linear_byte(dma_region, int'(dma_addr) + 2),
      read_linear_byte(dma_region, int'(dma_addr) + 1),
      read_linear_byte(dma_region, int'(dma_addr))
    };

    for (int r = 0; r < TILE_M; r++) begin
      if (int'(a_rd_addr[r]) < A_CAPACITY)
        a_rd_data[r] = a_bank[int'(a_rd_addr[r]) / TILE_K]
                              [int'(a_rd_addr[r]) % TILE_K];
      else
        a_rd_data[r] = '0;
    end

    for (int c = 0; c < TILE_N; c++) begin
      if (int'(b_rd_addr[c]) < B_CAPACITY)
        b_rd_data[c] = b_bank[int'(b_rd_addr[c]) % TILE_N]
                              [int'(b_rd_addr[c]) / TILE_N];
      else
        b_rd_data[c] = '0;
    end

    if (int'(c_rd_addr) < C_WORDS)
      c_rd_data = c_words[C_INDEX_W'(c_rd_addr)];
    else
      c_rd_data = '0;
  end

  initial begin
    if ((A_BYTES < A_CAPACITY) || (B_BYTES < B_CAPACITY) ||
        (C_BYTES < C_WORDS * 4))
      $error("TinyGPU scratchpad parameters are smaller than one tile");
  end

endmodule
