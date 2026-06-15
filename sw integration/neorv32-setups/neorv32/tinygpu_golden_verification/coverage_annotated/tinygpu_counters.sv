//      // verilator_coverage annotation
        module tinygpu_counters (
 016633   input  logic        clk,
%000007   input  logic        rst_n,
 000064   input  logic        cmd_start_i,
 000064   input  logic        cmd_done_i,
 000064   input  logic        busy_i,
 000098   input  logic        active_i,
 000241   input  logic        stall_i,
~000021   output logic [31:0] cycle_count_o,
~000018   output logic [31:0] active_count_o,
~000021   output logic [31:0] stall_count_o,
~000034   output logic [31:0] cmd_count_o
        );
        
~007045   logic [31:0] cycle_cur_q;
~000151   logic [31:0] active_cur_q;
~004366   logic [31:0] stall_cur_q;
        
 016639   always_ff @(posedge clk or negedge rst_n) begin
 016605     if (!rst_n) begin
 000034       cycle_cur_q    <= '0;
 000034       active_cur_q   <= '0;
 000034       stall_cur_q    <= '0;
 000034       cycle_count_o  <= '0;
 000034       active_count_o <= '0;
 000034       stall_count_o  <= '0;
 000034       cmd_count_o    <= '0;
 016605     end else begin
 016541       if (cmd_start_i) begin
 000064         cycle_cur_q  <= '0;
 000064         active_cur_q <= '0;
 000064         stall_cur_q  <= '0;
 016541       end else begin
 014046         if (busy_i)
 014046           cycle_cur_q <= cycle_cur_q + 32'd1;
 016268         if (active_i)
 000273           active_cur_q <= active_cur_q + 32'd1;
 008698         if (stall_i)
 008698           stall_cur_q <= stall_cur_q + 32'd1;
              end
        
 016541       if (cmd_done_i) begin
 000064         cycle_count_o  <= cycle_cur_q;
 000064         active_count_o <= active_cur_q;
 000064         stall_count_o  <= stall_cur_q;
 000064         cmd_count_o    <= cmd_count_o + 32'd1;
              end
            end
          end
        
        endmodule
        
