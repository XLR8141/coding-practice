#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
	Node(int val){
		data = val;
		next = NULL;		
	}
};
Node* head= NULL;
Node* tail = NULL;

//head insertion
void hinsert(int val){
	Node* newNode = new Node(val);
	if(head == NULL){
		 head = newNode;
		 tail = newNode;		 
	}
	else{
		newNode->next = head;
		head = newNode;
	}
}


//search
search(int val){
	Node*temp = head;
	while(temp != NULL){
		if(temp->data == val){
			cout << "the searched value is " << temp->data;
		break;
		}
		else{
			temp = temp->next;
		}

	}
}


// tail inseertion
void insert(int val){
	Node* newNode = new Node(val);
	if(head == NULL){
		head = newNode;
		tail = newNode;
	}
	else{
		tail->next = newNode;
		tail = newNode;
	}
}

// display function
void display(){
	Node* temp = head;
	if(head == NULL){
		cout << "the List is empty ";
	}
	else{
		while(temp != NULL){
			cout << temp->data <<" -> ";
			temp = temp->next;
 		}
 		cout<<"NULL";
	}

}

main(){
	hinsert(6);
	hinsert(12);
	hinsert(13);
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	display();
	search(5);
}
