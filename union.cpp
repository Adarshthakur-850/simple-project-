#include<iostream>
union Data{
    int a;
    float b;
    char c;

};
int main(){
    Data myData;
    myData.a=42;
    std::cout<<"Interger Value :"<<
    myData.a<<std::endl;
    myData.b=3.14f;
    std::cout<<"Float Value :"<<
    myData.b<<std::endl;
    myData.c='A';
    std::cout<<"char Value :"<<
    myData.c<<std::endl;
    return 0;
}
