#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <../obj_dir/VsmolPC.h>

#define MAX_TIME 20
vluint64_t sim_time = 0;

int main(int argc,char** argv,char** env){

    VsmolPC* dut = new VsmolPC;
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;

    dut->trace(m_trace,99);
    m_trace->open("wavePC.vcd");

    while(sim_time<MAX_TIME){
	dut->clk^=1;
	dut->rst=0;
	if(sim_time == 2) dut->next_pc = 4;
	if(sim_time == 5) dut->next_pc = 8;
	if(sim_time == 8) dut->rst=1;
	dut->eval();
	m_trace->dump(sim_time);
	sim_time++;
    } 
    
    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}
