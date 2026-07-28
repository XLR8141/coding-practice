#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
	Node(int val){
		data = val;
		next = NULL;
	}
};
Node* front = NULL;
Node* rear = NULL;

queue(int val){
	Node* newNode = new Node(val);
	if (front == NULL){
		front = newNode;
		rear = newNode;
	}
	else{
		rear->next = newNode;
		rear = newNode;
	}
	
}

dequeue(){
	if(front == NULL){
		cout <<"Not possible";
	}
	else{
		Node* temp = front;
		front = front->next;
		delete temp;
	}
}
display(){
	Node* temp = front;
	while(temp != NULL){
		cout<<temp->data<<endl;
		temp = temp->next;
	}
	cout << "NULL";
}


main(){
	queue(10);
	queue(20);
	queue(30);
	queue(40);
	queue(50);
	dequeue();
	
	display();
}
