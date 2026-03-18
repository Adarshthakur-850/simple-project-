class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class CircularLinkedList:
    def __init__(self):
        self.head = None

    def append(self, data):
        new_node = Node(data)
        if not self.head:
            self.head = new_node
            new_node.next = self.head
        else:
            current = self.head
            while current.next != self.head:
                current = current.next
            current.next = new_node
            new_node.next = self.head

    def display(self):
        current = self.head
        while current:
            print(current.data, end=" -> ")
            current = current.next
            if current == self.head:
                break
        print("...")


circular_list = CircularLinkedList()
circular_list.append(1)
circular_list.append(2)
circular_list.append(3)
circular_list.append(4)

circular_list.display()
