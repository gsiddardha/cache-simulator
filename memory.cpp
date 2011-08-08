#include <iostream>
#include <cstdlib>
#include "memory.h"

using namespace std;

Memory::Memory(int n) {
	this->n = n;
	this->memory = new int[n*n];
}

void Memory::set(int x, int y, int value) {
	this->memory[x*n+y] = value;
}

int Memory::get(int x, int y) {
	return this->memory[x*n+y];
}

Memory::~Memory(void) {
	delete this->memory;
}
