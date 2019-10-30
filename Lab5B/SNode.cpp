/*
 * SNode.cpp
 *
 *  Created on: Oct 2, 2019
 *      Author: robertstahl
 */

#include "Snode.hpp"
#include <iostream>

SNode::SNode(){
	cout<<"Enter Word:"<<endl;
	cin>>word;
	next=NULL;
}

SNode::SNode(string c){
	word=c;
	next=NULL;
}

SNode::~SNode(){
	cout<<"deleting "<<word<<endl;
}

void SNode::printNode(){
	cout<<"Comments: "<<word<<endl;
}
