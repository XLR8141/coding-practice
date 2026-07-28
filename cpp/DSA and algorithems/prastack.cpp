#include <iostream>
using namespace std;

class stack{
	const static int size = 5;
	int arr[size];
	int top;
	public:
		stack(){
			top = -1;
		}
		push(int val){
			if (top == size - 1){
				cout << "the stack is full !";
			}
			else{
				arr[top++];
				arr[top]= val;
			}
		}
		pop(){
			if(top == -1){
				cout << "Stack is under flow !!";
			}
			else{
				arr[top--];
			}
		}
		display(){
			for( int a= 0 ; top >=a; a++){
				cout << arr[a];
			}	
		}

};




main(){
	stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.pop();
	s.push(30);
	s.display();


}

