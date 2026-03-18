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
        void deleteNode(int NUM) {
        if (head == nullptr) {
            cout << "UNDERFLOW" << endl;
            return;
        }
        Node* PTR = head;
        Node* PREPTR = nullptr;
        if (PTR->data == NUM) {
            cout << "No node before given value" << endl;
            return;
        }
        while (PTR != nullptr && PTR->data != NUM) {
            PREPTR = PTR;
            PTR = PTR->next;
        }
        if (PTR == nullptr) {
            cout << "Num is not present, so deletion can't be done." << endl;
            return;
        }
        if (PTR->data == NUM) {
            PREPTR->next = PTR->next;
            delete PTR;
        }
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
    linkedList.head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    linkedList.head->next = second;
    second->next = third;
    third->next = fourth;
    cout << "Original linked list:" << endl;
    linkedList.display();
    int NUM = 3;
    linkedList.deleteNode(NUM);
    cout << "Linked list after deleting node with data " << NUM << ":" << endl;
    linkedList.display();
    return 0;
}
