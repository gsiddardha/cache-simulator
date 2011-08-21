#include <iostream>
#include <cstdlib>
#include <fstream>
#include "Access.h"
#include "Cache.h"
#include "Memory.h"

using namespace std;

// Global variable declaration
Access* accessor;

// Global prototype declaration
int M(int, int);

int main(int argc, char** argv) {
	if(argc!=5) {
		cout << "Usage: " << argv[0] << "<cache_size_inKB> <block_size_inB> <associativity> <memory_size_inKB>\n";
		return 1;
	}

	// Declaring variables
	int i, j, buf;
	int matrix_n;
	ifstream inFile;
	
	// Opening files
	inFile.open("INPUT");
	
	// Checking for situation of files
	if(!inFile.is_open()) {
		cout << "Error while opening the input file" << endl;
		return 1;
	}

	// Reading Matrix Length
	inFile >> matrix_n;

	// Initialise accessor
	accessor = new Access(matrix_n, atoi(argv[1]), atoi(argv[2]), atoi(argv[3]), atoi(argv[4]));

	// Reading matrix
	for(i=0; i<matrix_n; i++) {
		for(j=0; j<matrix_n; j++) {
			inFile >> buf;
			accessor->write(buf);
		}
	}

	// TODO: Implement Matrix multiplication algorithms

	// Closing files
	inFile.close();

	return 0;
}

int M(int x, int y) {
	return accessor->get(x, y);
}
