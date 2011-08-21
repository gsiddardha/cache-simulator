#include <iostream>
#include <cstdlib>
#include "access.h"

using namespace std;

Access::Access(int memory_size) {
	this->memory = new Memory(memory_size);
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
