#define SC_INCLUDE_FX

#include "systemc.h"

#define N 100

SC_MODULE(stim)
{
  sc_out<sc_fixed<18,6> > U0;
  sc_out<sc_fixed<18,6> > U1;
  sc_out<sc_fixed<18,6> > U2;
  sc_out<bool> RESET;
  sc_out<bool> DONE;
  sc_in<bool> CLK;

  int i;
  void StimGen()
  {

	RESET.write(false);
	wait(8);
	RESET.write(true);
	for (i = 0; i < N; i=i+1) {
		if(i == 0){
			U0 = 0.149294005559057;
			U1 = 0.257508254123736;
			U2 = 0.840717255983663;
		}else{
			U0 = 0;
			U1 = 0;
			U2 = 0;
		}

		wait();
	}
	DONE = 1;
    sc_stop();
  }
  SC_CTOR(stim)
  {
    SC_CTHREAD(StimGen,CLK.pos());
    i = 0;
  }
};
