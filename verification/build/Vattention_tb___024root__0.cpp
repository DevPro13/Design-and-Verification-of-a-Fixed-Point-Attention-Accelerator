// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vattention_tb.h for the primary calling header

#include "Vattention_tb__pch.h"

VL_ATTR_COLD void Vattention_tb___024root___eval_initial__TOP(Vattention_tb___024root* vlSelf);
VlCoroutine Vattention_tb___024root___eval_initial__TOP__Vtiming__0(Vattention_tb___024root* vlSelf);
VlCoroutine Vattention_tb___024root___eval_initial__TOP__Vtiming__1(Vattention_tb___024root* vlSelf);

void Vattention_tb___024root___eval_initial(Vattention_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattention_tb___024root___eval_initial\n"); );
    Vattention_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vattention_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vattention_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vattention_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vattention_tb___024root___eval_initial__TOP__Vtiming__0(Vattention_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattention_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vattention_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.attention_tb__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000016ULL, 
                                         nullptr, "verification/tb.sv", 
                                         30);
    vlSelfRef.attention_tb__DOT__rst = 0U;
    co_return;
}

VlCoroutine Vattention_tb___024root___eval_initial__TOP__Vtiming__1(Vattention_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattention_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vattention_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        vlSelfRef.__VdlySet__attention_tb__DOT__clk__v0 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000000016ULL, 
                                             nullptr, 
                                             "verification/tb.sv", 
                                             36);
        vlSelfRef.__VdlySet__attention_tb__DOT__clk__v1 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000000016ULL, 
                                             nullptr, 
                                             "verification/tb.sv", 
                                             36);
    }
    co_return;
}

