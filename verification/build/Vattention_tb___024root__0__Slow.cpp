// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vattention_tb.h for the primary calling header

#include "Vattention_tb__pch.h"

VL_ATTR_COLD void Vattention_tb___024root___eval_static__TOP(Vattention_tb___024root* vlSelf);
VL_ATTR_COLD void Vattention_tb___024root____Vm_traceActivitySetAll(Vattention_tb___024root* vlSelf);

VL_ATTR_COLD void Vattention_tb___024root___eval_static(Vattention_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattention_tb___024root___eval_static\n"); );
    Vattention_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vattention_tb___024root___eval_static__TOP(vlSelf);
    Vattention_tb___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__attention_tb__DOT__clk__0 
        = vlSelfRef.attention_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__attention_tb__DOT__rst__0 
        = vlSelfRef.attention_tb__DOT__rst;
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vattention_tb___024root___eval_static__TOP(Vattention_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattention_tb___024root___eval_static__TOP\n"); );
    Vattention_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.attention_tb__DOT__dut__DOT__resultConversionBlock__DOT__i = 0U;
    vlSelfRef.attention_tb__DOT__dut__DOT__resultConversionBlock__DOT__j = 0U;
    vlSelfRef.attention_tb__DOT__dut__DOT__key_transpose_calc__DOT__unnamedblk1__DOT__i = 0U;
    vlSelfRef.attention_tb__DOT__dut__DOT__key_transpose_calc__DOT__unnamedblk1__DOT__j = 0U;
}

VL_ATTR_COLD void Vattention_tb___024root___eval_initial__TOP(Vattention_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattention_tb___024root___eval_initial__TOP\n"); );
    Vattention_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.attention_tb__DOT__dut__DOT__resultConversionBlock__DOT__j = 3U;
    vlSelfRef.attention_tb__DOT__dut__DOT__resultConversionBlock__DOT__i = 4U;
    vlSelfRef.attention_tb__DOT__dut__DOT__key_transpose_calc__DOT__unnamedblk1__DOT__j = 3U;
    vlSelfRef.attention_tb__DOT__dut__DOT__key_transpose_calc__DOT__unnamedblk1__DOT__i = 4U;
    vlSymsp->_vm_contextp__->dumpfile("verification/build/attention_mechanism.vcd"s);
    vlSymsp->_traceDumpOpen();
    VL_READMEM_N(true, 16, 12, 0, "inputfiles/token_embedding_hex.txt"s
                 ,  &(vlSelfRef.attention_tb__DOT__dut__DOT__X)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 16, 9, 0, "inputfiles/weight_q_hex.txt"s
                 ,  &(vlSelfRef.attention_tb__DOT__dut__DOT__Wq)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 16, 9, 0, "inputfiles/weight_k_hex.txt"s
                 ,  &(vlSelfRef.attention_tb__DOT__dut__DOT__Wk)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 16, 9, 0, "inputfiles/weight_v_hex.txt"s
                 ,  &(vlSelfRef.attention_tb__DOT__dut__DOT__Wv)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vattention_tb___024root___eval_final(Vattention_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattention_tb___024root___eval_final\n"); );
    Vattention_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vattention_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vattention_tb___024root___eval_phase__stl(Vattention_tb___024root* vlSelf);

VL_ATTR_COLD void Vattention_tb___024root___eval_settle(Vattention_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattention_tb___024root___eval_settle\n"); );
    Vattention_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vattention_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("verification/tb.sv", 7, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vattention_tb___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vattention_tb___024root___eval_triggers_vec__stl(Vattention_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattention_tb___024root___eval_triggers_vec__stl\n"); );
    Vattention_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vattention_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vattention_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattention_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vattention_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vattention_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattention_tb___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<CData/*3:0*/, 32> Vattention_tb__ConstPool__TABLE_h341bfd92_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vattention_tb__ConstPool__TABLE_h663a3895_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vattention_tb__ConstPool__TABLE_h32ee7404_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vattention_tb__ConstPool__TABLE_h7f88be21_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vattention_tb__ConstPool__TABLE_hbc9bf328_0;

VL_ATTR_COLD void Vattention_tb___024root___stl_sequent__TOP__0(Vattention_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattention_tb___024root___stl_sequent__TOP__0\n"); );
    Vattention_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ attention_tb__DOT__dut__DOT____Vlvbound_h8e1aa0c2__0;
    attention_tb__DOT__dut__DOT____Vlvbound_h8e1aa0c2__0 = 0;
    SData/*15:0*/ attention_tb__DOT__dut__DOT____Vlvbound_h97405c92__0;
    attention_tb__DOT__dut__DOT____Vlvbound_h97405c92__0 = 0;
    SData/*15:0*/ attention_tb__DOT__dut__DOT____Vlvbound_he7967392__0;
    attention_tb__DOT__dut__DOT____Vlvbound_he7967392__0 = 0;
    SData/*15:0*/ attention_tb__DOT__dut__DOT____Vlvbound_h2fe6c74a__0;
    attention_tb__DOT__dut__DOT____Vlvbound_h2fe6c74a__0 = 0;
    SData/*15:0*/ attention_tb__DOT__dut__DOT____Vlvbound_he0353fd1__0;
    attention_tb__DOT__dut__DOT____Vlvbound_he0353fd1__0 = 0;
    SData/*15:0*/ attention_tb__DOT__dut__DOT__key_transpose_calc__DOT____Vlvbound_hfea565da__0;
    attention_tb__DOT__dut__DOT__key_transpose_calc__DOT____Vlvbound_hfea565da__0 = 0;
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
    attention_tb__DOT__dut__DOT____Vlvbound_h2fe6c74a__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__X[0U];
    vlSelfRef.attention_tb__DOT__dut__DOT__embedding_X[0U][0U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_h2fe6c74a__0;
    attention_tb__DOT__dut__DOT____Vlvbound_h2fe6c74a__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__X[1U];
    vlSelfRef.attention_tb__DOT__dut__DOT__embedding_X[0U][1U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_h2fe6c74a__0;
    attention_tb__DOT__dut__DOT____Vlvbound_h2fe6c74a__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__X[2U];
    vlSelfRef.attention_tb__DOT__dut__DOT__embedding_X[0U][2U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_h2fe6c74a__0;
    attention_tb__DOT__dut__DOT____Vlvbound_h2fe6c74a__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__X[3U];
    vlSelfRef.attention_tb__DOT__dut__DOT__embedding_X[1U][0U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_h2fe6c74a__0;
    attention_tb__DOT__dut__DOT____Vlvbound_h2fe6c74a__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__X[4U];
    vlSelfRef.attention_tb__DOT__dut__DOT__embedding_X[1U][1U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_h2fe6c74a__0;
    attention_tb__DOT__dut__DOT____Vlvbound_h2fe6c74a__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__X[5U];
    vlSelfRef.attention_tb__DOT__dut__DOT__embedding_X[1U][2U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_h2fe6c74a__0;
    attention_tb__DOT__dut__DOT____Vlvbound_h2fe6c74a__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__X[6U];
    vlSelfRef.attention_tb__DOT__dut__DOT__embedding_X[2U][0U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_h2fe6c74a__0;
    attention_tb__DOT__dut__DOT____Vlvbound_h2fe6c74a__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__X[7U];
    vlSelfRef.attention_tb__DOT__dut__DOT__embedding_X[2U][1U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_h2fe6c74a__0;
    attention_tb__DOT__dut__DOT____Vlvbound_h2fe6c74a__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__X[8U];
    vlSelfRef.attention_tb__DOT__dut__DOT__embedding_X[2U][2U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_h2fe6c74a__0;
    attention_tb__DOT__dut__DOT____Vlvbound_h2fe6c74a__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__X[9U];
    vlSelfRef.attention_tb__DOT__dut__DOT__embedding_X[3U][0U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_h2fe6c74a__0;
    attention_tb__DOT__dut__DOT____Vlvbound_h2fe6c74a__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__X[10U];
    vlSelfRef.attention_tb__DOT__dut__DOT__embedding_X[3U][1U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_h2fe6c74a__0;
    attention_tb__DOT__dut__DOT____Vlvbound_h2fe6c74a__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__X[11U];
    vlSelfRef.attention_tb__DOT__dut__DOT__embedding_X[3U][2U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_h2fe6c74a__0;
    attention_tb__DOT__dut__DOT____Vlvbound_he7967392__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__Wq[0U];
    vlSelfRef.attention_tb__DOT__dut__DOT__Qw[0U][0U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_he7967392__0;
    attention_tb__DOT__dut__DOT____Vlvbound_he7967392__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__Wq[1U];
    vlSelfRef.attention_tb__DOT__dut__DOT__Qw[0U][1U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_he7967392__0;
    attention_tb__DOT__dut__DOT____Vlvbound_he7967392__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__Wq[2U];
    vlSelfRef.attention_tb__DOT__dut__DOT__Qw[0U][2U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_he7967392__0;
    attention_tb__DOT__dut__DOT____Vlvbound_he7967392__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__Wq[3U];
    vlSelfRef.attention_tb__DOT__dut__DOT__Qw[1U][0U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_he7967392__0;
    attention_tb__DOT__dut__DOT____Vlvbound_he7967392__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__Wq[4U];
    vlSelfRef.attention_tb__DOT__dut__DOT__Qw[1U][1U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_he7967392__0;
    attention_tb__DOT__dut__DOT____Vlvbound_he7967392__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__Wq[5U];
    vlSelfRef.attention_tb__DOT__dut__DOT__Qw[1U][2U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_he7967392__0;
    attention_tb__DOT__dut__DOT____Vlvbound_he7967392__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__Wq[6U];
    vlSelfRef.attention_tb__DOT__dut__DOT__Qw[2U][0U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_he7967392__0;
    attention_tb__DOT__dut__DOT____Vlvbound_he7967392__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__Wq[7U];
    vlSelfRef.attention_tb__DOT__dut__DOT__Qw[2U][1U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_he7967392__0;
    attention_tb__DOT__dut__DOT____Vlvbound_he7967392__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__Wq[8U];
    vlSelfRef.attention_tb__DOT__dut__DOT__Qw[2U][2U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_he7967392__0;
    attention_tb__DOT__dut__DOT____Vlvbound_h97405c92__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__Wk[0U];
    vlSelfRef.attention_tb__DOT__dut__DOT__Kw[0U][0U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_h97405c92__0;
    attention_tb__DOT__dut__DOT____Vlvbound_h97405c92__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__Wk[1U];
    vlSelfRef.attention_tb__DOT__dut__DOT__Kw[0U][1U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_h97405c92__0;
    attention_tb__DOT__dut__DOT____Vlvbound_h97405c92__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__Wk[2U];
    vlSelfRef.attention_tb__DOT__dut__DOT__Kw[0U][2U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_h97405c92__0;
    attention_tb__DOT__dut__DOT____Vlvbound_h97405c92__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__Wk[3U];
    vlSelfRef.attention_tb__DOT__dut__DOT__Kw[1U][0U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_h97405c92__0;
    attention_tb__DOT__dut__DOT____Vlvbound_h97405c92__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__Wk[4U];
    vlSelfRef.attention_tb__DOT__dut__DOT__Kw[1U][1U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_h97405c92__0;
    attention_tb__DOT__dut__DOT____Vlvbound_h97405c92__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__Wk[5U];
    vlSelfRef.attention_tb__DOT__dut__DOT__Kw[1U][2U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_h97405c92__0;
    attention_tb__DOT__dut__DOT____Vlvbound_h97405c92__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__Wk[6U];
    vlSelfRef.attention_tb__DOT__dut__DOT__Kw[2U][0U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_h97405c92__0;
    attention_tb__DOT__dut__DOT____Vlvbound_h97405c92__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__Wk[7U];
    vlSelfRef.attention_tb__DOT__dut__DOT__Kw[2U][1U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_h97405c92__0;
    attention_tb__DOT__dut__DOT____Vlvbound_h97405c92__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__Wk[8U];
    vlSelfRef.attention_tb__DOT__dut__DOT__Kw[2U][2U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_h97405c92__0;
    attention_tb__DOT__dut__DOT____Vlvbound_h8e1aa0c2__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__Wv[0U];
    vlSelfRef.attention_tb__DOT__dut__DOT__Vw[0U][0U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_h8e1aa0c2__0;
    attention_tb__DOT__dut__DOT____Vlvbound_h8e1aa0c2__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__Wv[1U];
    vlSelfRef.attention_tb__DOT__dut__DOT__Vw[0U][1U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_h8e1aa0c2__0;
    attention_tb__DOT__dut__DOT____Vlvbound_h8e1aa0c2__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__Wv[2U];
    vlSelfRef.attention_tb__DOT__dut__DOT__Vw[0U][2U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_h8e1aa0c2__0;
    attention_tb__DOT__dut__DOT____Vlvbound_h8e1aa0c2__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__Wv[3U];
    vlSelfRef.attention_tb__DOT__dut__DOT__Vw[1U][0U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_h8e1aa0c2__0;
    attention_tb__DOT__dut__DOT____Vlvbound_h8e1aa0c2__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__Wv[4U];
    vlSelfRef.attention_tb__DOT__dut__DOT__Vw[1U][1U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_h8e1aa0c2__0;
    attention_tb__DOT__dut__DOT____Vlvbound_h8e1aa0c2__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__Wv[5U];
    vlSelfRef.attention_tb__DOT__dut__DOT__Vw[1U][2U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_h8e1aa0c2__0;
    attention_tb__DOT__dut__DOT____Vlvbound_h8e1aa0c2__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__Wv[6U];
    vlSelfRef.attention_tb__DOT__dut__DOT__Vw[2U][0U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_h8e1aa0c2__0;
    attention_tb__DOT__dut__DOT____Vlvbound_h8e1aa0c2__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__Wv[7U];
    vlSelfRef.attention_tb__DOT__dut__DOT__Vw[2U][1U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_h8e1aa0c2__0;
    attention_tb__DOT__dut__DOT____Vlvbound_h8e1aa0c2__0 
        = vlSelfRef.attention_tb__DOT__dut__DOT__Wv[8U];
    vlSelfRef.attention_tb__DOT__dut__DOT__Vw[2U][2U] 
        = attention_tb__DOT__dut__DOT____Vlvbound_h8e1aa0c2__0;
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

VL_ATTR_COLD void Vattention_tb___024root___eval_stl(Vattention_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattention_tb___024root___eval_stl\n"); );
    Vattention_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vattention_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vattention_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vattention_tb___024root___eval_phase__stl(Vattention_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattention_tb___024root___eval_phase__stl\n"); );
    Vattention_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vattention_tb___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vattention_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vattention_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vattention_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vattention_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vattention_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattention_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vattention_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge attention_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge attention_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge attention_tb.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vattention_tb___024root____Vm_traceActivitySetAll(Vattention_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattention_tb___024root____Vm_traceActivitySetAll\n"); );
    Vattention_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vattention_tb___024root___ctor_var_reset(Vattention_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vattention_tb___024root___ctor_var_reset\n"); );
    Vattention_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->attention_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5011348359831604467ull);
    vlSelf->attention_tb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5161136865653707139ull);
    vlSelf->attention_tb__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13489934609345443749ull);
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        vlSelf->attention_tb__DOT__context_vector[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14730024594194425475ull);
    }
    vlSelf->attention_tb__DOT__file = 0;
    vlSelf->attention_tb__DOT__dut__DOT__data_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16209628382837078322ull);
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        vlSelf->attention_tb__DOT__dut__DOT__X[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 114472956334312460ull);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->attention_tb__DOT__dut__DOT__Wq[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3497765199204229695ull);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->attention_tb__DOT__dut__DOT__Wk[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17168108520740653010ull);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->attention_tb__DOT__dut__DOT__Wv[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7062805332573837217ull);
    }
    vlSelf->attention_tb__DOT__dut__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 624132108602776369ull);
    vlSelf->attention_tb__DOT__dut__DOT__nxtState = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7818586464181439871ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->attention_tb__DOT__dut__DOT__embedding_X[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8223686222237332030ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->attention_tb__DOT__dut__DOT__Qw[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8274850644053958271ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->attention_tb__DOT__dut__DOT__Kw[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14050802792171288678ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->attention_tb__DOT__dut__DOT__Vw[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16863414437881086988ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->attention_tb__DOT__dut__DOT__Q_vector[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6683986515357556217ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->attention_tb__DOT__dut__DOT__K_vector[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7617714190207429726ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->attention_tb__DOT__dut__DOT__K_vector_transpose[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4076660763712536343ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->attention_tb__DOT__dut__DOT__V_vector[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4913985422490003027ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->attention_tb__DOT__dut__DOT__attention_score[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12662247126645893977ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->attention_tb__DOT__dut__DOT__scaled_attention_score[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13344831295442896376ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->attention_tb__DOT__dut__DOT__attention_weight_vector[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2362383595105463645ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->attention_tb__DOT__dut__DOT__contextual_embedding_vector[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17782993667888919661ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->attention_tb__DOT__dut__DOT__matA[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9091439613731099674ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->attention_tb__DOT__dut__DOT__matB[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12902905018310545184ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->attention_tb__DOT__dut__DOT__MatMultResult[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13637197837734145907ull);
        }
    }
    vlSelf->attention_tb__DOT__dut__DOT__selectMux3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10945879229528135591ull);
    vlSelf->attention_tb__DOT__dut__DOT__selectMux5 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7207663575936481133ull);
    vlSelf->attention_tb__DOT__dut__DOT__demuxSelect5 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11978584704139665730ull);
    vlSelf->attention_tb__DOT__dut__DOT__vec_mult_calc__DOT__accumulator = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15341125068335625449ull);
    vlSelf->attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_ha189c4de__0 = 0;
    vlSelf->attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_hf05516c2__0 = 0;
    vlSelf->attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h56aa2e7e__0 = 0;
    vlSelf->attention_tb__DOT__dut__DOT__matResultAssign__DOT____Vlvbound_h4e83bd7f__0 = 0;
    vlSelf->attention_tb__DOT__dut__DOT__scale_attention_score__DOT__accumulator = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4146082997525184607ull);
    vlSelf->attention_tb__DOT__dut__DOT__softmax_calc__DOT__address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13980204249790720184ull);
    vlSelf->attention_tb__DOT__dut__DOT__softmax_calc__DOT__magnitude = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4990758822540377092ull);
    vlSelf->attention_tb__DOT__dut__DOT__softmax_calc__DOT__max_value = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11707229583619751607ull);
    vlSelf->attention_tb__DOT__dut__DOT__softmax_calc__DOT__difference = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16418792696888462888ull);
    vlSelf->attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_sum = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12469447312018068356ull);
    vlSelf->attention_tb__DOT__dut__DOT__softmax_calc__DOT__numerator = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16083216046911236087ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->attention_tb__DOT__dut__DOT__softmax_calc__DOT__exp_values[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15925449104849749138ull);
        }
    }
    vlSelf->__VdlySet__attention_tb__DOT__clk__v0 = 0;
    vlSelf->__VdlySet__attention_tb__DOT__clk__v1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__attention_tb__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__attention_tb__DOT__rst__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
