#include <iostream>
#include <fstream>
#include <iomanip> // For setting precision
using namespace std;

int main() {
    ofstream outputFile("triangle.txt");

    if (!outputFile.is_open()) {
        cout << "Failed to create/open the file." << endl;
        return 1;
    }

    int n;
    cout << "Enter the number of triangles: ";
    cin >> n;

    if (n > 10) {
        cout << "Exceeding limit!" << endl;
        outputFile.close();
        return 1;
    }

    outputFile << n << endl;

    for (int i = 0; i < n; i++) {
        float base, height;
        cout << "Enter the base and height of triangle " << i + 1 << ": ";
        cin >> base >> height;

        outputFile << fixed << setprecision(2) << base << " " << height << endl;

        float area = 0.5 * base * height;
        cout << fixed << setprecision(2) << area << endl;
    }

    outputFile.close();
    cout << "Data has been saved to 'triangle.txt'." << endl;
    return 0;
}
