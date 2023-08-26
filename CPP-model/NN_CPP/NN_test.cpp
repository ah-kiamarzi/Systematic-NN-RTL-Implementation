#include "NN.h"
#include <fstream>
#include <iostream>
using namespace std;

int main(){
	din_t U0 =0.149294005559057;
	din_t U1 =0.257508254123736;
	din_t U2 =0.840717255983663;

	dout_t Y0;
	dout_t Y1;

	int i,retval = 0;

	ofstream result;
	result.open("result.dat");
	for (i=0;i<N;i++) {
		if(i != 0){
			U0 = 0;
			U1 = 0;
			U2 = 0;
		}
		NN(U0,U1,U2,&Y0,&Y1);

		result << U0 << " => " << Y0 << "-" << Y1 <<endl;
		result << U0 << " => " << Y0 << "-" << Y1 <<endl;
	}

	result.close();
	//input_f.close();

//	retval = system("diff --brief -w result.dat result.golden.dat");
//	if (retval != 0) {
//	printf("Test failed !!!\n");
//	retval=1;
//	} else {
//	printf("Test passed !\n");
//	}

	return retval;
}
