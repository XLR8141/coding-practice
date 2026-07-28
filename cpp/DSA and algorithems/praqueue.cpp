#include <iostream>
using namespace std;

class queue{
	static const int size = 5;
	int arr[size];
	int front;
	int rear;
	
	public:
		queue(){
			front = -1;
			rear = -1;
			
		}
		
		enqueue(int val){
			if(rear == size - 1){
				cout <<"queue is full";
			}
			if(front == -1){
				front = 0;
			}
				arr[rear++] = val;
		
		}
		
		dequeue(){
			if(front == -1 || front > rear){
				cout << "Queue is empty !";
			}
			arr[front++];
		}	
		display(){
			if(front == -1 || front > rear){
				cout << "Queue is empty "<<endl;
			}
			
			cout << "queue elements ";
			for(int i = front ; i <= rear; i++){
				cout << arr[i] << "  ";
			}	
			
			
		}	
		
};




main(){
	queue q;
	q.enqueue(12);
	q.enqueue(15);
	q.dequeue();
	q.display();
}
