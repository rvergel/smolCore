// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsmolPC.h for the primary calling header

#include "VsmolPC__pch.h"
#include "VsmolPC__Syms.h"
#include "VsmolPC___024root.h"

void VsmolPC___024root___ctor_var_reset(VsmolPC___024root* vlSelf);

VsmolPC___024root::VsmolPC___024root(VsmolPC__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VsmolPC___024root___ctor_var_reset(this);
}

void VsmolPC___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VsmolPC___024root::~VsmolPC___024root() {
}
