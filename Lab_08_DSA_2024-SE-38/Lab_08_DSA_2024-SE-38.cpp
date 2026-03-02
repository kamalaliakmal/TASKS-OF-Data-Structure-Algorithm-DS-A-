//  TASK 01  (Stack Using Array)

//#include <iostream>
//using namespace std;
//
//class Stack {
//    int arr[100];
//    int top;
//public:
//    Stack() {
//        top = -1;
//    }
//    
//    bool isEmpty() {
//        return (top == -1);
//    }
//    
//    bool isFull() {
//        return (top == 99);
//    }
//    
//    void push(int value) {
//        if (isFull()) {
//            cout << "Stack is full! Cannot push " << value << endl;
//            return;
//        }
//        arr[++top] = value;
//    }
//    
//    void pop() {
//        if (isEmpty()) {
//            cout << "Stack is empty! Cannot pop" << endl;
//            return;
//        }
//        top--;
//    }
//    
//    int peek() {
//        if (isEmpty()) {
//            cout << "Stack is empty!" << endl;
//            return -1;
//        }
//        return arr[top];
//    }
//};
//
//int main() {
//    Stack s;
//    
//    // Test basic operations
//    s.push(10);
//    s.push(20);
//    s.push(30);
//    
//    cout << "Top element: " << s.peek() << endl;  // 30
//    
//    s.pop();
//    cout << "After pop, Top element: " << s.peek() << endl;  // 20
//    
//    s.pop();
//    s.pop();
//    
//    cout << "After all pops, Top element: " << s.peek() << endl;  // -1
//    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;  // Yes
//    
//    return 0;
//}

//  TASK 02  ( Stack Using Linked List)

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
    Node* top;
public:
    Stack() {
        top = NULL;
    }
    
    bool isEmpty() {
        return (top == NULL);
    }
    
    void push(int value) {
        Node* temp = new Node();
        temp->data = value;
        temp->next = top;
        top = temp;
    }
    
    void pop() {
        if (isEmpty()) return;
        Node* temp = top;
        top = top->next;
        delete temp;
    }
    
    int peek() {
        if (isEmpty()) return -1;
        return top->data;
    }
};

int main() {
    Stack s;
    
    // Test basic operations
    s.push(10);
    s.push(20);
    s.push(30);
    
    cout << "Top element: " << s.peek() << endl;  // 30
    
    s.pop();
    cout << "After pop, Top element: " << s.peek() << endl;  // 20
    
    s.pop();
    s.pop();
    
    cout << "After all pops, Top element: " << s.peek() << endl;  // -1
    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;  // Yes
    
    return 0;
}









