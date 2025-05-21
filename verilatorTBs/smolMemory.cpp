#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <../obj_dir/VsmolMemory.h>

#define MAX_TIME 30
vluint64_t sim_time = 0;

int main(int argc,char** argv,char** env){

    VsmolMemory* dut = new VsmolMemory;
    Verilated::traceEverOn(true);
    VerilatedVcdC* waveform = new VerilatedVcdC;

    dut->trace(waveform,99);
    waveform->open("waveMemory.vcd");

    while(sim_time<MAX_TIME){
        dut->clk^=1;
        //dut->rst=0;
        if(sim_time == 2) {dut->memWrite=1; dut->memAddr=0; dut->writeData=0x0000000a;}
        if(sim_time == 4) dut->memWrite=0;
        if(sim_time == 6) dut->memRead=1;
	if(sim_time == 8) {dut->memRead = 0; dut->memAddr=8;}
        if(sim_time == 9) {dut->memWrite=1; dut->writeData=0x0000000b;}
	if(sim_time == 10) dut->memRead=1;
	if(sim_time == 11) dut->memWrite=0;
	dut->eval();
        waveform->dump(sim_time);
        sim_time++;
    }

    waveform->close();
    delete dut;
    exit(EXIT_SUCCESS);
}
