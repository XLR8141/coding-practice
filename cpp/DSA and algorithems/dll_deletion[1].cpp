include<iostream>
using namespace std;

struct Node{
	int key;
	int data;
	Node* next;
	Node* prev;
	
	Node(int val){
		data = val;
		next = NULL;
		prev = NULL;
		cout<<"Node Creaded!\n";
	}
	
	~Node(){
		cout<<data<<" is destroyed!\n";
	}
	
};

	Node* head = NULL;
	Node* tail = NULL;
	
	void insert(int val){
		Node* newNode = new Node(val);
//		newNode->data = val;
//		newNode->next=NULL;
		
		if(head == NULL){
			head = newNode;
			tail = newNode;
		}
		else{
			tail->next=newNode;
			newNode->prev = tail;
			tail = newNode;
		}
	}
	
//	void insertAtStart(int val){
//		Node* newNode = new Node(val);
////		newNode->data = val;
////		newNode->next = NULL;
//		
//		if(head == NULL){
//			head = newNode;
//			tail = newNode;
//		}
//		else{
//			newNode->next = head;
//			head = newNode;
//		}
//	}
void deleteFirstNode(){
	if(head == NULL){
		cout<<"List is empty!\n";
		return;
	}
	if(head==tail){
		delete head;
		head = tail = NULL;
		return;
	}
	Node* temp = head;
	head = head->next;
	head->prev = NULL;
	delete temp;
}	

//void deleteAtEnd(){
//	if(head == NULL){
//		cout<<"List is empty!\n";
//		return;
//	}
//	if(head==tail){
//		delete head;
//		head = tail = NULL;
//		return;
//	}
//	Node* temp = head;
//	while(temp->next != tail){
//		temp = temp->next;
//	}
//	delete tail;
//	tail = temp;
//	tail->next = NULL;
//}

void deleteNode(int val){
	if(head == NULL){
		cout<<"List is empty\n";
	}
	if(val == head->data){
		deleteFirstNode();
		return;
	}
	
	Node* cur = head->next;
	while(cur != NULL){
		
		
		if(cur->data == val){
			cur->prev->next = cur->next;
			
			if(cur->next != NULL){
				cur->next->prev = cur->prev;
			}else{
				tail = tail->prev;
			}
			delete cur;
			return;
		}
		

		cur = cur->next;
	}
	
}

	void display(){
		Node* temp = head;
		while(temp != NULL){
			cout<<temp->data<<" -> ";
			temp=temp->next;
		}
		cout<<"NULL";
	}
	
	
	main(){
	insert(1);	
	insert(2);	
	insert(3);
	
	deleteNode(2);
	display();
	
		return 0;
	}
