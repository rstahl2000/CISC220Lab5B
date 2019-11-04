
#include "NodeL.hpp"
#include <iostream>

NodeL::NodeL(){
	cout<<"Enter Word:"<<endl;
	cin>>word;
	next=NULL;
}

NodeL::NodeL(string c){
	word=c;
	next=NULL;
}

NodeL::~NodeL(){
	cout<<"deleting "<<word<<endl;
}

void NodeL::printNode(){
	cout<<"Comments: "<<word<<endl;
}
