module smolALU(
    input logic [31:0] rs1,
    input logic [31:0] rs2_or_imm,
    input logic [4:0] op_sel,
    output logic [31:0] alu_out,
    output logic carry,
    output logic overflow
    
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
    
    case (op_sel)
        5'h0: begin
            alu_out = rs1 + rs2_or_imm; //add or addi
        end
        5'h1: begin
            alu_out = rs1 - rs2_or_imm; //sub
        end
        5'h2: begin
            alu_out = rs1 & rs2_or_imm; //and or andi
        end
        5'h3: begin
            alu_out = rs1 || rs2_or_imm; //or or ori
        end
        5'h4: begin
            alu_out = rs1 ^ rs2_or_imm; //xor or xori
        end
        5'h5: begin
            alu_out = rs1 >> rs2_or_imm[4:0]; //srli or srl
        end
        5'h6: begin
            alu_out = rs1 << rs2_or_imm[4:0]; //slli or slli
        end
        5'h7: begin
            alu_out = {31'b0, rs1 < rs2_or_imm}; //sltu or sltiu
        end
        5'h1: begin
        end
    endcase
end
endmodule
