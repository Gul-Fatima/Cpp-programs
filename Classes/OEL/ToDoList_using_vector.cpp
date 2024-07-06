#include <iostream>
#include <vector>
#include <string>
using namespace std;

class List {
private:
    vector<string> tasks;

public:
    List() {}

    void addTask(const string& task) {
        tasks.push_back(task);
    }

    void done(const string& task) {
        for (auto it = tasks.begin(); it != tasks.end(); ++it) {
            if (*it == task) {
                tasks.erase(it);
                return;
            }
        }
        cout << "Task not found!" << endl;
    }

    void display() const {
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << "Task - " << i + 1 << ": " << tasks[i] << endl;
        }
    }
};

int main() {
    List l;

    l.addTask("Do dishes");
    l.addTask("Read");
    l.addTask("Iron");

    cout << "Task list:" << endl;
    l.display();

    l.done("Read");

    cout << "Task list after marking 'Read' as done:" << endl;
    l.display();

    return 0;
}
