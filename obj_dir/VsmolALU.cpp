// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VsmolALU__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VsmolALU::VsmolALU(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VsmolALU__Syms(contextp(), _vcname__, this)}
    , pc{vlSymsp->TOP.pc}
    , op_sel{vlSymsp->TOP.op_sel}
    , rs1{vlSymsp->TOP.rs1}
    , rs2_or_imm{vlSymsp->TOP.rs2_or_imm}
    , alu_out{vlSymsp->TOP.alu_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VsmolALU::VsmolALU(const char* _vcname__)
    : VsmolALU(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VsmolALU::~VsmolALU() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VsmolALU___024root___eval_debug_assertions(VsmolALU___024root* vlSelf);
#endif  // VL_DEBUG
void VsmolALU___024root___eval_static(VsmolALU___024root* vlSelf);
void VsmolALU___024root___eval_initial(VsmolALU___024root* vlSelf);
void VsmolALU___024root___eval_settle(VsmolALU___024root* vlSelf);
void VsmolALU___024root___eval(VsmolALU___024root* vlSelf);

void VsmolALU::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VsmolALU::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VsmolALU___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VsmolALU___024root___eval_static(&(vlSymsp->TOP));
        VsmolALU___024root___eval_initial(&(vlSymsp->TOP));
        VsmolALU___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VsmolALU___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VsmolALU::eventsPending() { return false; }

uint64_t VsmolALU::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VsmolALU::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VsmolALU___024root___eval_final(VsmolALU___024root* vlSelf);

VL_ATTR_COLD void VsmolALU::final() {
    VsmolALU___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VsmolALU::hierName() const { return vlSymsp->name(); }
const char* VsmolALU::modelName() const { return "VsmolALU"; }
unsigned VsmolALU::threads() const { return 1; }
void VsmolALU::prepareClone() const { contextp()->prepareClone(); }
void VsmolALU::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VsmolALU::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VsmolALU___024root__trace_decl_types(VerilatedVcd* tracep);

void VsmolALU___024root__trace_init_top(VsmolALU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VsmolALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsmolALU___024root*>(voidSelf);
    VsmolALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VsmolALU___024root__trace_decl_types(tracep);
    VsmolALU___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VsmolALU___024root__trace_register(VsmolALU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VsmolALU::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VsmolALU::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VsmolALU___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
