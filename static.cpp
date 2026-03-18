#include<iostream>
using namespace std;
class box
{
private:
    static int length;
    static int breath;
    static int height;
public:
    static void print()
    {
        cout<<"the value of the length is "<<length<<endl;
        cout<<"the value of the breath is "<<breath<<endl;
        cout<<"the value of the height is "<<height<<endl;
    }

};
int box::length=10;
int box::breath=20;
int box::height=30;
int main()
{

    box b;
    cout<<"static member fuction is called throught object name:\n"<<endl;
    b.print();
    cout<<"\nStatic member function is called throught class name:\n"<<endl;
    box::print();
    return 0;
}
