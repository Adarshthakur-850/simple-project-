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
    LinkedList selectOddNodes() {
        LinkedList oddList;
        Node* current = head;
        while (current) {
            if (current->data % 2 != 0) {
                oddList.insert(current->data);
            }
            current = current->next;
        }
        return oddList;
    }
    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};
int main() {
    LinkedList linkedList;
    int numNodes;
    cout << "Enter the number of nodes: ";
    cin >> numNodes;
    for (int i = 0; i < numNodes; i++) {
        int data;
        cout << "Enter the value for node " << i + 1 << ": ";
        cin >> data;
        linkedList.insert(data);
    }
    cout << "Original linked list:" << endl;
    linkedList.display();
    LinkedList oddNodes = linkedList.selectOddNodes();
    cout << "Odd nodes from the list:" << endl;
    oddNodes.display();
    return 0;
}

