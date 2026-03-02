////   TASK 01 ( Queue Using Array (Linear Queue) )
//#include <iostream>
//using namespace std;
//
//class Queue {
//    int arr[100];
//    int front, rear;
//public:
//    Queue() {
//        front = rear = -1;
//    }
//    
//    bool isEmpty() {
//        return (front == -1 || front > rear);
//    }
//    
//    bool isFull() {
//        return (rear == 99);
//    }
//    
//    void enqueue(int value) {
//        if (isFull()) {
//            cout << "Queue is full! Cannot enqueue " << value << endl;
//            return;
//        }
//        if (front == -1) front = 0;
//        arr[++rear] = value;
//    }
//    
//    void dequeue() {
//        if (isEmpty()) {
//            cout << "Queue is empty! Cannot dequeue" << endl;
//            return;
//        }
//        front++;
//    }
//    
//    int peek() {
//        if (isEmpty()) {
//            cout << "Queue is empty!" << endl;
//            return -1;
//        }
//        return arr[front];
//    }
//};
//
//int main() {
//    Queue q;
//    
//    // Simple test cases
//    q.enqueue(10);
//    q.enqueue(20);
//    q.enqueue(30);
//    
//    cout << "Front element: " << q.peek() << endl;
//    
//    q.dequeue();
//    cout << "Front element after dequeue: " << q.peek() << endl;
//    
//    q.dequeue();
//    q.dequeue();
//    
//    // Test empty queue
//    cout << "Testing empty queue peek: ";
//    q.peek();
//    
//    return 0;
//}
//
//   TASK 02 ( Circular Queue )
//
//#include <iostream>
//using namespace std;
//
//class CircularQueue {
//    int arr[100];
//    int front, rear;
//    int capacity;
//public:
//    CircularQueue() {
//        front = rear = -1;
//        capacity = 100;
//    }
//    
//    bool isFull() {
//        return ((rear + 1) % capacity == front);
//    }
//    
//    bool isEmpty() {
//        return (front == -1);
//    }
//    
//    void enqueue(int value) {
//        if (isFull()) return;
//        if (isEmpty()) {
//            front = rear = 0;
//        } else {
//            rear = (rear + 1) % capacity;
//        }
//        arr[rear] = value;
//    }
//    
//    void dequeue() {
//        if (isEmpty()) return;
//        if (front == rear) {
//            front = rear = -1;
//        } else {
//            front = (front + 1) % capacity;
//        }
//    }
//    
//    int peek() {
//        if (isEmpty()) return -1;
//        return arr[front];
//    }
//};
//
//int main() {
//    CircularQueue cq;
//    
//    // Simple operations
//    cq.enqueue(5);
//    cq.enqueue(10);
//    cq.enqueue(15);
//    
//    cout << "Front: " << cq.peek() << endl;  // 5
//    
//    cq.dequeue();
//    cout << "After dequeue, Front: " << cq.peek() << endl;  // 10
//    
//    cq.enqueue(20);
//    cq.enqueue(25);
//    
//    cout << "Front after more enqueues: " << cq.peek() << endl;  // 10
//    
//    return 0;
//}
//   TASK 03 ( Queue Using Linked List )
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Queue {
    Node* front;
    Node* rear;
    
public:
    Queue() {
        front = rear = NULL;
    }
    
    void enqueue(int value) {
        Node* temp = new Node();
        temp->data = value;
        temp->next = NULL;
        
        if (rear == NULL) {
            front = rear = temp;
        } else {
            rear->next = temp;
            rear = temp;
        }
    }
    
    void dequeue() {
        if (front == NULL) return;
        
        Node* temp = front;
        front = front->next;
        
        if (front == NULL) rear =NULL;
        
        delete temp;
    }
    
    int peek() {
        if (front == NULL) return -1;
        return front->data;
    }
    
    bool isEmpty() {
        return front == NULL;
    }
};

int main() {
    Queue q;
    
    // Test basic operations
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    
    cout << "Front element: " << q.peek() << endl;  // 10
    
    q.dequeue();
    cout << "After dequeue, Front element: " << q.peek() << endl;  // 20
    
    q.dequeue();
    q.dequeue();
    
    cout << "After all dequeues, Front element: " << q.peek() << endl;  // -1
    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;  // Yes
    
    return 0;
}






