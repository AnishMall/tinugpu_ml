//      // verilator_coverage annotation
        module tinygpu_spm import tinygpu_pkg::*; #(
          parameter int A_BYTES = TILE_M * TILE_K,
          parameter int B_BYTES = TILE_K * TILE_N,
          parameter int C_BYTES = TILE_M * TILE_N * 4
        )(
 017302   input  logic                       clk,
%000007   input  logic                       rst_n,
        
 001345   input  logic                       dma_wr_en,
 000131   input  logic [1:0]                 dma_region,
~000613   input  logic [8:0]                 dma_addr,
~000664   input  logic [31:0]                dma_wdata,
~001230   input  logic [3:0]                 dma_wstrb,
 000842   output logic [31:0]                dma_rdata,
        
~000108   input  logic [7:0]                 a_rd_addr [0:TILE_M-1],
 000088   output logic [7:0]                 a_rd_data [0:TILE_M-1],
        
~000108   input  logic [7:0]                 b_rd_addr [0:TILE_N-1],
 000077   output logic [7:0]                 b_rd_data [0:TILE_N-1],
        
 001472   input  logic                       c_wr_en,
~000736   input  logic [7:0]                 c_wr_addr,
 000233   input  logic [31:0]                c_wr_data,
%000000   input  logic [7:0]                 c_rd_addr,
 000029   output logic [31:0]                c_rd_data
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
        
 417160   function automatic logic [7:0] read_linear_byte(
            input logic [1:0] region,
            input int unsigned addr
          );
 417160     int unsigned bank;
 417160     int unsigned offset;
 417160     int unsigned word_index;
 417160     begin
 417160       read_linear_byte = '0;
 417160       case (region)
 108704         REGION_A: begin
 108704           bank = addr / TILE_K;
 108704           offset = addr % TILE_K;
~417160           if ((addr < A_CAPACITY) && (bank < TILE_M))
 108704             read_linear_byte = a_bank[bank][offset];
                end
 206728         REGION_B: begin
 206728           bank = addr % TILE_N;
 206728           offset = addr / TILE_N;
~417160           if ((addr < B_CAPACITY) && (bank < TILE_N) && (offset < TILE_K))
 206728             read_linear_byte = b_bank[bank][offset];
                end
 101728         REGION_C: begin
 101728           word_index = addr >> 2;
~101728           if (word_index < C_WORDS) begin
 101728             case (addr[1:0])
 025432               2'd0: read_linear_byte = c_words[word_index][7:0];
 025432               2'd1: read_linear_byte = c_words[word_index][15:8];
 025432               2'd2: read_linear_byte = c_words[word_index][23:16];
 025432               default: read_linear_byte = c_words[word_index][31:24];
                    endcase
                  end
                end
%000000         default: read_linear_byte = '0;
              endcase
            end
          endfunction
        
 017308   always_ff @(posedge clk or negedge rst_n) begin
 017274     if (!rst_n) begin
 000136       for (int r = 0; r < TILE_M; r++)
 002176         for (int k = 0; k < TILE_K; k++)
 002176           a_bank[r][k] <= '0;
 000136       for (int c = 0; c < TILE_N; c++)
 002176         for (int k = 0; k < TILE_K; k++)
 002176           b_bank[c][k] <= '0;
 000544       for (int i = 0; i < C_WORDS; i++)
 000544         c_words[i] <= '0;
 017274     end else begin
 015929       if (dma_wr_en) begin
 005380         for (int byte_idx = 0; byte_idx < 4; byte_idx++) begin
 004035           if (dma_wstrb[byte_idx]) begin
 001345             case (dma_region)
 000705               REGION_A: begin
~000705                 if ((int'(dma_addr) + byte_idx) < A_CAPACITY)
 000705                   a_bank[(int'(dma_addr) + byte_idx) / TILE_K]
 000705                         [(int'(dma_addr) + byte_idx) % TILE_K]
 000705                     <= dma_wdata[8*byte_idx +: 8];
                      end
 000640               REGION_B: begin
~000640                 if ((int'(dma_addr) + byte_idx) < B_CAPACITY)
 000640                   b_bank[(int'(dma_addr) + byte_idx) % TILE_N]
 000640                         [(int'(dma_addr) + byte_idx) / TILE_N]
 000640                     <= dma_wdata[8*byte_idx +: 8];
                      end
%000000               REGION_C: begin
%000000                 if (((int'(dma_addr) + byte_idx) >> 2) < C_WORDS)
%000000                   c_words[(int'(dma_addr) + byte_idx) >> 2]
%000000                          [8*((int'(dma_addr) + byte_idx) & 3) +: 8]
%000000                     <= dma_wdata[8*byte_idx +: 8];
                      end
%000000               default: begin
                      end
                    endcase
                  end
                end
              end
        
~015802       if (c_wr_en && (int'(c_wr_addr) < C_WORDS))
 001472         c_words[C_INDEX_W'(c_wr_addr)] <= c_wr_data;
            end
          end
        
 104290   always_comb begin
 104290     dma_rdata = {
 104290       read_linear_byte(dma_region, int'(dma_addr) + 3),
 104290       read_linear_byte(dma_region, int'(dma_addr) + 2),
 104290       read_linear_byte(dma_region, int'(dma_addr) + 1),
 104290       read_linear_byte(dma_region, int'(dma_addr))
            };
        
 417160     for (int r = 0; r < TILE_M; r++) begin
~417160       if (int'(a_rd_addr[r]) < A_CAPACITY)
 417160         a_rd_data[r] = a_bank[int'(a_rd_addr[r]) / TILE_K]
 417160                               [int'(a_rd_addr[r]) % TILE_K];
              else
%000000         a_rd_data[r] = '0;
            end
        
 417160     for (int c = 0; c < TILE_N; c++) begin
~417160       if (int'(b_rd_addr[c]) < B_CAPACITY)
 417160         b_rd_data[c] = b_bank[int'(b_rd_addr[c]) % TILE_N]
 417160                               [int'(b_rd_addr[c]) / TILE_N];
              else
%000000         b_rd_data[c] = '0;
            end
        
~104290     if (int'(c_rd_addr) < C_WORDS)
 104290       c_rd_data = c_words[C_INDEX_W'(c_rd_addr)];
            else
%000000       c_rd_data = '0;
          end
        
%000001   initial begin
%000001     if ((A_BYTES < A_CAPACITY) || (B_BYTES < B_CAPACITY) ||
                (C_BYTES < C_WORDS * 4))
              $error("TinyGPU scratchpad parameters are smaller than one tile");
          end
        
        endmodule
        
