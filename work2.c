#include <iostream>
#include <vector>

int findSmallestMissing(const std::vector<int>& arr, int n, int x) {
    int left = 0, right = n - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] <= x) {
            left = mid + 1;
        } else {
            result = arr[mid];
            right = mid - 1;
        }
    }

    return result;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int x;
    std::cin >> x;

    // Finding the smallest missing positive integer greater than x
    int missing = findSmallestMissing(arr, n, x);

    // Output
    std::cout << "The smallest missing positive integer greater than " << x << " is " << missing << "." << std::endl;

    return 0;
}
