#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int ptr;
    {
        itn v=23;
        ptr=&v;
        cout<<"address is(inside block):"<<ptr<<"\n";

    }
    cout<<"address is(outside block:)<<ptr;
    ptr=NULL;

}
