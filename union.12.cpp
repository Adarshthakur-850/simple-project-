#include<iostream>
using namespace std;
union Data{
    int a;
    float b;
    char c;
    double d;

};
int main()
{
    Data dataArray[5];
    dataArray[0].b=42;
    dataArray[1].c='A';
    dataArray[2].d=3.14;
    dataArray[3].b=100;
    dataArray[4].c='Z';

cout<<dataArray[0].b<<endl;
cout<<dataArray[1].c<<endl;
cout<<dataArray[2].d<<endl;
cout<<dataArray[3].b<<endl;
cout<<dataArray[4].c<<endl;
}
