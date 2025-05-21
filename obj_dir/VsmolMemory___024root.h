// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VsmolMemory.h for the primary calling header

#ifndef VERILATED_VSMOLMEMORY___024ROOT_H_
#define VERILATED_VSMOLMEMORY___024ROOT_H_  // guard

#include "verilated.h"


class VsmolMemory__Syms;

class alignas(VL_CACHE_LINE_BYTES) VsmolMemory___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(memRead,0,0);
    VL_IN8(memWrite,0,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(memAddr,31,0);
    VL_IN(writeData,31,0);
    VL_OUT(readData,31,0);
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> smolMemory__DOT__memory;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VsmolMemory__Syms* const vlSymsp;

    // CONSTRUCTORS
    VsmolMemory___024root(VsmolMemory__Syms* symsp, const char* v__name);
    ~VsmolMemory___024root();
    VL_UNCOPYABLE(VsmolMemory___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
