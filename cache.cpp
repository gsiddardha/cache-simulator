#include <iostream>
#include <cstdlib>

using namespace std;

char* cache = NULL;

void init_cache(int size, int length, int assoc) {
	int blocks = size*1024/length;
}
