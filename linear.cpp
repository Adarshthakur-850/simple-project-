#include <iostream>

using namespace std;

int linearSearch(int arr[], int n, int x) {
  int i;
  for (i = 0; i < n; i++) {
    if (arr[i] == x) {
      return i;
    }
  }

  return -1;
}

int main() {
  int arr[] = {10, 20, 30, 40, 50};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x;

  cout << "Enter the element to search: ";
  cin >> x;

  int index = linearSearch(arr, n, x);

  if (index == -1) {
    cout << "Element not found!" << endl;
  } else {
    cout << "Element found at index: " << index << endl;
  }

  return 0;
}
