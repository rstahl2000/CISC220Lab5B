/*
 * SLL.cpp
 *
 *  Created on: Oct 2, 2019
 *      Author: robertstahl
 */

#include "SLL.hpp"
#include <iostream>

SLL::SLL(){
	first=NULL;
	last=NULL;
	size=0;
	score=0;
}

SLL::~SLL(){
	cout<<"deleted each node in 11"<<endl;
}

void SLL::printList(){
	cout<<"\n";
	SNode *temp=first;
	while(temp!=last){
		temp->printNode();
		temp=temp->next;
	}
	temp->printNode();
}

void SLL::addAtFront(string c){
	SNode *n=new SNode(c);
	n->next=first;
	first=n;
	size++;
}

void SLL::push(string c){
	SNode *n=new SNode(c);
	last->next=n;
	last=n;
	size++;
}

void SLL::addFirst(string c){
	SNode *n=new SNode(c);
	first=n;
	last=n;
	size++;
}

