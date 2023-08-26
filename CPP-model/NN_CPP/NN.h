#ifndef _NN_H_
#define _NN_H_

#include <stdlib.h>
#include "ap_int.h"


#define N 100

typedef ap_fixed<18,6> din_t;
typedef ap_fixed<18,6> cof_t;
typedef ap_fixed<18,6> dout_t;
typedef ap_uint<2> counter;


void NN(din_t U0,din_t U1,din_t U2,dout_t *Y0,dout_t *Y1);

void read_w(counter n,
		    din_t *w0,din_t *w1,din_t *w2,din_t *w3,
			din_t *w4,din_t *w5,din_t *w6,din_t *w7,
			din_t *w8,din_t *w9,din_t *w10,din_t *w11,
			din_t *w12,din_t *w13,din_t *w14,din_t *w15);


#endif
