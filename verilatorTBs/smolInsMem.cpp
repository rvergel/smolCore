#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <../obj_dir/VsmolInsMem.h>

#define MAX_TIME 30
vluint64_t sim_time = 0;

int main(int argc,char** argv,char** env){

    VsmolInsMem* dut = new VsmolInsMem;
    Verilated::traceEverOn(true);
    VerilatedVcdC* waveform = new VerilatedVcdC;

    dut->trace(waveform,99);
    waveform->open("waveInsMem.vcd");
    dut->addr=0;
    while(sim_time<MAX_TIME){
        dut->clk^=1;
        //dut->rst=0;
	dut->addr = dut->addr + 1;
	dut->eval();
        waveform->dump(sim_time);
        sim_time++;
    }

    waveform->close();
    delete dut;
    exit(EXIT_SUCCESS);
}
