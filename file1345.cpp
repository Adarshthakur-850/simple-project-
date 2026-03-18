#include<iostream>
using namespace std;

class A {
public:
    A() {
        cout << "calling base class constructor" << endl;
    }
    ~A() {
        cout << "calling base class destructor" << endl;
    }
};

class B : public A {
public:
    B() : A() {
        cout << "calling derived class constructor" << endl;
    }
    ~B() {
        cout << "calling derived class destructor" << endl;
    }
};

int main() {
    B obj1;
    return 0;
}
