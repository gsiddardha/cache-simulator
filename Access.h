#ifndef ACCESS_H
#define ACCESS_H

#include "Memory.h"
#include "Cache.h"

class Access {
public:
	Access(int matrix_n, int cache_size, int block_size, int assoc, int memory_size);

	void write(int value);
	void set(int x, int y, int value);
	int get(int x, int y);

	~Access(void);

private:
	int matrix_n;
	Memory* memory;
	Cache* cache;

	int bits_n;	// Number of bits in the address

};

#endif
