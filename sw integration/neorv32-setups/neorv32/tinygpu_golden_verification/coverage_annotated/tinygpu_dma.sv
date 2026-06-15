//      // verilator_coverage annotation
        module tinygpu_dma import tinygpu_pkg::*; (
 016633   input  logic              clk,
%000007   input  logic              rst_n,
        
 000231   input  logic              start,
 000231   output logic              busy,
 000231   output logic              done,
%000000   output logic              error,
        
~000090   input  logic [1:0]        op_kind,
~000141   input  logic [31:0]       base_addr,
~000093   input  logic [15:0]       rows,
~000050   input  logic [15:0]       cols,
~000097   input  logic [15:0]       stride_bytes,
 000090   input  logic [1:0]        spm_region,
%000000   input  logic [8:0]        spm_base,
        
 001562   output logic              mem_req,
 000468   output logic              mem_we,
~001094   output logic [31:0]       mem_addr,
 000235   output logic [31:0]       mem_wdata,
 000468   output logic [3:0]        mem_wstrb,
 000101   input  logic [31:0]       mem_rdata,
 001612   input  logic              mem_ready,
 001094   input  logic              mem_rvalid,
        
 001094   output logic              spm_wr_en,
 000090   output logic [1:0]        spm_region_o,
~000503   output logic [8:0]        spm_addr,
~000571   output logic [31:0]       spm_wdata,
~001094   output logic [3:0]        spm_wstrb,
 000727   input  logic [31:0]       spm_rdata
        );
        
          localparam logic [1:0] DMA_OP_LOAD_I8   = 2'd0;
          localparam logic [1:0] DMA_OP_STORE_I32 = 2'd2;
          localparam logic [1:0] DMA_OP_STORE_I8  = 2'd3;
        
          typedef enum logic [2:0] {
            DMA_IDLE,
            DMA_ISSUE_READ,
            DMA_WAIT_READ,
            DMA_WRITE_SPM,
            DMA_READ_SPM,
            DMA_ISSUE_WRITE,
            DMA_DONE,
            DMA_ERROR
          } dma_state_e;
        
 001703   dma_state_e state_q, state_d;
 000231   logic       done_q;
%000000   logic       error_q;
        
~000090   logic [1:0]  op_kind_q;
~000083   logic [15:0] rows_q, cols_q, stride_bytes_q;
 000090   logic [1:0]  spm_region_q;
        
~000294   logic [15:0] row_q, row_d;
~000541   logic [15:0] col_q, col_d;
~000186   logic [31:0] ext_row_base_q, ext_row_base_d;
~000515   logic [31:0] ext_addr_q, ext_addr_d;
~000223   logic [8:0]  spm_row_base_q, spm_row_base_d;
~000426   logic [8:0]  spm_addr_q, spm_addr_d;
        
