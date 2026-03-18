#include <iostream>
#include <fstream>
#include <iomanip> // For setting output precision

using namespace std;

// Function to calculate actual value from percentage and total value
double calculate_actual_value(double percentage, int total_value) {
    return (percentage * total_value) / 100.0;
}

int main() {
    // Create the input file and open it for writing
    ofstream inputFile;
    inputFile.open("percentages.txt");

    if (!inputFile.is_open()) {
        cerr << "Failed to create the input file." << endl;
        return 1;
    }

    // Write the number of entries (n) to the file
    int n = 4; // You can change this to the desired number of entries
    inputFile << n << endl;

    // Write the percentage and total value for each entry
    inputFile << "25.5 200" << endl;
    inputFile << "10.0 500" << endl;
    inputFile << "15.7 3000" << endl;
    inputFile << "12.3 250" << endl;

    // Close the input file
    inputFile.close();

    // Open the input file for reading
    ifstream input;
    input.open("percentages.txt");

    if (!input.is_open()) {
        cerr << "Failed to open the input file." << endl;
        return 1;
    }

    int read_n;
    input >> read_n;

    if (read_n > 20) {
        cout << "Exceeding limit!" << endl;
        input.close();
        return 0;
    }

    cout << fixed << setprecision(2); // Set output precision to 2 decimal places

    for (int i = 0; i < read_n; ++i) {
        double percentage;
        int total_value;
        input >> percentage >> total_value;

        double actual_value = calculate_actual_value(percentage, total_value);
        cout << actual_value << endl;
    }

    // Close the input file
    input.close();
    return 0;
}
