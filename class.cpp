#include<iostream>
using namespace std;
class abc
{
private:
int rollno;
char name[20];
public:
void getdata()
{
    cout<<"name==";
    cin>>name;
    cout<<"rollno==";
    cin>>rollno;
}
void display()
{
    cout<<"name="<<name;
    cout<<"  rollno="<<rollno;
}
};
int main()
{
abc obj1;
obj1.getdata();
obj1.display();
}



















