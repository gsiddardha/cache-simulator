#include <iostream>
#include <cstdlib>
#include "memory.h"

using namespace std;

Memory::Memory(int size) {
	this->size = size;
	this->memory = new int(this->size);
	return;
}

Memory::~Memory(void) {
	delete this->memory;
}
