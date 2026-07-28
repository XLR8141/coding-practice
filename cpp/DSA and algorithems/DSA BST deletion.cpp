#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* right;
	Node* left;
	Node(int val){
		data = val;
		right = NULL;
		left = NULL;		
	}
};

Node* insertion(Node* root,int val){
	if(root == NULL){

		return new Node(val);
		cout << root;
	}
	else if( val < root->data){
		root->left = insertion(root->left,val);
	}
	else{
		root->right = insertion(root->right,val);
	}
	return root;
}

//Node* deletion(Node* root){
//
//	if(root == NULL){
//		return root;
//	}
//	if(root->right == NULL && root->left == NULL){
//		Node* temp = 
//	}
//	else if( root->right === NULL){
//		
//		delete temp;
//	} 
//	else if( root->left == NULL){
//			
//	} 
	
//}
//================================================================

Node* deletion(Node* root, int key) {
    if (root == NULL) 
	{
		return root;
	}

    if (key < root->data) {
        root->left = deletion(root->left, key);
    }
    else if (key > root->data) {
        root->right = deletion(root->right, key);
    }
    else {

        if (root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }

        else if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }

	    else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        else {
            Node* succ = root->right;
            while (succ->left != NULL)
                succ = succ->left;

            root->data = succ->data;  
            root->right = deletion(root->right, succ->data);
        }
    }
    return root;
}



main(){
	Node* root = NULL;
	insertion(root,50);
	insertion(root,40);
	insertion(root,30);
	insertion(root,45);
	insertion(root,55);
	insertion(root,65);
	deletion(root,55);
	
}
