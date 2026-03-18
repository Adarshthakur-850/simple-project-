#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() {
        head = nullptr;
    }

    void append(int value) {
        Node* new_node = new Node(value);
        if (!head) {
            head = new_node;
            new_node->next = head;
        } else {
            Node* current = head;
            while (current->next != head) {
                current = current->next;
            }
            current->next = new_node;
            new_node->next = head;
        }
    }

    void insertAfter(int existingValue, int newValue) {
        Node* new_node = new Node(newValue);
        if (!head) {
            cout << "List is empty" << endl;
            return;
        }

        Node* current = head;
        do {
            if (current->data == existingValue) {
                new_node->next = current->next;
                current->next = new_node;
                return;
            }
            current = current->next;
        } while (current != head);

        cout << "Node with value " << existingValue << " not found." << endl;
    }

    void display() {
        if (!head) {
            cout << "List is empty" << endl;
            return;
        }

        Node* current = head;
        do {
            cout << current->data << " , ";
            current = current->next;
        } while (current != head);
        cout << "..." << endl;
    }
};

int main() {
    CircularLinkedList circularList;

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int value;
        cout << "Enter element " << i + 1 << ": ";
        cin >> value;
        circularList.append(value);
    }

    int existingValue, newValue;
    cout << "Enter the value of the existing node: ";
    cin >> existingValue;
    cout << "Enter the value of the new node: ";
    cin >> newValue;

    circularList.insertAfter(existingValue, newValue);

    cout << "Circular Linked List: ";
    circularList.display();

    return 0;
}
