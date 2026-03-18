#include<iostream>
using namespace std;
int main()
{
    int a=10,b=20,c;
    int max(int,int);
    c=max(a,b);
    cout<<"greatest no is "<<c;
}
int max(int x,int y)
{
    if (x>y)
        return(x);
    else
    {
        return (y);
    }
}
