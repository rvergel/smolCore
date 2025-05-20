// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VsmolNextPC__Syms.h"


void VsmolNextPC___024root__trace_chg_0_sub_0(VsmolNextPC___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VsmolNextPC___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolNextPC___024root__trace_chg_0\n"); );
    // Init
    VsmolNextPC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsmolNextPC___024root*>(voidSelf);
    VsmolNextPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VsmolNextPC___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VsmolNextPC___024root__trace_chg_0_sub_0(VsmolNextPC___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolNextPC___024root__trace_chg_0_sub_0\n"); );
    VsmolNextPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgIData(oldp+0,(vlSelfRef.rs1),32);
    bufp->chgIData(oldp+1,(vlSelfRef.rs2_or_imm),32);
    bufp->chgIData(oldp+2,(vlSelfRef.pc),32);
    bufp->chgIData(oldp+3,(vlSelfRef.alu_out),32);
    bufp->chgBit(oldp+4,(vlSelfRef.br_auipc_enable));
    bufp->chgBit(oldp+5,(vlSelfRef.jal_enable));
    bufp->chgBit(oldp+6,(vlSelfRef.rst));
    bufp->chgIData(oldp+7,(vlSelfRef.nextPC),32);
}

void VsmolNextPC___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolNextPC___024root__trace_cleanup\n"); );
    // Init
    VsmolNextPC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsmolNextPC___024root*>(voidSelf);
    VsmolNextPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
