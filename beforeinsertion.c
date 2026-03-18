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

Node* insertBeforeNode(Node* head, int beforeValue, int newValue) {
    Node* new_node = new Node(newValue);

    if (head == nullptr || head->data == beforeValue) {
        new_node->next = head;
        head = new_node;
        return head;
    }

    Node* ptr = head;
    while (ptr->next != nullptr) {
        if (ptr->next->data == beforeValue) {
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
    // Create the linked list: 1 -> 2 -> 3 -> 4
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    // Print the original linked list
    std::cout << "Original Linked List: ";
    printLinkedList(head);

    // Take user input for the value before which to insert and the new value
    int beforeValue, newValue;
    std::cout << "Enter value before which to insert: ";
    std::cin >> beforeValue;
    std::cout << "Enter new value to insert: ";
    std::cin >> newValue;

    // Insert a new node with the user-given new value before the user-given node value
    head = insertBeforeNode(head, beforeValue, newValue);

    // Print the updated linked list
    std::cout << "Updated Linked List: ";
    printLinkedList(head);

    return 0;
}
