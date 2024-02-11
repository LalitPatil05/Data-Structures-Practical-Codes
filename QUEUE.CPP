#include<iostream>
#define SIZE 5
using namespace std;
int QUEUE[SIZE],FRONT,REAR;
int initQUEUE(){
	FRONT=-1;
	REAR=-1;
	}
int isEmpty(){
	 if(FRONT==-1)
	 {
	 return 1;
	 }
	 else
	 {
	 return 0;
	 }
}
int isFull(){
	if(REAR==SIZE-1)
	{
	return 1;
	}
	else
	{
	return 0;
	}
}
int insert(int num){
	if(isFull())
	{
	cout<<"QUEUE IS FULL."<<endl;
	}
	else{
	REAR=REAR+1;
	QUEUE[REAR]=num;
	}
	
	{
	FRONT=0;
	}
}
int Delete(){
	if(isEmpty())
	{
	cout<<"QUEUE IS EMPTY."<<endl;
	}
	else
	{
	cout<<"Delete Element is :"<<QUEUE[FRONT]<<endl;
	}                                         
	if(FRONT==REAR)
	{
	FRONT=-1;
	REAR=-1;
	}
	else
	{
	FRONT=FRONT+1;
	}

}
int display(){
	int i;
	if(isEmpty())
	{
	cout<<"QUEUE IS EMPTY."<<endl;
	}
	else
	{
	for(i=FRONT;i<=REAR;i++)
	{
	cout<<QUEUE[i]<<endl;
	}
	
}
}
	int main(){
	initQUEUE();//function calling for initialization
	int num;
	char ch;
	int a;
	do{
	cout<<"Please Select Your Choice :"<<endl;
	cout<<"1.Insert"<<endl;           
	cout<<"2.Delete"<<endl;
	cout<<"3.Display"<<endl;
	cout<<endl;
	cout<<"Enter Your Choice :";
	cin>>a;
	switch(a)
	{
	case 1:
	cout<<"Enter an Integer Number :";
	cin>>num;
    insert(num);
	cout<<"Element "<<num<<" Has Been Inserted.."<<endl;
	cout<<endl;
	break;
	
	case 2:
	Delete();
	cout<<endl;
	break;

	case 3:
	display();
	cout<<endl;
	break;

	default:
	cout<<"An Invalid Choice.."<<endl;
	}
	cout<<"Do you Want to Continue ? :";
	cin>>ch;
	cout<<endl;
	}while(ch=='Y'||ch=='y');               
	    
}
	

