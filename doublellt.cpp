#include<iostream>
using namespace std;
struct node{
	struct node* prev;
	int data;
	struct node* next;
};

struct node * temp, *head=NULL;
int main(){
	int choice;
	cout<<"Enter choice: ";
	cin>>choice;
	while(choice){
		struct node * newnode = new node();
		cout<<"Enter the data: ";
		cin>>newnode->data;

		if (head==NULL){
		head=temp=newnode;
		newnode->next=NULL;
		newnode->prev=NULL;
	}
	else{
		temp->next=newnode;
		newnode->prev=temp;
		newnode->next=NULL;
		temp=newnode;

	}
	cout<<"Enter choice: ";
	cin>>choice;

	}

	cout<<endl;
	temp=head;
	cout<<"Header Linked List: ";
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}

	return 0;
}
