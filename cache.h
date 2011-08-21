#ifndef CACHE_H
#define CACHE_H

class Cache {
	public:
		Cache(int cache_size, int block_size, int set_size);

		int get_hits(void);
		int get_misses(void);

		~Cache(void);

	private:
		int cache_size;
		int block_size;
		int set_size;
		int set_n;

		int hits;
		int misses;

		Set** memory;
};

#endif
