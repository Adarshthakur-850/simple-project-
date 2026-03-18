#include<iostream>
using namespace std;
union Customers {
    char name[50];
    int account_number;
    float balance;
};
void increment_balance(Customers c[], int n){
    for (int i=0; i<n; i++){
        if(c[i].balance>1000){
            cout<<c[i].balance + 100<<" ";
        }
    }
}
int main(){
    int N;
    cin>>N;
    Customers customerList[N];
    for (int i=0; i<N; i++){
        cin>> customerList[i].name>> customerList[i].account_number;
        }
        increment_balance(customerList,N);
return 0;
}
