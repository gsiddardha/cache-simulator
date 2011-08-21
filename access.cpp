#include <iostream>
#include <cstdlib>
#include "access.h"

using namespace std;

Access::Access(int cache_size, int block_size, int set_size, int memory_size) {
	this->memory = new Memory(memory_size);
	this->cache = new Cache(cache_size, block_size, set_size);
}

void Access::write(int value) {
	this->memory->write(value);
}

void Access::set(int addr, int value) {
	this->memory->store(addr, value);
}

int Access::get(int addr) {
	return this->memory->read(addr);
}

Access::~Access(void) {
	delete this->memory;
}
