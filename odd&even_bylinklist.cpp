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
    LinkedList selectNodesByCriterion(bool selectEven) {
        LinkedList resultList;
        Node* current = head;

        while (current) {
            if ((current->data % 2 == 0 && selectEven) || (current->data % 2 != 0 && !selectEven)) {
                resultList.insert(current->data);
            }
            current = current->next;
        }
        return resultList;
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
    LinkedList evenNodes = linkedList.selectNodesByCriterion(true);
    LinkedList oddNodes = linkedList.selectNodesByCriterion(false);
    cout << "Even nodes from the list:" << endl;
    evenNodes.display();
    cout << "Odd nodes from the list:" << endl;
    oddNodes.display();
    return 0;
}