~000345   logic [31:0] aligned_read_addr;
~000345   logic [31:0] aligned_write_addr;
 000353   logic [7:0]  load_byte;
 000515   logic [1:0]  load_lane_sel;
        
 001331   logic        advance_elem;
 000186   logic        last_elem;
 000118   logic [31:0] store_word_q;
        
          assign done  = done_q;
          assign error = error_q;
        
          assign aligned_read_addr = {ext_addr_q[31:2], 2'b00};
          assign aligned_write_addr = {ext_addr_q[31:2], 2'b00};
          assign load_lane_sel = ext_addr_q[1:0];
          assign last_elem = (row_q + 16'd1 >= rows_q) && (col_q + 16'd1 >= cols_q);
        
 099807   always @* begin
 099807     case (load_lane_sel)
 060321       2'd0: load_byte = mem_rdata[7:0];
 013632       2'd1: load_byte = mem_rdata[15:8];
 010158       2'd2: load_byte = mem_rdata[23:16];
 015696       default: load_byte = mem_rdata[31:24];
            endcase
          end
        
 016639   always_ff @(posedge clk or negedge rst_n) begin
 016605     if (!rst_n) begin
 000034       state_q          <= DMA_IDLE;
 000034       done_q           <= 1'b0;
 000034       error_q          <= 1'b0;
 000034       op_kind_q        <= '0;
 000034       rows_q           <= '0;
 000034       cols_q           <= '0;
 000034       stride_bytes_q   <= '0;
 000034       spm_region_q     <= '0;
 000034       row_q            <= '0;
 000034       col_q            <= '0;
 000034       ext_row_base_q   <= '0;
 000034       ext_addr_q       <= '0;
 000034       spm_row_base_q   <= '0;
 000034       spm_addr_q       <= '0;
 000034       store_word_q     <= '0;
 016605     end else begin
 016605       state_q <= state_d;
 016605       done_q  <= (state_q == DMA_DONE);
 016605       error_q <= (state_q == DMA_ERROR);
 016605       row_q   <= row_d;
 016605       col_q   <= col_d;
 016605       ext_row_base_q <= ext_row_base_d;
 016605       ext_addr_q <= ext_addr_d;
 016605       spm_row_base_q <= spm_row_base_d;
 016605       spm_addr_q <= spm_addr_d;
        
 016374       if (state_q == DMA_IDLE && start) begin
 000231         op_kind_q      <= op_kind;
 000231         rows_q         <= rows;
 000231         cols_q         <= cols;
 000231         stride_bytes_q <= stride_bytes;
 000231         spm_region_q   <= spm_region;
 000231         ext_row_base_q <= base_addr;
 000231         ext_addr_q     <= base_addr;
 000231         spm_row_base_q <= spm_base;
 000231         spm_addr_q     <= spm_base;
              end
        
 016137       if (state_q == DMA_READ_SPM)
 000468         store_word_q <= spm_rdata;
            end
          end
        
 099807   always @* begin
 099807     row_d = row_q;
 099807     col_d = col_q;
 099807     ext_row_base_d = ext_row_base_q;
 099807     ext_addr_d = ext_addr_q;
 099807     spm_row_base_d = spm_row_base_q;
 099807     spm_addr_d = spm_addr_q;
        
 098421     if (state_q == DMA_IDLE && start) begin
 001386       row_d = '0;
 001386       col_d = '0;
 090435     end else if (advance_elem) begin
 005154       if (col_q + 16'd1 < cols_q) begin
 005154         col_d = col_q + 16'd1;
 004128         if (op_kind_q == DMA_OP_STORE_I32)
 001026           ext_addr_d = ext_addr_q + 32'd4;
                else
 004128           ext_addr_d = ext_addr_q + 32'd1;
        
 004128         if (op_kind_q == DMA_OP_LOAD_I8)
 004128           spm_addr_d = spm_addr_q + 9'd1;
                else
 001026           spm_addr_d = spm_addr_q + 9'd4;
 002832       end else begin
 002832         col_d = '0;
~002832         if (row_q + 16'd1 < rows_q) begin
 002832           row_d = row_q + 16'd1;
 002832           ext_row_base_d = ext_row_base_q + {16'd0, stride_bytes_q};
 002832           ext_addr_d = ext_row_base_q + {16'd0, stride_bytes_q};
 001590           if (op_kind_q == DMA_OP_LOAD_I8) begin
 001002             if (spm_region_q == 2'd0)
 000588               spm_row_base_d = spm_row_base_q + 9'(TILE_K);
                    else
 001002               spm_row_base_d = spm_row_base_q + 9'(TILE_N);
 001242           end else begin
 001242             spm_row_base_d = spm_row_base_q + 9'(TILE_N * 4);
                  end
 001590           if (op_kind_q == DMA_OP_LOAD_I8) begin
 001002             if (spm_region_q == 2'd0)
 000588               spm_addr_d = spm_row_base_q + 9'(TILE_K);
                    else
 001002               spm_addr_d = spm_row_base_q + 9'(TILE_N);
 001242           end else begin
 001242             spm_addr_d = spm_row_base_q + 9'(TILE_N * 4);
                  end
                end
              end
            end
          end
        
 099807   always @* begin
 099807     state_d      = state_q;
 099807     busy         = 1'b1;
 099807     advance_elem = 1'b0;
        
 099807     mem_req    = 1'b0;
 099807     mem_we     = 1'b0;
 099807     mem_addr   = '0;
 099807     mem_wdata  = '0;
 099807     mem_wstrb  = 4'b0000;
        
 099807     spm_wr_en    = 1'b0;
 099807     spm_region_o = spm_region_q;
 099807     spm_addr     = '0;
 099807     spm_wdata    = '0;
 099807     spm_wstrb    = 4'b0000;
        
 099807     case (state_q)
 057717       DMA_IDLE: begin
 057717         busy = 1'b0;
 056331         if (start) begin
~001386           if ((rows == 16'd0) || (cols == 16'd0))
%000000             state_d = DMA_DONE;
 000846           else if (op_kind == DMA_OP_LOAD_I8)
 000846             state_d = DMA_ISSUE_READ;
~000540           else if ((op_kind == DMA_OP_STORE_I32) || (op_kind == DMA_OP_STORE_I8))
 000540             state_d = DMA_READ_SPM;
                  else
%000000             state_d = DMA_ERROR;
                end
              end
        
 006564       DMA_ISSUE_READ: begin
 006564         mem_req  = 1'b1;
 006564         mem_we   = 1'b0;
 006564         mem_addr = aligned_read_addr;
~006564         if (mem_ready)
 006564           state_d = DMA_WAIT_READ;
              end
        
 019692       DMA_WAIT_READ: begin
 013128         if (mem_rvalid)
 006564           state_d = DMA_WRITE_SPM;
              end
        
 006564       DMA_WRITE_SPM: begin
 006564         spm_wr_en    = 1'b1;
 006564         spm_region_o = spm_region_q;
 006564         spm_addr     = spm_addr_q;
 006564         spm_wdata    = {24'd0, load_byte};
 006564         spm_wstrb    = 4'b0001;
        
 005718         if (last_elem)
 000846           state_d = DMA_DONE;
 005718         else begin
 005718           advance_elem = 1'b1;
 005718           state_d = DMA_ISSUE_READ;
                end
              end
        
 002808       DMA_READ_SPM: begin
 002808         spm_region_o = spm_region_q;
 002808         spm_addr = spm_addr_q;
 002808         state_d = DMA_ISSUE_WRITE;
              end
        
 005076       DMA_ISSUE_WRITE: begin
 005076         mem_req  = 1'b1;
 005076         mem_we   = 1'b1;
 005076         mem_addr = aligned_write_addr;
 005076         spm_region_o = spm_region_q;
 005076         spm_addr = spm_addr_q;
        
~005076         if (op_kind_q == DMA_OP_STORE_I32) begin
 005076           mem_wdata = store_word_q;
 005076           mem_wstrb = 4'b1111;
%000000         end else begin
%000000           case (ext_addr_q[1:0])
%000000             2'd0: begin
%000000               mem_wdata = {24'd0, store_word_q[7:0]};
%000000               mem_wstrb = 4'b0001;
                    end
%000000             2'd1: begin
%000000               mem_wdata = {16'd0, store_word_q[7:0], 8'd0};
%000000               mem_wstrb = 4'b0010;
                    end
%000000             2'd2: begin
%000000               mem_wdata = {8'd0, store_word_q[7:0], 16'd0};
%000000               mem_wstrb = 4'b0100;
                    end
%000000             default: begin
%000000               mem_wdata = {store_word_q[7:0], 24'd0};
%000000               mem_wstrb = 4'b1000;
                    end
                  endcase
                end
        
 002808         if (mem_ready) begin
 002268           if (last_elem)
 000540             state_d = DMA_DONE;
 002268           else begin
 002268             advance_elem = 1'b1;
 002268             state_d = DMA_READ_SPM;
                  end
                end
              end
        
 001386       DMA_DONE: begin
 001386         busy    = 1'b0;
 001386         state_d = DMA_IDLE;
              end
        
%000000       DMA_ERROR: begin
%000000         busy    = 1'b0;
%000000         state_d = DMA_IDLE;
              end
        
%000000       default: begin
%000000         state_d = DMA_IDLE;
              end
            endcase
          end
        
        `ifndef SYNTHESIS
 000378   logic        held_req_q;
 001094   logic        read_outstanding_q;
%000004   logic        held_we_q;
~000155   logic [31:0] held_addr_q;
 000098   logic [31:0] held_wdata_q;
%000004   logic [3:0]  held_wstrb_q;
        
 016639   always @(posedge clk or negedge rst_n) begin
 016605     if (!rst_n) begin
 000034       held_req_q <= 1'b0;
 000034       read_outstanding_q <= 1'b0;
 000034       held_we_q <= 1'b0;
 000034       held_addr_q <= '0;
 000034       held_wdata_q <= '0;
 000034       held_wstrb_q <= '0;
 016605     end else begin
 016227       if (held_req_q) begin
 000378         assert (mem_req);
 000378         assert (mem_we == held_we_q);
 000378         assert (mem_addr == held_addr_q);
 000378         assert (mem_wdata == held_wdata_q);
 000378         assert (mem_wstrb == held_wstrb_q);
              end
 016605       held_req_q <= mem_req && !mem_ready;
 016227       if (mem_req && !mem_ready) begin
 000378         held_we_q <= mem_we;
 000378         held_addr_q <= mem_addr;
 000378         held_wdata_q <= mem_wdata;
 000378         held_wstrb_q <= mem_wstrb;
              end
        
 015511       if (mem_req && mem_ready && !mem_we)
 001094         read_outstanding_q <= 1'b1;
 015511       if (mem_rvalid)
 001094         read_outstanding_q <= 1'b0;
        
~016605       assert (!(mem_rvalid && !read_outstanding_q));
~016605       assert (!spm_wr_en || state_q == DMA_WRITE_SPM);
~016605       assert (!(done_q && error_q));
~016605       assert (!mem_we || state_q == DMA_ISSUE_WRITE);
 016605       assert (spm_region_o == spm_region_q);
            end
          end
        `endif
        
        endmodule
        
