#include <iostream>
#include <stack>
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
    bool isPalindrome() {
        if (!head || !head->next) {
            return true;
        }
        stack<int> s;
        Node* slow = head;
        Node* fast = head;
        while (fast && fast->next) {
            s.push(slow->data);
            slow = slow->next;
            fast = fast->next->next;
        }
        if (fast != nullptr) {
            slow = slow->next;
        }
        while (slow) {
            int top = s.top();
            s.pop();
            if (top != slow->data) {
                return false;
            }
            slow = slow->next;
        }
        return true;
    }
};
int main() {
    LinkedList linkedList;
    linkedList.insert(1);
    linkedList.insert(2);
    linkedList.insert(3);
    linkedList.insert(2);
    linkedList.insert(1);
    if (linkedList.isPalindrome()) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }
    return 0;
}
