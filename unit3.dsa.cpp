#include<iostream>
using namespace std;

#define MAX 5
int stack[MAX];
int top = -1;

void push() {
    int x;
    cout<<"Enter the data: ";
    cin>>x;
    if (top == MAX - 1) {
        cout << "Stack Overflow" << endl;
    }
    else {
        top++;
        stack[top] = x;
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow" << endl;
    }
    else {
        int item = stack[top];
        top--;
        cout << item << endl;
    }
}

void peek() {
    if (top == -1) {
        cout << "Stack Underflow" << endl;
    }
    else {
        cout << stack[top] << endl;
    }
}

void display() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    }
    else {
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int ch;
    do {
        cout << "Enter choice: 1.Push  2.Pop  3.Peek  4.Display  0.Exit: ";
        cin >> ch;
        switch (ch) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 0:
                cout << "Exiting program" << endl;
                break;
            default:
                cout << "Invalid Choice" << endl;
                break;
        }
    } while (ch != 0);

    return 0;
}
