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
taildeletion(){
	if(tail == head){
		delete tail;
		cout << "The list is empty ";
	}
	else{
		Node* temp = tail;
		tail = tail->prev;
		tail->next = NULL;
		delete temp;
	}
}

searching(int val){
	Node* temp = head;
	while(temp != NULL){
		if(temp->data == val){
			cout <<": SE :" << temp->data;
			break;
	}
		else{
			temp = temp->next;
		}
	}	
}

spedelete(int val){
	
		Node* temp = head;
		while(temp != NULL){
		if(temp->data == val){
			temp->prev = temp->next;
			temp->next->prev = temp->prev;
			delete temp;
		
	}
		else{
			temp = temp->next;
			
		}
	}
	
	
	
}


//head insertion
void headinsert(int val){
	Node* newNode = new Node(val);
	if (head == NULL){
		head = newNode;
		tail = newNode;
	}
	else{
		 head->prev = newNode;
		 newNode->next = head;
		 head = newNode;
	}
}

void headdelete(){
	if (head == NULL){
		cout << " The list is empty ";
	}
	
	Node* temp = head;
	head = head->next;
	delete temp;
		
}
//tail insertion 
void insert(int val){	
	Node* newNode = new Node(val);
	if (head == NULL){
		head = newNode;
		tail = newNode;
	}
	else{
		tail->next = newNode;
		newNode->prev = tail;
		tail = newNode;	
	}
}

void display(){
	Node* temp = head;
	while (temp != NULL){
		cout << temp->data <<" <--> ";
		temp = temp->next;
	}
}

main(){
	
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	headinsert(45);
	searching(4);
	spedelete(2);
	headdelete();
	taildeletion();

	display();
}
