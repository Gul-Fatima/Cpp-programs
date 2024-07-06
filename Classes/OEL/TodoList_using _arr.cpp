#include <iostream>
#include <string>
using namespace std;

class List {
private:
    string* tasks;
    int size;
    int capacity;

public:
    List(int cap) : size(0), capacity(cap) {
        tasks = new string[capacity];
    }

    ~List() {
        delete[] tasks;
    }

    void addtask(const string& task) {
        if (size < capacity) {
            tasks[size] = task;
            size++;
        } else {
            cout << "Task list is full!" << endl;
        }
    }

    void done(const string& task) {
        for (int i = 0; i < size; i++) {
            if (tasks[i] == task) {
                for (int j = i; j < size - 1; j++) {
                    tasks[j] = tasks[j + 1];
                }
                size--;
                return;
            }
        }
        cout << "Task not found!" << endl;
    }

    void display() const {
        for (int i = 0; i < size; i++) {
            cout << "Task - " << i + 1 << ": " << tasks[i] << endl;
        }
    }
};

int main() {
    int capacity = 10; // Define the maximum capacity for the tasks
    List l(capacity);

    l.addtask("Do dishes");
    l.addtask("Read");
    l.addtask("Iron");

    cout << "Task list:" << endl;
    l.display();

    l.done("Read");

    cout << "Task list after marking 'Read' as done:" << endl;
    l.display();

    return 0;
}
