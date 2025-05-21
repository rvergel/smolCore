// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsmolMemory.h for the primary calling header

#include "VsmolMemory__pch.h"
#include "VsmolMemory__Syms.h"
#include "VsmolMemory___024root.h"

void VsmolMemory___024root___ctor_var_reset(VsmolMemory___024root* vlSelf);

VsmolMemory___024root::VsmolMemory___024root(VsmolMemory__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VsmolMemory___024root___ctor_var_reset(this);
}

void VsmolMemory___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VsmolMemory___024root::~VsmolMemory___024root() {
}
