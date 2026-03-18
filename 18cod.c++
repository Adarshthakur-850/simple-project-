#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string inputText;
    cout << "";
    getline(cin, inputText);

    // Write inputText to sample1.txt
    ofstream outfile1("sample1.txt");
    if (!outfile1.is_open()) {
        cerr << "Error: Unable to create sample1.txt." << endl;
        return 1;
    }
    outfile1 << inputText;
    outfile1.close();

    // Reverse inputText and write it to sample2.txt
    string reversedText = inputText;
    reverse(reversedText.begin(), reversedText.end());
    ofstream outfile2("sample2.txt");
    if (!outfile2.is_open()) {
        cerr << "Error: Unable to create sample2.txt." << endl;
        return 1;
    }
    outfile2 << reversedText;
    outfile2.close();

    // Compare sample1.txt and sample2.txt
    ifstream file1("sample1.txt", ios::binary);
    ifstream file2("sample2.txt", ios::binary);

    if (!file1.is_open() || !file2.is_open()) {
        cerr << "Error: Unable to open files for comparison." << endl;
        return 1;
    }

    bool filesAreEqual = true;
    char ch1, ch2;

    while (file1.get(ch1) && file2.get(ch2)) {
        if (ch1 != ch2) {
            filesAreEqual = false;
            break;
        }
    }

    file1.close();
    file2.close();

    // Print the result
    cout << "Comparing files..." << endl;
    if (filesAreEqual) {
        cout << "Files are the same." << endl;
    } else {
        cout << "Files differ." << endl;
    }

    return 0;
}
