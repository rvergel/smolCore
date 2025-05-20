// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VsmolPC.h for the primary calling header

#ifndef VERILATED_VSMOLPC___024ROOT_H_
#define VERILATED_VSMOLPC___024ROOT_H_  // guard

#include "verilated.h"


class VsmolPC__Syms;

class alignas(VL_CACHE_LINE_BYTES) VsmolPC___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(next_pc,31,0);
    VL_OUT(pc,31,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VsmolPC__Syms* const vlSymsp;

    // CONSTRUCTORS
    VsmolPC___024root(VsmolPC__Syms* symsp, const char* v__name);
    ~VsmolPC___024root();
    VL_UNCOPYABLE(VsmolPC___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
