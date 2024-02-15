#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *newnode (int data){
    struct node *node = (struct node*)malloc(sizeof(struct node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
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
int main(){
    struct node *root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);
    cout<<"Preorder Traversal of Binary Tree is :";
    printpreorder(root);
    return 0;
}