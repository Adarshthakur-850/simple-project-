#include<iostream>
using namespace std;
int main(){
    int arr[6], i, user_input;
    cout << "Enter 5 digit" << endl;
    for(i = 0; i < 5; i++){
        cin >> arr[i];
    }

    cout << "Enter element to insert" << endl;
    cin >> user_input;
    arr[i] = user_input;
    cout << "The new array is: ";
    for(i = 0; i < 6 ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}
