//      // verilator_coverage annotation
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
        
 12675364   function automatic logic [7:0] read_linear_byte(
            input logic [1:0] region,
            input int unsigned addr
          );
 12675364     int unsigned bank;
 12675364     int unsigned offset;
 12675364     int unsigned word_index;
 12675364     begin
 12675364       read_linear_byte = '0;
 12675364       case (region)
 4609752         REGION_A: begin
 4609752           bank = addr / TILE_K;
 4609752           offset = addr % TILE_K;
~12647620           if ((addr < A_CAPACITY) && (bank < TILE_M))
 4585272             read_linear_byte = a_bank[bank][offset];
                end
~5194992         REGION_B: begin
~5194992           bank = addr % TILE_N;
~5194992           offset = addr / TILE_N;
~12647620           if ((addr < B_CAPACITY) && (bank < TILE_N) && (offset < TILE_K))
~5191728             read_linear_byte = b_bank[bank][offset];
                end
~2870620         REGION_C: begin
~2870620           word_index = addr >> 2;
~2870620           if (word_index < C_WORDS) begin
~2870620             case (addr[1:0])
~717655               2'd0: read_linear_byte = c_words[word_index][7:0];
~717655               2'd1: read_linear_byte = c_words[word_index][15:8];
~717655               2'd2: read_linear_byte = c_words[word_index][23:16];
~717655               default: read_linear_byte = c_words[word_index][31:24];
                    endcase
                  end
                end
%000000         default: read_linear_byte = '0;
              endcase
            end
          endfunction
        
 1056280   always_ff @(posedge clk or negedge rst_n) begin
~1056276     if (!rst_n) begin
~000016       for (int r = 0; r < TILE_M; r++)
~000256         for (int k = 0; k < TILE_K; k++)
 000256           a_bank[r][k] <= '0;
~000016       for (int c = 0; c < TILE_N; c++)
~000256         for (int k = 0; k < TILE_K; k++)
 000256           b_bank[c][k] <= '0;
~000064       for (int i = 0; i < C_WORDS; i++)
 000064         c_words[i] <= '0;
 1056276     end else begin
~995473       if (dma_wr_en) begin
~243212         for (int byte_idx = 0; byte_idx < 4; byte_idx++) begin
~182409           if (dma_wstrb[byte_idx]) begin
~060803             case (dma_region)
~032775               REGION_A: begin
~032775                 if ((int'(dma_addr) + byte_idx) < A_CAPACITY)
~032775                   a_bank[(int'(dma_addr) + byte_idx) / TILE_K]
~032775                         [(int'(dma_addr) + byte_idx) % TILE_K]
~032775                     <= dma_wdata[8*byte_idx +: 8];
                      end
~028028               REGION_B: begin
~028028                 if ((int'(dma_addr) + byte_idx) < B_CAPACITY)
~028028                   b_bank[(int'(dma_addr) + byte_idx) % TILE_N]
~028028                         [(int'(dma_addr) + byte_idx) / TILE_N]
~028028                     <= dma_wdata[8*byte_idx +: 8];
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
        
~1037172       if (c_wr_en && (int'(c_wr_addr) < C_WORDS))
~019104         c_words[C_INDEX_W'(c_wr_addr)] <= c_wr_data;
            end
          end
        
 3168841   always_comb begin
 3168841     dma_rdata = {
 3168841       read_linear_byte(dma_region, int'(dma_addr) + 3),
 3168841       read_linear_byte(dma_region, int'(dma_addr) + 2),
 3168841       read_linear_byte(dma_region, int'(dma_addr) + 1),
 3168841       read_linear_byte(dma_region, int'(dma_addr))
            };
        
 12675364     for (int r = 0; r < TILE_M; r++) begin
~12675364       if (int'(a_rd_addr[r]) < A_CAPACITY)
 12675364         a_rd_data[r] = a_bank[int'(a_rd_addr[r]) / TILE_K]
 12675364                               [int'(a_rd_addr[r]) % TILE_K];
              else
%000000         a_rd_data[r] = '0;
            end
        
 12675364     for (int c = 0; c < TILE_N; c++) begin
~12675364       if (int'(b_rd_addr[c]) < B_CAPACITY)
 12675364         b_rd_data[c] = b_bank[int'(b_rd_addr[c]) % TILE_N]
 12675364                               [int'(b_rd_addr[c]) / TILE_N];
              else
%000000         b_rd_data[c] = '0;
            end
        
~3168841     if (int'(c_rd_addr) < C_WORDS)
 3168841       c_rd_data = c_words[C_INDEX_W'(c_rd_addr)];
            else
%000000       c_rd_data = '0;
          end
        
%000001   initial begin
%000001     if ((A_BYTES < A_CAPACITY) || (B_BYTES < B_CAPACITY) ||
                (C_BYTES < C_WORDS * 4))
              $error("TinyGPU scratchpad parameters are smaller than one tile");
          end
        
        endmodule
        
