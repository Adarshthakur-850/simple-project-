#include <iostream>
#include <string>

using namespace std;

// Function to solve Tower of Hanoi and return a string containing the moves
string towerOfHanoi(int n, char source, char auxiliary, char target) {
    string moves = "";

    if (n == 1) {
        moves += "Move disk 1 from ";
        moves += source;
        moves += " to ";
        moves += target;
        moves += "\n";
    } else {
        moves += towerOfHanoi(n - 1, source, target, auxiliary);

        moves += "Move disk ";
        moves += to_string(n);
        moves += " from ";
        moves += source;
        moves += " to ";
        moves += target;
        moves += "\n";

        moves += towerOfHanoi(n - 1, auxiliary, source, target);
    }

    return moves;
}

int main() {
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;

    char source = 'A';
    char auxiliary = 'B';
    char target = 'C';

    string moves = towerOfHanoi(n, source, auxiliary, target);

    cout << moves;

    return 0;
}
