#include<iostream>
using namespace std;
//doubly linked list functions....
void display();
void delbegin();
void delend();
void insertbegin();
void insertend();
void insertafter();
void insertbefore();
void create();
void delselected();

struct node{
	int d;
	struct node *next;
	struct node *pre;
};

struct node *start=NULL, *new1, *cur, *ptr;

int main(){
	
	int a;
	cout<<"Doubly Link List Menu :"<<endl;
	cout<<endl;
	cout<<"1.Create Double Link List :"<<endl;
	cout<<"2.Insert at Begin in Double Link List :"<<endl;
	cout<<"3.Insert at End in Double Link List :"<<endl;
	cout<<"4.Insert After in Double Link List :"<<endl;
	cout<<"5.Insert Before in Double Link List :"<<endl;
	cout<<"6.Delete at Begin in Double Link List :"<<endl;
	cout<<"7.Delete at End in Double Link List :"<<endl;
	cout<<"8.Delete Selected in Double Link List :"<<endl;
	cout<<"9.Display Double link list :"<<endl;
	cout<<"10.Exit"<<endl;
	cout<<endl;
	
	while(1)
	{
		cout<<"Enter your Choice :";
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
				insertend();
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
	new1 = (struct node*)malloc(sizeof(struct node));
	new1->next=NULL;
	new1->pre=NULL;
	
	cout<<"Enter Element Value :";
	cin>>new1->d;
	
	if(start==NULL)
	{
		start=new1;
		cur=new1;
	}
	else{
		cur->next=new1;
		new1->pre=cur;
		cur=new1;
	}
}

void display(){
	ptr=start;
	cout<<"NULL<-->";
	while((ptr) != NULL){
		cout<<ptr->d<<"<-->";
		ptr=ptr->next;
	}
	cout<<"NULL"<<endl;
}

void insertbegin(){
	struct node *new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
	cout<<"Enter Element :";
	cin>>new_node->d;
	if(start==NULL){
		start=new_node;
		new_node->next=NULL;
		new_node->pre=NULL;
	}
	else{
		new_node->pre=NULL;
		new_node->next=start;
		start->pre=new_node;
		start=new_node;
	}
}

void insertend(){
	struct node *new_node,*tmp;
	new_node=(struct node *)malloc(sizeof(struct node));
	cout<<"Enter Element :";
	cin>>new_node->d;
	if(start==NULL){
		start=new_node;
		new_node->next=NULL;
		new_node->pre=NULL;
	}
	else{
		tmp=start;
		while(tmp->next!=NULL){
			tmp=tmp->next;
		}
		tmp->next=new_node;
		new_node->pre=tmp;
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
	
	if(start==NULL){
		cout<<"<-Empty!->"<<endl;
	}
	else if(start->d==x){
		b->next=new_node;
		new_node->pre=b;
		new_node->next=NULL;
	}
	else{
		while(b->d!=x && b->next==NULL){
			b=a;
			a=a->next;
		}
		if(b->next==NULL){
			b->next=new_node;
			new_node->next=NULL;
			new_node->pre=b;
		}
		else{
			b->next=new_node;
			new_node->next=a;
			new_node->pre=b;
			a->pre=new_node;
		}
	}
}

void insertbefore(){
	int x;
	struct node *new_node,*a,*b;
	new_node=(struct node*)malloc(sizeof(struct node));
	cout<<"Enter Element :";
	cin>>new_node->d;
	cout<<"Enter a value of a given node after you want to insert a new node :";
	cin>>x;
	b=a=start;
	if(start==NULL){
		cout<<"<-EMPTY!->"<<endl;
	}
	else if(start->d==x){
		b->pre=new_node;
		new_node->next=b;
		start=new_node;
	}
	else{
		while(a->d!=x){
			b=a;
			a=a->next;
		}
		b->next=new_node;
		new_node->next=a;
		new_node->pre=b;
		a->pre=new_node;
	}
}

void delbegin(){
	struct node *ptr;
	ptr=start;
	start=ptr->next;
	ptr->pre=NULL;
	free(ptr);
}

void delend(){
	struct node *a,*b;
	a=b=start;
	if(start->next==NULL){
		start=NULL;
	}
	while(b->next!=NULL){
		a=b;
		b=b->next;
	}
	a->next=NULL;
	b->pre=NULL;
}

void delselected(){
	struct node *a, *b;
	int x;
	a=b=start;
	cout<<"Enter element to be deleted :";
	cin>>x;
	
	while(b->d!=x && b->next!=NULL){
		a=b;
		b=b->next;
	}
	if(start->next==NULL){
		start=NULL;
	}
	else if(b->next==NULL){
		if(b->d!=x){
			cout<<"Element not Found."<<endl;
		}
		else{
			a->next=NULL;
			b->pre=NULL;
		}
	}
	else{
		a->next=b->next;
		(b->next)->pre=a;
	}
}