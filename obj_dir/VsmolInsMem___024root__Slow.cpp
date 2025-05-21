// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsmolInsMem.h for the primary calling header

#include "VsmolInsMem__pch.h"
#include "VsmolInsMem__Syms.h"
#include "VsmolInsMem___024root.h"

void VsmolInsMem___024root___ctor_var_reset(VsmolInsMem___024root* vlSelf);

VsmolInsMem___024root::VsmolInsMem___024root(VsmolInsMem__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VsmolInsMem___024root___ctor_var_reset(this);
}

void VsmolInsMem___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VsmolInsMem___024root::~VsmolInsMem___024root() {
}
