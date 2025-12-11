#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
    Node* prev;
};

// Function to insert node at the end
Node* insertEnd(Node* head, int value) {
    Node* newNode = new Node();
    newNode->data = value;

    // If list is empty
    if (head == NULL) {
        newNode->next = newNode;
        newNode->prev = newNode;
        head = newNode;
        return head;
    }

    // Otherwise, insert at the end
    Node* last = head->prev;   // Last node (previous of head)
    newNode->next = head;      // New node's next points to head
    newNode->prev = last;      // New node's prev points to last
    last->next = newNode;      // Last node's next points to new node
    head->prev = newNode;      // Head's prev points to new node

    return head;
}

// Function to display list forward
void displayForward(Node* head) {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    cout << "Doubly Circular Linked List (Forward): ";
    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

// Function to display list backward
void displayBackward(Node* head) {
    if (head == NULL) return;

    cout << "Doubly Circular Linked List (Backward): ";
    Node* temp = head->prev;   // Start from last node
    do {
        cout << temp->data << " ";
        temp = temp->prev;
    } while (temp != head->prev);
    cout << endl;
}

// Main function
int main() {
    Node* head = NULL;

    // Insert nodes
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    head = insertEnd(head, 40);

    // Display in both directions
    displayForward(head);
    displayBackward(head);

    return 0;
}


























