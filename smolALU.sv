module smolALU(
    input logic [31:0] rs1,
    input logic [31:0] rs2_or_imm,
    input logic [4:0] pc,
    input logic [4:0] op_sel,
    output logic [31:0] alu_out,
    output logic [31:0] jal_br_tgt_pc,
    output logic carry,
    output logic overflow
    
);


always_comb begin

 // internal signals for add/sub
    logic [32:0] sum_ext;
    logic signed [31:0] a_s, b_s, sum_s;
    logic [63:0] sra_aux;

  // extend to capture carry
    assign sum_ext = (aluOp == 4'h1) 
                   ? ({1'b0, a} - {1'b0, b}) 
                   : ({1'b0, a} + {1'b0, b});

  // signed version for overflow detection
    assign a_s    = a;
    assign b_s    = (aluOp == 4'h1) ? -b : b;
    assign sum_s  = a_s + b_s;
    assign sra_aux = 64'd0;
    case (op_sel)
        5'd0: begin
            alu_out = rs1 + rs2_or_imm; //add or addi
        end
        5'd1: begin
            alu_out = rs1 - rs2_or_imm; //sub
        end
        5'd2: begin
            alu_out = rs1 & rs2_or_imm; //and or andi
        end
        5'd3: begin
            alu_out = rs1 || rs2_or_imm; //or or ori
        end
        5'd4: begin
            alu_out = rs1 ^ rs2_or_imm; //xor or xori
        end
        5'd5: begin
            alu_out = rs1 >> rs2_or_imm[4:0]; //srli or srl
        end
        5'd6: begin
            alu_out = rs1 << rs2_or_imm[4:0]; //slli or slli
        end
        5'd7: begin
            alu_out = {31'b0, rs1 < rs2_or_imm}; //sltu or sltiu
        end
        5'd8: begin
            alu_out = {rs2_or_imm[31:12],12'b0}; //lui
        end
        5'd9: begin
            alu_out = pc + rs2_or_imm; //auipc
        end
        5'd10: begin
            alu_out = pc + 32'd4; //jal or jalr
        end
        5'd11: begin
            alu_out = (rs1[31] == rs2_or_imm[31]) ? {31'b0, rs1 < rs2_or_imm} : {31'b0, rs1[31]}; //slt or slti
        end
        5'd12: begin
            sra_aux = {{32{rs1[31]}},rs1} >> rs2_or_imm[4:0];
            alu_out = sra_aux[31:0]; //sra or srai
        end
        5'd13: begin
            alu_out = rs1 + rs2_or_imm; //load or store address
        end
        default: begin
            alu_out = 32'h0000_0000;
        end
    endcase
end
endmodule
