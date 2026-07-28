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

Node* Head = NULL;
Node* tail = NULL;
//head deletion
headdelete(){
	Node* temp = Head;
	Head = Head->next;
	delete temp;
	
}
//head insertion
headinsertion(int val){
	Node* newNode = new Node(val);
	newNode->next = Head;
	Head = newNode;
	
}
//inseertion at a location
speinsert(int data,int val){
	Node* newNode = new Node(val);
	Node* temp = Head;
	while(temp != NULL){
		if(temp->data == data){
			newNode->next = temp->next;
			temp->next = newNode;
			
		}
		temp = temp->next;
	}
}
// insertion at the end
void insert(int val){
	Node* newNode = new Node(val);	
	if(Head == NULL){
		Head = newNode;
		tail =  newNode;
 	}
 	else{
 		
		 tail->next = newNode;
		 tail = newNode;
	 }
}

search(int val){
	Node* temp = Head;
	while(temp != NULL){
		if(temp->data == val){
			cout<<" search "<<temp->data;
			break;
		}
		else{
		
		temp = temp->next;
		}
	}

}
specdeletion(int data){
	Node* temp = Head;
	Node* prev = Head;
	
	while(temp != NULL && temp->data != data){
		temp = temp->next;
}
	if(Head == NULL){
		cout <<"Nodes Does not exits\n";
	}
	else if(temp== Head){
		Head = Head->next;
		delete temp;
	}
	while (prev->next != temp){
		prev = prev->next;
	}
		prev->next = temp->next;
		delete temp;

	}


void taildeletion() {
    Node* temp = Head;

    while (temp->next != tail) {
        temp = temp->next;
    }

    // disconnect and delete the tail
    delete tail;
    temp->next = NULL;
    tail = temp;
}

//display
void display(){
	if (Head == NULL){
		cout <<"The List is Empty";
	}

	Node* temp = Head;
	while(temp != NULL){
		cout << temp->data << " -> ";
		temp = temp->next;
		
	}
	cout << "NULL";
}
main(){
	
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	specdeletion(3);
//	headinsertion(23);
//	headinsertion(45);
//	headinsertion(45);
//	headinsertion(23);
//	speinsert(2,88);
//	speinsert(3,88);
//	search(2);
	headdelete();
	taildeletion();
	display();
}
