// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _my_NN_HH_
#define _my_NN_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "my_NN_NN_func.h"
#include "my_NN_out_func.h"

namespace ap_rtl {

struct my_NN : public sc_module {
    // Port declarations 7
    sc_in< sc_lv<18> > U0;
    sc_in< sc_lv<18> > U1;
    sc_in< sc_lv<18> > U2;
    sc_in_clk CLK;
    sc_out< sc_lv<18> > Y0;
    sc_out< sc_lv<18> > Y1;
    sc_in< sc_logic > ap_rst;
    sc_signal< sc_lv<18> > ap_var_for_const0;
    sc_signal< sc_lv<18> > ap_var_for_const1;
    sc_signal< sc_lv<18> > ap_var_for_const2;
    sc_signal< sc_lv<18> > ap_var_for_const3;
    sc_signal< sc_lv<18> > ap_var_for_const4;
    sc_signal< sc_lv<18> > ap_var_for_const5;
    sc_signal< sc_lv<18> > ap_var_for_const6;
    sc_signal< sc_lv<18> > ap_var_for_const7;
    sc_signal< sc_lv<18> > ap_var_for_const8;
    sc_signal< sc_lv<18> > ap_var_for_const9;
    sc_signal< sc_lv<18> > ap_var_for_const10;
    sc_signal< sc_lv<18> > ap_var_for_const11;
    sc_signal< sc_lv<18> > ap_var_for_const12;
    sc_signal< sc_lv<18> > ap_var_for_const13;
    sc_signal< sc_lv<18> > ap_var_for_const14;
    sc_signal< sc_lv<18> > ap_var_for_const15;
    sc_signal< sc_lv<18> > ap_var_for_const16;
    sc_signal< sc_lv<18> > ap_var_for_const17;
    sc_signal< sc_lv<18> > ap_var_for_const18;
    sc_signal< sc_lv<18> > ap_var_for_const19;
    sc_signal< sc_lv<18> > ap_var_for_const32;
    sc_signal< sc_lv<18> > ap_var_for_const33;
    sc_signal< sc_lv<18> > ap_var_for_const34;
    sc_signal< sc_lv<18> > ap_var_for_const35;
    sc_signal< sc_lv<18> > ap_var_for_const36;
    sc_signal< sc_lv<18> > ap_var_for_const37;
    sc_signal< sc_lv<18> > ap_var_for_const38;
    sc_signal< sc_lv<18> > ap_var_for_const39;
    sc_signal< sc_lv<18> > ap_var_for_const40;
    sc_signal< sc_lv<18> > ap_var_for_const41;
    sc_signal< sc_lv<18> > ap_var_for_const42;
    sc_signal< sc_lv<18> > ap_var_for_const43;
    sc_signal< sc_lv<18> > ap_var_for_const44;
    sc_signal< sc_lv<18> > ap_var_for_const45;
    sc_signal< sc_lv<18> > ap_var_for_const46;
    sc_signal< sc_lv<18> > ap_var_for_const47;
    sc_signal< sc_lv<18> > ap_var_for_const48;
    sc_signal< sc_lv<18> > ap_var_for_const49;
    sc_signal< sc_lv<18> > ap_var_for_const50;
    sc_signal< sc_lv<18> > ap_var_for_const51;
    sc_signal< sc_lv<18> > ap_var_for_const52;
    sc_signal< sc_lv<18> > ap_var_for_const53;
    sc_signal< sc_lv<18> > ap_var_for_const54;
    sc_signal< sc_lv<18> > ap_var_for_const55;
    sc_signal< sc_lv<18> > ap_var_for_const56;
    sc_signal< sc_lv<18> > ap_var_for_const57;
    sc_signal< sc_lv<18> > ap_var_for_const58;
    sc_signal< sc_lv<18> > ap_var_for_const59;
    sc_signal< sc_lv<18> > ap_var_for_const60;
    sc_signal< sc_lv<18> > ap_var_for_const61;
    sc_signal< sc_lv<18> > ap_var_for_const62;
    sc_signal< sc_lv<18> > ap_var_for_const63;
    sc_signal< sc_lv<18> > ap_var_for_const64;
    sc_signal< sc_lv<18> > ap_var_for_const65;
    sc_signal< sc_lv<18> > ap_var_for_const66;
    sc_signal< sc_lv<18> > ap_var_for_const67;
    sc_signal< sc_lv<18> > ap_var_for_const68;
    sc_signal< sc_lv<18> > ap_var_for_const69;
    sc_signal< sc_lv<18> > ap_var_for_const70;
    sc_signal< sc_lv<18> > ap_var_for_const71;
    sc_signal< sc_lv<18> > ap_var_for_const72;
    sc_signal< sc_lv<18> > ap_var_for_const73;
    sc_signal< sc_lv<18> > ap_var_for_const74;
    sc_signal< sc_lv<18> > ap_var_for_const75;
    sc_signal< sc_lv<18> > ap_var_for_const76;
    sc_signal< sc_lv<18> > ap_var_for_const77;
    sc_signal< sc_lv<18> > ap_var_for_const78;
    sc_signal< sc_lv<18> > ap_var_for_const79;
    sc_signal< sc_lv<18> > ap_var_for_const20;
    sc_signal< sc_lv<18> > ap_var_for_const21;
    sc_signal< sc_lv<18> > ap_var_for_const22;
    sc_signal< sc_lv<18> > ap_var_for_const23;
    sc_signal< sc_lv<18> > ap_var_for_const24;
    sc_signal< sc_lv<18> > ap_var_for_const25;
    sc_signal< sc_lv<18> > ap_var_for_const26;
    sc_signal< sc_lv<18> > ap_var_for_const27;
    sc_signal< sc_lv<18> > ap_var_for_const28;
    sc_signal< sc_lv<18> > ap_var_for_const29;
    sc_signal< sc_lv<18> > ap_var_for_const30;
    sc_signal< sc_lv<18> > ap_var_for_const31;
    sc_signal< sc_lv<18> > ap_var_for_const80;
    sc_signal< sc_lv<18> > ap_var_for_const81;
    sc_signal< sc_lv<18> > ap_var_for_const82;
    sc_signal< sc_lv<18> > ap_var_for_const83;
    sc_signal< sc_lv<18> > ap_var_for_const84;
    sc_signal< sc_lv<18> > ap_var_for_const85;
    sc_signal< sc_lv<18> > ap_var_for_const86;
    sc_signal< sc_lv<18> > ap_var_for_const87;


