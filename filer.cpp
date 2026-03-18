#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream myfile;
    char name[30];
    int age;

    cout<<"enter your name :";
    cin.get(name,30);
    cout<<"enter your age; ";
    cin>>age;
    myfile.open("output.txt",ios::out);
    if (myFile)
    {
        myFile<<name<<endl;
        myFile<<age<<endl;
        cout<<"data stored successful: "<<endl;
    }
    else cout<<"error:"<<endl;
    return 0;



}
