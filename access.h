#ifndef ACCESS_H
#define ACCESS_H

#include "memory.h"
#include "cache.h"

class Access {
	public:
		Access(int memory_size);

		void write(int value);
		void set(int addr, int value);
		int get(int addr);

		~Access(void);

	private:
		int matrix_n;
		Memory* memory;
};

#endif
