#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <../obj_dir/VsmolALU.h>

#define MAX_TIME 20
vluint64_t sim_time = 0;

int main(int argc,char** argv,char** env){

    VsmolALU* dut = new VsmolALU;
    Verilated::traceEverOn(true);
    VerilatedVcdC* waveform = new VerilatedVcdC;

    dut->trace(waveform,99);
    waveform->open("ALUwaveform.vcd");
    dut->rs1=10;
    dut->rs2_or_imm=4;
    dut->pc=12;
    dut->op_sel=0;
    while(sim_time<MAX_TIME){
        //dut->clk^=1;
	dut->eval();
        waveform->dump(sim_time);
        sim_time++;
	dut->op_sel++;
    }   
    
    waveform->close();
    delete dut;
    exit(EXIT_SUCCESS);
}
