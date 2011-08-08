#include <iostream>
#include <cstdlib>
#include "access.h"

using namespace std;

Access::Access(int matrix_n) {
	this->memory = new Memory(matrix_n);
}

void Access::write(int x, int y, int value) {
	this->memory->set(x, y, value);
}

int Access::get(int x, int y) {
	return this->memory->get(x, y);
}

Access::~Access(void) {
	delete this->memory;
}
