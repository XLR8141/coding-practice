#include<iostream>
using namespace std;

class Queue{
	static const int size = 5;
	int front;
	int rare;
	int arr[size];
	public:
		
		Queue()
		{
			front = -1;
			rare = -1;
		}
		void push(int val)
		{
			
			if (rare ==  size)
			{
				cout<<"Queue is Overflow!\n";
			}
			else
			{
				front=0;
				rare++;
				arr[rare] = val;
				cout<<"("<<val<<")  enQueue!"<<endl;		
			}
		}
		void pop(){
				if (front>rare)
				{
				front = rare = -1;
			}
			if(front==rare)
			{
				cout<<"Queue is empty\n";
			}
			else{
				cout<<"("<<arr[front]<<")   Dequeue!\n";
				front++;
		}
	}
		void peak()
		{
			if (front == rare){
				cout<<"Queue is empty!";
			}
			else{
				cout<<"Peek Element "<<arr[front]<<endl;
			}
		}
		
};

main()
{
	Queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.pop();
	q.pop();
	q.pop();
	q.peak();
	q.peak();
	
}
