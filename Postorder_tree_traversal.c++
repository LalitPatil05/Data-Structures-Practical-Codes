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
    node->right=NULL;
    node->left=NULL;
    return (node);
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
    cout<<"Postorder Traversal of Binary Tree is :";
    printpostorder(root);
    return 0;
}