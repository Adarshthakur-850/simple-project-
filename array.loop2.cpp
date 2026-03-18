#include <iostream>
using namespace std;
int main(){
    int a[100],n,k,item;
    cout<<"how many numbers to store in array : ";
    cin>>n;
    cout<<"Enter the number: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the no. and its position";
    cin>>item>>k;
    k+=1;
    for(int i=n-1;i>=k;i--){
        a[i+1]=a[i];
    }
    a[k]=item;
    cout<<"Array : \n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
