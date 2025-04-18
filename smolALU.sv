module smolALU(
  input logic [31:0] rs1,
  input logic [31:0] rs2_or_imm,
  input logic [4:0] op_sel,
  output logic [31:0] alu_out

);


always_comb begin

 // internal signals for add/sub
  logic [32:0] sum_ext;
  logic signed [WIDTH-1:0] a_s, b_s, sum_s;

  // extend to capture carry
  assign sum_ext = (aluOp == 4'h1) 
                   ? ({1'b0, a} - {1'b0, b}) 
                   : ({1'b0, a} + {1'b0, b});

  // signed version for overflow detection
  assign a_s    = a;
  assign b_s    = (aluOp == 4'h1) ? -b : b;
  assign sum_s  = a_s + b_s;

endmodule
