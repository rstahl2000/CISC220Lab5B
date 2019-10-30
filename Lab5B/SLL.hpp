/*
 * SLL.hpp
 *
 *  Created on: Oct 2, 2019
 *      Author: robertstahl
 */

#ifndef LL_HPP_
#define LL_HPP_

#include "SNode.hpp"
#include <stdlib.h>
#include <iostream>
using namespace std;

class SLL {
public:
	SNode *first;
	SNode *last;
	int size;
	int score;
	SLL();
	~SLL();
	void printList();
	void push(string c);
	// (4 pts for working)
	// pushes a new node (with rating r and c comments) onto the end of the linked
	// list
	// (remember to reset the last pointer) – I called this from the
	// insertInOrder() method.
	void addAtFront(string c);
	// (5 pts for working)
	// adds a new node (made from r and c) to the beginning of the
	// list (remember to reset the first pointer) – I called this from
	// insertInOrder
	void addFirst(string c);
	//(3 pts for working)
	//adds the very first node (made from r and c) to an empty list
	// I called this from insertInOrder

};

#endif /* LL_HPP_ */
