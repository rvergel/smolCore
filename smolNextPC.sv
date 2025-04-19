/*
    Author: Ricardo Vergel
    Description: Next PC Logic calculator with branch and jump instruction
    Date: April 19-2025

    ****INSERT YOUR CHANGES BELOW***
*/
module nextPC(
    input logic [31:0] rs1,
    input logic [31:0] rs2_or_imm,
    input logic [31:0] pc,
    input logic br_enable,
    input logic jal_enable,
    input logic rst,

    output logic [31:0] nextPC
);

assign nextPC = rst ? 32'd0 : br_enable ? pc + rs2_or_imm
                            : jal_enable ? rs1 + rs2_or_imm
                            : pc + 32'd4; 

endmodule
