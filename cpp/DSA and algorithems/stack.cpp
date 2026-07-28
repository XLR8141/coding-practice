#include <iostream>
using namespace std;

class stack{
	
	static const int size = 5;
	int arr[size];
	int top;
	
	public:
		stack(){
			top = -1;
		}
		push(int val){
			if(top == size -1 ){
				cout << "the stack is full";
			}
			else{
				arr[++top] = val;
			}
		}
		
		pop(){
			if(top == -1){
				cout << "the stack is empty";
			}
			else{
				arr[top--];
			}		
		}
	
		display(){
			for(int a = top; a >= 0 ;a--){
				cout <<arr[a]<<endl;
			}
		}	
};
main(){
	stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.pop();
	
	s.display();
	
	
	
}
