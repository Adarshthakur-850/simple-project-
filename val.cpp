#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int count = 0;
    for (int i = 0; i < n-1; i++) {
        if (abs(a[i+1] - a[i]) >= b[i]) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
