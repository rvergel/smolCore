// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsmolNextPC.h for the primary calling header

#include "VsmolNextPC__pch.h"
#include "VsmolNextPC__Syms.h"
#include "VsmolNextPC___024root.h"

void VsmolNextPC___024root___ctor_var_reset(VsmolNextPC___024root* vlSelf);

VsmolNextPC___024root::VsmolNextPC___024root(VsmolNextPC__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VsmolNextPC___024root___ctor_var_reset(this);
}

void VsmolNextPC___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VsmolNextPC___024root::~VsmolNextPC___024root() {
}
