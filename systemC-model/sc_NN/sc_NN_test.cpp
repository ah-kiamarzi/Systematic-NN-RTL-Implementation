#define SC_INCLUDE_FX

#ifdef __RTL_SIMULATION__
#include "NN_rtl_wrapper.h"
#define NN NN_rtl_wrapper
#else
#include "sc_NN.h"
#endif
#include"mon.h"
#include"stim.h"


int sc_main(int argc, char* argv[]){
	sc_report_handler::set_actions("/IEEE_Std_1666/deprecated", SC_DO_NOTHING);
	sc_report_handler::set_actions( SC_ID_LOGIC_X_TO_BOOL_, SC_LOG);
	sc_report_handler::set_actions( SC_ID_VECTOR_CONTAINS_LOGIC_VALUE_, SC_LOG);
	sc_report_handler::set_actions( SC_ID_OBJECT_EXISTS_, SC_LOG);

	sc_signal<sc_fixed<18,6> > U0;
	sc_signal<sc_fixed<18,6> > U1;
	sc_signal<sc_fixed<18,6> > U2;
	sc_signal<sc_fixed<18,6> > Y0;
	sc_signal<sc_fixed<18,6> > Y1;

	sc_signal<bool> RESET;
	sc_signal<bool>	DONE;

	sc_clock CLK("s_clk",10,SC_NS,0.5);


	stim Stim1("Stimulus");
	Stim1.U0(U0);
	Stim1.U1(U1);
	Stim1.U2(U2);
	Stim1.CLK(CLK);
	Stim1.RESET(RESET);
	Stim1.DONE(DONE);


	my_NN inst_NN("NN");
	inst_NN.U0(U0);
	inst_NN.U1(U1);
	inst_NN.U2(U2);
	inst_NN.CLK(CLK);
	inst_NN.RESET(RESET);
	inst_NN.Y0(Y0);
	inst_NN.Y1(Y1);


	mon Monitor1("Monitor");
	Monitor1.U0(U0);
	Monitor1.U1(U1);
	Monitor1.U2(U2);
	Monitor1.Y0(Y0);
	Monitor1.Y1(Y1);
	Monitor1.CLK(CLK);
	Monitor1.RESET(RESET);
	Monitor1.DONE(DONE);


	cout << "INFO: Simulating " << endl;

	sc_start();  // run forever


	if (Monitor1.RETVAL == 0) {
		cout << "Test passed  !!!" <<endl;
	} else {
		cout << "Test failed  !!!" <<endl;
	}

	return Monitor1.RETVAL;

}
