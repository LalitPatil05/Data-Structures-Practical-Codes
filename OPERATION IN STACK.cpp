#include<iostream>
using namespace std;
#define MAX 5
int STACK[MAX],TOP;
//stack initializaton....
void initStack(){
	TOP=-1;
}
//check if stack is empty or not....
int isEmpty(){
	if(TOP==-1){
		return 1;
	}
	else{
		return 0;
	}
}
//check if stack is full or not....
int isFull(){
	if(TOP==MAX-1){
		return 1;
	}
	else{
		return 0;
	}
}
//define the push operation...
void push(int num){
	if(isFull()){
		cout<<"STACK IS FULL."<<endl;
		return;
	}
	else{
		++TOP;
		STACK[TOP]=num;
		cout<<num<<" Has Been Inserted.."<<endl;
	}
}
//define the display operation....
void display(){
	int i;
	if(isEmpty()){
		cout<<"STACK IS EMPTY."<<endl;
		return;
	}
	else{
		for(i=TOP;i>=0;i--){
			cout<<STACK[i]<<" ";
			cout<<"\n";
		}
		cout<<endl;
	}
}
//define the pop operation to remove the item of stack....
void pop(){
	int temp;
	if(isEmpty()){
		cout<<"STACK IS EMPTY."<<endl;
		return;
	}
	else{
		temp=STACK[TOP];
		TOP--;
		cout<<temp<<" Has Been Deleted in Stack."<<endl;
	}
}
//define the peep operation to find the ith location in stack...
void peep(){
	int i;
	if(isEmpty()){
		cout<<"STACK IS EMPTY."<<endl;
		return;
	}
	else{
		cout<<"Enter location to find ith Element in Stack :"<<endl;
		cin>>i;
		cout<<"at\t"<<i<<"\t Location Element is \t"<<STACK[TOP-i+1]<<endl;
	}
}
//define the change operation to find particular location and change the element...
void change(){
	int i;
	if(isEmpty()){
		cout<<"STACK IS EMPTY."<<endl;
		return;
	}
	else{
		cout<<"Enter location to find ith Element in Stack :"<<endl;
		cin>>i;
		cout<<"at\t"<<i<<"\t Location Element is \t"<<STACK[TOP-i+1]<<endl;
		int value;
		cout<<"Enter the value to Assign this Element :"<<endl;
		cin>>value;
		STACK[TOP-i+1]=value;
		cout<<"Value is Assigned for this Element."<<endl;
	}
}
int main(){
	int num;
	initStack();
	char ch;
	int a;
	do{
		
		cout<<"Choose Your Choice"<<endl;
		cout<<"1.Push"<<endl;
		cout<<"2.Pop"<<endl;
		cout<<"3.Display"<<endl;
		cout<<"4.Peep"<<endl;
		cout<<"5.Change"<<endl;
		
		cout<<"Please Enter Your Choice :"<<endl;
		cin>>a;
		
		switch(a){
			case 1:
				cout<<"Enter an Integer Number :"<<endl;
				cin>>num;
				push(num);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				peep();
				break;
			case 5:
				change();
				break;
			default:
				cout<<"An Invalid Choice..!!"<<endl;
		}
		cout<<"Do you want to Continue ?"<<endl;
		cin>>ch;
	}while(ch=='Y'||ch=='y');
	return 0;
}
