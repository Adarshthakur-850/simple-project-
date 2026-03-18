//#include<iostream>
//using namespace std;
//int mian()
//{
//	int*ptr;
//}
//{
//	int v=23;
//	ptr=&v;
//	cout<<"value is(inside block):"<<*ptr<<"\n";
//	cout<<"Address is(inside block):"<<*ptr<<"\n";
//}
//cout<<"value is(outside block)"<<*ptr<<"\n";
//cout<<"Address is(outside block)"<<*ptar<<"\n";
#include <iostream>
using namespace std;

int main()
{
    int* ptr;
    {
        int v = 23;
        ptr = &v;
        cout << "Value is (inside block): " << *ptr << "\n";
        cout << "Address is (inside block): " << ptr << "\n";
    }

    cout << "Value is (outside block): " << *ptr << "\n";
    cout << "Address is (outside block): " << ptr << "\n";

    return 0;
}
