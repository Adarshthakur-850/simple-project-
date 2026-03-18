#include <iostream>

using namespace std;

int main() {
    const int array_size = 5;
    int my_array[array_size];


    cout << "Enter " << array_size << " values:" << endl;
    for (int i = 0; i < array_size; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> my_array[i];
    }


    cout << "Initialized array elements: ";
    for (int i = 0; i < array_size; i++) {
        my_array[i] = my_array[i] * 2;
        cout << my_array[i] << " ";
    }
    cout << endl;

    return 0;
}
