//      // verilator_coverage annotation
        module tinygpu_vec_alu import tinygpu_pkg::*; (
~000064   input  logic [7:0]              opcode,
%000003   input  logic signed [INT8_W-1:0] x_i,
%000002   input  logic signed [INT8_W-1:0] y_i,
%000005   output logic signed [ACC_W-1:0]  z_o
        );
        
%000003   logic signed [ACC_W-1:0] x_ext;
%000002   logic signed [ACC_W-1:0] y_ext;
        
          assign x_ext = {{(ACC_W-INT8_W){x_i[INT8_W-1]}}, x_i};
          assign y_ext = {{(ACC_W-INT8_W){y_i[INT8_W-1]}}, y_i};
        
%000000   function automatic signed [31:0] clamp32(
            input signed [31:0] x,
            input signed [31:0] lo,
            input signed [31:0] hi
          );
%000000     begin
%000000       if (x < lo)
%000000         clamp32 = lo;
%000000       else if (x > hi)
%000000         clamp32 = hi;
              else
%000000         clamp32 = x;
            end
          endfunction
        
 099807   always_comb begin
 099807     z_o = '0;
 099807     case (opcode)
 000411       OP_VEC_ADD: z_o = x_ext + y_ext;
%000000       OP_VEC_MUL: z_o = x_ext * y_ext;
 099687       OP_RELU:    z_o = (x_ext < 0) ? 32'sd0 : x_ext;
%000000       OP_CLAMP:   z_o = clamp32(x_ext, -32'sd128, 32'sd127);
 099093       default:    z_o = '0;
            endcase
          end
        
        endmodule
        
