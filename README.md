# Implementation of cache-unaware, cache-aware, and cache-oblivious matrix multiplication algorithms

The project consists of two parts:

* Building a cache simulator
	* Design a cache simulator where user can specify the cache parameters such as cache size, associativity, block size. The cache simulator uses the LRU replacement policy. The simulator need not store the actual data, but it keeps track of data references. It has to give the statistics such as overall accesses, compulsory misses, capacity misses, conflict misses, and hit rate.
* Implementing various matrix multiplication algorithms
	* By assuming the elements of a matrix are stored in row-major order, design and implement cache-unaware, cache-aware, and cache-oblivious matrix multiplication algorithms and report the cache statistics using the above simulator.
