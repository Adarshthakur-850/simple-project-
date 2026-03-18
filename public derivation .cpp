#include<iostream>
#include<string.h>
using namespace std;
class student{
	private:
		int roll;
		char section[20];
	public:
		void get(){
			cout<<"Enter the roll number: ";
			cin>>roll;
			cout<<"Enter the section: ";
			cin>>section;
		}
		void show(){
			cout<<"\nRoll no is: "<<roll;
			cout<<"\nSection is: "<<section;
		}
};

class result:public student{
	private:
		float fees;
	public:
		void getd(){
			get();
			cout<<"Enter the fees: ";
			cin>>fees;
		}
		void display(){
			show();
			cout<<"\nFees: "<<fees<<endl;
		}
};


int main(){
	result r1;
	r1.getd();
	r1.display();
}
