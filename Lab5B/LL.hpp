/*
 * SLL.hpp
 *
 *  Created on: Oct 2, 2019
 *      Author: robertstahl
 */

#ifndef LL_HPP_
#define LL_HPP_

#include "NodeL.hpp"
#include <stdlib.h>
#include <iostream>
using namespace std;

class LL {
public:
	NodeL *first;
	NodeL *last;
	int size;
	int score;
	LL();
	void printList();
	void push(string);
	void addFirst(string);
	void getScore();

};

#endif /* LL_HPP_ */
