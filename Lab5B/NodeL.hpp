/*
 * SNode.hpp
 *
 *  Created on: Oct 2, 2019
 *      Author: robertstahl
 */

#ifndef NODEL_HPP_
#define NODEL_HPP_
#include <iostream>
using namespace std;

class NodeL {
	friend class LL;
public:
	string word;
	NodeL *next;
	NodeL();
	NodeL(string c);
	~NodeL();
	void printNode();
};



#endif /* NODEL_HPP_ */
