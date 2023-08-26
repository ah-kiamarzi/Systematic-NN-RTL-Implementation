#define SC_INCLUDE_FX

#include "sc_NN.h"

void my_NN::NN_func(){

	sc_fixed<18,6> u0_read = U0.read();
	sc_fixed<18,6> u1_read = U1.read();
	sc_fixed<18,6> u2_read = U2.read();
	sc_fixed<18,6> x0_read = x0.read();
	sc_fixed<18,6> x1_read = x1.read();
	sc_fixed<18,6> x2_read = x2.read();
	sc_fixed<18,6> x3_read = x3.read();

	sc_fixed<18,6> t0;
	sc_fixed<18,6> t1;
	sc_fixed<18,6> t2;
	sc_fixed<18,6> t3;

	sc_fixed<18,6> t0_0;
	sc_fixed<18,6> t0_1;

	if(!RESET.read()){
		n = 0;
	}else{
		t0 = w[n*16+0 ]*x0_read + w[n*16+4 ]*x1_read
		   + w[n*16+8 ]*x2_read + w[n*16+12]*x3_read;
		t1 = w[n*16+1 ]*x0_read + w[n*16+5 ]*x1_read
		   + w[n*16+9 ]*x2_read + w[n*16+13]*x3_read;
		t2 = w[n*16+2 ]*x0_read + w[n*16+6 ]*x1_read
		   + w[n*16+10]*x2_read + w[n*16+14]*x3_read;
		t3 = w[n*16+3 ]*x0_read + w[n*16+7 ]*x1_read
		   + w[n*16+11]*x2_read + w[n*16+15]*x3_read;


		if(n == 0){
			x0.write(b[0]*u0_read + b[4]*u1_read + b[8 ]*u2_read);
			x1.write(b[1]*u0_read + b[5]*u1_read + b[9 ]*u2_read);
			x2.write(b[2]*u0_read + b[6]*u1_read + b[10]*u2_read);
			x3.write(b[3]*u0_read + b[7]*u1_read + b[11]*u2_read);
		}else{
			x0.write(tanh[t0.range(17,11).to_uint()] + b[0]*u0_read + b[4]*u1_read + b[8 ]*u2_read);
			x1.write(tanh[t1.range(17,11).to_uint()] + b[1]*u0_read + b[5]*u1_read + b[9 ]*u2_read);
			x2.write(tanh[t2.range(17,11).to_uint()] + b[2]*u0_read + b[6]*u1_read + b[10]*u2_read);
			x3.write(tanh[t3.range(17,11).to_uint()] + b[3]*u0_read + b[7]*u1_read + b[11]*u2_read);
		}



		if(n == 3){
			n = 0;
		}else{
			n = n + 1;
		}
	}

//#ifndef __SYNTHESIS__
//	std::cout << "n = " << n << std::endl;
//	std::cout << "U0 = " << U0 << std::endl;
//	std::cout << "U1 = " << U1 << std::endl;
//	std::cout << "U2 = " << U2 << std::endl;
//	std::cout << "t0 = " << t0 << std::endl;
//	std::cout << "t1 = " << t1 << std::endl;
//	std::cout << "t2 = " << t2 << std::endl;
//	std::cout << "t3 = " << t3 << std::endl;
//	std::cout << "x0 = " << x0 << std::endl;
//	std::cout << "x1 = " << x1 << std::endl;
//	std::cout << "x2 = " << x2 << std::endl;
//	std::cout << "x3 = " << x3 << std::endl;
//	std::cout << "y0  = " << Y0<< std::endl;
//	std::cout << "y1  = " << Y1    << std::endl;
//	std::cout << "***************************************************" << std::endl;
//#endif

}
void my_NN::out_func(){
	Y0.write(c[0]*x0.read() + c[2]*x1.read() + c[4]*x2.read() + c[6]*x3.read());
	Y1.write(c[1]*x0.read() + c[3]*x1.read() + c[5]*x2.read() + c[7]*x3.read());
}
