/*

Author: Ricardo Vergel

Description: SmolCore Instruction decoder and immediate generator

Date: April 18-2025

*****INSERT HERE YOUR CHANGES COMMENTS + DATE *****

*/


module smolInsDec(
    input logic [31:0] instr,

    // decoded fields

    output logic [6:0] opcode,
    output logic [4:0] rd,
    output logic [2:0] funct3,
    output logic [4:0] rs1,
    output logic [4:0] rs2,
    output logic funct7,

    //inmediates

    output logic [31:0] imm

    //control signals

    /*  output logic regWrite,
        output logic memRead,
        output logic memWrite,
        output logic branch,
        output logic aluSrc,
        output logic memToReg,
        output logic aluOp*/
);

// 1) Field extraction
assign opcode = instr[6:0];
assign rd     = instr[11:7];
assign funct3 = instr[14:12];
assign rs1    = instr[19:15];
assign rs2    = instr[24:20];
assign funct7 = instr[30];        // bit 30 differentiates e.g. add vs sub

// 2) Ins Type selection
logic [2:0] optype;
always_comb begin
optype = 3'b000;
case (instr[6:2])

    (5'b00101 || 5'b01101): begin
                            optype = 3'b001; //U TYPE
                            end

    (5'b00000 || 5'b00001 || 5'b00100 || 5'b00110 || 5'b11001): begin
                                                                optype = 3'b010; //I TYPE
                                                                end

    (5'b01000 || 5'b01001): begin
                            optype = 3'b011; //S TYPE
                            end

    (5'b01100 || 5'b01110 || 5'b01011 || 5'b10100): begin                                                                                                                      optype = 3'b100; //R TYPE
                                                    end

                                                                                                                              (5'b11011): begin
               optype = 3'b101; //J TYPE
               end
                                                                                                                              (5'b11000): begin
               optype = 3'b110; //B TYPE
               end
                                                                                                                               default: begin
             optype = 3'b111;
             end  
endcase  
                                                                                                                          
end

// IMMEDIATE GENERATOR + SHAMT GENERATOR IF I INSTRCTION                                                                                                                          
always_comb begin 
imm = 32'h0000_0000;

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
/*
// 2) Immediate generation
// I‑type: bits [31:20]
assign imm_i = {{20{instr[31]}}, instr[31:20]};

// S‑type: bits [31:25] & [11:7]
assign imm_s = {{20{instr[31]}},
instr[31:25],
instr[11:7]};

// B‑type: branch offsets: [31], [7], [30:25], [11:8], LSB=0
assign imm_b = {{19{instr[31]}},
instr[31],
instr[7],
instr[30:25],
instr[11:8],
1'b0};

 */ 

/*
// 3) Main Control Logic
always_comb begin
// default all low/zero
regWrite = 0; memRead = 0; memWrite = 0;
branch   = 0; aluSrc  = 0; memToReg = 0;
aluOp    = 2'b00;

case (opcode)
7'b0110011: begin  // R‑type (ADD, SUB, SLL, etc.)
regWrite = 1;
aluSrc   = 0;      // second ALU operand from rs2
memToReg = 0;      // write back from ALU
aluOp    = 2'b10;  // R‑type operation
end

7'b0010011: begin  // I‑type ALU (ADDI, SLTI, etc.)
regWrite = 1;
aluSrc   = 1;      // second ALU operand from imm_i
memToReg = 0;
aluOp    = 2'b10;  // R‑type ALU code (funct3 chooses op)
end

7'b0000011: begin  // Load (LW)
regWrite = 1;
memRead  = 1;
aluSrc   = 1;
memToReg = 1;      // write back from memory
aluOp    = 2'b00;  // ADD for address calc
end

7'b0100011: begin  // Store (SW)
memWrite = 1;
aluSrc   = 1;
aluOp    = 2'b00;  // ADD for address calc
end

7'b1100011: begin  // Branch (BEQ, BNE, …)
branch   = 1;
aluSrc   = 0;
aluOp    = 2'b01;  // SUB for comparison
end

default: begin
// leave everything 0 for unsupported opcodes
end
endcase
end*/
endmodule
