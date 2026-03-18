#include <iostream>
#include <string>
using namespace std;

union Customers {
    struct {
        string name;
        int account_number;
        double balance;
    }cus;
};

void increment_balance(Customers c[], int n) {
    for (int i = 0; i < n; ++i) {
        if (c[i].cus.balance > 1000) {
            c[i].cus.balance += 100;
            cout << "Balance incremented for " << c[i].cus.name << ". New balance: " << c[i].cus.balance << endl;
        }
    }
}

int main() {
    union customer1, customer2, customer3;
    customer1 = {"Alice", 15, 150};
    customer2 = {"anna", 16, 1500};
    customer3 = {"else", 17, 180};

    Customers customerArray[] = {customer1, customer2, customer3};
    int numCustomers = sizeof(customerArray) / sizeof(customerArray[0]);

    increment_balance(customerArray, numCustomers);

    return 0;
}
