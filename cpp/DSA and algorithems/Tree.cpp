#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* right;
	Node* left;
	Node(int val){
		data = val;
		left = NULL;
		right = NULL;
	
	}
};

Node* insertion(Node* root,int val){
	//base case
	if( root == NULL){
		cout << root->data;
		return new Node(val);
	}
	if( val < root->data){
		root->left = insertion(root->left,val);
	}
	else if( val > root->data){
		root->right = insertion(root->right,val);
	}
	return root;
}



Node* searching (Node* root,int val){
	if( root == NULL){
		return NULL;
	}
	if(val == root->data){
		cout << "found !!";
	}
	if( val < root->data){
		return searching(root->left,val);
	}
	else if( val > root->data){
		return searching( root->right,val);
	}

}

//Node* deletion(Node* root,int val){
//	if(root == NULL){
//		return NULL;
//	}
//	if( root->right == NULL && root->left == NULL){
//		delete root;
//	}
//	else if( root->left == ) {
//	}
//}



int main(){
	Node* root = NULL;
	root = insertion(root,55);
	root = insertion(root,50);	
	root = insertion(root,45);	
	root = insertion(root,23);	
	root = insertion(root,43);	
	
	searching(root,50);
	
}
