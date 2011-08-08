#ifndef CACHE_H
#define CACHE_H

class Cache {
	public:
		Cache(int cache_size, int block_size, int assoc);

		int get_hits(void);
		int get_misses(void);

		~Cache(void);

	private:
		int* memory;

		int cache_size;
		int block_size;
		int assoc;

		int hits;
		int misses;
};

#endif
