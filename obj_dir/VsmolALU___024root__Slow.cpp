// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsmolALU.h for the primary calling header

#include "VsmolALU__pch.h"
#include "VsmolALU__Syms.h"
#include "VsmolALU___024root.h"

void VsmolALU___024root___ctor_var_reset(VsmolALU___024root* vlSelf);

VsmolALU___024root::VsmolALU___024root(VsmolALU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VsmolALU___024root___ctor_var_reset(this);
}

void VsmolALU___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VsmolALU___024root::~VsmolALU___024root() {
}
