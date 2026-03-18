
#include <iostream>

using namespace std;

struct Node {
  int data;
  Node* next;
};

Node* head;

void createList(int n) {
  Node* temp = new Node;
  temp->data = n;
  temp->next = NULL;
  head = temp;

  for (int i = 1; i < n; i++) {
    Node* newNode = new Node;
    newNode->data = i + 1;
    newNode->next = NULL;
    temp->next = newNode;
    temp = newNode;
  }
}

void printList() {
  Node* temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

void deleteFirstNode() {
  if (head == NULL) {
    cout << "List is empty. Cannot delete first node." << endl;
    return;
  }

  Node* temp = head;
  head = head->next;
  delete temp;
}

void deleteMiddleNode(Node* prevNode) {
  if (prevNode == NULL) {
    cout << "Cannot delete middle node. prevNode is NULL." << endl;
    return;
  }

  if (prevNode->next == NULL) {
    cout << "Cannot delete middle node. prevNode is the last node." << endl;
    return;
  }

  Node* temp = prevNode->next;
  prevNode->next = temp->next;
  delete temp;
}

void deleteLastNode() {
  if (head == NULL) {
    cout << "List is empty. Cannot delete last node." << endl;
    return;
  }

  Node* temp = head;
  while (temp->next != NULL) {
    temp = temp->next;
  }

  Node* prevNode = temp->prev;
  delete temp;
  prevNode->next = NULL;
}

int main() {
  int n;
  cout << "Enter the number of nodes: ";
  cin >> n;

  createList(n);
  cout << "Created linked list: ";
  printList();

  cout << "Deleting first node: ";
  deleteFirstNode();
  printList();

  cout << "Deleting middle node: ";
  deleteMiddleNode(head->next->next);
  printList();

  cout << "Deleting last node: ";
  deleteLastNode();
  printList();

  return 0;
}
