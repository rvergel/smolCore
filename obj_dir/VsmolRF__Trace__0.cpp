// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VsmolRF__Syms.h"


void VsmolRF___024root__trace_chg_0_sub_0(VsmolRF___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VsmolRF___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolRF___024root__trace_chg_0\n"); );
    // Init
    VsmolRF___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsmolRF___024root*>(voidSelf);
    VsmolRF__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VsmolRF___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VsmolRF___024root__trace_chg_0_sub_0(VsmolRF___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolRF___024root__trace_chg_0_sub_0\n"); );
    VsmolRF__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.smolRF__DOT__registerFile[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.smolRF__DOT__registerFile[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.smolRF__DOT__registerFile[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.smolRF__DOT__registerFile[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.smolRF__DOT__registerFile[4]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.smolRF__DOT__registerFile[5]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.smolRF__DOT__registerFile[6]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.smolRF__DOT__registerFile[7]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.smolRF__DOT__registerFile[8]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.smolRF__DOT__registerFile[9]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.smolRF__DOT__registerFile[10]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.smolRF__DOT__registerFile[11]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.smolRF__DOT__registerFile[12]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.smolRF__DOT__registerFile[13]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.smolRF__DOT__registerFile[14]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.smolRF__DOT__registerFile[15]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.smolRF__DOT__registerFile[16]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.smolRF__DOT__registerFile[17]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.smolRF__DOT__registerFile[18]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.smolRF__DOT__registerFile[19]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.smolRF__DOT__registerFile[20]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.smolRF__DOT__registerFile[21]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.smolRF__DOT__registerFile[22]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.smolRF__DOT__registerFile[23]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.smolRF__DOT__registerFile[24]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.smolRF__DOT__registerFile[25]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.smolRF__DOT__registerFile[26]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.smolRF__DOT__registerFile[27]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.smolRF__DOT__registerFile[28]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.smolRF__DOT__registerFile[29]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.smolRF__DOT__registerFile[30]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.smolRF__DOT__registerFile[31]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.smolRF__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+33,(vlSelfRef.clk));
    bufp->chgBit(oldp+34,(vlSelfRef.rst));
    bufp->chgBit(oldp+35,(vlSelfRef.wEnable));
    bufp->chgBit(oldp+36,(vlSelfRef.rEnable1));
    bufp->chgBit(oldp+37,(vlSelfRef.rEnable2));
    bufp->chgCData(oldp+38,(vlSelfRef.wAddr),5);
    bufp->chgIData(oldp+39,(vlSelfRef.wData),32);
    bufp->chgCData(oldp+40,(vlSelfRef.rAddr1),5);
    bufp->chgCData(oldp+41,(vlSelfRef.rAddr2),5);
    bufp->chgIData(oldp+42,(vlSelfRef.rData1),32);
    bufp->chgIData(oldp+43,(vlSelfRef.rData2),32);
}

void VsmolRF___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolRF___024root__trace_cleanup\n"); );
    // Init
    VsmolRF___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsmolRF___024root*>(voidSelf);
    VsmolRF__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
