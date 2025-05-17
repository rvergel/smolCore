`timescale 1ns/1ps

module PC_tb();

logic clk;
logic rst;
logic [31:0] next_pc;

logic [31:0] pc;

smolPC dut(
    .clk(clk),
    .rst(rst),
    .next_pc(next_pc),
    .pc(pc)
);


initial begin
    rst = 1'b1; #10;
    rst = 1'b0; #5;

    next_pc = 32'h0000_000A; #10;
    next_pc = 32'h0000_000E; #10;
    next_pc = 32'h1234_5678; #10;
    next_pc = 32'h0000_0000; 


end


always begin
    clk = 1'b1; #5;
    clk = 1'b0; #5;
end

initial begin
    $display("Starting PC testbench");
    $dumpfile("PC.vcd");
    $dumpvars;
    #500;
    $display("End of simulation");
    $finish;
end

endmodule
