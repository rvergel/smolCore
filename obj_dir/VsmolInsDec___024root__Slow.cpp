// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsmolInsDec.h for the primary calling header

#include "VsmolInsDec__pch.h"
#include "VsmolInsDec__Syms.h"
#include "VsmolInsDec___024root.h"

void VsmolInsDec___024root___ctor_var_reset(VsmolInsDec___024root* vlSelf);

VsmolInsDec___024root::VsmolInsDec___024root(VsmolInsDec__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VsmolInsDec___024root___ctor_var_reset(this);
}

void VsmolInsDec___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VsmolInsDec___024root::~VsmolInsDec___024root() {
}
