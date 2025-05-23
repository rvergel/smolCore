/*

Author: Ricardo Vergel

Description: SmolCore Instruction decoder and immediate generator

Date: April 18-2025

*****INSERT HERE YOUR CHANGES COMMENTS + DATE *****
Date: May 21-2025
Description: Fixed case logic after TB
*/

/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off CASEOVERLAP */

module smolInsDec(
    input logic [31:0] instr,

    // decoded fields

    output logic [6:0] opcode,
    output logic [4:0] rd,
    output logic [2:0] funct3,
    output logic [4:0] rs1,
    output logic [4:0] rs2,
    output logic [6:0] funct7,

    //inmediates

    output logic [31:0] imm


);

//1) Field extraction
assign opcode = instr[6:0];
assign rd     = instr[11:7];
assign funct3 = instr[14:12];
assign rs1    = instr[19:15];
assign rs2    = instr[24:20];
assign funct7 = instr[31:25];        // bit 30 differentiates e.g. add vs sub

// 2) Ins Type selection
logic [2:0] optype;
logic [4:0] internal;
assign internal = instr[6:2];
always_comb begin
casez (internal)

    5'b00101, 5'b01101: begin
                            optype = 3'b001; //U TYPE
                            end

    5'b00000,5'b00001,5'b00100,5'b00110,5'b11001: begin
                                                                optype = 3'b010; //I TYPE
                                                                end

    5'b01000,5'b01001: begin
                            optype = 3'b011; //S TYPE
                            end

    5'b01100,5'b01110,5'b01011,5'b10100: begin                                                                                                                      optype = 3'b100; //R TYPE
                                                    end

                                                                                                                              5'b11011: begin
               optype = 3'b101; //J TYPE
               end
                                                                                                                              5'b11000: begin
               optype = 3'b110; //B TYPE
               end
                                                                                                                               default: begin
             optype = 3'b111;
             end  
endcase  
                                                                                                                          
end

// IMMEDIATE GENERATOR + SHAMT GENERATOR IF I INSTRCTION                                                                                                                          
always_comb begin 

case (optype)
    3'b001: begin
    imm = {instr[31:12],1'b0}; //U IMMEDIATE
end
3'b010: begin
imm = {{20{instr[31]}}, instr[31:20]}; // I INMEDIATE
end
3'b011: begin
imm = {{20{instr[31]}},instr[31:25],instr[11:7]}; // S IMMEDIATE
end
3'b101: begin
imm = {{11{instr[31]}},instr[19:12],instr[20],instr[30:21],1'b0}; //J IMMEDIATE
end

3'b110: begin
imm = {{20{instr[31]}},instr[7],instr[30:25],instr[11:8],1'b0};
end
default: begin
imm = 32'h0000_0000;
end
endcase
end
endmodule
