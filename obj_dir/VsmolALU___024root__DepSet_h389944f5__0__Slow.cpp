// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsmolALU.h for the primary calling header

#include "VsmolALU__pch.h"
#include "VsmolALU__Syms.h"
#include "VsmolALU___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VsmolALU___024root___dump_triggers__stl(VsmolALU___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VsmolALU___024root___eval_triggers__stl(VsmolALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolALU___024root___eval_triggers__stl\n"); );
    VsmolALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VsmolALU___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
