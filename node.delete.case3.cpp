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
    void deleteNodeAfter(int NUM) {
        if (head == nullptr) {
            cout << "Underflow" << endl;
            return;
        }
        Node* PTR = head;
        Node* PREPTR = PTR;
        while (PREPTR != nullptr && PREPTR->data != NUM) {
            PREPTR = PTR;
            PTR = PTR->next;
        }
        if (PREPTR != nullptr && PTR != nullptr) {
            PREPTR->next = PTR->next;
            delete PTR;
        }
    }
    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << "nullptr" << endl;
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
    int NUM = 2;
    linkedList.deleteNodeAfter(NUM);
    cout << "Linked list after deleting the node after " << NUM << ":" << endl;
    linkedList.display();
    return 0;
}
