#include <bits/stdc++.h>
using namespace std;


void insertion_sort(int array[], int size) {
  for (int i = 1; i < size; i++) {
    int key = array[i];
    int j = i - 1;
    while (j >= 0 && array[j] > key) {
      array[j + 1] = array[j];
      j--;
    }
    array[j + 1] = key;
  }
}

int main() {
  int array[] = {10, 5, 2, 4, 7, 1, 8, 9, 6, 3};
  int size = sizeof(array) / sizeof(array[0]);

  insertion_sort(array, size);

  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;

  return 0;
}
