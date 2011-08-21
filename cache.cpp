#include <iostream>
#include <cstdlib>
#include "cache.h"

using namespace std;

Cache::Cache(int cache_size, int block_size, int set_size) {
	this->hits = 0;
	this->misses = 0;

	// Cache size is given in KB
	this->cache_size = cache_size*1024;

	// Block size is given in B
	this->block_size = block_size;
	this->set_size = set_size;

	this->set_n = this->cache_size / (this->set_size * this->block_size);
	//TODO: Introduce blocks later
}

int Cache::get_hits(void) {
	return this->hits;
}

int Cache::get_misses(void) {
	return this->misses;
}

Cache::~Cache(void) {
	delete this->memory;
}
