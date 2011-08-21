#ifndef SET_H_
#define SET_H_

class Set {
public:
	Set();
	~Set();

private:
	int set_size;
	int block_size;

	Block** blocks;
};

#endif /* SET_H_ */
