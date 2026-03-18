#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

Node* insertAfterNode(Node* head, int afterValue, int newValue) {
    Node* new_node = new Node(newValue);

    Node* ptr = head;
    while (ptr != nullptr) {
        if (ptr->data == afterValue) {
            new_node->next = ptr->next;
            ptr->next = new_node;
            break;
        }
        ptr = ptr->next;
    }

    return head;
}

void printLinkedList(Node* head) {
    Node* ptr = head;
    while (ptr != nullptr) {
        std::cout << ptr->data << " ";
        ptr = ptr->next;
    }
    std::cout << std::endl;
}

int main() {

    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);


    std::cout << "Original Linked List: ";
    printLinkedList(head);


    int afterValue, newValue;
    std::cout << "Enter value after which to insert: ";
    std::cin >> afterValue;
    std::cout << "Enter new value to insert: ";
    std::cin >> newValue;


    head = insertAfterNode(head, afterValue, newValue);


    std::cout << "Updated Linked List: ";
    printLinkedList(head);

    return 0;
}
