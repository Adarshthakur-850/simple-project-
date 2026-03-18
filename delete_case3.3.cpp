#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}


    void insert(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
    }


    void deleteNodeAtPosition(int position) {
        if (position < 1) {
            cout << "Invalid position. Cannot delete." << endl;
            return;
        }

        if (position == 1) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* current = head;
        Node* prev = nullptr;
        int count = 1;

        while (current && count != position) {
            prev = current;
            current = current->next;
            count++;
        }

        if (!current) {
            cout << "Position not found. Cannot delete." << endl;
            return;
        }

        prev->next = current->next;
        delete current;
    }


    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data;
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList linkedList;

    linkedList.insert(1);
    linkedList.insert(2);
    linkedList.insert(3);
    linkedList.insert(4);

    cout << "Original linked list:" << endl;
    linkedList.display();

    int position;
    cout << "Enter the position to delete : ";
    cin >> position;

    linkedList.deleteNodeAtPosition(position);

    cout << "Linked list after deleting node at position " << position << ":" << endl;
    linkedList.display();

    return 0;
}
