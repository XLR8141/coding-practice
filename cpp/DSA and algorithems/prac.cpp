#include <iostream>
using namespace std;

struct Node {
    string item;
    Node* next;
    Node* prev;

    Node(string val) {
        item = val;
        next = NULL;
        prev = NULL;
    }
};

struct list{
	Node* head;
	Node* tail;
	list(){
		head = NULL;
		tail = NULL;
	}
	
	additem(string val){
		if(head == NULL){
			Node* newNode = new Node(val)
			head = newNode;
			tail = newNode;
			else{
				tail->next = newNode;
				newNod->next = NULL;
				newNode->prev = tail;
				tail = newNode;
			}				
		}
	}
	
	print(){
		Node* temp = head;
		while(temp != NULL){
			temp = temp->next;
			cout<< temp->data;
		}
	}
};


struct orderpackage{
	string customer;
 	string address;
	unsigned long longdistance;
	list* items;
}

void sortin(orderpackage p[],size){
	for(int i=0 ;i< size-1;i++){
		
		
	}
}




























