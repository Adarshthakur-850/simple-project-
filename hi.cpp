#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string data;
    Node* next;

    Node(const string& value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void insertAtBeginning(const string& value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void append(const string& value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            return;
        }

        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
    }

    void display() {
        Node* current = head;
        while (current) {
            cout << current->data << endl;
            current = current->next;
        }
    }
};

int main() {
    int n;
    cin >> n;

    LinkedList document;
    for (int i = 0; i < n; i++) {
        string line;
        cin >> line;
        document.insertAtBeginning(line);
    }

    string s;
    cin >> s;
    document.append(s);

    cout << "Document:";
    document.display();

    cout << "Updated Document:";
    document.display();

    return 0;
}
