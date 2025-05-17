module register_file (
    input        clk,
    input        rst_n,

    // Read port 1
    input  [4:0] rs1_addr,
    output reg [31:0] rs1_data,

    // Read port 2
    input  [4:0] rs2_addr,
    output reg [31:0] rs2_data,

    // Write port
    input        reg_write_en,
    input  [4:0] rd_addr,
    input  [31:0] rd_data
);

    // Use 'reg' instead of 'logic' for compatibility with Icarus Verilog
    reg [31:0] regs [0:31];

    // Combinational read logic
    always @(*) begin
        rs1_data = (rs1_addr == 5'd0) ? 32'd0 : regs[rs1_addr];
        rs2_data = (rs2_addr == 5'd0) ? 32'd0 : regs[rs2_addr];
    end

    // Sequential write logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            integer i;
            for (i = 0; i < 32; i = i + 1)
                regs[i] <= 32'd0;
        end else if (reg_write_en && rd_addr != 5'd0) begin
            regs[rd_addr] <= rd_data;
        end
    end

endmodule

