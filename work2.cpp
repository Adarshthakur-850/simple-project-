#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printContacts(const vector<string>& contacts) {
    for (const string& contact : contacts) {
        cout << contact << " ";
    }
    cout << endl;
}

void insertionSort(vector<string>& contacts) {
    int n = contacts.size();
    for (int i = 1; i < n; ++i) {
        string key = contacts[i];
        int j = i - 1;
        while (j >= 0 && contacts[j] > key) {
            contacts[j + 1] = contacts[j];
            --j;
        }
        contacts[j + 1] = key;

        cout << "After Iteration " << i << ": ";
        printContacts(contacts);
    }
}

int main() {
    int n;
    cin >> n;

    vector<string> contacts(n);
    for (int i = 0; i < n; ++i) {
        cin >> contacts[i];
    }

    cout << "Initial order: ";
    printContacts(contacts);

    insertionSort(contacts);

    cout << "Sorted order: ";
    printContacts(contacts);

    return 0;
}