    // Module declarations
    my_NN(sc_module_name name);
    SC_HAS_PROCESS(my_NN);

    ~my_NN();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    my_NN_NN_func* StgValue_231_my_NN_NN_func_fu_2420;
    my_NN_out_func* StgValue_237_my_NN_out_func_fu_2870;
    sc_signal< sc_lv<1> > my_NN_ssdm_thread_load_fu_3320_p1;
    sc_signal< sc_lv<4> > ap_CS_fsm;
    sc_signal< sc_lv<18> > StgValue_231_my_NN_NN_func_fu_2420_x0_o;
    sc_signal< sc_logic > StgValue_231_my_NN_NN_func_fu_2420_x0_o_ap_vld;
    sc_signal< sc_lv<18> > StgValue_231_my_NN_NN_func_fu_2420_x1_o;
    sc_signal< sc_logic > StgValue_231_my_NN_NN_func_fu_2420_x1_o_ap_vld;
    sc_signal< sc_lv<18> > StgValue_231_my_NN_NN_func_fu_2420_x2_o;
    sc_signal< sc_logic > StgValue_231_my_NN_NN_func_fu_2420_x2_o_ap_vld;
    sc_signal< sc_lv<18> > StgValue_231_my_NN_NN_func_fu_2420_x3_o;
    sc_signal< sc_logic > StgValue_231_my_NN_NN_func_fu_2420_x3_o_ap_vld;
    sc_signal< sc_lv<3> > StgValue_231_my_NN_NN_func_fu_2420_my_NN_n_V_o;
    sc_signal< sc_logic > StgValue_231_my_NN_NN_func_fu_2420_my_NN_n_V_o_ap_vld;
    sc_signal< sc_lv<18> > StgValue_237_my_NN_out_func_fu_2870_Y0;
    sc_signal< sc_logic > StgValue_237_my_NN_out_func_fu_2870_Y0_ap_vld;
    sc_signal< sc_lv<18> > StgValue_237_my_NN_out_func_fu_2870_Y1;
    sc_signal< sc_logic > StgValue_237_my_NN_out_func_fu_2870_Y1_ap_vld;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<18> > x0;
    sc_signal< sc_lv<18> > x1;
    sc_signal< sc_lv<18> > x2;
    sc_signal< sc_lv<18> > x3;
    sc_signal< sc_lv<3> > my_NN_n_V;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    static const sc_logic ap_const_logic_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<18> ap_const_lv18_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<18> ap_const_lv18_3EB;
    static const sc_lv<18> ap_const_lv18_764;
    static const sc_lv<18> ap_const_lv18_A29;
    static const sc_lv<18> ap_const_lv18_C2F;
    static const sc_lv<18> ap_const_lv18_D92;
    static const sc_lv<18> ap_const_lv18_E7B;
    static const sc_lv<18> ap_const_lv18_F0F;
    static const sc_lv<18> ap_const_lv18_F6C;
    static const sc_lv<18> ap_const_lv18_FA5;
    static const sc_lv<18> ap_const_lv18_FC9;
    static const sc_lv<18> ap_const_lv18_FDE;
    static const sc_lv<18> ap_const_lv18_FEB;
    static const sc_lv<18> ap_const_lv18_FF3;
    static const sc_lv<18> ap_const_lv18_FF8;
    static const sc_lv<18> ap_const_lv18_FFB;
    static const sc_lv<18> ap_const_lv18_FFD;
    static const sc_lv<18> ap_const_lv18_FFE;
    static const sc_lv<18> ap_const_lv18_FFF;
    static const sc_lv<18> ap_const_lv18_1000;
    static const sc_lv<18> ap_const_lv18_9925;
    static const sc_lv<18> ap_const_lv18_4DA8;
    static const sc_lv<18> ap_const_lv18_800B;
    static const sc_lv<18> ap_const_lv18_16B3;
    static const sc_lv<18> ap_const_lv18_437B;
    static const sc_lv<18> ap_const_lv18_9284;
    static const sc_lv<18> ap_const_lv18_7EC0;
    static const sc_lv<18> ap_const_lv18_9984;
    static const sc_lv<18> ap_const_lv18_68EB;
    static const sc_lv<18> ap_const_lv18_5B6;
    static const sc_lv<18> ap_const_lv18_87DC;
    static const sc_lv<18> ap_const_lv18_9570;
    static const sc_lv<18> ap_const_lv18_6C98;
    static const sc_lv<18> ap_const_lv18_793D;
    static const sc_lv<18> ap_const_lv18_76E6;
    static const sc_lv<18> ap_const_lv18_3EC1;
    static const sc_lv<18> ap_const_lv18_68E0;
    static const sc_lv<18> ap_const_lv18_1B63;
    static const sc_lv<18> ap_const_lv18_70F7;
    static const sc_lv<18> ap_const_lv18_517;
    static const sc_lv<18> ap_const_lv18_2C4E;
    static const sc_lv<18> ap_const_lv18_763;
    static const sc_lv<18> ap_const_lv18_F8A;
    static const sc_lv<18> ap_const_lv18_83C0;
    static const sc_lv<18> ap_const_lv18_6F2C;
    static const sc_lv<18> ap_const_lv18_32BC;
    static const sc_lv<18> ap_const_lv18_9809;
    static const sc_lv<18> ap_const_lv18_582;
    static const sc_lv<18> ap_const_lv18_4632;
    static const sc_lv<18> ap_const_lv18_3D0C;
    static const sc_lv<18> ap_const_lv18_7A7B;
    static const sc_lv<18> ap_const_lv18_7F3B;
    static const sc_lv<18> ap_const_lv18_1DE6;
    static const sc_lv<18> ap_const_lv18_4E5C;
    static const sc_lv<18> ap_const_lv18_474B;
    static const sc_lv<18> ap_const_lv18_6768;
    static const sc_lv<18> ap_const_lv18_717F;
    static const sc_lv<18> ap_const_lv18_78BF;
    static const sc_lv<18> ap_const_lv18_2C29;
    static const sc_lv<18> ap_const_lv18_6CC0;
    static const sc_lv<18> ap_const_lv18_68D0;
    static const sc_lv<18> ap_const_lv18_1A04;
    static const sc_lv<18> ap_const_lv18_130A;
    static const sc_lv<18> ap_const_lv18_4FBC;
    static const sc_lv<18> ap_const_lv18_998F;
    static const sc_lv<18> ap_const_lv18_3676;
    static const sc_lv<18> ap_const_lv18_5DA4;
    static const sc_lv<18> ap_const_lv18_23CF;
    static const sc_lv<18> ap_const_lv18_D09;
    static const sc_lv<18> ap_const_lv18_E7E;
    static const sc_lv<18> ap_const_lv18_208;
    static const sc_lv<18> ap_const_lv18_E9D;
    static const sc_lv<18> ap_const_lv18_A1E;
    static const sc_lv<18> ap_const_lv18_18F;
    static const sc_lv<18> ap_const_lv18_474;
    static const sc_lv<18> ap_const_lv18_8C0;
    static const sc_lv<18> ap_const_lv18_F51;
    static const sc_lv<18> ap_const_lv18_F70;
    static const sc_lv<18> ap_const_lv18_285;
    static const sc_lv<18> ap_const_lv18_F87;
    static const sc_lv<18> ap_const_lv18_3C19;
    static const sc_lv<18> ap_const_lv18_4745;
    static const sc_lv<18> ap_const_lv18_1468;
    static const sc_lv<18> ap_const_lv18_4CBE;
    static const sc_lv<18> ap_const_lv18_287A;
    static const sc_lv<18> ap_const_lv18_2BC6;
    static const sc_lv<18> ap_const_lv18_37ED;
    static const sc_lv<18> ap_const_lv18_B17;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_logic ap_const_logic_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const2();
    void thread_ap_var_for_const3();
    void thread_ap_var_for_const4();
    void thread_ap_var_for_const5();
    void thread_ap_var_for_const6();
    void thread_ap_var_for_const7();
    void thread_ap_var_for_const8();
    void thread_ap_var_for_const9();
    void thread_ap_var_for_const10();
    void thread_ap_var_for_const11();
    void thread_ap_var_for_const12();
    void thread_ap_var_for_const13();
    void thread_ap_var_for_const14();
    void thread_ap_var_for_const15();
    void thread_ap_var_for_const16();
    void thread_ap_var_for_const17();
    void thread_ap_var_for_const18();
    void thread_ap_var_for_const19();
    void thread_ap_var_for_const32();
    void thread_ap_var_for_const33();
    void thread_ap_var_for_const34();
    void thread_ap_var_for_const35();
    void thread_ap_var_for_const36();
    void thread_ap_var_for_const37();
    void thread_ap_var_for_const38();
    void thread_ap_var_for_const39();
    void thread_ap_var_for_const40();
    void thread_ap_var_for_const41();
    void thread_ap_var_for_const42();
    void thread_ap_var_for_const43();
    void thread_ap_var_for_const44();
    void thread_ap_var_for_const45();
    void thread_ap_var_for_const46();
    void thread_ap_var_for_const47();
    void thread_ap_var_for_const48();
    void thread_ap_var_for_const49();
    void thread_ap_var_for_const50();
    void thread_ap_var_for_const51();
    void thread_ap_var_for_const52();
    void thread_ap_var_for_const53();
    void thread_ap_var_for_const54();
    void thread_ap_var_for_const55();
    void thread_ap_var_for_const56();
    void thread_ap_var_for_const57();
    void thread_ap_var_for_const58();
    void thread_ap_var_for_const59();
    void thread_ap_var_for_const60();
    void thread_ap_var_for_const61();
    void thread_ap_var_for_const62();
    void thread_ap_var_for_const63();
    void thread_ap_var_for_const64();
    void thread_ap_var_for_const65();
    void thread_ap_var_for_const66();
    void thread_ap_var_for_const67();
    void thread_ap_var_for_const68();
    void thread_ap_var_for_const69();
    void thread_ap_var_for_const70();
    void thread_ap_var_for_const71();
    void thread_ap_var_for_const72();
    void thread_ap_var_for_const73();
    void thread_ap_var_for_const74();
    void thread_ap_var_for_const75();
    void thread_ap_var_for_const76();
    void thread_ap_var_for_const77();
    void thread_ap_var_for_const78();
    void thread_ap_var_for_const79();
    void thread_ap_var_for_const20();
    void thread_ap_var_for_const21();
    void thread_ap_var_for_const22();
    void thread_ap_var_for_const23();
    void thread_ap_var_for_const24();
    void thread_ap_var_for_const25();
    void thread_ap_var_for_const26();
    void thread_ap_var_for_const27();
    void thread_ap_var_for_const28();
    void thread_ap_var_for_const29();
    void thread_ap_var_for_const30();
    void thread_ap_var_for_const31();
    void thread_ap_var_for_const80();
    void thread_ap_var_for_const81();
    void thread_ap_var_for_const82();
    void thread_ap_var_for_const83();
    void thread_ap_var_for_const84();
    void thread_ap_var_for_const85();
    void thread_ap_var_for_const86();
    void thread_ap_var_for_const87();
    void thread_my_NN_n_V();
    void thread_x0();
    void thread_x1();
    void thread_x2();
    void thread_x3();
    void thread_Y0();
    void thread_Y1();
    void thread_ap_CS_fsm();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_my_NN_ssdm_thread_load_fu_3320_p1();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
