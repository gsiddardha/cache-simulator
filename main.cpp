#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "access.h"
#include "cache.h"
#include "memory.h"

using namespace std;

int main(int argc, char** argv) {
	if(argc!=5) {
		printf("Usage: %s <cache_size_inKB> <block_size_inB> <associativity> <input_file>\n", argv[0]);
		return 1;
	}
	return 0;
}
