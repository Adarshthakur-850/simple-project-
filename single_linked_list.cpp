#include<iostream>
using namespace std;

struct{
	int data;
	Node* next;
};

struct Node * front = NULL;
struct Node * rear = NULL;

void enqueue(int val)
{
	Node * newnode = new Node();
	newnode->data = val;
	newnode->next=NULL;
	if(front==NULL && rear == NULL){
		front = rear = newnode;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
	void dequeue(){
	    struct node*temo=front;
	    if(front==null&&rear==null)
            cout<<("underflow");
        else if(front==rear)
            cout<<

	}
}
