#include <iostream>

using namespace std;

int main() {
    const int array_size = 5;
    int my_array[array_size];


    for (int i = 0; i < array_size; i++) {
        my_array[i] = i * 2;


    cout << "Initialized array elements: ";
    for (int i = 0; i < array_size; i++) {
        cout << my_array[i] << " ";
    }
    cout << endl;

    return 0;
}
}
