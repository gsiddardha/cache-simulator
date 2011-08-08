#include <stdio.h>
#include <stdlib.h>
#include "access.h"
#include "cache.h"
#include "memory.h"

int main(int argc, char** argv) {

	if(argc!=5) {
		printf("Usage: %s <cache_size_inKB> <line_length_inB> <associativity> <input_file>\n", argv[0]);
		return 1;
	}

	return 0;
}
