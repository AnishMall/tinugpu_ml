//      // verilator_coverage annotation
        module tinygpu_counters (
          input  logic        clk,
          input  logic        rst_n,
          input  logic        cmd_start_i,
          input  logic        cmd_done_i,
          input  logic        busy_i,
          input  logic        active_i,
          input  logic        stall_i,
          output logic [31:0] cycle_count_o,
          output logic [31:0] active_count_o,
          output logic [31:0] stall_count_o,
          output logic [31:0] cmd_count_o
        );
        
          logic [31:0] cycle_cur_q;
          logic [31:0] active_cur_q;
          logic [31:0] stall_cur_q;
        
 1056280   always_ff @(posedge clk or negedge rst_n) begin
~1056276     if (!rst_n) begin
%000004       cycle_cur_q    <= '0;
%000004       active_cur_q   <= '0;
%000004       stall_cur_q    <= '0;
%000004       cycle_count_o  <= '0;
%000004       active_count_o <= '0;
%000004       stall_count_o  <= '0;
%000004       cmd_count_o    <= '0;
 1056276     end else begin
~1055133       if (cmd_start_i) begin
~001143         cycle_cur_q  <= '0;
~001143         active_cur_q <= '0;
~001143         stall_cur_q  <= '0;
 1055133       end else begin
~1031843         if (busy_i)
~1031843           cycle_cur_q <= cycle_cur_q + 32'd1;
~1038973         if (active_i)
~016160           active_cur_q <= active_cur_q + 32'd1;
~931448         if (stall_i)
~931448           stall_cur_q <= stall_cur_q + 32'd1;
              end
        
~1055133       if (cmd_done_i) begin
~001143         cycle_count_o  <= cycle_cur_q;
~001143         active_count_o <= active_cur_q;
~001143         stall_count_o  <= stall_cur_q;
~001143         cmd_count_o    <= cmd_count_o + 32'd1;
              end
            end
          end
        
        endmodule
        
