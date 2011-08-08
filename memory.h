#ifndef MEMORY_H
#define MEMORY_H

class Memory {
	public:
		Memory(int n);

		void set(int x, int y, int value);
		int get(int x, int y);

		~Memory(void);

	private:
		int* memory;
		int n;
};

#endif
