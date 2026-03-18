#include <iostream>
using namespace std;
struct emp//struture name(emp)
{
    string name;//structure member
};
int main()
{
    emp e[5];int i;
    for (i=0;i<5;i++)
    {
        cout<<"enter the name of the employee no."<<i+1<<":";
        cin>>e[i].name;
    }
    cout<<"\n name of all employee: \n";
    font(i=0;i<5;i++)
    {
        cout<<e[i].name<<endl;
    }
    cout<<endl;
    return0
}
