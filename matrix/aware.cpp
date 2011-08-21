#include <iostream>
#include <cstdlib>
#include "../access.h"

using namespace std;

// External variables & functions
extern int matrix_n, matrix_m, matrix_p;
extern int A(int, int);
extern int B(int, int);

void cache_aware(void) {
	int i, j, k;

	int** C = new int*[matrix_n];
	for(i=0; i<matrix_n; i++) {
		C[i] = new int[matrix_p];
	}
}
