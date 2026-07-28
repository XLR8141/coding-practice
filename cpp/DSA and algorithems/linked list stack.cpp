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
Node* top = NULL;

push(int val){
	Node* newNode = new Node(val);
	newNode->next = top;
	top = newNode;
}

pop(){
	if(top == NULL){
		cout << "Stack Empty";
	}
	else{
		Node* temp = top;
		top = top->next;
		delete temp;
		
	}

}
display(){
  Node* temp = top;
  while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

main(){
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	pop();
	display();
}
