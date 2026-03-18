#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;


double calculate_actual_value(double percentage, int total_value) {
    return (percentage * total_value) / 100.0;
}

int main() {
    int n;

    cout << "";
    cin >> n;

    if (n > 20) {
        cout << "Exceeding limit!" << endl;
        return 0;
    }


    ofstream inputFile;
    inputFile.open("percentages_tmp.txt");

    if (!inputFile.is_open()) {
        cerr << "Failed to create the input file." << endl;
        return 1;
    }


    inputFile << n << endl;

    cout << "" << endl;
    cout << fixed << setprecision(2);

    for (int i = 0; i < n; ++i) {
        double percentage;
        int total_value;
        cin >> percentage >> total_value;


        inputFile << percentage << " " << total_value << endl;
    }


    inputFile.close();


    ifstream input;
    input.open("percentages_tmp.txt");

    if (!input.is_open()) {
        cerr << "Failed to open the input file." << endl;
        return 1;
    }

    int read_n;
    input >> read_n;

    cout << "" << endl;

    for (int i = 0; i < read_n; ++i) {
        double percentage;
        int total_value;
        input >> percentage >> total_value;

        double actual_value = calculate_actual_value(percentage, total_value);
cout << actual_value << endl;
    }


    input.close();


    remove("percentages_tmp.txt");

    return 0;
}
