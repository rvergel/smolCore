// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VsmolALU__Syms.h"


void VsmolALU___024root__trace_chg_0_sub_0(VsmolALU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VsmolALU___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolALU___024root__trace_chg_0\n"); );
    // Init
    VsmolALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsmolALU___024root*>(voidSelf);
    VsmolALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VsmolALU___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VsmolALU___024root__trace_chg_0_sub_0(VsmolALU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolALU___024root__trace_chg_0_sub_0\n"); );
    VsmolALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.smolALU__DOT__unnamedblk1__DOT__a_s),32);
        bufp->chgIData(oldp+1,(vlSelfRef.smolALU__DOT__unnamedblk1__DOT__b_s),32);
        bufp->chgIData(oldp+2,(vlSelfRef.smolALU__DOT__unnamedblk1__DOT__sum_s),32);
        bufp->chgQData(oldp+3,(vlSelfRef.smolALU__DOT__unnamedblk1__DOT__sra_aux),64);
    }
    bufp->chgIData(oldp+5,(vlSelfRef.rs1),32);
    bufp->chgIData(oldp+6,(vlSelfRef.rs2_or_imm),32);
    bufp->chgCData(oldp+7,(vlSelfRef.pc),5);
    bufp->chgCData(oldp+8,(vlSelfRef.op_sel),5);
    bufp->chgIData(oldp+9,(vlSelfRef.alu_out),32);
    bufp->chgQData(oldp+10,((0x1ffffffffULL & ((1U 
                                                == (IData)(vlSelfRef.op_sel))
                                                ? ((QData)((IData)(vlSelfRef.rs1)) 
                                                   - (QData)((IData)(vlSelfRef.rs2_or_imm)))
                                                : ((QData)((IData)(vlSelfRef.rs1)) 
                                                   + (QData)((IData)(vlSelfRef.rs2_or_imm)))))),33);
}

void VsmolALU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolALU___024root__trace_cleanup\n"); );
    // Init
    VsmolALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsmolALU___024root*>(voidSelf);
    VsmolALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
