
/** \file simple_math.c
	\brief definition of the functions 
<<<<<<< HEAD
	\author Diego Esteban Campos
=======
	\author Diego Esteban Campos 
>>>>>>> complex_number
  
*/
#include "simple_math.h"

cx_float_t cx_mean (cx_int_t a,cx_int_t b) {
	
	cx_float_t average;
	
	average.re = mean(a.re, b.re) / 2.0;
	average.imm = mean(a.imm, b.imm) / 2.0;
	
	return average;
	
}


float mean(int a, int b) {
	return (a+b)/2.0;
}

int max (int a, int b) {
	
	if (a > b) 
		return a; 
	return b;
<<<<<<< HEAD
}
=======
}




>>>>>>> complex_number
