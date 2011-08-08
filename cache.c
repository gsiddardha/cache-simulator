#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

char* cache = NULL;

void init_cache(int size, int length, int assoc) {
	int blocks = size*1024/length;
}
