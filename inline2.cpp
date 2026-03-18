#include <iostream>
#include <string.h>
using namespace std;
class Student{
	private:
	int rollNo;
	char name[10];
	int marks;

	public:
		static int objectCount;

	Student(){
		objectCount++;
	}
	void getdata(){
		cout<<"Enter the roll number: "<<endl;
		cin>>rollNo;
		cout<<"Enter the name: "<<endl;
		cin>>name;
		cout<<"Enter marks: ";
		cin>>marks;
	}

	void putdata(){
		cout<<"Roll no: = "<<rollNo<<endl;
		cout<<"Name: = "<<name<<endl;
		cout<<"Marks: = "<<marks<<endl;
	}
};
int Student::objectCount=0;

int main(void){

	Student s1;
	s1.getdata();
	s1.putdata();
	Student s2;
	s2.getdata();
	s2.putdata();
	Student s3;
	s3.getdata();
	s3.putdata();
	cout<<"Total objects created="<<Student::objectCount<<endl;


}
