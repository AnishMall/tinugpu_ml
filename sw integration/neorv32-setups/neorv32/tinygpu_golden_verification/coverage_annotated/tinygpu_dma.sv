//      // verilator_coverage annotation
        module tinygpu_dma import tinygpu_pkg::*; (
 017302   input  logic              clk,
%000007   input  logic              rst_n,
        
 000235   input  logic              start,
 000235   output logic              busy,
 000235   output logic              done,
%000000   output logic              error,
        
~000092   input  logic [1:0]        op_kind,
~000143   input  logic [31:0]       base_addr,
~000088   input  logic [15:0]       rows,
~000046   input  logic [15:0]       cols,
~000099   input  logic [15:0]       stride_bytes,
 000092   input  logic [1:0]        spm_region,
%000000   input  logic [8:0]        spm_base,
        
 001659   output logic              mem_req,
 000470   output logic              mem_we,
~001110   output logic [31:0]       mem_addr,
 000233   output logic [31:0]       mem_wdata,
 000470   output logic [3:0]        mem_wstrb,
 000116   input  logic [31:0]       mem_rdata,
 001711   input  logic              mem_ready,
 001189   input  logic              mem_rvalid,
        
 001189   output logic              spm_wr_en,
 000092   output logic [1:0]        spm_region_o,
~000538   output logic [8:0]        spm_addr,
~000609   output logic [31:0]       spm_wdata,
~001189   output logic [3:0]        spm_wstrb,
 000842   input  logic [31:0]       spm_rdata
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
        
 001802   dma_state_e state_q, state_d;
 000235   logic       done_q;
%000000   logic       error_q;
        
~000092   logic [1:0]  op_kind_q;
~000084   logic [15:0] rows_q, cols_q, stride_bytes_q;
 000092   logic [1:0]  spm_region_q;
        
~000282   logic [15:0] row_q, row_d;
~000623   logic [15:0] col_q, col_d;
~000191   logic [31:0] ext_row_base_q, ext_row_base_d;
~000564   logic [31:0] ext_addr_q, ext_addr_d;
~000197   logic [8:0]  spm_row_base_q, spm_row_base_d;
~000495   logic [8:0]  spm_addr_q, spm_addr_d;
        
~000360   logic [31:0] aligned_read_addr;
~000360   logic [31:0] aligned_write_addr;
 000394   logic [7:0]  load_byte;
 000564   logic [1:0]  load_lane_sel;
        
 001424   logic        advance_elem;
 000189   logic        last_elem;
 000122   logic [31:0] store_word_q;
        
          assign done  = done_q;
          assign error = error_q;
        
          assign aligned_read_addr = {ext_addr_q[31:2], 2'b00};
          assign aligned_write_addr = {ext_addr_q[31:2], 2'b00};
          assign load_lane_sel = ext_addr_q[1:0];
          assign last_elem = (row_q + 16'd1 >= rows_q) && (col_q + 16'd1 >= cols_q);
        
 103821   always @* begin
 103821     case (load_lane_sel)
 060687       2'd0: load_byte = mem_rdata[7:0];
 014124       2'd1: load_byte = mem_rdata[15:8];
 010242       2'd2: load_byte = mem_rdata[23:16];
 018768       default: load_byte = mem_rdata[31:24];
            endcase
          end
        
 017308   always_ff @(posedge clk or negedge rst_n) begin
 017274     if (!rst_n) begin
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
 017274     end else begin
 017274       state_q <= state_d;
 017274       done_q  <= (state_q == DMA_DONE);
 017274       error_q <= (state_q == DMA_ERROR);
 017274       row_q   <= row_d;
 017274       col_q   <= col_d;
 017274       ext_row_base_q <= ext_row_base_d;
 017274       ext_addr_q <= ext_addr_d;
 017274       spm_row_base_q <= spm_row_base_d;
 017274       spm_addr_q <= spm_addr_d;
        
 017039       if (state_q == DMA_IDLE && start) begin
 000235         op_kind_q      <= op_kind;
 000235         rows_q         <= rows;
 000235         cols_q         <= cols;
 000235         stride_bytes_q <= stride_bytes;
 000235         spm_region_q   <= spm_region;
 000235         ext_row_base_q <= base_addr;
 000235         ext_addr_q     <= base_addr;
 000235         spm_row_base_q <= spm_base;
 000235         spm_addr_q     <= spm_base;
              end
        
 016804       if (state_q == DMA_READ_SPM)
 000470         store_word_q <= spm_rdata;
            end
          end
        
 103821   always @* begin
 103821     row_d = row_q;
 103821     col_d = col_q;
 103821     ext_row_base_d = ext_row_base_q;
 103821     ext_addr_d = ext_addr_q;
 103821     spm_row_base_d = spm_row_base_q;
 103821     spm_addr_d = spm_addr_q;
        
 102411     if (state_q == DMA_IDLE && start) begin
 001410       row_d = '0;
 001410       col_d = '0;
 093867     end else if (advance_elem) begin
 005910       if (col_q + 16'd1 < cols_q) begin
 005910         col_d = col_q + 16'd1;
 004752         if (op_kind_q == DMA_OP_STORE_I32)
 001158           ext_addr_d = ext_addr_q + 32'd4;
                else
 004752           ext_addr_d = ext_addr_q + 32'd1;
        
 004752         if (op_kind_q == DMA_OP_LOAD_I8)
 004752           spm_addr_d = spm_addr_q + 9'd1;
                else
 001158           spm_addr_d = spm_addr_q + 9'd4;
 002634       end else begin
 002634         col_d = '0;
~002634         if (row_q + 16'd1 < rows_q) begin
 002634           row_d = row_q + 16'd1;
 002634           ext_row_base_d = ext_row_base_q + {16'd0, stride_bytes_q};
 002634           ext_addr_d = ext_row_base_q + {16'd0, stride_bytes_q};
 001524           if (op_kind_q == DMA_OP_LOAD_I8) begin
 001104             if (spm_region_q == 2'd0)
 000420               spm_row_base_d = spm_row_base_q + 9'(TILE_K);
                    else
 001104               spm_row_base_d = spm_row_base_q + 9'(TILE_N);
 001110           end else begin
 001110             spm_row_base_d = spm_row_base_q + 9'(TILE_N * 4);
                  end
 001524           if (op_kind_q == DMA_OP_LOAD_I8) begin
 001104             if (spm_region_q == 2'd0)
 000420               spm_addr_d = spm_row_base_q + 9'(TILE_K);
                    else
 001104               spm_addr_d = spm_row_base_q + 9'(TILE_N);
 001110           end else begin
 001110             spm_addr_d = spm_row_base_q + 9'(TILE_N * 4);
                  end
                end
              end
            end
          end
        
 103821   always @* begin
 103821     state_d      = state_q;
 103821     busy         = 1'b1;
 103821     advance_elem = 1'b0;
        
 103821     mem_req    = 1'b0;
 103821     mem_we     = 1'b0;
 103821     mem_addr   = '0;
 103821     mem_wdata  = '0;
 103821     mem_wstrb  = 4'b0000;
        
 103821     spm_wr_en    = 1'b0;
 103821     spm_region_o = spm_region_q;
 103821     spm_addr     = '0;
 103821     spm_wdata    = '0;
 103821     spm_wstrb    = 4'b0000;
        
 103821     case (state_q)
 058833       DMA_IDLE: begin
 058833         busy = 1'b0;
 057423         if (start) begin
~001410           if ((rows == 16'd0) || (cols == 16'd0))
%000000             state_d = DMA_DONE;
 000858           else if (op_kind == DMA_OP_LOAD_I8)
 000858             state_d = DMA_ISSUE_READ;
~000552           else if ((op_kind == DMA_OP_STORE_I32) || (op_kind == DMA_OP_STORE_I8))
 000552             state_d = DMA_READ_SPM;
                  else
%000000             state_d = DMA_ERROR;
                end
              end
        
 007134       DMA_ISSUE_READ: begin
 007134         mem_req  = 1'b1;
 007134         mem_we   = 1'b0;
 007134         mem_addr = aligned_read_addr;
~007134         if (mem_ready)
 007134           state_d = DMA_WAIT_READ;
              end
        
 021402       DMA_WAIT_READ: begin
 014268         if (mem_rvalid)
 007134           state_d = DMA_WRITE_SPM;
              end
        
 007134       DMA_WRITE_SPM: begin
 007134         spm_wr_en    = 1'b1;
 007134         spm_region_o = spm_region_q;
 007134         spm_addr     = spm_addr_q;
 007134         spm_wdata    = {24'd0, load_byte};
 007134         spm_wstrb    = 4'b0001;
        
 006276         if (last_elem)
 000858           state_d = DMA_DONE;
 006276         else begin
 006276           advance_elem = 1'b1;
 006276           state_d = DMA_ISSUE_READ;
                end
              end
        
 002820       DMA_READ_SPM: begin
 002820         spm_region_o = spm_region_q;
 002820         spm_addr = spm_addr_q;
 002820         state_d = DMA_ISSUE_WRITE;
              end
        
 005088       DMA_ISSUE_WRITE: begin
 005088         mem_req  = 1'b1;
 005088         mem_we   = 1'b1;
 005088         mem_addr = aligned_write_addr;
 005088         spm_region_o = spm_region_q;
 005088         spm_addr = spm_addr_q;
        
~005088         if (op_kind_q == DMA_OP_STORE_I32) begin
 005088           mem_wdata = store_word_q;
 005088           mem_wstrb = 4'b1111;
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
        
 002820         if (mem_ready) begin
 002268           if (last_elem)
 000552             state_d = DMA_DONE;
 002268           else begin
 002268             advance_elem = 1'b1;
 002268             state_d = DMA_READ_SPM;
                  end
                end
              end
        
 001410       DMA_DONE: begin
 001410         busy    = 1'b0;
 001410         state_d = DMA_IDLE;
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
 001189   logic        read_outstanding_q;
%000004   logic        held_we_q;
~000153   logic [31:0] held_addr_q;
 000098   logic [31:0] held_wdata_q;
%000004   logic [3:0]  held_wstrb_q;
        
 017308   always @(posedge clk or negedge rst_n) begin
 017274     if (!rst_n) begin
 000034       held_req_q <= 1'b0;
 000034       read_outstanding_q <= 1'b0;
 000034       held_we_q <= 1'b0;
 000034       held_addr_q <= '0;
 000034       held_wdata_q <= '0;
 000034       held_wstrb_q <= '0;
 017274     end else begin
 016896       if (held_req_q) begin
 000378         assert (mem_req);
 000378         assert (mem_we == held_we_q);
 000378         assert (mem_addr == held_addr_q);
 000378         assert (mem_wdata == held_wdata_q);
 000378         assert (mem_wstrb == held_wstrb_q);
              end
 017274       held_req_q <= mem_req && !mem_ready;
 016896       if (mem_req && !mem_ready) begin
 000378         held_we_q <= mem_we;
 000378         held_addr_q <= mem_addr;
 000378         held_wdata_q <= mem_wdata;
 000378         held_wstrb_q <= mem_wstrb;
              end
        
 016085       if (mem_req && mem_ready && !mem_we)
 001189         read_outstanding_q <= 1'b1;
 016085       if (mem_rvalid)
 001189         read_outstanding_q <= 1'b0;
        
~017274       assert (!(mem_rvalid && !read_outstanding_q));
~017274       assert (!spm_wr_en || state_q == DMA_WRITE_SPM);
~017274       assert (!(done_q && error_q));
~017274       assert (!mem_we || state_q == DMA_ISSUE_WRITE);
 017274       assert (spm_region_o == spm_region_q);
            end
          end
        `endif
        
        endmodule
        
