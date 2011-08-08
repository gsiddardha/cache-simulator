#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include "access.h"
#include "cache.h"
#include "memory.h"

using namespace std;

// Global variable declaration
Access* accessor;

// Global prototype decalaration
int M(int, int);

int main(int argc, char** argv) {
	if(argc!=5) {
		printf("Usage: %s <cache_size_inKB> <block_size_inB> <associativity> <input_file>\n", argv[0]);
		return 1;
	}

	// Declaring variables
	int i, j, buf;
	int matrix_n;
	ifstream inFile;
	
	// Opening files
	inFile.open(argv[4]);
	
	// Checking for situation of files
	if(!inFile.is_open()) {
		cout << "Error while opening the input file" << endl;
		return 1;
	}

	// Reading Matrix Length
	inFile >> matrix_n;

	// Initalize accessor
	accessor = new Access(matrix_n);

	// Reading matrix
	for(i=0; i<matrix_n; i++) {
		for(j=0; j<matrix_n; j++) {
			inFile >> buf;
			accessor->write(i, j, buf);
		}
	}

	// Closing files
	inFile.close();

	return 0;
}

int M(int x, int y) {
	return accessor->get(x, y);
}
