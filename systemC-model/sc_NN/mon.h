#define SC_INCLUDE_FX

#include "systemc.h"
#include "iomanip"

using namespace std;

SC_MODULE(mon)
{
    sc_in<sc_fixed<18,6> > U0;
    sc_in<sc_fixed<18,6> > U1;
    sc_in<sc_fixed<18,6> > U2;
    sc_in<sc_fixed<18,6> > Y0;
    sc_in<sc_fixed<18,6> > Y1;
    sc_in<bool> CLK;
    sc_in<bool> DONE;
    sc_in<bool> RESET;
    bool RETVAL;

  void monitor_console()
  {
    cout << setw(20) << "Time";
    cout << setw(20) << "U0" ;
    cout << setw(20) << "U1" ;
    cout << setw(20) << "U2" ;
    cout << setw(20) << "Y0" << endl;
    cout << setw(20) << "Y1" << endl;
    while(!RESET){
    	cout << "-----RESET-----" << endl;
    	wait();
    }
    while (!DONE){
		cout << setw(20) << sc_time_stamp();
		cout << setw(20) << U0.read();
		cout << setw(20) << U1.read();
		cout << setw(20) << U2.read();
		cout << setw(20) << Y0.read();
		cout << setw(20) << Y1.read() << endl;
		wait();    // wait for 1 clock cycle
    }
  }
  void monitor_file()
  {
	RETVAL = 0;
	while(!RESET){
		wait();
	}
	cout << "File Open  : "<< sc_time_stamp()<<endl;
	ofstream result;
	result.open("result.dat");
	while (!DONE)
    {
		  result << U0 <<" => " << Y0 <<"-"<< Y1 << endl;
		  wait();
	}
	cout << "File Wr  : "<< sc_time_stamp()<<endl;
	result.close();
	RETVAL = system("diff --brief -w result.dat result.golden.dat");
	if (RETVAL != 0) {
		RETVAL=1;
	}
	wait();
  }
  SC_CTOR(mon)
  {
    SC_CTHREAD(monitor_console,CLK.pos());
    SC_CTHREAD(monitor_file,CLK.pos());
    RETVAL = 0;
  }
};
