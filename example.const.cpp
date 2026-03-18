//#include<iostream>
//using namespace std;
//class employee{
//public:
//    employee()
    {
        cout<<"i am employee"<<endl;
    }
    ~employee()
    {
        cout<<"employee destroyed"<<endl;
    }
};
class company
{
public:
    employee *emp;
    company(employee *emp)
    {
        this->emp=emp;
        cout<<"this is company"<<end;
        cout<<this->emp<<endl;

    }
    company()
    {
        cout<<"campany destroyed"<<endl;
    }
};
int main(){
    emplyee *e1=new employee;
    {
        company c1(c1);

    }
}
