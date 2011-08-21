/*
 * Set.cpp
 *
 *  Created on: 21-Aug-2011
 *      Author: gsiddardha
 */

#include "Set.h"

Set::Set(int set_size, int block_size) {
	this->set_size = set_size;
	this->block_size = block_size;

	for(int i=0; i<set_size; i++) {
		this->block[i] = new Block(block_size);
	}
}

Set::~Set() {
	// TODO Auto-generated destructor stub
}
