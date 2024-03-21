/*
 * TreeTraversingAllTechnique.cpp
 *
 *  Created on: 19-Mar-2024
 *      Author: Lalit Patil

*/


#include<iostream>
using namespace std;

struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node *newnode(int data){
	struct node *node = (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return (node);
}

void printpreorder(struct node *node){
	if(node==NULL){
		return;
	}
	cout<<node->data<<" , ";
	printpreorder(node->left);
	printpreorder(node->right);
}

void printinorder(struct node *node){
	if(node==NULL){
		return;
	}
	printinorder(node->left);
	cout<<node->data<<" , ";
	printinorder(node->right);
}

void printpostorder(struct node *node){
	if(node==NULL){
		return;
	}
	printpostorder(node->left);
	printpostorder(node->right);
	cout<<node->data<<" , ";
}

int main(){
	struct node *root = newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	root->left->left = newnode(4);
	root->left->right = newnode(5);
	root->right->left = newnode(6);
	root->right->right = newnode(7);

	cout<<"Preorder Traversing : \n";
	printpreorder(root);
	cout<<endl;

	cout<<"Inorder Traversing is :\n";
	printinorder(root);
	cout<<endl;

	cout<<"Postorder Traversing :\n";
	printpostorder(root);
	cout<<endl;

	return 0;
}
