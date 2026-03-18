#include<iostream>
using namespace std;

struct employee{
    char name[50];
    int age;
    float salary;
};
  int main()
  {
      employee e1;
      cout<<"Enter full name:";
      cin.get(e1.name,50);
      cout<<"enter age:";
      cin>>e1.age;
      cout<<"enter salary:";
      cin>>e1.salary;
      cout<<"\nDisplaying information"<<endl;
      cout<<"\nNAME:"<<e1.name<<endl;
      cout<<"\nage:"<<e1.age<<endl;
      cout<<"\nsalary"<<e1.salary<<endl;


  }


