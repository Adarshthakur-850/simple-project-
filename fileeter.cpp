#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream fp;
fp.open("output.txt",ios::out);
if(fp)
{
fp<<"Iamneo.ai"<<endl;
fp<<"Lovely Professional University"<<endl;
fp<<"c++ Tutorial"<<endl;
fp<<"object"<<endl;}
else{
cout<<"Error Occurred"<<endl;}
return 0;}
