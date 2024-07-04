#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
    vector<int> v;
    int sze; // Size of the stack

public:
    Stack() : sze(0) {} // Constructor to initialize size to 0

    // Push function to add an element to the stack
    void push(int val) {
        v.push_back(val);
        sze++;
    }

    // Pop function to remove the top element from the stack
    void pop() {
        if (!v.empty()) {
            v.pop_back();
            sze--;
        }
    }

    // Top function to get the top element of the stack
    int top() {
        if (!v.empty()) {
            return v.back();
        }
        return -1; // Return -1 if stack is empty
    }

    // Empty function to check if the stack is empty
    bool empty() {
        return sze == 0;
    }

    // Display function to print the stack elements
    void display() {
        // Displaying stack from top to bottom (LIFO)
        for (int i = sze - 1; i >= 0; i--) {
            cout << v[i] << " ";
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
    }
    else {
        cout << "Stack is not empty" << endl;
    }

    st.display(); // Should print 4 3 2 1

    return 0;
}
