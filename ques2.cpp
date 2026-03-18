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
  temp->next = temp;
  head = temp;

  for (int i = 1; i < n; i++) {
    Node* newNode = new Node;
    newNode->data = i + 1;
    newNode->next = head;
    head->next = newNode;
    head = newNode;
  }
}

void deleteNode(Node* node) {
  Node* curr = head;
  Node* prev = NULL;

  while (curr != node) {
    prev = curr;
    curr = curr->next;
  }

  if (curr == head) {
    head = curr->next;
  } else {
    prev->next = curr->next;
  }

  free(curr);
}

int main() {
  int n;
  cout << "Enter the number of nodes: ";
  cin >> n;

  createList(n);

  cout << "The original list is: ";
  printList();

  int x;
  cout << "Enter the value of the node to be deleted: ";
  cin >> x;

  Node* node = head;
  while (node->data != x) {
    node = node->next;
  }

  deleteNode(node);

  cout << "The list after deleting the node is: ";
  printList();

  return 0;
}

void printList() {
  Node* temp = head;
  if (head == NULL) {
    cout << "The list is empty.";
    return;
  }

  do {
    cout << temp->data << " ";
    temp = temp->next;
  } while (temp != head);

  cout << endl;
}
