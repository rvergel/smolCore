// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsmolRF.h for the primary calling header

#include "VsmolRF__pch.h"
#include "VsmolRF__Syms.h"
#include "VsmolRF___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolRF___024root___dump_triggers__ico(VsmolRF___024root* vlSelf);
#endif  // VL_DEBUG

void VsmolRF___024root___eval_triggers__ico(VsmolRF___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolRF___024root___eval_triggers__ico\n"); );
    VsmolRF__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VsmolRF___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolRF___024root___dump_triggers__act(VsmolRF___024root* vlSelf);
#endif  // VL_DEBUG

void VsmolRF___024root___eval_triggers__act(VsmolRF___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolRF___024root___eval_triggers__act\n"); );
    VsmolRF__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VsmolRF___024root___dump_triggers__act(vlSelf);
    }
#endif
}
