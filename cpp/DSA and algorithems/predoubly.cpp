#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
	Node* prev;
	Node(int val){
		data = val;
		next = NULL;
		prev = NULL;
	}
};
Node* head = NULL;
Node* tail = NULL;


//deletion
specdeletion(int val){
	Node* temp = head;
	while(temp != NULL){
		if(temp->data == val){
			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;
			delete temp;
			break;
			
		}
		else{
			temp = temp->next;
		}
	}
}

// head insertion
hinsert(int val){
	Node* newNode = new Node(val);
	if(head == NULL){
		head = newNode;
		tail = newNode;
	}
	else{
		newNode->next = head;
		head->prev = newNode;
		head = newNode;
	}				
}


//SEARCH
search(int val){
	Node* temp = head;
	while(temp != NULL){
		
		if(head->data == val){
			cout << head->data;
		}
		else if(temp->data == val){
			cout << temp->data;
			break;
		}
		else{
			temp = temp->next;
		}
	}
}

// tail insertion
insert(int val){
	Node* newNode = new Node(val);
	if(head == NULL){
		head = newNode;
		tail = newNode;
		
	}
	else{
		newNode->prev = tail;
		tail->next = newNode;
		tail = newNode;
	}
}

display(){
	Node* temp = head;
	while(temp != NULL){
		if(head == NULL){
			cout <<"the list is empty";
		
		}
		else{
			cout << temp->data << " <--> ";
			temp = temp->next ;
		}
		
	}	
}
main(){
	hinsert(213);
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	search(4);
	specdeletion(3);
	display();

	
}
