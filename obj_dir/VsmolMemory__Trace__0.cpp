// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VsmolMemory__Syms.h"


void VsmolMemory___024root__trace_chg_0_sub_0(VsmolMemory___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VsmolMemory___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolMemory___024root__trace_chg_0\n"); );
    // Init
    VsmolMemory___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsmolMemory___024root*>(voidSelf);
    VsmolMemory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VsmolMemory___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VsmolMemory___024root__trace_chg_0_sub_0(VsmolMemory___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolMemory___024root__trace_chg_0_sub_0\n"); );
    VsmolMemory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.smolMemory__DOT__memory[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.smolMemory__DOT__memory[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.smolMemory__DOT__memory[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.smolMemory__DOT__memory[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.smolMemory__DOT__memory[4]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.smolMemory__DOT__memory[5]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.smolMemory__DOT__memory[6]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.smolMemory__DOT__memory[7]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.smolMemory__DOT__memory[8]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.smolMemory__DOT__memory[9]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.smolMemory__DOT__memory[10]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.smolMemory__DOT__memory[11]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.smolMemory__DOT__memory[12]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.smolMemory__DOT__memory[13]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.smolMemory__DOT__memory[14]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.smolMemory__DOT__memory[15]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.smolMemory__DOT__memory[16]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.smolMemory__DOT__memory[17]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.smolMemory__DOT__memory[18]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.smolMemory__DOT__memory[19]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.smolMemory__DOT__memory[20]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.smolMemory__DOT__memory[21]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.smolMemory__DOT__memory[22]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.smolMemory__DOT__memory[23]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.smolMemory__DOT__memory[24]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.smolMemory__DOT__memory[25]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.smolMemory__DOT__memory[26]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.smolMemory__DOT__memory[27]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.smolMemory__DOT__memory[28]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.smolMemory__DOT__memory[29]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.smolMemory__DOT__memory[30]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.smolMemory__DOT__memory[31]),32);
    }
    bufp->chgBit(oldp+32,(vlSelfRef.clk));
    bufp->chgBit(oldp+33,(vlSelfRef.memRead));
    bufp->chgBit(oldp+34,(vlSelfRef.memWrite));
    bufp->chgIData(oldp+35,(vlSelfRef.memAddr),32);
    bufp->chgIData(oldp+36,(vlSelfRef.writeData),32);
    bufp->chgIData(oldp+37,(vlSelfRef.readData),32);
}

void VsmolMemory___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsmolMemory___024root__trace_cleanup\n"); );
    // Init
    VsmolMemory___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsmolMemory___024root*>(voidSelf);
    VsmolMemory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
