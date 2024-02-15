#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *newnode(int data){
    struct node *node = (struct node*)malloc(sizeof(struct node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return (node);
}
void printorder(struct node *node){
    if(node==NULL){
        return;
    }
    printorder(node->left);
    cout<<node->data<<" , ";
    printorder(node->right);
}
int main(){
    struct node*root = newnode(1);
    root->left = newnode(3);
    root->right = newnode(6);
    root->left->left = newnode(7);
    root->left->left->right = newnode(8);
    root->left->left->right->left = newnode(9);
    root->left->left->right->left->left = newnode(10);
    root->right->left = newnode(2);
    root->right->right = newnode(4);
    root->right->right->left = newnode(5);
    root->right->right->right = newnode(11);
    root->right->right->right->left = newnode(12);
    cout<<"Inorder traversal of Binary Tree :";
    printorder(root);
    return 0;
}