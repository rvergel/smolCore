// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsmolInsMem.h for the primary calling header

#include "VsmolInsMem__pch.h"
#include "VsmolInsMem__Syms.h"
#include "VsmolInsMem___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolInsMem___024root___dump_triggers__stl(VsmolInsMem___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VsmolInsMem___024root___eval_triggers__stl(VsmolInsMem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsMem___024root___eval_triggers__stl\n"); );
    VsmolInsMem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VsmolInsMem___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
