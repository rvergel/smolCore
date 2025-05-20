// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsmolRF.h for the primary calling header

#include "VsmolRF__pch.h"
#include "VsmolRF__Syms.h"
#include "VsmolRF___024root.h"

void VsmolRF___024root___ctor_var_reset(VsmolRF___024root* vlSelf);

VsmolRF___024root::VsmolRF___024root(VsmolRF__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VsmolRF___024root___ctor_var_reset(this);
}

void VsmolRF___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VsmolRF___024root::~VsmolRF___024root() {
}
