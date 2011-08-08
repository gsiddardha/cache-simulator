#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include "access.h"
#include "cache.h"
#include "memory.h"

using namespace std;

int main(int argc, char** argv) {
	if(argc!=5) {
		printf("Usage: %s <cache_size_inKB> <block_size_inB> <associativity> <input_file>\n", argv[0]);
		return 1;
	}

	// Declaring variables
	int n;
	Memory* mem;
	ifstream inFile;
	
	// Opening files
	inFile.open(argv[4]);
	
	// Checking for situation of files
	if(!inFile.is_open()) {
		cout << "Error while opening the input file" << endl;
		return 1;
	}

	// Reading Matrix
	inFile >> n;

	// Initalize memory
	mem = new Memory(n);

	// Closing files
	inFile.close();

	return 0;
}
