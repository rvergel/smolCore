// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsmolMemory.h for the primary calling header

#include "VsmolMemory__pch.h"
#include "VsmolMemory__Syms.h"
#include "VsmolMemory___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolMemory___024root___dump_triggers__act(VsmolMemory___024root* vlSelf);
#endif  // VL_DEBUG

void VsmolMemory___024root___eval_triggers__act(VsmolMemory___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolMemory___024root___eval_triggers__act\n"); );
    VsmolMemory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VsmolMemory___024root___dump_triggers__act(vlSelf);
    }
#endif
}
