
   //           TASK 01 (Singly linkedlist)
   
//#include<iostream>
//using namespace std;
//// Node Structure
//struct Node{
//	
//	int data;
//	Node* next;
//	
//};
//// Function to display the linked list
//void display(Node* head){
//
//  Node*temp=head;
//  cout<<"Linked List:";
//   while(temp!=NULL){
//	cout<<temp->data<<"->";
//	temp=temp->next;	
//}
//
//}
//int main(){
//// Step 01: Create nodes
//    Node*first=new Node();
//    Node*second=new Node();
//	Node*third=new Node();
//// Step 02: Assign data
//    first->data=10;	
//    second->data=20;	
//    third->data=30;	
//// Step 03: Link nodes together
//    first->next=second;
//    second->next=third;
//    third->next=NULL;
//// Step 04: Display
//    display(first);
//    
//    return 0;
//}



    //           TASK 02 (Doubly linkedlist)

#include <iostream>
using namespace std;

// --- Node Structure ---
struct Node {
    int data;
    Node* next; // Pointer to the next node
    Node* prev; // Pointer to the previous node
};

// Global pointers for the head and tail of the list
Node* head = NULL;
Node* tail = NULL;

// 1. Insert a node at the beginning of the list
void insertAtBeginning(int newData) {
    // Create the new node
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->prev = NULL; // New node will be the first, so its prev is NULL

    if (head == NULL) {
        // List is empty
        head = newNode;
        tail = newNode;
        newNode->next = NULL;
    } else {
        // List is not empty
        newNode->next = head;
        head->prev = newNode; // Link the current head's prev to the new node
        head = newNode;      // Update head to the new node
    }
    cout << "Inserted " << newData << " at the beginning." << endl;
}

// 2. Insert a node at the end of the list
void insertAtEnd(int newData) {
    // Create the new node
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = NULL; // New node will be the last, so its next is NULL

    if (tail == NULL) {
        // List is empty
        head = newNode;
        tail = newNode;
        newNode->prev = NULL;
    } else {
        // List is not empty
        newNode->prev = tail;  // Link the new node's prev to the current tail
        tail->next = newNode;  // Link the current tail's next to the new node
        tail = newNode;        // Update tail to the new node
    }
    cout << "Inserted " << newData << " at the end." << endl;
}

// 3. Delete a node from the beginning of the list
void deleteFromBeginning() {
    if (head == NULL) {
        cout << "List is empty. Deletion failed." << endl;
        return;
    }

    Node* temp = head;
    cout << "Deleted " << temp->data << " from the beginning." << endl;

    if (head == tail) {
        // Only one node in the list
        head = NULL;
        tail = NULL;
    } else {
        // More than one node
        head = head->next;
        head->prev = NULL; // The new head has no previous node
    }

    delete temp; // Free the memory of the old head
}

// 4. Display the list in forward and backward directions

// Forward Traversal (starting from head)
void displayForward() {
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = head;
    cout << "\nForward Traversal: ";
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Backward Traversal (starting from tail)
void displayBackward() {
    if (tail == NULL) {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = tail;
    cout << "Backward Traversal: ";
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }
    cout << "NULL" << endl;
}

// --- Main function to demonstrate operations ---
int main() {
    // 1 & 2: Insertion Operations
    cout << "--- Insertion Operations ---" << endl;
    insertAtBeginning(10); // List: 10
    insertAtEnd(30);       // List: 10 <-> 30
    insertAtBeginning(5);  // List: 5 <-> 10 <-> 30
    insertAtEnd(40);       // List: 5 <-> 10 <-> 30 <-> 40

    // 4: Display Operations
    displayForward();
    displayBackward();
    
    cout << "\n--- Deletion Operations ---" << endl;
    
    // 3: Deletion Operation
    deleteFromBeginning(); // Deletes 5. List: 10 <-> 30 <-> 40
    
    // 4: Display after deletion
    displayForward();
    displayBackward();

    deleteFromBeginning(); // Deletes 10. List: 30 <-> 40
    
    displayForward();
    displayBackward();
    
    // Clean up memory (optional but good practice)
    while (head != NULL) {
        deleteFromBeginning();
    }
    
    return 0;
}































