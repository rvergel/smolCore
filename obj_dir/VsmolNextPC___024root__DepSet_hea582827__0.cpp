// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsmolNextPC.h for the primary calling header

#include "VsmolNextPC__pch.h"
#include "VsmolNextPC__Syms.h"
#include "VsmolNextPC___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolNextPC___024root___dump_triggers__ico(VsmolNextPC___024root* vlSelf);
#endif  // VL_DEBUG

void VsmolNextPC___024root___eval_triggers__ico(VsmolNextPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolNextPC___024root___eval_triggers__ico\n"); );
    VsmolNextPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VsmolNextPC___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolNextPC___024root___dump_triggers__act(VsmolNextPC___024root* vlSelf);
#endif  // VL_DEBUG

void VsmolNextPC___024root___eval_triggers__act(VsmolNextPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolNextPC___024root___eval_triggers__act\n"); );
    VsmolNextPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VsmolNextPC___024root___dump_triggers__act(vlSelf);
    }
#endif
}
