#include<iostream>
using namespace std;
class abc
{
    int x,y;
public:
    void getdata()
    {
        cout<<"enter the value of x and y;"<<endl;
        cin>>x>>y;


    }void sum()
    {
        int z;
        z=x+y;
        cout<<"the sum is: "<<z;
    }
};
int main()
{

    abc objl;
    objl.getdata();
    objl.sum();
}
