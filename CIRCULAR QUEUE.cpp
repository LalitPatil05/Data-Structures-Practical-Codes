#include<iostream>
using namespace std;
#define SIZE 5
int CQUEUE[SIZE],FRONT,REAR;
int CQUEUEinit(){
	FRONT=-1;
	REAR=-1;
}
//check if CQUEUE Empty or not...
int isEmpty(){
	if(FRONT==-1){
		return 1;
	}
	else{
		return 0;
	}
}
//check if CQUEUE is Full or not...
int isFull(){
	if(REAR==SIZE-1 && FRONT==0){
		return 1;
	}
	else{
		return 0;
	}
}
//insert operation to insert a item in CQUEUE...
int insert(int num)
{
		if(isFull())
		{
		cout<<"Circualr QUEUE is Full.."<<endl;
		}
		else
		{
		if(REAR==-1 && FRONT==-1)
		{
			FRONT=0;
			REAR=0;
		}
		else if(REAR==SIZE-1 && FRONT!=0)
	
		REAR=0;
		
		else
		
			REAR=REAR+1;
			CQUEUE[REAR]=num;
			cout<<"Element Has Been Inserted.."<<endl;
		
		
	}
}
//delete operation to delete item in CQUEUE....
int Delete()
{
	if(isEmpty())
	{
		cout<<"Circular QUEUE is Empty.."<<endl;
	}
	else
	{
		cout<<"Deleted Element in Circular QUEUE is :"<<CQUEUE[FRONT]<<endl;
	}
	if(FRONT==REAR)
	{
		FRONT=-1;
		REAR=-1;
	}
	else
	{
		if(FRONT==SIZE-1)
		{
			FRONT=0;
		}
		else
		{
			FRONT=FRONT+1;
		}
	}
}
//to display operation to print the value of CQUEUE...
int display()
{	int i;
	if(isEmpty())
	{
		cout<<"Circular QUEUE is Empty.."<<endl;
	}
	else if(REAR>=FRONT)
	{
		for(i=FRONT;i<=REAR;i++)
		{
			cout<<CQUEUE[i]<<endl;
		}
	}
	else
	{
		for(i=FRONT;i<=SIZE-1;i++)
		{
			cout<<CQUEUE[i];
		}
		for(i=0;i<=REAR;i++)
		{
			cout<<CQUEUE[i];
		}
		
	}
}

int main(){
	CQUEUEinit();
	int num;
	char ch;
	int a;
	do
	{
		cout<<"***Choose Your Choice****"<<endl;
		cout<<"1.Insert"<<endl;
		cout<<"2.Delete"<<endl;
		cout<<"3.Display"<<endl;
		
		cout<<"Please Enter Your Choice :"<<endl;
		cin>>a;
		
		switch(a)
		{
			case 1:
				cout<<"Enter an Integer Number :"<<endl;
				cin>>num;
				insert(num);
				break;
			case 2:
				Delete();
				break;
			case 3:
				display();
				break;
			default:
				cout<<"An Invalid Choice"<<endl;
		}
		cout<<"Do You Want to Continue ?"<<endl;
		cin>>ch;
	}while(ch=='Y'||ch=='y');
}