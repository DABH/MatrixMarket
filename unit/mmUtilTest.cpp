#include <mm2nist.h>


int main(){
	CompCol_Mat_double A;
	const char * fn = "realA.mtx";

	loadMM2nist(fn, A);
	return 0;
}
