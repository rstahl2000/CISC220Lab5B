/*
 * SNode.hpp
 *
 *  Created on: Oct 2, 2019
 *      Author: robertstahl
 */

#ifndef SNODE_HPP_
#define SNODE_HPP_
#include <iostream>
using namespace std;

class SNode {
	friend class SLL;
public:
	string word;
	SNode *next;
	SNode();
	SNode(string c);
	~SNode();
	void printNode();
};



#endif /* SNODE_HPP_ */
