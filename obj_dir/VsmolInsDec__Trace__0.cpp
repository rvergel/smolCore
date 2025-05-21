// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VsmolInsDec__Syms.h"


void VsmolInsDec___024root__trace_chg_0_sub_0(VsmolInsDec___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VsmolInsDec___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsDec___024root__trace_chg_0\n"); );
    // Init
    VsmolInsDec___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsmolInsDec___024root*>(voidSelf);
    VsmolInsDec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VsmolInsDec___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VsmolInsDec___024root__trace_chg_0_sub_0(VsmolInsDec___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsDec___024root__trace_chg_0_sub_0\n"); );
    VsmolInsDec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgIData(oldp+0,(vlSelfRef.instr),32);
    bufp->chgCData(oldp+1,(vlSelfRef.opcode),7);
    bufp->chgCData(oldp+2,(vlSelfRef.rd),5);
    bufp->chgCData(oldp+3,(vlSelfRef.funct3),3);
    bufp->chgCData(oldp+4,(vlSelfRef.rs1),5);
    bufp->chgCData(oldp+5,(vlSelfRef.rs2),5);
    bufp->chgCData(oldp+6,(vlSelfRef.funct7),7);
    bufp->chgIData(oldp+7,(vlSelfRef.imm),32);
    bufp->chgCData(oldp+8,(vlSelfRef.smolInsDec__DOT__optype),3);
    bufp->chgCData(oldp+9,((0x1fU & (vlSelfRef.instr 
                                     >> 2U))),5);
}

void VsmolInsDec___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolInsDec___024root__trace_cleanup\n"); );
    // Init
    VsmolInsDec___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsmolInsDec___024root*>(voidSelf);
    VsmolInsDec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
