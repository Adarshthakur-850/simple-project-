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
    LinkedList selectEvenNodes() {
        LinkedList evenList;
        Node* current = head;
        while (current) {
            if (current->data % 2 == 0) {
                evenList.insert(current->data);
            }
            current = current->next;
        }
        return evenList;
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
    linkedList.insert(5);
    linkedList.insert(6);
    cout << "Original linked list:" << endl;
    linkedList.display();
    LinkedList evenNodes = linkedList.selectEvenNodes();
    cout << "Even nodes from the list:" << endl;
    evenNodes.display();
    return 0;
}
