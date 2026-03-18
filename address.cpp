
#include"iostream"
using namespace std;
void swap(int *x ,int *y)
{
    cout<<"Before Swapping: "<<endl;
    cout<<"*x: "<<"*y: "<<*y<<endl;
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}
int main()
{
    int a=10;
    int b=20;
    swap(&a,&b);
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;

}
