#include<iostream>
using namespace std;
void display();
void delbegin();
void delend();
void insertbegin();
void insertend();
void insertafter();
void insertbefore();
void sort();
void create();
void delselected();

struct node{
	int d;
	struct node *next;
};

struct node *start=NULL, *new1, *cur, *ptr;

int main(){
	int a;
	
	cout<<"Singly Linked List Menu :"<<endl;
	cout<<endl;
	cout<<"1.Create Single Linked List :"<<endl;
	cout<<"2.Insert at Begin in Single Linked List :"<<endl;
	cout<<"3.Inser at End in Single Linked List :"<<endl;
	cout<<"4.Insert After in Single Linked List :"<<endl;
	cout<<"5.Insert Before in Single Linked List :"<<endl;
	cout<<"6.Delete at Begin in Single Linked List :"<<endl;
	cout<<"7.Delete at End in Single Linked List :"<<endl;
	cout<<"8.Delete Selected in Single Linked List :"<<endl;
	cout<<"9.Display Single Linked List :"<<endl;
	cout<<"10.Exit in Single Linked List :"<<endl;
	cout<<endl;
	
	while(1)
	{
		cout<<"Enter Your Choice :";
		cin>>a;
		
		switch(a)
		{
			case 1:
				create();
				break;
			case 2:
				insertbegin();
				break;
			case 3:
				insertend();
				break;
			case 4:
				insertafter();
				break;
			case 5:
				insertbefore();
				break;
			case 6:
				delbegin();
				break;
			case 7:
				delend();
				break;
			case 8:
				delselected();
				break;
			case 9:
				display();
				break;
			case 10:
				exit(1);
				break;
		}
	}
}

void create(){
	char ch;
	new1=(struct node*)malloc(sizeof(struct node*));
	new1->next=NULL;
	cout<<"Enter Element Value :";
	cin>>new1->d;
	
	if(start==NULL){
		start=new1;
		cur=new1;
	}
	else{
		cur->next=new1;
		cur=new1;
	}
}

void display(){
	ptr=start;
	while(ptr->next!=NULL)
	{
		cout<<ptr->d<<"-->";
		ptr=ptr->next;
	}
	cout<<ptr->d<<"-->";
	cout<<"NULL"<<endl;
}

void insertbegin(){
	struct node *new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
	cout<<"Enter Element :";
	cin>>new_node->d;
	if(start==NULL)
	{
		start=new_node;
		new_node->next=NULL;
	}
	else{
		new_node->next=start;
		start=new_node;
	}
}

void insertend(){
	struct node *new_node, *tmp;
	new_node=(struct node *)malloc(sizeof(struct node));
	cout<<"Enter Element :";
	cin>>new_node->d;
	if(start==NULL)
	{
		start=new_node;	
		new_node->next=NULL;
	}
	else{
		tmp=start;
		while(tmp->next!=NULL)
		{
			tmp=tmp->next;
		}
		tmp->next=new_node;
		new_node->next=NULL;
	}
}

void insertafter(){
	int x;
	struct node *new_node,*a,*b;
	new_node=(struct node *)malloc(sizeof(struct node));
	cout<<"Enter Element :";
	cin>>new_node->d;
	cout<<"Enter a value of a given node after you want to insert a new node :";
	cin>>x;
	b=a=start;
	
	if(start==NULL)
	{
		cout<<"<-EMPTY->"<<endl;
	}
	else if(start->d==x){
		a=a->next;
		new_node->next=a;
		b->next=new_node;
	}
	else{
		while(b->d!=x)
		{
			b=a;
			a=a->next;
		}
		b->next=new_node;
		new_node->next=a;
	}
}

void insertbefore(){
	int x;
	struct node *new_node,*a,*b;
	new_node=(struct node *)malloc(sizeof(struct node));
	cout<<"Enter Element :";
	cin>>new_node->d;
	cout<<"Enter a value of a given node after you want to insert a new node :";
	cin>>x;
	b=a=start;
	
	if(start==NULL){
		cout<<"<-EMPTY->"<<endl;
	}
	else{
		while(a->d!=x)
		{
			b=a;
			a=a->next;
		}
		b->next=new_node;
		new_node->next=a;
	}
}

void delbegin(){
	struct node *ptr;
	ptr=start;
	start=ptr->next;
	free(ptr);
}

void delend(){
	struct node *a, *b;
	a=b=start;
	
	while(b->next!=NULL)
	{
		a=b;
		b=b->next;
	}
	a->next=NULL;
}

void delselected(){
	struct node *a, *b;
	int x;
	a=b=start;
	cout<<"Enter Element to be delete :";
	cin>>x;
	
	while(b->d!=x && b->next!=NULL)
	{
		a=b;
		b=b->next;
	}
	if(b->next==NULL)
	{
		if(b->d!=x)
		{
			cout<<"Element Not Found."<<endl;
		}
		else{
			a->next=NULL;
		}
	}
	else{
		a->next=b->next;
	}
}