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
    void deleteNode(int NUM) {
        if (!head) {
            cout << "List is empty. Cannot delete." << endl;
            return;
        }
        Node* current = head;
        Node* prev = nullptr;
        while (current) {
            if (current->data == NUM) {
                if (prev) {
                    prev->next = current->next;
                } else {
                    head = current->next;
                }
                delete current;
                cout << "Node with data " << NUM << " deleted." << endl;
                return;
            }
            prev = current;
            current = current->next;
        }
        cout << "Node with data " << NUM << " not found. Cannot delete." << endl;
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
    int NUM;
    cout << "Enter the value of the node to delete: ";
    cin >> NUM;
    linkedList.deleteNode(NUM);
    cout << "Linked list after deleting node with data " << NUM << ":" << endl;
    linkedList.display();
    return 0;
}
