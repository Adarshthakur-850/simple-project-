#include<iostream>
using namespace std;
class B1
{
	public:
	void display()
	{
		cout<<"In the base class 1: ";
	}
};
class B2
{
	public:
		void display()
		{
			cout<<"In the base class 2: ";
		}
};
class D:public B1,public B2
{
	public:
		D(){
			"Object of derived class is created: ";
		}
};

int main()
{

D obj;
obj.display();
obj.B1::display();
obj.B2::display();
obj.call();




}
