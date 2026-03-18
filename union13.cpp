#include <iostream>
using namespace std;


union MyUnion {
    int intValue;
    double doubleValue;
};

int main() {

    MyUnion num1, num2;


    num1.intValue = 5;
    num2.doubleValue = 3.14;


    double result;
    if (sizeof(num1) > sizeof(num2)) {
        result = num1.intValue + num2.doubleValue;
    } else {
        result = num1.doubleValue + num2.intValue;
    }


    cout << "Result of adding: " << num1.intValue << " and " << num2.doubleValue << " is: " << result << endl;

    return 0;
}
