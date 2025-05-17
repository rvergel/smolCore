/*
    Author: Ricardo Vergel
    Description: Next PC Logic calculator with branch and jump instruction
    Date: April 19-2025

    ****INSERT YOUR CHANGES BELOW***

	Date: April 22-2025
	Description: Branch and AUIPC operations supported in ALU, Jal operation calculated locally
*/
module smolNextPC(
    input logic [31:0] rs1,
    input logic [31:0] rs2_or_imm,
    input logic [31:0] pc,
	input logic [31:0] alu_out,
    input logic br_auipc_enable, //from control
	input logic jal_enable, //from control
    input logic rst,

    output logic [31:0] nextPC
);

assign nextPC = rst ? 32'd0 : br_auipc_enable ? alu_out
                            : jal_enable ? rs1 + rs2_or_imm 
							: pc + 32'd4; 

endmodule
