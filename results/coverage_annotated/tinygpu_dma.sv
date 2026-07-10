//      // verilator_coverage annotation
        module tinygpu_dma import tinygpu_pkg::*; (
          input  logic              clk,
          input  logic              rst_n,
        
          input  logic              start,
          output logic              busy,
          output logic              done,
          output logic              error,
        
          input  logic [1:0]        op_kind,
          input  logic [31:0]       base_addr,
          input  logic [15:0]       rows,
          input  logic [15:0]       cols,
          input  logic [15:0]       stride_bytes,
          input  logic [1:0]        spm_region,
          input  logic [8:0]        spm_base,
        
          output logic              mem_req,
          output logic              mem_we,
          output logic [31:0]       mem_addr,
          output logic [31:0]       mem_wdata,
          output logic [3:0]        mem_wstrb,
          input  logic [31:0]       mem_rdata,
          input  logic              mem_ready,
          input  logic              mem_rvalid,
        
          output logic              spm_wr_en,
          output logic [1:0]        spm_region_o,
          output logic [8:0]        spm_addr,
          output logic [31:0]       spm_wdata,
          output logic [3:0]        spm_wstrb,
          input  logic [31:0]       spm_rdata
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
        
          dma_state_e state_q, state_d;
          logic       done_q;
          logic       error_q;
        
          logic [1:0]  op_kind_q;
          logic [15:0] rows_q, cols_q, stride_bytes_q;
          logic [1:0]  spm_region_q;
        
          logic [15:0] row_q, row_d;
          logic [15:0] col_q, col_d;
          logic [31:0] ext_row_base_q, ext_row_base_d;
          logic [31:0] ext_addr_q, ext_addr_d;
          logic [8:0]  spm_row_base_q, spm_row_base_d;
          logic [8:0]  spm_addr_q, spm_addr_d;
        
          logic [31:0] aligned_read_addr;
          logic [31:0] aligned_write_addr;
          logic [7:0]  load_byte;
          logic [1:0]  load_lane_sel;
        
          logic        advance_elem;
          logic        last_elem;
          logic [31:0] store_word_q;
        
          assign done  = done_q;
          assign error = error_q;
        
          assign aligned_read_addr = {ext_addr_q[31:2], 2'b00};
          assign aligned_write_addr = {ext_addr_q[31:2], 2'b00};
          assign load_lane_sel = ext_addr_q[1:0];
          assign last_elem = (row_q + 16'd1 >= rows_q) && (col_q + 16'd1 >= cols_q);
        
 1056281   always @* begin
 1056281     case (load_lane_sel)
 392440       2'd0: load_byte = mem_rdata[7:0];
~203930       2'd1: load_byte = mem_rdata[15:8];
~174946       2'd2: load_byte = mem_rdata[23:16];
~284965       default: load_byte = mem_rdata[31:24];
            endcase
          end
        
 1056280   always_ff @(posedge clk or negedge rst_n) begin
~1056276     if (!rst_n) begin
%000004       state_q          <= DMA_IDLE;
%000004       done_q           <= 1'b0;
%000004       error_q          <= 1'b0;
%000004       op_kind_q        <= '0;
%000004       rows_q           <= '0;
%000004       cols_q           <= '0;
%000004       stride_bytes_q   <= '0;
%000004       spm_region_q     <= '0;
%000004       row_q            <= '0;
%000004       col_q            <= '0;
%000004       ext_row_base_q   <= '0;
%000004       ext_addr_q       <= '0;
%000004       spm_row_base_q   <= '0;
%000004       spm_addr_q       <= '0;
%000004       store_word_q     <= '0;
 1056276     end else begin
 1056276       state_q <= state_d;
 1056276       done_q  <= (state_q == DMA_DONE);
 1056276       error_q <= (state_q == DMA_ERROR);
 1056276       row_q   <= row_d;
 1056276       col_q   <= col_d;
 1056276       ext_row_base_q <= ext_row_base_d;
 1056276       ext_addr_q <= ext_addr_d;
 1056276       spm_row_base_q <= spm_row_base_d;
 1056276       spm_addr_q <= spm_addr_d;
        
~1052743       if (state_q == DMA_IDLE && start) begin
~003533         op_kind_q      <= op_kind;
~003533         rows_q         <= rows;
~003533         cols_q         <= cols;
~003533         stride_bytes_q <= stride_bytes;
~003533         spm_region_q   <= spm_region;
~003533         ext_row_base_q <= base_addr;
~003533         ext_addr_q     <= base_addr;
~003533         spm_row_base_q <= spm_base;
~003533         spm_addr_q     <= spm_base;
              end
        
~1046843       if (state_q == DMA_READ_SPM)
~009433         store_word_q <= spm_rdata;
            end
          end
        
 3168841   always @* begin
 3168841     row_d = row_q;
 3168841     col_d = col_q;
 3168841     ext_row_base_d = ext_row_base_q;
 3168841     ext_addr_d = ext_addr_q;
 3168841     spm_row_base_d = spm_row_base_q;
 3168841     spm_addr_d = spm_addr_q;
        
~3158242     if (state_q == DMA_IDLE && start) begin
~010599       row_d = '0;
~010599       col_d = '0;
~3008143     end else if (advance_elem) begin
~109896       if (col_q + 16'd1 < cols_q) begin
~109896         col_d = col_q + 16'd1;
~101688         if (op_kind_q == DMA_OP_STORE_I32)
~008208           ext_addr_d = ext_addr_q + 32'd4;
                else
~101688           ext_addr_d = ext_addr_q + 32'd1;
        
~092715         if (op_kind_q == DMA_OP_LOAD_I8)
~092715           spm_addr_d = spm_addr_q + 9'd1;
                else
~017181           spm_addr_d = spm_addr_q + 9'd4;
~040203       end else begin
~040203         col_d = '0;
~040203         if (row_q + 16'd1 < rows_q) begin
~040203           row_d = row_q + 16'd1;
~040203           ext_row_base_d = ext_row_base_q + {16'd0, stride_bytes_q};
~040203           ext_addr_d = ext_row_base_q + {16'd0, stride_bytes_q};
~032667           if (op_kind_q == DMA_OP_LOAD_I8) begin
~029052             if (spm_region_q == 2'd0)
~003615               spm_row_base_d = spm_row_base_q + 9'(TILE_K);
                    else
~029052               spm_row_base_d = spm_row_base_q + 9'(TILE_N);
~007536           end else begin
~007536             spm_row_base_d = spm_row_base_q + 9'(TILE_N * 4);
                  end
~032667           if (op_kind_q == DMA_OP_LOAD_I8) begin
~029052             if (spm_region_q == 2'd0)
~003615               spm_addr_d = spm_row_base_q + 9'(TILE_K);
                    else
~029052               spm_addr_d = spm_row_base_q + 9'(TILE_N);
~007536           end else begin
~007536             spm_addr_d = spm_row_base_q + 9'(TILE_N * 4);
                  end
                end
              end
            end
          end
        
 3168841   always @* begin
 3168841     state_d      = state_q;
 3168841     busy         = 1'b1;
 3168841     advance_elem = 1'b0;
        
 3168841     mem_req    = 1'b0;
 3168841     mem_we     = 1'b0;
 3168841     mem_addr   = '0;
 3168841     mem_wdata  = '0;
 3168841     mem_wstrb  = 4'b0000;
        
 3168841     spm_wr_en    = 1'b0;
 3168841     spm_region_o = spm_region_q;
 3168841     spm_addr     = '0;
 3168841     spm_wdata    = '0;
 3168841     spm_wstrb    = 4'b0000;
        
 3168841     case (state_q)
 1391494       DMA_IDLE: begin
 1391494         busy = 1'b0;
~1380895         if (start) begin
~010599           if ((rows == 16'd0) || (cols == 16'd0))
%000006             state_d = DMA_DONE;
~007017           else if (op_kind == DMA_OP_LOAD_I8)
~007017             state_d = DMA_ISSUE_READ;
~003582           else if ((op_kind == DMA_OP_STORE_I32) || (op_kind == DMA_OP_STORE_I8))
~003582             state_d = DMA_READ_SPM;
                  else
%000003             state_d = DMA_ERROR;
                end
              end
        
~134589       DMA_ISSUE_READ: begin
~134589         mem_req  = 1'b1;
~134589         mem_we   = 1'b0;
~134589         mem_addr = aligned_read_addr;
~132399         if (mem_ready)
~132399           state_d = DMA_WAIT_READ;
              end
        
~1258320       DMA_WAIT_READ: begin
~1125921         if (mem_rvalid)
~132399           state_d = DMA_WRITE_SPM;
              end
        
~132399       DMA_WRITE_SPM: begin
~132399         spm_wr_en    = 1'b1;
~132399         spm_region_o = spm_region_q;
~132399         spm_addr     = spm_addr_q;
~132399         spm_wdata    = {24'd0, load_byte};
~132399         spm_wstrb    = 4'b0001;
        
~125382         if (last_elem)
~007017           state_d = DMA_DONE;
~125382         else begin
~125382           advance_elem = 1'b1;
~125382           state_d = DMA_ISSUE_READ;
                end
              end
        
~028299       DMA_READ_SPM: begin
~028299         spm_region_o = spm_region_q;
~028299         spm_addr = spm_addr_q;
~028299         state_d = DMA_ISSUE_WRITE;
              end
        
~213141       DMA_ISSUE_WRITE: begin
~213141         mem_req  = 1'b1;
~213141         mem_we   = 1'b1;
~213141         mem_addr = aligned_write_addr;
~213141         spm_region_o = spm_region_q;
~213141         spm_addr = spm_addr_q;
        
~111006         if (op_kind_q == DMA_OP_STORE_I32) begin
~102135           mem_wdata = store_word_q;
~102135           mem_wstrb = 4'b1111;
~111006         end else begin
~111006           case (ext_addr_q[1:0])
~019302             2'd0: begin
~019302               mem_wdata = {24'd0, store_word_q[7:0]};
~019302               mem_wstrb = 4'b0001;
                    end
~032319             2'd1: begin
~032319               mem_wdata = {16'd0, store_word_q[7:0], 8'd0};
~032319               mem_wstrb = 4'b0010;
                    end
~030132             2'd2: begin
~030132               mem_wdata = {8'd0, store_word_q[7:0], 16'd0};
~030132               mem_wstrb = 4'b0100;
                    end
~029253             default: begin
~029253               mem_wdata = {store_word_q[7:0], 24'd0};
~029253               mem_wstrb = 4'b1000;
                    end
                  endcase
                end
        
~184842         if (mem_ready) begin
~024717           if (last_elem)
~003582             state_d = DMA_DONE;
~024717           else begin
~024717             advance_elem = 1'b1;
~024717             state_d = DMA_READ_SPM;
                  end
                end
              end
        
~010599       DMA_DONE: begin
~010599         busy    = 1'b0;
~010599         state_d = DMA_IDLE;
              end
        
%000004       DMA_ERROR: begin
%000004         busy    = 1'b0;
%000004         state_d = DMA_IDLE;
              end
        
%000000       default: begin
%000000         state_d = DMA_IDLE;
              end
            endcase
          end
        
        `ifndef SYNTHESIS
          logic        held_req_q;
          logic        read_outstanding_q;
          logic        held_we_q;
          logic [31:0] held_addr_q;
          logic [31:0] held_wdata_q;
          logic [3:0]  held_wstrb_q;
        
 1056280   always @(posedge clk or negedge rst_n) begin
~1056276     if (!rst_n) begin
%000004       held_req_q <= 1'b0;
%000004       read_outstanding_q <= 1'b0;
%000004       held_we_q <= 1'b0;
%000004       held_addr_q <= '0;
%000004       held_wdata_q <= '0;
%000004       held_wstrb_q <= '0;
 1056276     end else begin
~993932       if (held_req_q) begin
~062344         assert (mem_req);
~062344         assert (mem_we == held_we_q);
~062344         assert (mem_addr == held_addr_q);
~062344         assert (mem_wdata == held_wdata_q);
~062344         assert (mem_wstrb == held_wstrb_q);
              end
~1056276       held_req_q <= mem_req && !mem_ready;
~993932       if (mem_req && !mem_ready) begin
~062344         held_we_q <= mem_we;
~062344         held_addr_q <= mem_addr;
~062344         held_wdata_q <= mem_wdata;
~062344         held_wstrb_q <= mem_wstrb;
              end
        
~1012143       if (mem_req && mem_ready && !mem_we)
~044133         read_outstanding_q <= 1'b1;
~1012143       if (mem_rvalid)
~044133         read_outstanding_q <= 1'b0;
        
~1056276       assert (!(mem_rvalid && !read_outstanding_q));
~1056276       assert (!spm_wr_en || state_q == DMA_WRITE_SPM);
~1056276       assert (!(done_q && error_q));
~1056276       assert (!mem_we || state_q == DMA_ISSUE_WRITE);
 1056276       assert (spm_region_o == spm_region_q);
            end
          end
        `endif
        
        endmodule
        
