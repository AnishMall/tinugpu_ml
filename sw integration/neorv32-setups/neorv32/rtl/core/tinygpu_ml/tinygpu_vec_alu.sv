module tinygpu_vec_alu import tinygpu_pkg::*; (
  input  logic [7:0]              opcode,
  input  logic signed [INT8_W-1:0] x_i,
  input  logic signed [INT8_W-1:0] y_i,
  output logic signed [ACC_W-1:0]  z_o
);

  logic signed [ACC_W-1:0] x_ext;
  logic signed [ACC_W-1:0] y_ext;

  assign x_ext = {{(ACC_W-INT8_W){x_i[INT8_W-1]}}, x_i};
  assign y_ext = {{(ACC_W-INT8_W){y_i[INT8_W-1]}}, y_i};

  function automatic signed [31:0] clamp32(
    input signed [31:0] x,
    input signed [31:0] lo,
    input signed [31:0] hi
  );
    begin
      if (x < lo)
        clamp32 = lo;
      else if (x > hi)
        clamp32 = hi;
      else
        clamp32 = x;
    end
  endfunction

  always_comb begin
    z_o = '0;
    case (opcode)
      OP_VEC_ADD: z_o = x_ext + y_ext;
      OP_VEC_MUL: z_o = x_ext * y_ext;
      OP_RELU:    z_o = (x_ext < 0) ? 32'sd0 : x_ext;
      OP_CLAMP:   z_o = clamp32(x_ext, -32'sd128, 32'sd127);
      default:    z_o = '0;
    endcase
  end

endmodule
