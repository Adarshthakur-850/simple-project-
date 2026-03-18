#include <iostream>
using namespace std;

#define max_heap_size 100
int heap[max_heap_size];
int heap_size = 0;

void maxheap(int index) {
    while (index > 0 && heap[index] > heap[(index - 1) / 2]) {
        swap(heap[index], heap[(index - 1) / 2]);
        index = (index - 1) / 2;
    }
}

void insert(int value) {
    if (heap_size >= max_heap_size) {
        cout << "Overflow" << endl;
        return;
    }
    heap[heap_size] = value;
    maxheap(heap_size);
    heap_size++;
}

void heapify(int index) {
    int leftchild = 2 * index + 1;
    int rightchild = 2 * index + 2;
    int largest = index;
    if (leftchild < heap_size && heap[leftchild] > heap[largest]) {
        largest = leftchild;
    }
    if (rightchild < heap_size && heap[rightchild] > heap[largest]) {
        largest = rightchild;
    }
    if (largest != index) {
        swap(heap[index], heap[largest]);
        heapify(largest);
    }
}

int deletemax() {
    if (heap_size == 0) {
        cout << "Heap underflow" << endl;
        return -1; // Return a sentinel value to indicate an error
    }
    int deletevalue = heap[0];
    heap_size--;
    heap[0] = heap[heap_size];
    heapify(0);
    return deletevalue;
}

int main() {
    int count, data;

    cout << "Enter the count: ";
    cin >> count;

    cout << "Enter the elements: ";
    for (int i = 0; i < count; i++) {
        cin >> data;
        insert(data);
    }

    cout << "Max heap after insertions: ";
    for (int i = 0; i < heap_size; i++) {
        cout << heap[i] << " ";
    }
    cout << endl;

    int max = deletemax();
    if (max != -1) {
        cout << "Deleted max element: " << max << endl;
    }

    cout << "Max heap after deletion: ";
    for (int i = 0; i < heap_size; i++) {
        cout << heap[i] << " ";
    }
    cout << endl;

    return 0;
}
