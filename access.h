#ifndef ACCESS_H
#define ACCESS_H

#include "memory.h"
#include "cache.h"

class Access {
	public:
		Access(int matrix_n);

		void write(int x, int y, int value);
		int get(int x, int y);

		~Access(void);

	private:
		Memory* memory;
};

#endif
