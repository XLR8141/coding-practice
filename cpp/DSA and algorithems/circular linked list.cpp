#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

Node* head = NULL;
Node* tail = NULL;

void insert(int val) {
    Node* newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
        tail->next = head;  // make it circular
    } else {
        tail->next = newNode;
        tail = newNode;
        tail->next = head;  // keep circular connection
    }
}

void display() {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;
    cout << "Circular Linked List: ";
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << "(back to head)" << endl;
}

int main() {
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);

    display();

    return 0;
}

