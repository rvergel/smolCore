// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VsmolInsDec__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VsmolInsDec::VsmolInsDec(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VsmolInsDec__Syms(contextp(), _vcname__, this)}
    , opcode{vlSymsp->TOP.opcode}
    , rd{vlSymsp->TOP.rd}
    , funct3{vlSymsp->TOP.funct3}
    , rs1{vlSymsp->TOP.rs1}
    , rs2{vlSymsp->TOP.rs2}
    , funct7{vlSymsp->TOP.funct7}
    , instr{vlSymsp->TOP.instr}
    , imm{vlSymsp->TOP.imm}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VsmolInsDec::VsmolInsDec(const char* _vcname__)
    : VsmolInsDec(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VsmolInsDec::~VsmolInsDec() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VsmolInsDec___024root___eval_debug_assertions(VsmolInsDec___024root* vlSelf);
#endif  // VL_DEBUG
void VsmolInsDec___024root___eval_static(VsmolInsDec___024root* vlSelf);
void VsmolInsDec___024root___eval_initial(VsmolInsDec___024root* vlSelf);
void VsmolInsDec___024root___eval_settle(VsmolInsDec___024root* vlSelf);
void VsmolInsDec___024root___eval(VsmolInsDec___024root* vlSelf);

void VsmolInsDec::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VsmolInsDec::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VsmolInsDec___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VsmolInsDec___024root___eval_static(&(vlSymsp->TOP));
        VsmolInsDec___024root___eval_initial(&(vlSymsp->TOP));
        VsmolInsDec___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VsmolInsDec___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VsmolInsDec::eventsPending() { return false; }

uint64_t VsmolInsDec::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VsmolInsDec::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VsmolInsDec___024root___eval_final(VsmolInsDec___024root* vlSelf);

VL_ATTR_COLD void VsmolInsDec::final() {
    VsmolInsDec___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VsmolInsDec::hierName() const { return vlSymsp->name(); }
const char* VsmolInsDec::modelName() const { return "VsmolInsDec"; }
unsigned VsmolInsDec::threads() const { return 1; }
void VsmolInsDec::prepareClone() const { contextp()->prepareClone(); }
void VsmolInsDec::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VsmolInsDec::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VsmolInsDec___024root__trace_decl_types(VerilatedVcd* tracep);

void VsmolInsDec___024root__trace_init_top(VsmolInsDec___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VsmolInsDec___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsmolInsDec___024root*>(voidSelf);
    VsmolInsDec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VsmolInsDec___024root__trace_decl_types(tracep);
    VsmolInsDec___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VsmolInsDec___024root__trace_register(VsmolInsDec___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VsmolInsDec::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VsmolInsDec::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VsmolInsDec___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
