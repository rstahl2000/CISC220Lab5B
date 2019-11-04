
#include "LL.hpp"
#include <iostream>

LL::LL(){
	first=NULL;
	last=NULL;
	size=0;
	score=0;
}

void LL::printList(){
	cout<<"\n";
	NodeL *temp=first;
	while(temp!=last){
		temp->printNode();
		temp=temp->next;
	}
	temp->printNode();
}


void LL::push(string c){
	NodeL *n=new NodeL(c);
	last->next=n;
	last=n;
	size++;
}

void LL::addFirst(string c){
	NodeL *n=new NodeL(c);
	first=n;
	last=n;
	size++;
}

