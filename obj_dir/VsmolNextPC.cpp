// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VsmolNextPC__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VsmolNextPC::VsmolNextPC(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VsmolNextPC__Syms(contextp(), _vcname__, this)}
    , br_auipc_enable{vlSymsp->TOP.br_auipc_enable}
    , jal_enable{vlSymsp->TOP.jal_enable}
    , rst{vlSymsp->TOP.rst}
    , rs1{vlSymsp->TOP.rs1}
    , rs2_or_imm{vlSymsp->TOP.rs2_or_imm}
    , pc{vlSymsp->TOP.pc}
    , alu_out{vlSymsp->TOP.alu_out}
    , nextPC{vlSymsp->TOP.nextPC}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VsmolNextPC::VsmolNextPC(const char* _vcname__)
    : VsmolNextPC(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VsmolNextPC::~VsmolNextPC() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VsmolNextPC___024root___eval_debug_assertions(VsmolNextPC___024root* vlSelf);
#endif  // VL_DEBUG
void VsmolNextPC___024root___eval_static(VsmolNextPC___024root* vlSelf);
void VsmolNextPC___024root___eval_initial(VsmolNextPC___024root* vlSelf);
void VsmolNextPC___024root___eval_settle(VsmolNextPC___024root* vlSelf);
void VsmolNextPC___024root___eval(VsmolNextPC___024root* vlSelf);

void VsmolNextPC::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VsmolNextPC::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VsmolNextPC___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VsmolNextPC___024root___eval_static(&(vlSymsp->TOP));
        VsmolNextPC___024root___eval_initial(&(vlSymsp->TOP));
        VsmolNextPC___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VsmolNextPC___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VsmolNextPC::eventsPending() { return false; }

uint64_t VsmolNextPC::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VsmolNextPC::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VsmolNextPC___024root___eval_final(VsmolNextPC___024root* vlSelf);

VL_ATTR_COLD void VsmolNextPC::final() {
    VsmolNextPC___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VsmolNextPC::hierName() const { return vlSymsp->name(); }
const char* VsmolNextPC::modelName() const { return "VsmolNextPC"; }
unsigned VsmolNextPC::threads() const { return 1; }
void VsmolNextPC::prepareClone() const { contextp()->prepareClone(); }
void VsmolNextPC::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VsmolNextPC::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VsmolNextPC___024root__trace_decl_types(VerilatedVcd* tracep);

void VsmolNextPC___024root__trace_init_top(VsmolNextPC___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VsmolNextPC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsmolNextPC___024root*>(voidSelf);
    VsmolNextPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VsmolNextPC___024root__trace_decl_types(tracep);
    VsmolNextPC___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VsmolNextPC___024root__trace_register(VsmolNextPC___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VsmolNextPC::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VsmolNextPC::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VsmolNextPC___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
