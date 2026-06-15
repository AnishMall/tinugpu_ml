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

  always @* begin
    case (load_lane_sel)
      2'd0: load_byte = mem_rdata[7:0];
      2'd1: load_byte = mem_rdata[15:8];
      2'd2: load_byte = mem_rdata[23:16];
      default: load_byte = mem_rdata[31:24];
    endcase
  end

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      state_q          <= DMA_IDLE;
      done_q           <= 1'b0;
      error_q          <= 1'b0;
      op_kind_q        <= '0;
      rows_q           <= '0;
      cols_q           <= '0;
      stride_bytes_q   <= '0;
      spm_region_q     <= '0;
      row_q            <= '0;
      col_q            <= '0;
      ext_row_base_q   <= '0;
      ext_addr_q       <= '0;
      spm_row_base_q   <= '0;
      spm_addr_q       <= '0;
      store_word_q     <= '0;
    end else begin
      state_q <= state_d;
      done_q  <= (state_q == DMA_DONE);
      error_q <= (state_q == DMA_ERROR);
      row_q   <= row_d;
      col_q   <= col_d;
      ext_row_base_q <= ext_row_base_d;
      ext_addr_q <= ext_addr_d;
      spm_row_base_q <= spm_row_base_d;
      spm_addr_q <= spm_addr_d;

      if (state_q == DMA_IDLE && start) begin
        op_kind_q      <= op_kind;
        rows_q         <= rows;
        cols_q         <= cols;
        stride_bytes_q <= stride_bytes;
        spm_region_q   <= spm_region;
        ext_row_base_q <= base_addr;
        ext_addr_q     <= base_addr;
        spm_row_base_q <= spm_base;
        spm_addr_q     <= spm_base;
      end

      if (state_q == DMA_READ_SPM)
        store_word_q <= spm_rdata;
    end
  end

  always @* begin
    row_d = row_q;
    col_d = col_q;
    ext_row_base_d = ext_row_base_q;
    ext_addr_d = ext_addr_q;
    spm_row_base_d = spm_row_base_q;
    spm_addr_d = spm_addr_q;

    if (state_q == DMA_IDLE && start) begin
      row_d = '0;
      col_d = '0;
    end else if (advance_elem) begin
      if (col_q + 16'd1 < cols_q) begin
        col_d = col_q + 16'd1;
        if (op_kind_q == DMA_OP_STORE_I32)
          ext_addr_d = ext_addr_q + 32'd4;
        else
          ext_addr_d = ext_addr_q + 32'd1;

        if (op_kind_q == DMA_OP_LOAD_I8)
          spm_addr_d = spm_addr_q + 9'd1;
        else
          spm_addr_d = spm_addr_q + 9'd4;
      end else begin
        col_d = '0;
        if (row_q + 16'd1 < rows_q) begin
          row_d = row_q + 16'd1;
          ext_row_base_d = ext_row_base_q + {16'd0, stride_bytes_q};
          ext_addr_d = ext_row_base_q + {16'd0, stride_bytes_q};
          if (op_kind_q == DMA_OP_LOAD_I8) begin
            if (spm_region_q == 2'd0)
              spm_row_base_d = spm_row_base_q + 9'(TILE_K);
            else
              spm_row_base_d = spm_row_base_q + 9'(TILE_N);
          end else begin
            spm_row_base_d = spm_row_base_q + 9'(TILE_N * 4);
          end
          if (op_kind_q == DMA_OP_LOAD_I8) begin
            if (spm_region_q == 2'd0)
              spm_addr_d = spm_row_base_q + 9'(TILE_K);
            else
              spm_addr_d = spm_row_base_q + 9'(TILE_N);
          end else begin
            spm_addr_d = spm_row_base_q + 9'(TILE_N * 4);
          end
        end
      end
    end
  end

  always @* begin
    state_d      = state_q;
    busy         = 1'b1;
    advance_elem = 1'b0;

    mem_req    = 1'b0;
    mem_we     = 1'b0;
    mem_addr   = '0;
    mem_wdata  = '0;
    mem_wstrb  = 4'b0000;

    spm_wr_en    = 1'b0;
    spm_region_o = spm_region_q;
    spm_addr     = '0;
    spm_wdata    = '0;
    spm_wstrb    = 4'b0000;

    case (state_q)
      DMA_IDLE: begin
        busy = 1'b0;
        if (start) begin
          if ((rows == 16'd0) || (cols == 16'd0))
            state_d = DMA_DONE;
          else if (op_kind == DMA_OP_LOAD_I8)
            state_d = DMA_ISSUE_READ;
          else if ((op_kind == DMA_OP_STORE_I32) || (op_kind == DMA_OP_STORE_I8))
            state_d = DMA_READ_SPM;
          else
            state_d = DMA_ERROR;
        end
      end

      DMA_ISSUE_READ: begin
        mem_req  = 1'b1;
        mem_we   = 1'b0;
        mem_addr = aligned_read_addr;
        if (mem_ready)
          state_d = DMA_WAIT_READ;
      end

      DMA_WAIT_READ: begin
        if (mem_rvalid)
          state_d = DMA_WRITE_SPM;
      end

      DMA_WRITE_SPM: begin
        spm_wr_en    = 1'b1;
        spm_region_o = spm_region_q;
        spm_addr     = spm_addr_q;
        spm_wdata    = {24'd0, load_byte};
        spm_wstrb    = 4'b0001;

        if (last_elem)
          state_d = DMA_DONE;
        else begin
          advance_elem = 1'b1;
          state_d = DMA_ISSUE_READ;
        end
      end

      DMA_READ_SPM: begin
        spm_region_o = spm_region_q;
        spm_addr = spm_addr_q;
        state_d = DMA_ISSUE_WRITE;
      end

      DMA_ISSUE_WRITE: begin
        mem_req  = 1'b1;
        mem_we   = 1'b1;
        mem_addr = aligned_write_addr;
        spm_region_o = spm_region_q;
        spm_addr = spm_addr_q;

        if (op_kind_q == DMA_OP_STORE_I32) begin
          mem_wdata = store_word_q;
          mem_wstrb = 4'b1111;
        end else begin
          case (ext_addr_q[1:0])
            2'd0: begin
              mem_wdata = {24'd0, store_word_q[7:0]};
              mem_wstrb = 4'b0001;
            end
            2'd1: begin
              mem_wdata = {16'd0, store_word_q[7:0], 8'd0};
              mem_wstrb = 4'b0010;
            end
            2'd2: begin
              mem_wdata = {8'd0, store_word_q[7:0], 16'd0};
              mem_wstrb = 4'b0100;
            end
            default: begin
              mem_wdata = {store_word_q[7:0], 24'd0};
              mem_wstrb = 4'b1000;
            end
          endcase
        end

        if (mem_ready) begin
          if (last_elem)
            state_d = DMA_DONE;
          else begin
            advance_elem = 1'b1;
            state_d = DMA_READ_SPM;
          end
        end
      end

      DMA_DONE: begin
        busy    = 1'b0;
        state_d = DMA_IDLE;
      end

      DMA_ERROR: begin
        busy    = 1'b0;
        state_d = DMA_IDLE;
      end

      default: begin
        state_d = DMA_IDLE;
      end
    endcase
  end

`ifndef SYNTHESIS
  logic        held_req_q;
  logic        held_we_q;
  logic [31:0] held_addr_q;
  logic [31:0] held_wdata_q;
  logic [3:0]  held_wstrb_q;

  always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      held_req_q <= 1'b0;
      held_we_q <= 1'b0;
      held_addr_q <= '0;
      held_wdata_q <= '0;
      held_wstrb_q <= '0;
    end else begin
      if (held_req_q) begin
        assert (mem_req);
        assert (mem_we == held_we_q);
        assert (mem_addr == held_addr_q);
        assert (mem_wdata == held_wdata_q);
        assert (mem_wstrb == held_wstrb_q);
      end
      held_req_q <= mem_req && !mem_ready;
      if (mem_req && !mem_ready) begin
        held_we_q <= mem_we;
        held_addr_q <= mem_addr;
        held_wdata_q <= mem_wdata;
        held_wstrb_q <= mem_wstrb;
      end
    end
  end
`endif

endmodule
