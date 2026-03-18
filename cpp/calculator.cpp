#include <iostream>

using namespace std;

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    char operation;
    double num1, num2;

    cout << "Simple Calculator\n";
    cout << "Operations available:\n";
    cout << "+ : Addition\n";
    cout << "- : Subtraction\n";
    cout << "* : Multiplication\n";
    cout << "/ : Division\n";

    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two numbers separated by space: ";
    cin >> num1 >> num2;

    switch (operation) {
        case '+':
            cout << "Result: " << add(num1, num2) << endl;
            break;
        case '-':
            cout << "Result: " << subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "Result: " << multiply(num1, num2) << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result: " << divide(num1, num2) << endl;
            else
                cout << "Error: Division by zero\n";
            break;
        default:
            cout << "Invalid operation entered.\n";
            break;
    }

    return 0;
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0)
        return a / b;
    else
        return 0;
}
