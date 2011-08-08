#ifndef ACCESS_H
#define ACCESS_H

#include "memory.h"
#include "cache.h"

class Access {
	public:
		Access(int matrix_n, int memory_size);

		void write(int value);
		void set(int x, int y, int value);
		int get(int x, int y);

		~Access(void);

	private:
		int matrix_n;
		Memory* memory;
};

#endif