void Vattention_tb___024root___eval_triggers_vec__act(Vattention_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattention_tb___024root___eval_triggers_vec__act\n"); );
    Vattention_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.attention_tb__DOT__rst) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__attention_tb__DOT__rst__0))) 
                                                         << 2U)) 
                                                     | ((((~ (IData)(vlSelfRef.attention_tb__DOT__clk)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__attention_tb__DOT__clk__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.attention_tb__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__attention_tb__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__attention_tb__DOT__clk__0 
        = vlSelfRef.attention_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__attention_tb__DOT__rst__0 
        = vlSelfRef.attention_tb__DOT__rst;
}

bool Vattention_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattention_tb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vattention_tb___024root___nba_sequent__TOP__0(Vattention_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattention_tb___024root___nba_sequent__TOP__0\n"); );
    Vattention_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("TIME=%0t state=%0d\n",3, 'T',-12, '#',64,VL_TIME_UNITED_Q(1)
                 , '#',4,(IData)(vlSelfRef.attention_tb__DOT__dut__DOT__state));
}

void Vattention_tb___024root___nba_sequent__TOP__1(Vattention_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattention_tb___024root___nba_sequent__TOP__1\n"); );
    Vattention_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ attention_tb__DOT__dut__DOT__key_transpose_calc__DOT____Vlvbound_hfea565da__0;
    attention_tb__DOT__dut__DOT__key_transpose_calc__DOT____Vlvbound_hfea565da__0 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__matA__v0;
    __VdlySet__attention_tb__DOT__dut__DOT__matA__v0 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__matA__v16;
    __VdlySet__attention_tb__DOT__dut__DOT__matA__v16 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v32;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v32 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__matA__v32;
    __VdlySet__attention_tb__DOT__dut__DOT__matA__v32 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v33;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v33 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v34;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v34 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v35;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v35 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v36;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v36 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v37;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v37 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v38;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v38 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v39;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v39 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v40;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v40 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v41;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v41 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v42;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v42 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v43;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v43 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v44;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v44 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__matA__v44;
    __VdlySet__attention_tb__DOT__dut__DOT__matA__v44 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v45;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v45 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v46;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v46 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v47;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v47 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v48;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v48 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v49;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v49 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v50;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v50 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v51;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v51 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v52;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v52 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v53;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v53 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v54;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v54 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v55;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v55 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v56;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v56 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__matA__v56;
    __VdlySet__attention_tb__DOT__dut__DOT__matA__v56 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v57;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v57 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v58;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v58 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v59;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v59 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v60;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v60 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v61;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v61 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v62;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v62 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v63;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v63 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v64;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v64 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v65;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v65 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v66;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v66 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v67;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v67 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v68;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v68 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v69;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v69 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v70;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v70 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matA__v71;
    __VdlyVal__attention_tb__DOT__dut__DOT__matA__v71 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__matB__v0;
    __VdlySet__attention_tb__DOT__dut__DOT__matB__v0 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__matB__v16;
    __VdlySet__attention_tb__DOT__dut__DOT__matB__v16 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v32;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v32 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__matB__v32;
    __VdlySet__attention_tb__DOT__dut__DOT__matB__v32 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v33;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v33 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v34;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v34 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v35;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v35 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v36;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v36 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v37;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v37 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v38;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v38 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v39;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v39 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v40;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v40 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v41;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v41 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v42;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v42 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v43;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v43 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v44;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v44 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__matB__v44;
    __VdlySet__attention_tb__DOT__dut__DOT__matB__v44 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v45;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v45 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v46;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v46 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v47;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v47 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v48;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v48 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v49;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v49 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v50;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v50 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v51;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v51 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v52;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v52 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v53;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v53 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v54;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v54 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v55;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v55 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v56;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v56 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__matB__v56;
    __VdlySet__attention_tb__DOT__dut__DOT__matB__v56 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v57;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v57 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v58;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v58 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v59;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v59 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v60;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v60 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v61;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v61 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v62;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v62 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v63;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v63 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v64;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v64 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v65;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v65 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__matB__v65;
    __VdlySet__attention_tb__DOT__dut__DOT__matB__v65 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v66;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v66 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v67;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v67 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v68;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v68 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v69;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v69 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v70;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v70 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v71;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v71 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v72;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v72 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v73;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v73 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v74;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v74 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__matB__v74;
    __VdlySet__attention_tb__DOT__dut__DOT__matB__v74 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v75;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v75 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v76;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v76 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v77;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v77 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v78;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v78 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v79;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v79 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v80;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v80 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v81;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v81 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__matB__v82;
    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v82 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v0;
    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v0 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v12;
    __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v12 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v12;
    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v12 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v13;
    __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v13 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v13;
    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v13 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v14;
    __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v14 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v14;
    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v14 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v15;
    __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v15 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v15;
    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v15 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v16;
    __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v16 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v16;
    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v16 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v17;
    __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v17 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v17;
    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v17 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v18;
    __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v18 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v18;
    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v18 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v19;
    __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v19 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v19;
    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v19 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v20;
    __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v20 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v20;
    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v20 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v21;
    __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v21 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v21;
    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v21 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v22;
    __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v22 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v22;
    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v22 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v23;
    __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v23 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v23;
    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v23 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__attention_score__v0;
    __VdlySet__attention_tb__DOT__dut__DOT__attention_score__v0 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v16;
    __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v16 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__attention_score__v16;
    __VdlySet__attention_tb__DOT__dut__DOT__attention_score__v16 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v17;
    __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v17 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v18;
    __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v18 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v19;
    __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v19 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v20;
    __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v20 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v21;
    __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v21 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v22;
    __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v22 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v23;
    __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v23 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v24;
    __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v24 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v25;
    __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v25 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v26;
    __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v26 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v27;
    __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v27 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v28;
    __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v28 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v29;
    __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v29 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v30;
    __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v30 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v31;
    __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v31 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v0;
    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v0 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v12;
    __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v12 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v12;
    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v12 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v13;
    __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v13 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v13;
    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v13 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v14;
    __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v14 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v14;
    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v14 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v15;
    __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v15 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v15;
    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v15 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v16;
    __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v16 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v16;
    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v16 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v17;
    __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v17 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v17;
    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v17 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v18;
    __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v18 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v18;
    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v18 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v19;
    __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v19 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v19;
    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v19 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v20;
    __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v20 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v20;
    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v20 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v21;
    __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v21 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v21;
    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v21 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v22;
    __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v22 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v22;
    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v22 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v23;
    __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v23 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v23;
    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v23 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v0;
    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v0 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v12;
    __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v12 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v12;
    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v12 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v13;
    __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v13 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v13;
    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v13 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v14;
    __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v14 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v14;
    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v14 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v15;
    __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v15 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v15;
    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v15 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v16;
    __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v16 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v16;
    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v16 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v17;
    __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v17 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v17;
    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v17 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v18;
    __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v18 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v18;
    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v18 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v19;
    __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v19 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v19;
    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v19 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v20;
    __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v20 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v20;
    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v20 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v21;
    __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v21 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v21;
    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v21 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v22;
    __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v22 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v22;
    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v22 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v23;
    __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v23 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v23;
    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v23 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v0;
    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v0 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v12;
    __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v12 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v12;
    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v12 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v13;
    __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v13 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v13;
    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v13 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v14;
    __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v14 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v14;
    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v14 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v15;
    __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v15 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v15;
    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v15 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v16;
    __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v16 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v16;
    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v16 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v17;
    __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v17 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v17;
    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v17 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v18;
    __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v18 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v18;
    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v18 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v19;
    __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v19 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v19;
    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v19 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v20;
    __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v20 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v20;
    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v20 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v21;
    __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v21 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v21;
    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v21 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v22;
    __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v22 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v22;
    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v22 = 0;
    SData/*15:0*/ __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v23;
    __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v23 = 0;
    CData/*0:0*/ __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v23;
    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v23 = 0;
    // Body
    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v0 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v12 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v13 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v14 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v15 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v16 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v17 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v18 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v19 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v20 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v21 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v22 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v23 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v0 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v12 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v13 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v14 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v15 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v16 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v17 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v18 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v19 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v20 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v21 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v22 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v23 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__attention_score__v0 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__attention_score__v16 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v0 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v12 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v13 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v14 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v15 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v16 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v17 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v18 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v19 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v20 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v21 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v22 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v23 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v0 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v12 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v13 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v14 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v15 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v16 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v17 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v18 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v19 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v20 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v21 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v22 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v23 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__matA__v0 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__matA__v16 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__matA__v32 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__matA__v44 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__matA__v56 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__matB__v0 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__matB__v16 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__matB__v32 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__matB__v44 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__matB__v56 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__matB__v65 = 0U;
    __VdlySet__attention_tb__DOT__dut__DOT__matB__v74 = 0U;
    if (vlSelfRef.attention_tb__DOT__rst) {
        __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v0 = 1U;
        __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v0 = 1U;
        __VdlySet__attention_tb__DOT__dut__DOT__attention_score__v0 = 1U;
        __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v0 = 1U;
        __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v0 = 1U;
        __VdlySet__attention_tb__DOT__dut__DOT__matA__v0 = 1U;
        __VdlySet__attention_tb__DOT__dut__DOT__matB__v0 = 1U;
        vlSelfRef.attention_tb__DOT__dut__DOT__state = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.attention_tb__DOT__dut__DOT__demuxSelect5) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.attention_tb__DOT__dut__DOT__demuxSelect5))) {
                if ((1U & (~ (IData)(vlSelfRef.attention_tb__DOT__dut__DOT__demuxSelect5)))) {
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_hf05516c2__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[0U][0U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v12 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_hf05516c2__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v12 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_hf05516c2__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[0U][1U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v13 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_hf05516c2__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v13 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_hf05516c2__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[0U][2U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v14 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_hf05516c2__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v14 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_hf05516c2__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[1U][0U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v15 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_hf05516c2__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v15 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_hf05516c2__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[1U][1U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v16 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_hf05516c2__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v16 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_hf05516c2__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[1U][2U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v17 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_hf05516c2__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v17 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_hf05516c2__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[2U][0U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v18 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_hf05516c2__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v18 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_hf05516c2__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[2U][1U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v19 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_hf05516c2__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v19 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_hf05516c2__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[2U][2U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v20 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_hf05516c2__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v20 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_hf05516c2__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[3U][0U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v21 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_hf05516c2__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v21 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_hf05516c2__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[3U][1U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v22 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_hf05516c2__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v22 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_hf05516c2__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[3U][2U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v23 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_hf05516c2__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__V_vector__v23 = 1U;
                }
                if ((1U & (IData)(vlSelfRef.attention_tb__DOT__dut__DOT__demuxSelect5))) {
                    __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v16 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[0U][0U];
                    __VdlySet__attention_tb__DOT__dut__DOT__attention_score__v16 = 1U;
                    __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v17 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[0U][1U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v18 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[0U][2U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v19 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[0U][3U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v20 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[1U][0U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v21 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[1U][1U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v22 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[1U][2U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v23 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[1U][3U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v24 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[2U][0U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v25 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[2U][1U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v26 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[2U][2U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v27 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[2U][3U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v28 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[3U][0U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v29 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[3U][1U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v30 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[3U][2U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v31 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[3U][3U];
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.attention_tb__DOT__dut__DOT__demuxSelect5) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.attention_tb__DOT__dut__DOT__demuxSelect5)))) {
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h4e83bd7f__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[0U][0U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v12 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h4e83bd7f__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v12 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h4e83bd7f__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[0U][1U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v13 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h4e83bd7f__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v13 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h4e83bd7f__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[0U][2U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v14 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h4e83bd7f__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v14 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h4e83bd7f__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[1U][0U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v15 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h4e83bd7f__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v15 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h4e83bd7f__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[1U][1U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v16 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h4e83bd7f__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v16 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h4e83bd7f__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[1U][2U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v17 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h4e83bd7f__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v17 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h4e83bd7f__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[2U][0U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v18 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h4e83bd7f__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v18 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h4e83bd7f__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[2U][1U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v19 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h4e83bd7f__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v19 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h4e83bd7f__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[2U][2U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v20 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h4e83bd7f__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v20 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h4e83bd7f__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[3U][0U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v21 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h4e83bd7f__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v21 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h4e83bd7f__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[3U][1U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v22 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h4e83bd7f__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v22 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h4e83bd7f__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[3U][2U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v23 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h4e83bd7f__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v23 = 1U;
                }
                if ((1U & (IData)(vlSelfRef.attention_tb__DOT__dut__DOT__demuxSelect5))) {
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h56aa2e7e__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[0U][0U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v12 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h56aa2e7e__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v12 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h56aa2e7e__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[0U][1U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v13 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h56aa2e7e__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v13 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h56aa2e7e__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[0U][2U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v14 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h56aa2e7e__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v14 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h56aa2e7e__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[1U][0U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v15 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h56aa2e7e__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v15 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h56aa2e7e__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[1U][1U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v16 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h56aa2e7e__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v16 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h56aa2e7e__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[1U][2U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v17 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h56aa2e7e__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v17 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h56aa2e7e__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[2U][0U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v18 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h56aa2e7e__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v18 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h56aa2e7e__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[2U][1U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v19 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h56aa2e7e__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v19 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h56aa2e7e__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[2U][2U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v20 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h56aa2e7e__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v20 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h56aa2e7e__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[3U][0U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v21 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h56aa2e7e__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v21 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h56aa2e7e__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[3U][1U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v22 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h56aa2e7e__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v22 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h56aa2e7e__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[3U][2U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v23 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h56aa2e7e__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__K_vector__v23 = 1U;
                }
            }
        }
        if ((4U & (IData)(vlSelfRef.attention_tb__DOT__dut__DOT__demuxSelect5))) {
            if ((1U & (~ ((IData)(vlSelfRef.attention_tb__DOT__dut__DOT__demuxSelect5) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.attention_tb__DOT__dut__DOT__demuxSelect5)))) {
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_ha189c4de__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[0U][0U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v12 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_ha189c4de__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v12 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_ha189c4de__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[0U][1U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v13 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_ha189c4de__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v13 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_ha189c4de__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[0U][2U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v14 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_ha189c4de__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v14 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_ha189c4de__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[1U][0U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v15 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_ha189c4de__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v15 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_ha189c4de__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[1U][1U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v16 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_ha189c4de__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v16 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_ha189c4de__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[1U][2U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v17 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_ha189c4de__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v17 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_ha189c4de__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[2U][0U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v18 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_ha189c4de__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v18 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_ha189c4de__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[2U][1U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v19 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_ha189c4de__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v19 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_ha189c4de__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[2U][2U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v20 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_ha189c4de__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v20 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_ha189c4de__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[3U][0U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v21 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_ha189c4de__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v21 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_ha189c4de__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[3U][1U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v22 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_ha189c4de__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v22 = 1U;
                    vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_ha189c4de__0 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[3U][2U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v23 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_ha189c4de__0;
                    __VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v23 = 1U;
                }
            }
        }
        __VdlySet__attention_tb__DOT__dut__DOT__matA__v16 = 1U;
        if ((0U == (IData)(vlSelfRef.attention_tb__DOT__dut__DOT__selectMux3))) {
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v32 
                = vlSelfRef.attention_tb__DOT__dut__DOT__embedding_X[0U][0U];
            __VdlySet__attention_tb__DOT__dut__DOT__matA__v32 = 1U;
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v33 
                = vlSelfRef.attention_tb__DOT__dut__DOT__embedding_X[0U][1U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v34 
                = vlSelfRef.attention_tb__DOT__dut__DOT__embedding_X[0U][2U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v35 
                = vlSelfRef.attention_tb__DOT__dut__DOT__embedding_X[1U][0U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v36 
                = vlSelfRef.attention_tb__DOT__dut__DOT__embedding_X[1U][1U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v37 
                = vlSelfRef.attention_tb__DOT__dut__DOT__embedding_X[1U][2U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v38 
                = vlSelfRef.attention_tb__DOT__dut__DOT__embedding_X[2U][0U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v39 
                = vlSelfRef.attention_tb__DOT__dut__DOT__embedding_X[2U][1U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v40 
                = vlSelfRef.attention_tb__DOT__dut__DOT__embedding_X[2U][2U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v41 
                = vlSelfRef.attention_tb__DOT__dut__DOT__embedding_X[3U][0U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v42 
                = vlSelfRef.attention_tb__DOT__dut__DOT__embedding_X[3U][1U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v43 
                = vlSelfRef.attention_tb__DOT__dut__DOT__embedding_X[3U][2U];
        } else if ((1U == (IData)(vlSelfRef.attention_tb__DOT__dut__DOT__selectMux3))) {
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v44 
                = vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[0U][0U];
            __VdlySet__attention_tb__DOT__dut__DOT__matA__v44 = 1U;
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v45 
                = vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[0U][1U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v46 
                = vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[0U][2U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v47 
                = vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[1U][0U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v48 
                = vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[1U][1U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v49 
                = vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[1U][2U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v50 
                = vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[2U][0U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v51 
                = vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[2U][1U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v52 
                = vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[2U][2U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v53 
                = vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[3U][0U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v54 
                = vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[3U][1U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v55 
                = vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[3U][2U];
        } else if ((2U == (IData)(vlSelfRef.attention_tb__DOT__dut__DOT__selectMux3))) {
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v56 
                = vlSelfRef.attention_tb__DOT__dut__DOT__attention_weight_vector[0U][0U];
            __VdlySet__attention_tb__DOT__dut__DOT__matA__v56 = 1U;
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v57 
                = vlSelfRef.attention_tb__DOT__dut__DOT__attention_weight_vector[0U][1U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v58 
                = vlSelfRef.attention_tb__DOT__dut__DOT__attention_weight_vector[0U][2U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v59 
                = vlSelfRef.attention_tb__DOT__dut__DOT__attention_weight_vector[0U][3U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v60 
                = vlSelfRef.attention_tb__DOT__dut__DOT__attention_weight_vector[1U][0U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v61 
                = vlSelfRef.attention_tb__DOT__dut__DOT__attention_weight_vector[1U][1U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v62 
                = vlSelfRef.attention_tb__DOT__dut__DOT__attention_weight_vector[1U][2U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v63 
                = vlSelfRef.attention_tb__DOT__dut__DOT__attention_weight_vector[1U][3U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v64 
                = vlSelfRef.attention_tb__DOT__dut__DOT__attention_weight_vector[2U][0U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v65 
                = vlSelfRef.attention_tb__DOT__dut__DOT__attention_weight_vector[2U][1U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v66 
                = vlSelfRef.attention_tb__DOT__dut__DOT__attention_weight_vector[2U][2U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v67 
                = vlSelfRef.attention_tb__DOT__dut__DOT__attention_weight_vector[2U][3U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v68 
                = vlSelfRef.attention_tb__DOT__dut__DOT__attention_weight_vector[3U][0U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v69 
                = vlSelfRef.attention_tb__DOT__dut__DOT__attention_weight_vector[3U][1U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v70 
                = vlSelfRef.attention_tb__DOT__dut__DOT__attention_weight_vector[3U][2U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matA__v71 
                = vlSelfRef.attention_tb__DOT__dut__DOT__attention_weight_vector[3U][3U];
        }
        __VdlySet__attention_tb__DOT__dut__DOT__matB__v16 = 1U;
        if ((4U & (IData)(vlSelfRef.attention_tb__DOT__dut__DOT__selectMux5))) {
            if ((1U & (~ ((IData)(vlSelfRef.attention_tb__DOT__dut__DOT__selectMux5) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.attention_tb__DOT__dut__DOT__selectMux5)))) {
                    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v32 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[0U][0U];
                    __VdlySet__attention_tb__DOT__dut__DOT__matB__v32 = 1U;
                    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v33 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[0U][1U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v34 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[0U][2U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v35 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[1U][0U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v36 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[1U][1U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v37 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[1U][2U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v38 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[2U][0U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v39 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[2U][1U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v40 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[2U][2U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v41 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[3U][0U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v42 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[3U][1U];
                    __VdlyVal__attention_tb__DOT__dut__DOT__matB__v43 
                        = vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[3U][2U];
                }
            }
        } else if ((2U & (IData)(vlSelfRef.attention_tb__DOT__dut__DOT__selectMux5))) {
            if ((1U & (IData)(vlSelfRef.attention_tb__DOT__dut__DOT__selectMux5))) {
                __VdlyVal__attention_tb__DOT__dut__DOT__matB__v44 
                    = vlSelfRef.attention_tb__DOT__dut__DOT__K_vector_transpose[0U][0U];
                __VdlySet__attention_tb__DOT__dut__DOT__matB__v44 = 1U;
                __VdlyVal__attention_tb__DOT__dut__DOT__matB__v45 
                    = vlSelfRef.attention_tb__DOT__dut__DOT__K_vector_transpose[0U][1U];
                __VdlyVal__attention_tb__DOT__dut__DOT__matB__v46 
                    = vlSelfRef.attention_tb__DOT__dut__DOT__K_vector_transpose[0U][2U];
                __VdlyVal__attention_tb__DOT__dut__DOT__matB__v47 
                    = vlSelfRef.attention_tb__DOT__dut__DOT__K_vector_transpose[0U][3U];
                __VdlyVal__attention_tb__DOT__dut__DOT__matB__v48 
                    = vlSelfRef.attention_tb__DOT__dut__DOT__K_vector_transpose[1U][0U];
                __VdlyVal__attention_tb__DOT__dut__DOT__matB__v49 
                    = vlSelfRef.attention_tb__DOT__dut__DOT__K_vector_transpose[1U][1U];
                __VdlyVal__attention_tb__DOT__dut__DOT__matB__v50 
                    = vlSelfRef.attention_tb__DOT__dut__DOT__K_vector_transpose[1U][2U];
                __VdlyVal__attention_tb__DOT__dut__DOT__matB__v51 
                    = vlSelfRef.attention_tb__DOT__dut__DOT__K_vector_transpose[1U][3U];
                __VdlyVal__attention_tb__DOT__dut__DOT__matB__v52 
                    = vlSelfRef.attention_tb__DOT__dut__DOT__K_vector_transpose[2U][0U];
                __VdlyVal__attention_tb__DOT__dut__DOT__matB__v53 
                    = vlSelfRef.attention_tb__DOT__dut__DOT__K_vector_transpose[2U][1U];
                __VdlyVal__attention_tb__DOT__dut__DOT__matB__v54 
                    = vlSelfRef.attention_tb__DOT__dut__DOT__K_vector_transpose[2U][2U];
                __VdlyVal__attention_tb__DOT__dut__DOT__matB__v55 
                    = vlSelfRef.attention_tb__DOT__dut__DOT__K_vector_transpose[2U][3U];
            } else {
                __VdlyVal__attention_tb__DOT__dut__DOT__matB__v56 
                    = vlSelfRef.attention_tb__DOT__dut__DOT__Vw[0U][0U];
                __VdlySet__attention_tb__DOT__dut__DOT__matB__v56 = 1U;
                __VdlyVal__attention_tb__DOT__dut__DOT__matB__v57 
                    = vlSelfRef.attention_tb__DOT__dut__DOT__Vw[0U][1U];
                __VdlyVal__attention_tb__DOT__dut__DOT__matB__v58 
                    = vlSelfRef.attention_tb__DOT__dut__DOT__Vw[0U][2U];
                __VdlyVal__attention_tb__DOT__dut__DOT__matB__v59 
                    = vlSelfRef.attention_tb__DOT__dut__DOT__Vw[1U][0U];
                __VdlyVal__attention_tb__DOT__dut__DOT__matB__v60 
                    = vlSelfRef.attention_tb__DOT__dut__DOT__Vw[1U][1U];
                __VdlyVal__attention_tb__DOT__dut__DOT__matB__v61 
                    = vlSelfRef.attention_tb__DOT__dut__DOT__Vw[1U][2U];
                __VdlyVal__attention_tb__DOT__dut__DOT__matB__v62 
                    = vlSelfRef.attention_tb__DOT__dut__DOT__Vw[2U][0U];
                __VdlyVal__attention_tb__DOT__dut__DOT__matB__v63 
                    = vlSelfRef.attention_tb__DOT__dut__DOT__Vw[2U][1U];
                __VdlyVal__attention_tb__DOT__dut__DOT__matB__v64 
                    = vlSelfRef.attention_tb__DOT__dut__DOT__Vw[2U][2U];
            }
        } else if ((1U & (IData)(vlSelfRef.attention_tb__DOT__dut__DOT__selectMux5))) {
            __VdlyVal__attention_tb__DOT__dut__DOT__matB__v65 
                = vlSelfRef.attention_tb__DOT__dut__DOT__Kw[0U][0U];
            __VdlySet__attention_tb__DOT__dut__DOT__matB__v65 = 1U;
            __VdlyVal__attention_tb__DOT__dut__DOT__matB__v66 
                = vlSelfRef.attention_tb__DOT__dut__DOT__Kw[0U][1U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matB__v67 
                = vlSelfRef.attention_tb__DOT__dut__DOT__Kw[0U][2U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matB__v68 
                = vlSelfRef.attention_tb__DOT__dut__DOT__Kw[1U][0U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matB__v69 
                = vlSelfRef.attention_tb__DOT__dut__DOT__Kw[1U][1U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matB__v70 
                = vlSelfRef.attention_tb__DOT__dut__DOT__Kw[1U][2U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matB__v71 
                = vlSelfRef.attention_tb__DOT__dut__DOT__Kw[2U][0U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matB__v72 
                = vlSelfRef.attention_tb__DOT__dut__DOT__Kw[2U][1U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matB__v73 
                = vlSelfRef.attention_tb__DOT__dut__DOT__Kw[2U][2U];
        } else {
            __VdlyVal__attention_tb__DOT__dut__DOT__matB__v74 
                = vlSelfRef.attention_tb__DOT__dut__DOT__Qw[0U][0U];
            __VdlySet__attention_tb__DOT__dut__DOT__matB__v74 = 1U;
            __VdlyVal__attention_tb__DOT__dut__DOT__matB__v75 
                = vlSelfRef.attention_tb__DOT__dut__DOT__Qw[0U][1U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matB__v76 
                = vlSelfRef.attention_tb__DOT__dut__DOT__Qw[0U][2U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matB__v77 
                = vlSelfRef.attention_tb__DOT__dut__DOT__Qw[1U][0U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matB__v78 
                = vlSelfRef.attention_tb__DOT__dut__DOT__Qw[1U][1U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matB__v79 
                = vlSelfRef.attention_tb__DOT__dut__DOT__Qw[1U][2U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matB__v80 
                = vlSelfRef.attention_tb__DOT__dut__DOT__Qw[2U][0U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matB__v81 
                = vlSelfRef.attention_tb__DOT__dut__DOT__Qw[2U][1U];
            __VdlyVal__attention_tb__DOT__dut__DOT__matB__v82 
                = vlSelfRef.attention_tb__DOT__dut__DOT__Qw[2U][2U];
        }
        vlSelfRef.attention_tb__DOT__dut__DOT__state 
            = vlSelfRef.attention_tb__DOT__dut__DOT__nxtState;
    }
    vlSelfRef.attention_tb__DOT__dut__DOT__data_ready 
        = (1U & (~ (IData)(vlSelfRef.attention_tb__DOT__rst)));
    if (__VdlySet__attention_tb__DOT__dut__DOT__attention_score__v0) {
        vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[0U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[0U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[0U][2U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[0U][3U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[1U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[1U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[1U][2U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[1U][3U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[2U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[2U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[2U][2U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[2U][3U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[3U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[3U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[3U][2U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[3U][3U] = 0U;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__attention_score__v16) {
        vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[0U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v16;
        vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[0U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v17;
        vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[0U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v18;
        vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[0U][3U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v19;
        vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[1U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v20;
        vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[1U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v21;
        vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[1U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v22;
        vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[1U][3U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v23;
        vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[2U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v24;
        vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[2U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v25;
        vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[2U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v26;
        vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[2U][3U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v27;
        vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[3U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v28;
        vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[3U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v29;
        vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[3U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v30;
        vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[3U][3U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__attention_score__v31;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v0) {
        vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[0U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[0U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[0U][2U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[1U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[1U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[1U][2U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[2U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[2U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[2U][2U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[3U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[3U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[3U][2U] = 0U;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v12) {
        vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[0U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v12;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v13) {
        vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[0U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v13;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v14) {
        vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[0U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v14;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v15) {
        vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[1U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v15;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v16) {
        vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[1U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v16;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v17) {
        vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[1U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v17;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v18) {
        vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[2U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v18;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v19) {
        vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[2U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v19;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v20) {
        vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[2U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v20;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v21) {
        vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[3U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v21;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v22) {
        vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[3U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v22;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v23) {
        vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[3U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__contextual_embedding_vector__v23;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__K_vector__v0) {
        vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[0U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[0U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[0U][2U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[1U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[1U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[1U][2U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[2U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[2U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[2U][2U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[3U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[3U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[3U][2U] = 0U;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__K_vector__v12) {
        vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[0U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v12;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__K_vector__v13) {
        vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[0U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v13;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__K_vector__v14) {
        vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[0U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v14;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__K_vector__v15) {
        vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[1U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v15;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__K_vector__v16) {
        vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[1U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v16;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__K_vector__v17) {
        vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[1U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v17;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__K_vector__v18) {
        vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[2U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v18;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__K_vector__v19) {
        vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[2U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v19;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__K_vector__v20) {
        vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[2U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v20;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__K_vector__v21) {
        vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[3U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v21;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__K_vector__v22) {
        vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[3U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v22;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__K_vector__v23) {
        vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[3U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__K_vector__v23;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v0) {
        vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[0U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[0U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[0U][2U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[1U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[1U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[1U][2U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[2U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[2U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[2U][2U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[3U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[3U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[3U][2U] = 0U;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v12) {
        vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[0U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v12;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v13) {
        vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[0U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v13;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v14) {
        vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[0U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v14;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v15) {
        vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[1U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v15;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v16) {
        vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[1U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v16;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v17) {
        vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[1U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v17;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v18) {
        vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[2U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v18;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v19) {
        vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[2U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v19;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v20) {
        vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[2U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v20;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v21) {
        vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[3U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v21;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v22) {
        vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[3U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v22;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__Q_vector__v23) {
        vlSelfRef.attention_tb__DOT__dut__DOT__Q_vector[3U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__Q_vector__v23;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__matA__v0) {
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][2U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][3U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][2U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][3U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][2U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][3U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][2U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][3U] = 0U;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__matA__v16) {
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][2U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][3U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][2U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][3U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][2U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][3U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][2U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][3U] = 0U;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__matA__v32) {
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v32;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v33;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v34;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v35;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v36;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v37;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v38;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v39;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v40;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v41;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v42;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v43;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__matA__v44) {
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v44;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v45;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v46;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v47;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v48;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v49;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v50;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v51;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v52;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v53;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v54;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v55;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__matA__v56) {
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v56;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v57;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v58;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][3U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v59;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v60;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v61;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v62;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][3U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v63;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v64;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v65;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v66;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][3U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v67;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v68;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v69;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v70;
        vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][3U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matA__v71;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__V_vector__v0) {
        vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[0U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[0U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[0U][2U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[1U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[1U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[1U][2U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[2U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[2U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[2U][2U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[3U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[3U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[3U][2U] = 0U;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__V_vector__v12) {
        vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[0U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v12;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__V_vector__v13) {
        vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[0U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v13;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__V_vector__v14) {
        vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[0U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v14;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__V_vector__v15) {
        vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[1U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v15;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__V_vector__v16) {
        vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[1U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v16;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__V_vector__v17) {
        vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[1U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v17;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__V_vector__v18) {
        vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[2U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v18;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__V_vector__v19) {
        vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[2U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v19;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__V_vector__v20) {
        vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[2U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v20;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__V_vector__v21) {
        vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[3U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v21;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__V_vector__v22) {
        vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[3U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v22;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__V_vector__v23) {
        vlSelfRef.attention_tb__DOT__dut__DOT__V_vector[3U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__V_vector__v23;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__matB__v0) {
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][2U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][3U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][2U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][3U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][2U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][3U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[3U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[3U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[3U][2U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[3U][3U] = 0U;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__matB__v16) {
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][2U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][3U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][2U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][3U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][2U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][3U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[3U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[3U][1U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[3U][2U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[3U][3U] = 0U;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__matB__v32) {
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v32;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v33;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v34;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v35;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v36;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v37;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v38;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v39;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v40;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[3U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v41;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[3U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v42;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[3U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v43;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__matB__v44) {
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v44;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v45;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v46;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][3U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v47;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v48;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v49;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v50;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][3U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v51;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v52;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v53;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v54;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][3U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v55;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__matB__v56) {
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v56;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v57;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v58;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v59;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v60;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v61;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v62;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v63;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v64;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__matB__v65) {
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v65;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v66;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v67;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v68;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v69;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v70;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v71;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v72;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v73;
    }
    if (__VdlySet__attention_tb__DOT__dut__DOT__matB__v74) {
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v74;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v75;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v76;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v77;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v78;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v79;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][0U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v80;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][1U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v81;
        vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][2U] 
            = __VdlyVal__attention_tb__DOT__dut__DOT__matB__v82;
    }
    vlSelfRef.attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator 
        = VL_MULS_III(32, (IData)(0x00000094U), VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[0U][0U]));
    vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[0U][0U] 
        = (0x0000ffffU & (vlSelfRef.attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator 
                          >> 8U));
    vlSelfRef.attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator 
        = VL_MULS_III(32, (IData)(0x00000094U), VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[0U][1U]));
    vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[0U][1U] 
        = (0x0000ffffU & (vlSelfRef.attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator 
                          >> 8U));
    vlSelfRef.attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator 
        = VL_MULS_III(32, (IData)(0x00000094U), VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[0U][2U]));
    vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[0U][2U] 
        = (0x0000ffffU & (vlSelfRef.attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator 
                          >> 8U));
    vlSelfRef.attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator 
        = VL_MULS_III(32, (IData)(0x00000094U), VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[0U][3U]));
    vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[0U][3U] 
        = (0x0000ffffU & (vlSelfRef.attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator 
                          >> 8U));
    vlSelfRef.attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator 
        = VL_MULS_III(32, (IData)(0x00000094U), VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[1U][0U]));
    vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[1U][0U] 
        = (0x0000ffffU & (vlSelfRef.attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator 
                          >> 8U));
    vlSelfRef.attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator 
        = VL_MULS_III(32, (IData)(0x00000094U), VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[1U][1U]));
    vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[1U][1U] 
        = (0x0000ffffU & (vlSelfRef.attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator 
                          >> 8U));
    vlSelfRef.attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator 
        = VL_MULS_III(32, (IData)(0x00000094U), VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[1U][2U]));
    vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[1U][2U] 
        = (0x0000ffffU & (vlSelfRef.attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator 
                          >> 8U));
    vlSelfRef.attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator 
        = VL_MULS_III(32, (IData)(0x00000094U), VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[1U][3U]));
    vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[1U][3U] 
        = (0x0000ffffU & (vlSelfRef.attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator 
                          >> 8U));
    vlSelfRef.attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator 
        = VL_MULS_III(32, (IData)(0x00000094U), VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[2U][0U]));
    vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[2U][0U] 
        = (0x0000ffffU & (vlSelfRef.attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator 
                          >> 8U));
    vlSelfRef.attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator 
        = VL_MULS_III(32, (IData)(0x00000094U), VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[2U][1U]));
    vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[2U][1U] 
        = (0x0000ffffU & (vlSelfRef.attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator 
                          >> 8U));
    vlSelfRef.attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator 
        = VL_MULS_III(32, (IData)(0x00000094U), VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[2U][2U]));
    vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[2U][2U] 
        = (0x0000ffffU & (vlSelfRef.attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator 
                          >> 8U));
    vlSelfRef.attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator 
        = VL_MULS_III(32, (IData)(0x00000094U), VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[2U][3U]));
    vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[2U][3U] 
        = (0x0000ffffU & (vlSelfRef.attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator 
                          >> 8U));
    vlSelfRef.attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator 
        = VL_MULS_III(32, (IData)(0x00000094U), VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[3U][0U]));
    vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[3U][0U] 
        = (0x0000ffffU & (vlSelfRef.attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator 
                          >> 8U));
    vlSelfRef.attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator 
        = VL_MULS_III(32, (IData)(0x00000094U), VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[3U][1U]));
    vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[3U][1U] 
        = (0x0000ffffU & (vlSelfRef.attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator 
                          >> 8U));
    vlSelfRef.attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator 
        = VL_MULS_III(32, (IData)(0x00000094U), VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[3U][2U]));
    vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[3U][2U] 
        = (0x0000ffffU & (vlSelfRef.attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator 
                          >> 8U));
    vlSelfRef.attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator 
        = VL_MULS_III(32, (IData)(0x00000094U), VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__attention_score[3U][3U]));
    vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[3U][3U] 
        = (0x0000ffffU & (vlSelfRef.attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator 
                          >> 8U));
    attention_tb__DOT__dut__DOT__key_transpose_calc__DOT____Vlvbound_hfea565da__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[0U][0U];
    vlSelfRef.attention_tb__DOT__dut__DOT__K_vector_transpose[0U][0U] 
        = attention_tb__DOT__dut__DOT__key_transpose_calc__DOT____Vlvbound_hfea565da__0;
    attention_tb__DOT__dut__DOT__key_transpose_calc__DOT____Vlvbound_hfea565da__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[0U][1U];
    vlSelfRef.attention_tb__DOT__dut__DOT__K_vector_transpose[1U][0U] 
        = attention_tb__DOT__dut__DOT__key_transpose_calc__DOT____Vlvbound_hfea565da__0;
    attention_tb__DOT__dut__DOT__key_transpose_calc__DOT____Vlvbound_hfea565da__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[0U][2U];
    vlSelfRef.attention_tb__DOT__dut__DOT__K_vector_transpose[2U][0U] 
        = attention_tb__DOT__dut__DOT__key_transpose_calc__DOT____Vlvbound_hfea565da__0;
    attention_tb__DOT__dut__DOT__key_transpose_calc__DOT____Vlvbound_hfea565da__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[1U][0U];
    vlSelfRef.attention_tb__DOT__dut__DOT__K_vector_transpose[0U][1U] 
        = attention_tb__DOT__dut__DOT__key_transpose_calc__DOT____Vlvbound_hfea565da__0;
    attention_tb__DOT__dut__DOT__key_transpose_calc__DOT____Vlvbound_hfea565da__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[1U][1U];
    vlSelfRef.attention_tb__DOT__dut__DOT__K_vector_transpose[1U][1U] 
        = attention_tb__DOT__dut__DOT__key_transpose_calc__DOT____Vlvbound_hfea565da__0;
    attention_tb__DOT__dut__DOT__key_transpose_calc__DOT____Vlvbound_hfea565da__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[1U][2U];
    vlSelfRef.attention_tb__DOT__dut__DOT__K_vector_transpose[2U][1U] 
        = attention_tb__DOT__dut__DOT__key_transpose_calc__DOT____Vlvbound_hfea565da__0;
    attention_tb__DOT__dut__DOT__key_transpose_calc__DOT____Vlvbound_hfea565da__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[2U][0U];
    vlSelfRef.attention_tb__DOT__dut__DOT__K_vector_transpose[0U][2U] 
        = attention_tb__DOT__dut__DOT__key_transpose_calc__DOT____Vlvbound_hfea565da__0;
    attention_tb__DOT__dut__DOT__key_transpose_calc__DOT____Vlvbound_hfea565da__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[2U][1U];
    vlSelfRef.attention_tb__DOT__dut__DOT__K_vector_transpose[1U][2U] 
        = attention_tb__DOT__dut__DOT__key_transpose_calc__DOT____Vlvbound_hfea565da__0;
    attention_tb__DOT__dut__DOT__key_transpose_calc__DOT____Vlvbound_hfea565da__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[2U][2U];
    vlSelfRef.attention_tb__DOT__dut__DOT__K_vector_transpose[2U][2U] 
        = attention_tb__DOT__dut__DOT__key_transpose_calc__DOT____Vlvbound_hfea565da__0;
    attention_tb__DOT__dut__DOT__key_transpose_calc__DOT____Vlvbound_hfea565da__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[3U][0U];
    vlSelfRef.attention_tb__DOT__dut__DOT__K_vector_transpose[0U][3U] 
        = attention_tb__DOT__dut__DOT__key_transpose_calc__DOT____Vlvbound_hfea565da__0;
    attention_tb__DOT__dut__DOT__key_transpose_calc__DOT____Vlvbound_hfea565da__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[3U][1U];
    vlSelfRef.attention_tb__DOT__dut__DOT__K_vector_transpose[1U][3U] 
        = attention_tb__DOT__dut__DOT__key_transpose_calc__DOT____Vlvbound_hfea565da__0;
    attention_tb__DOT__dut__DOT__key_transpose_calc__DOT____Vlvbound_hfea565da__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__K_vector[3U][2U];
    vlSelfRef.attention_tb__DOT__dut__DOT__K_vector_transpose[2U][3U] 
        = attention_tb__DOT__dut__DOT__key_transpose_calc__DOT____Vlvbound_hfea565da__0;
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][0U]), 
                      VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][0U]));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][1U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][0U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][2U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][0U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][3U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[3U][0U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[0U][0U] 
        = (0x0000ffffU & (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
                          >> 8U));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][0U]), 
                      VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][1U]));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][1U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][1U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][2U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][1U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][3U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[3U][1U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[0U][1U] 
        = (0x0000ffffU & (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
                          >> 8U));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][0U]), 
                      VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][2U]));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][1U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][2U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][2U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][2U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][3U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[3U][2U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[0U][2U] 
        = (0x0000ffffU & (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
                          >> 8U));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][0U]), 
                      VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][3U]));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][1U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][3U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][2U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][3U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[0U][3U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[3U][3U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[0U][3U] 
        = (0x0000ffffU & (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
                          >> 8U));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][0U]), 
                      VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][0U]));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][1U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][0U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][2U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][0U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][3U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[3U][0U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[1U][0U] 
        = (0x0000ffffU & (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
                          >> 8U));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][0U]), 
                      VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][1U]));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][1U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][1U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][2U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][1U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][3U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[3U][1U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[1U][1U] 
        = (0x0000ffffU & (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
                          >> 8U));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][0U]), 
                      VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][2U]));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][1U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][2U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][2U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][2U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][3U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[3U][2U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[1U][2U] 
        = (0x0000ffffU & (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
                          >> 8U));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][0U]), 
                      VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][3U]));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][1U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][3U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][2U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][3U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[1U][3U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[3U][3U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[1U][3U] 
        = (0x0000ffffU & (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
                          >> 8U));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][0U]), 
                      VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][0U]));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][1U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][0U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][2U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][0U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][3U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[3U][0U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[2U][0U] 
        = (0x0000ffffU & (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
                          >> 8U));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][0U]), 
                      VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][1U]));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][1U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][1U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][2U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][1U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][3U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[3U][1U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[2U][1U] 
        = (0x0000ffffU & (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
                          >> 8U));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][0U]), 
                      VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][2U]));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][1U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][2U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][2U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][2U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][3U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[3U][2U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[2U][2U] 
        = (0x0000ffffU & (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
                          >> 8U));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][0U]), 
                      VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][3U]));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][1U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][3U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][2U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][3U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[2U][3U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[3U][3U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[2U][3U] 
        = (0x0000ffffU & (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
                          >> 8U));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][0U]), 
                      VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][0U]));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][1U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][0U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][2U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][0U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][3U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[3U][0U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[3U][0U] 
        = (0x0000ffffU & (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
                          >> 8U));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][0U]), 
                      VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][1U]));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][1U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][1U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][2U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][1U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][3U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[3U][1U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[3U][1U] 
        = (0x0000ffffU & (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
                          >> 8U));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][0U]), 
                      VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][2U]));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][1U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][2U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][2U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][2U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][3U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[3U][2U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[3U][2U] 
        = (0x0000ffffU & (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
                          >> 8U));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][0U]), 
                      VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[0U][3U]));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][1U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[1U][3U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][2U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[2U][3U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
           + VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matA[3U][3U]), 
                         VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__matB[3U][3U])));
    vlSelfRef.attention_tb__DOT__dut__DOT__MatMultResult[3U][3U] 
        = (0x0000ffffU & (vlSelfRef.attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator 
                          >> 8U));
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value 
        = VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[0U][0U]);
    if (VL_GTS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[0U][1U]), vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value)) {
        vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value 
            = VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[0U][1U]);
    }
    if (VL_GTS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[0U][2U]), vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value)) {
        vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value 
            = VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[0U][2U]);
    }
    if (VL_GTS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[0U][3U]), vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value)) {
        vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value 
            = VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[0U][3U]);
    }
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference 
        = (VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[0U][0U]) 
           - vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude 
        = (VL_GTS_III(32, 0U, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference)
            ? (- vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference)
            : vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address 
        = VL_DIVS_III(32, ((IData)(0x00000080U) + VL_MULS_III(32, (IData)(0x0000000aU), vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude)), (IData)(0x00000100U));
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference 
        = (VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[0U][1U]) 
           - vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value);
    if (VL_LTS_III(32, 0x0000004bU, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)) {
        vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address = 0x0000004bU;
    }
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude 
        = (VL_GTS_III(32, 0U, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference)
            ? (- vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference)
            : vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference);
    if ((0x4bU >= (0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address))) {
        vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[0U][0U] 
            = vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE
            [(0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)];
        vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum 
            = vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE
            [(0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)];
    } else {
        vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[0U][0U] = 0U;
        vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum = 0U;
    }
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address 
        = VL_DIVS_III(32, ((IData)(0x00000080U) + VL_MULS_III(32, (IData)(0x0000000aU), vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude)), (IData)(0x00000100U));
    if (VL_LTS_III(32, 0x0000004bU, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)) {
        vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address = 0x0000004bU;
    }
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum 
           + ((0x4bU >= (0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address))
               ? vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE
              [(0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)]
               : 0U));
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference 
        = (VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[0U][2U]) 
           - vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude 
        = (VL_GTS_III(32, 0U, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference)
            ? (- vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference)
            : vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[0U][1U] 
        = ((0x4bU >= (0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address))
            ? vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE
           [(0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)]
            : 0U);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address 
        = VL_DIVS_III(32, ((IData)(0x00000080U) + VL_MULS_III(32, (IData)(0x0000000aU), vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude)), (IData)(0x00000100U));
    if (VL_LTS_III(32, 0x0000004bU, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)) {
        vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address = 0x0000004bU;
    }
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum 
           + ((0x4bU >= (0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address))
               ? vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE
              [(0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)]
               : 0U));
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference 
        = (VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[0U][3U]) 
           - vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude 
        = (VL_GTS_III(32, 0U, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference)
            ? (- vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference)
            : vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[0U][2U] 
        = ((0x4bU >= (0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address))
            ? vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE
           [(0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)]
            : 0U);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address 
        = VL_DIVS_III(32, ((IData)(0x00000080U) + VL_MULS_III(32, (IData)(0x0000000aU), vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude)), (IData)(0x00000100U));
    if (VL_LTS_III(32, 0x0000004bU, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)) {
        vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address = 0x0000004bU;
    }
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum 
           + ((0x4bU >= (0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address))
               ? vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE
              [(0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)]
               : 0U));
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[0U][3U] 
        = ((0x4bU >= (0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address))
            ? vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE
           [(0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)]
            : 0U);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[0U][0U], 8U);
    vlSelfRef.attention_tb__DOT__dut__DOT__attention_weight_vector[0U][0U] 
        = ((0U != vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum)
            ? (0x0000ffffU & VL_DIV_III(32, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum))
            : 0U);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[0U][1U], 8U);
    vlSelfRef.attention_tb__DOT__dut__DOT__attention_weight_vector[0U][1U] 
        = ((0U != vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum)
            ? (0x0000ffffU & VL_DIV_III(32, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum))
            : 0U);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[0U][2U], 8U);
    vlSelfRef.attention_tb__DOT__dut__DOT__attention_weight_vector[0U][2U] 
        = ((0U != vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum)
            ? (0x0000ffffU & VL_DIV_III(32, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum))
            : 0U);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[0U][3U], 8U);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value 
        = VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[1U][0U]);
    if (VL_GTS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[1U][1U]), vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value)) {
        vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value 
            = VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[1U][1U]);
    }
    if (VL_GTS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[1U][2U]), vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value)) {
        vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value 
            = VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[1U][2U]);
    }
    if (VL_GTS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[1U][3U]), vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value)) {
        vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value 
            = VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[1U][3U]);
    }
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference 
        = (VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[1U][0U]) 
           - vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude 
        = (VL_GTS_III(32, 0U, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference)
            ? (- vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference)
            : vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address 
        = VL_DIVS_III(32, ((IData)(0x00000080U) + VL_MULS_III(32, (IData)(0x0000000aU), vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude)), (IData)(0x00000100U));
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference 
        = (VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[1U][1U]) 
           - vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value);
    if (VL_LTS_III(32, 0x0000004bU, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)) {
        vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address = 0x0000004bU;
    }
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude 
        = (VL_GTS_III(32, 0U, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference)
            ? (- vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference)
            : vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[1U][0U] 
        = ((0x4bU >= (0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address))
            ? vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE
           [(0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)]
            : 0U);
    vlSelfRef.attention_tb__DOT__dut__DOT__attention_weight_vector[0U][3U] 
        = ((0U != vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum)
            ? (0x0000ffffU & VL_DIV_III(32, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum))
            : 0U);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum 
        = ((0x4bU >= (0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address))
            ? vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE
           [(0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)]
            : 0U);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address 
        = VL_DIVS_III(32, ((IData)(0x00000080U) + VL_MULS_III(32, (IData)(0x0000000aU), vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude)), (IData)(0x00000100U));
    if (VL_LTS_III(32, 0x0000004bU, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)) {
        vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address = 0x0000004bU;
    }
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum 
           + ((0x4bU >= (0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address))
               ? vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE
              [(0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)]
               : 0U));
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference 
        = (VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[1U][2U]) 
           - vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude 
        = (VL_GTS_III(32, 0U, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference)
            ? (- vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference)
            : vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[1U][1U] 
        = ((0x4bU >= (0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address))
            ? vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE
           [(0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)]
            : 0U);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address 
        = VL_DIVS_III(32, ((IData)(0x00000080U) + VL_MULS_III(32, (IData)(0x0000000aU), vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude)), (IData)(0x00000100U));
    if (VL_LTS_III(32, 0x0000004bU, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)) {
        vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address = 0x0000004bU;
    }
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum 
           + ((0x4bU >= (0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address))
               ? vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE
              [(0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)]
               : 0U));
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference 
        = (VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[1U][3U]) 
           - vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude 
        = (VL_GTS_III(32, 0U, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference)
            ? (- vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference)
            : vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[1U][2U] 
        = ((0x4bU >= (0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address))
            ? vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE
           [(0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)]
            : 0U);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address 
        = VL_DIVS_III(32, ((IData)(0x00000080U) + VL_MULS_III(32, (IData)(0x0000000aU), vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude)), (IData)(0x00000100U));
    if (VL_LTS_III(32, 0x0000004bU, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)) {
        vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address = 0x0000004bU;
    }
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum 
           + ((0x4bU >= (0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address))
               ? vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE
              [(0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)]
               : 0U));
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[1U][3U] 
        = ((0x4bU >= (0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address))
            ? vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE
           [(0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)]
            : 0U);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[1U][0U], 8U);
    vlSelfRef.attention_tb__DOT__dut__DOT__attention_weight_vector[1U][0U] 
        = ((0U != vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum)
            ? (0x0000ffffU & VL_DIV_III(32, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum))
            : 0U);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[1U][1U], 8U);
    vlSelfRef.attention_tb__DOT__dut__DOT__attention_weight_vector[1U][1U] 
        = ((0U != vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum)
            ? (0x0000ffffU & VL_DIV_III(32, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum))
            : 0U);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[1U][2U], 8U);
    vlSelfRef.attention_tb__DOT__dut__DOT__attention_weight_vector[1U][2U] 
        = ((0U != vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum)
            ? (0x0000ffffU & VL_DIV_III(32, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum))
            : 0U);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[1U][3U], 8U);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value 
        = VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[2U][0U]);
    if (VL_GTS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[2U][1U]), vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value)) {
        vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value 
            = VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[2U][1U]);
    }
    if (VL_GTS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[2U][2U]), vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value)) {
        vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value 
            = VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[2U][2U]);
    }
    if (VL_GTS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[2U][3U]), vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value)) {
        vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value 
            = VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[2U][3U]);
    }
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference 
        = (VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[2U][0U]) 
           - vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude 
        = (VL_GTS_III(32, 0U, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference)
            ? (- vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference)
            : vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address 
        = VL_DIVS_III(32, ((IData)(0x00000080U) + VL_MULS_III(32, (IData)(0x0000000aU), vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude)), (IData)(0x00000100U));
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference 
        = (VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[2U][1U]) 
           - vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value);
    if (VL_LTS_III(32, 0x0000004bU, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)) {
        vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address = 0x0000004bU;
    }
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude 
        = (VL_GTS_III(32, 0U, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference)
            ? (- vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference)
            : vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[2U][0U] 
        = ((0x4bU >= (0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address))
            ? vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE
           [(0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)]
            : 0U);
    vlSelfRef.attention_tb__DOT__dut__DOT__attention_weight_vector[1U][3U] 
        = ((0U != vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum)
            ? (0x0000ffffU & VL_DIV_III(32, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum))
            : 0U);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum 
        = ((0x4bU >= (0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address))
            ? vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE
           [(0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)]
            : 0U);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address 
        = VL_DIVS_III(32, ((IData)(0x00000080U) + VL_MULS_III(32, (IData)(0x0000000aU), vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude)), (IData)(0x00000100U));
    if (VL_LTS_III(32, 0x0000004bU, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)) {
        vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address = 0x0000004bU;
    }
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum 
           + ((0x4bU >= (0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address))
               ? vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE
              [(0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)]
               : 0U));
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference 
        = (VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[2U][2U]) 
           - vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude 
        = (VL_GTS_III(32, 0U, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference)
            ? (- vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference)
            : vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[2U][1U] 
        = ((0x4bU >= (0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address))
            ? vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE
           [(0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)]
            : 0U);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address 
        = VL_DIVS_III(32, ((IData)(0x00000080U) + VL_MULS_III(32, (IData)(0x0000000aU), vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude)), (IData)(0x00000100U));
    if (VL_LTS_III(32, 0x0000004bU, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)) {
        vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address = 0x0000004bU;
    }
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum 
           + ((0x4bU >= (0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address))
               ? vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE
              [(0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)]
               : 0U));
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference 
        = (VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[2U][3U]) 
           - vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude 
        = (VL_GTS_III(32, 0U, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference)
            ? (- vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference)
            : vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[2U][2U] 
        = ((0x4bU >= (0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address))
            ? vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE
           [(0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)]
            : 0U);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address 
        = VL_DIVS_III(32, ((IData)(0x00000080U) + VL_MULS_III(32, (IData)(0x0000000aU), vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude)), (IData)(0x00000100U));
    if (VL_LTS_III(32, 0x0000004bU, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)) {
        vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address = 0x0000004bU;
    }
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum 
           + ((0x4bU >= (0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address))
               ? vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE
              [(0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)]
               : 0U));
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[2U][3U] 
        = ((0x4bU >= (0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address))
            ? vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE
           [(0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)]
            : 0U);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[2U][0U], 8U);
    vlSelfRef.attention_tb__DOT__dut__DOT__attention_weight_vector[2U][0U] 
        = ((0U != vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum)
            ? (0x0000ffffU & VL_DIV_III(32, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum))
            : 0U);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[2U][1U], 8U);
    vlSelfRef.attention_tb__DOT__dut__DOT__attention_weight_vector[2U][1U] 
        = ((0U != vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum)
            ? (0x0000ffffU & VL_DIV_III(32, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum))
            : 0U);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[2U][2U], 8U);
    vlSelfRef.attention_tb__DOT__dut__DOT__attention_weight_vector[2U][2U] 
        = ((0U != vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum)
            ? (0x0000ffffU & VL_DIV_III(32, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum))
            : 0U);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[2U][3U], 8U);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value 
        = VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[3U][0U]);
    if (VL_GTS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[3U][1U]), vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value)) {
        vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value 
            = VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[3U][1U]);
    }
    if (VL_GTS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[3U][2U]), vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value)) {
        vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value 
            = VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[3U][2U]);
    }
    if (VL_GTS_III(32, VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[3U][3U]), vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value)) {
        vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value 
            = VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[3U][3U]);
    }
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference 
        = (VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[3U][0U]) 
           - vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude 
        = (VL_GTS_III(32, 0U, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference)
            ? (- vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference)
            : vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address 
        = VL_DIVS_III(32, ((IData)(0x00000080U) + VL_MULS_III(32, (IData)(0x0000000aU), vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude)), (IData)(0x00000100U));
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference 
        = (VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[3U][1U]) 
           - vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value);
    if (VL_LTS_III(32, 0x0000004bU, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)) {
        vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address = 0x0000004bU;
    }
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude 
        = (VL_GTS_III(32, 0U, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference)
            ? (- vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference)
            : vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[3U][0U] 
        = ((0x4bU >= (0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address))
            ? vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE
           [(0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)]
            : 0U);
    vlSelfRef.attention_tb__DOT__dut__DOT__attention_weight_vector[2U][3U] 
        = ((0U != vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum)
            ? (0x0000ffffU & VL_DIV_III(32, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum))
            : 0U);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum 
        = ((0x4bU >= (0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address))
            ? vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE
           [(0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)]
            : 0U);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address 
        = VL_DIVS_III(32, ((IData)(0x00000080U) + VL_MULS_III(32, (IData)(0x0000000aU), vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude)), (IData)(0x00000100U));
    if (VL_LTS_III(32, 0x0000004bU, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)) {
        vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address = 0x0000004bU;
    }
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum 
           + ((0x4bU >= (0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address))
               ? vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE
              [(0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)]
               : 0U));
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference 
        = (VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[3U][2U]) 
           - vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude 
        = (VL_GTS_III(32, 0U, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference)
            ? (- vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference)
            : vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[3U][1U] 
        = ((0x4bU >= (0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address))
            ? vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE
           [(0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)]
            : 0U);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address 
        = VL_DIVS_III(32, ((IData)(0x00000080U) + VL_MULS_III(32, (IData)(0x0000000aU), vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude)), (IData)(0x00000100U));
    if (VL_LTS_III(32, 0x0000004bU, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)) {
        vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address = 0x0000004bU;
    }
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum 
           + ((0x4bU >= (0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address))
               ? vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE
              [(0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)]
               : 0U));
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference 
        = (VL_EXTENDS_II(32,16, vlSelfRef.attention_tb__DOT__dut__DOT__scaled_attention_score[3U][3U]) 
           - vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude 
        = (VL_GTS_III(32, 0U, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference)
            ? (- vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference)
            : vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[3U][2U] 
        = ((0x4bU >= (0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address))
            ? vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE
           [(0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)]
            : 0U);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address 
        = VL_DIVS_III(32, ((IData)(0x00000080U) + VL_MULS_III(32, (IData)(0x0000000aU), vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude)), (IData)(0x00000100U));
    if (VL_LTS_III(32, 0x0000004bU, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)) {
        vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address = 0x0000004bU;
    }
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[3U][3U] 
        = ((0x4bU >= (0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address))
            ? vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE
           [(0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)]
            : 0U);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum 
        = (vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum 
           + ((0x4bU >= (0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address))
               ? vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__TABLE
              [(0x0000007fU & vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__address)]
               : 0U));
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[3U][0U], 8U);
    vlSelfRef.attention_tb__DOT__dut__DOT__attention_weight_vector[3U][0U] 
        = ((0U != vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum)
            ? (0x0000ffffU & VL_DIV_III(32, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum))
            : 0U);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[3U][1U], 8U);
    vlSelfRef.attention_tb__DOT__dut__DOT__attention_weight_vector[3U][1U] 
        = ((0U != vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum)
            ? (0x0000ffffU & VL_DIV_III(32, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum))
            : 0U);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[3U][2U], 8U);
    vlSelfRef.attention_tb__DOT__dut__DOT__attention_weight_vector[3U][2U] 
        = ((0U != vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum)
            ? (0x0000ffffU & VL_DIV_III(32, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum))
            : 0U);
    vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[3U][3U], 8U);
    vlSelfRef.attention_tb__DOT__dut__DOT__attention_weight_vector[3U][3U] 
        = ((0U != vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum)
            ? (0x0000ffffU & VL_DIV_III(32, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator, vlSelfRef.attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum))
            : 0U);
}

void Vattention_tb___024root___nba_sequent__TOP__2(Vattention_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattention_tb___024root___nba_sequent__TOP__2\n"); );
    Vattention_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__attention_tb__DOT__clk__v0) {
        vlSelfRef.__VdlySet__attention_tb__DOT__clk__v0 = 0U;
        vlSelfRef.attention_tb__DOT__clk = 1U;
    }
    if (vlSelfRef.__VdlySet__attention_tb__DOT__clk__v1) {
        vlSelfRef.__VdlySet__attention_tb__DOT__clk__v1 = 0U;
        vlSelfRef.attention_tb__DOT__clk = 0U;
    }
}

void Vattention_tb___024root___nba_sequent__TOP__3(Vattention_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattention_tb___024root___nba_sequent__TOP__3\n"); );
    Vattention_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.attention_tb__DOT__done))) {
        vlSelfRef.attention_tb__DOT__file = VL_FOPEN_NN("output/obtained_output_context_vector.txt"s
                                                        , "w"s);
        ;
        if (VL_UNLIKELY(((0U == vlSelfRef.attention_tb__DOT__file)))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb.sv:42: Assertion failed in %m: Unable to open obtained output file\n",3, 'M',vlSymsp->name(),"attention_tb.checkOutput", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            VL_STOP_MT("verification/tb.sv", 42, "", false);
        }
        VL_FWRITEF_NX(vlSelfRef.attention_tb__DOT__file,"%.4f %.4f %.4f\n%.4f %.4f %.4f\n%.4f %.4f %.4f\n%.4f %.4f %.4f\n",12
                      , 'D',(VL_ISTOR_D_I(16, vlSelfRef.attention_tb__DOT__context_vector[0U]) 
                             / 256.0), 'D',(VL_ISTOR_D_I(16, vlSelfRef.attention_tb__DOT__context_vector[1U]) 
                                            / 256.0)
                      , 'D',(VL_ISTOR_D_I(16, vlSelfRef.attention_tb__DOT__context_vector[2U]) 
                             / 256.0), 'D',(VL_ISTOR_D_I(16, vlSelfRef.attention_tb__DOT__context_vector[3U]) 
                                            / 256.0)
                      , 'D',(VL_ISTOR_D_I(16, vlSelfRef.attention_tb__DOT__context_vector[4U]) 
                             / 256.0), 'D',(VL_ISTOR_D_I(16, vlSelfRef.attention_tb__DOT__context_vector[5U]) 
                                            / 256.0)
                      , 'D',(VL_ISTOR_D_I(16, vlSelfRef.attention_tb__DOT__context_vector[6U]) 
                             / 256.0), 'D',(VL_ISTOR_D_I(16, vlSelfRef.attention_tb__DOT__context_vector[7U]) 
                                            / 256.0)
                      , 'D',(VL_ISTOR_D_I(16, vlSelfRef.attention_tb__DOT__context_vector[8U]) 
                             / 256.0), 'D',(VL_ISTOR_D_I(16, vlSelfRef.attention_tb__DOT__context_vector[9U]) 
                                            / 256.0)
                      , 'D',(VL_ISTOR_D_I(16, vlSelfRef.attention_tb__DOT__context_vector[10U]) 
                             / 256.0), 'D',(VL_ISTOR_D_I(16, vlSelfRef.attention_tb__DOT__context_vector[11U]) 
                                            / 256.0));
        VL_FCLOSE_I(vlSelfRef.attention_tb__DOT__file); VL_FINISH_MT("verification/tb.sv", 53, "");
    }
}

extern const VlUnpacked<CData/*3:0*/, 32> Vattention_tb__ConstPool__TABLE_h341bfd92_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vattention_tb__ConstPool__TABLE_h663a3895_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vattention_tb__ConstPool__TABLE_h32ee7404_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vattention_tb__ConstPool__TABLE_h7f88be21_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vattention_tb__ConstPool__TABLE_hbc9bf328_0;

void Vattention_tb___024root___nba_sequent__TOP__4(Vattention_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattention_tb___024root___nba_sequent__TOP__4\n"); );
    Vattention_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ attention_tb__DOT__dut__DOT____Vlvbound_he0353fd1__0;
    attention_tb__DOT__dut__DOT____Vlvbound_he0353fd1__0 = 0;
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    attention_tb__DOT__dut__DOT____Vlvbound_he0353fd1__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[0U][0U];
    vlSelfRef.attention_tb__DOT__context_vector[0U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_he0353fd1__0;
    attention_tb__DOT__dut__DOT____Vlvbound_he0353fd1__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[0U][1U];
    vlSelfRef.attention_tb__DOT__context_vector[1U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_he0353fd1__0;
    attention_tb__DOT__dut__DOT____Vlvbound_he0353fd1__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[0U][2U];
    vlSelfRef.attention_tb__DOT__context_vector[2U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_he0353fd1__0;
    attention_tb__DOT__dut__DOT____Vlvbound_he0353fd1__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[1U][0U];
    vlSelfRef.attention_tb__DOT__context_vector[3U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_he0353fd1__0;
    attention_tb__DOT__dut__DOT____Vlvbound_he0353fd1__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[1U][1U];
    vlSelfRef.attention_tb__DOT__context_vector[4U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_he0353fd1__0;
    attention_tb__DOT__dut__DOT____Vlvbound_he0353fd1__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[1U][2U];
    vlSelfRef.attention_tb__DOT__context_vector[5U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_he0353fd1__0;
    attention_tb__DOT__dut__DOT____Vlvbound_he0353fd1__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[2U][0U];
    vlSelfRef.attention_tb__DOT__context_vector[6U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_he0353fd1__0;
    attention_tb__DOT__dut__DOT____Vlvbound_he0353fd1__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[2U][1U];
    vlSelfRef.attention_tb__DOT__context_vector[7U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_he0353fd1__0;
    attention_tb__DOT__dut__DOT____Vlvbound_he0353fd1__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[2U][2U];
    vlSelfRef.attention_tb__DOT__context_vector[8U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_he0353fd1__0;
    attention_tb__DOT__dut__DOT____Vlvbound_he0353fd1__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[3U][0U];
    vlSelfRef.attention_tb__DOT__context_vector[9U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_he0353fd1__0;
    attention_tb__DOT__dut__DOT____Vlvbound_he0353fd1__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[3U][1U];
    vlSelfRef.attention_tb__DOT__context_vector[10U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_he0353fd1__0;
    attention_tb__DOT__dut__DOT____Vlvbound_he0353fd1__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__contextual_embedding_vector[3U][2U];
    vlSelfRef.attention_tb__DOT__context_vector[11U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_he0353fd1__0;
    __Vtableidx1 = (((IData)(vlSelfRef.attention_tb__DOT__dut__DOT__data_ready) 
                     << 4U) | (IData)(vlSelfRef.attention_tb__DOT__dut__DOT__state));
    vlSelfRef.attention_tb__DOT__dut__DOT__nxtState 
        = Vattention_tb__ConstPool__TABLE_h341bfd92_0
        [__Vtableidx1];
    vlSelfRef.attention_tb__DOT__dut__DOT__selectMux3 
        = Vattention_tb__ConstPool__TABLE_h663a3895_0
        [__Vtableidx1];
    vlSelfRef.attention_tb__DOT__dut__DOT__selectMux5 
        = Vattention_tb__ConstPool__TABLE_h32ee7404_0
        [__Vtableidx1];
    vlSelfRef.attention_tb__DOT__dut__DOT__demuxSelect5 
        = Vattention_tb__ConstPool__TABLE_h7f88be21_0
        [__Vtableidx1];
    vlSelfRef.attention_tb__DOT__done = Vattention_tb__ConstPool__TABLE_hbc9bf328_0
        [__Vtableidx1];
}

void Vattention_tb___024root___eval_nba(Vattention_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattention_tb___024root___eval_nba\n"); );
    Vattention_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vattention_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vattention_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vattention_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vattention_tb___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vattention_tb___024root___nba_sequent__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

void Vattention_tb___024root___timing_resume(Vattention_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattention_tb___024root___timing_resume\n"); );
    Vattention_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vattention_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattention_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vattention_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vattention_tb___024root___eval_phase__act(Vattention_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattention_tb___024root___eval_phase__act\n"); );
    Vattention_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vattention_tb___024root___eval_triggers_vec__act(vlSelf);
    Vattention_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vattention_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vattention_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vattention_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vattention_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vattention_tb___024root___eval_phase__inact(Vattention_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattention_tb___024root___eval_phase__inact\n"); );
    Vattention_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("verification/tb.sv", 7, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vattention_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattention_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vattention_tb___024root___eval_phase__nba(Vattention_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattention_tb___024root___eval_phase__nba\n"); );
    Vattention_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vattention_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vattention_tb___024root___eval_nba(vlSelf);
        Vattention_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vattention_tb___024root___eval(Vattention_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattention_tb___024root___eval\n"); );
    Vattention_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vattention_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("verification/tb.sv", 7, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("verification/tb.sv", 7, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vattention_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("verification/tb.sv", 7, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vattention_tb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vattention_tb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vattention_tb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vattention_tb___024root___eval_debug_assertions(Vattention_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattention_tb___024root___eval_debug_assertions\n"); );
    Vattention_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
