#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int n;

    cout << "";
    cin >> n;

    if (n > 100) {
        cout << "Exceeding limit!" << endl;
        return 0;
    }

    ofstream inputFile;
    inputFile.open("numbers_tmp.txt");

    if (!inputFile.is_open()) {
        cerr << "Failed to create the input file." << endl;
        return 1;
    }

    inputFile << n << endl;

    cout << "" << endl;

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;

        inputFile << num << endl;
    }

    inputFile.close();

    ifstream input;
    input.open("numbers_tmp.txt");

    if (!input.is_open()) {
        cerr << "Failed to open the input file." << endl;
        return 1;
    }

    int read_n;
    input >> read_n;

    int even_count = 0;
    int odd_count = 0;

    for (int i = 0; i < read_n; ++i) {
        int num;
        input >> num;

        if (num % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    cout << "Even: " << even_count << endl;
    cout << "Odd: " << odd_count << endl;

    input.close();

    remove("numbers_tmp.txt");

    return 0;
}
