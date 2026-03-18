#include<iostream>
using namespace std;
class A
{
public:
    void show()
    {

        cout<<"\n in base class A";
    }

};
class B:public A
{
public:
    void show()
    {
        cout<<"\nIn Derived class B";

    }
};
int main()
{

     B obj1;
     obj1.show();
     return 0;

}
