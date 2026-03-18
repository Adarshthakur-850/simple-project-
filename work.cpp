#include <iostream>
#include <vector>

using namespace std;

int findSmallestMissing(const vector<int>& priorities, int x) {
    int low = 0;
    int high = priorities.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (priorities[mid] <= x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (low >= priorities.size()) {
        return x + 1;
    } else {
        return priorities[low];
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> priorities(n);
    for (int i = 0; i < n; i++) {
        cin >> priorities[i];
    }

    int x;
    cin >> x;

    int smallestMissing = findSmallestMissing(priorities, x);
    cout << "The smallest missing positive integer greater than " << x << " is " << smallestMissing << "." << endl;

    return 0;
}
