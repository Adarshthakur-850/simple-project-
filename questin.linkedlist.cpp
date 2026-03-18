#include <iostream>

using namespace std;

struct ListNode {
    int value;
    ListNode* next;
    ListNode(int val) : value(val), next(nullptr) {}
};

void deleteFirst(ListNode* &head) {
    if (!head)
        return;
    ListNode* temp = head;
    head = head->next;
    delete temp;
}

void deleteMiddle(ListNode* &head) {
    if (!head || !head->next)
        return;
    ListNode* slow = head;
    ListNode* fast = head;
    ListNode* prev = nullptr;
    while (fast && fast->next) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    if (prev)
        prev->next = slow->next;
    delete slow;
}

void deleteLast(ListNode* &head) {
    if (!head)
        return;
    if (!head->next) {
        delete head;
        head = nullptr;
        return;
    }
    ListNode* prev = nullptr;
    ListNode* current = head;
    while (current->next) {
        prev = current;
        current = current->next;
    }
    delete current;
    prev->next = nullptr;
}

void printLinkedList(ListNode* head) {
    ListNode* current = head;
    while (current) {
        cout << current->value;
        if (current->next)
            cout << " -> ";
        current = current->next;
    }
    cout << " -> nullptr" << endl;
}

int main() {
    ListNode* head = new ListNode(11);
    head->next = new ListNode(22);
    head->next->next = new ListNode(33);
    head->next->next->next = new ListNode(44);
    head->next->next->next->next = new ListNode(55);

    cout << "Original Linked List: ";
    printLinkedList(head);


    deleteFirst(head);
    cout << "After Deleting First Element: ";
    printLinkedList(head);


    deleteMiddle(head);
    cout << "After Deleting Middle Element: ";
    printLinkedList(head);


    deleteLast(head);
    cout << "After Deleting Last Element: ";
    printLinkedList(head);

    return 0;
}
