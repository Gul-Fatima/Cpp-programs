Question: implement a stack data structure using two queues the stack should support operations like push(inserting an element),
pop(removing  newly added element), top(retrieving the top element without removing it), empty(checking if the stack is empty)

#include <iostream>
using namespace std;

class Stack {
private:
    int arr[25]; // Array to store stack elements
    int size;    // Current size of the stack

public:
    Stack() : size(0) {} // Constructor to initialize size to 0

    // Push function to add an element to the stack
    void push(int val) {
        if (size == 25) {
            cout << "Stack overflow" << endl;
            return;
        }
        arr[size++] = val;
    }

    // Pop function to remove the top element from the stack
    void pop() {
        if (size == 0) {
            cout << "Stack is empty" << endl;
            return;
        }
        size--;
    }

    // Top function to get the top element of the stack
    int top() {
        if (size == 0) {
            cout << "Stack is empty" << endl;
            return -1; // Return -1 if stack is empty
        }
        return arr[size - 1];
    }

    // Empty function to check if the stack is empty
    bool empty() {
        return size == 0;
    }

    // Display function to print the stack elements
    void display() {
        // Displaying stack from top to bottom (LIFO)
        for (int i = size - 1; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout << "Top element: " << st.top() << endl; // Should print 5

    st.pop();

    cout << "Top element after pop: " << st.top() << endl; // Should print 4

    if (st.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    st.display(); // Should print 4 3 2 1

    return 0;
}
