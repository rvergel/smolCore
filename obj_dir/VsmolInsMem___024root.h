// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VsmolInsMem.h for the primary calling header

#ifndef VERILATED_VSMOLINSMEM___024ROOT_H_
#define VERILATED_VSMOLINSMEM___024ROOT_H_  // guard

#include "verilated.h"


class VsmolInsMem__Syms;

class alignas(VL_CACHE_LINE_BYTES) VsmolInsMem___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(addr,11,0);
    VL_OUT(instruction,31,0);
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 1024> InstructionMemory__DOT__mem;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VsmolInsMem__Syms* const vlSymsp;

    // CONSTRUCTORS
    VsmolInsMem___024root(VsmolInsMem__Syms* symsp, const char* v__name);
    ~VsmolInsMem___024root();
    VL_UNCOPYABLE(VsmolInsMem___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
