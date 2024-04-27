#include <iostream>
#include <conio.h>
using namespace std;
struct Student {
    int rollNumber;
    string name;
    int age;
    float marks;
};
int main() {

    Student arr[3]; 
    for (int i = 0; i < 3; i++) {
        cout << "\tStudent " << i + 1 << " Details" << endl;
        cout << "Enter roll number: ";
        cin >> arr[i].rollNumber;
        cout << "Enter name: ";
        cin >> arr[i].name;
        cout << "Enter age: ";
        cin >> arr[i].age;
        cout << "Enter marks: ";
        cin >> arr[i].marks;
    }
    for (int i = 0; i < 3; i++) {
        cout << "\tStudent " << i + 1 << " Details" << endl;
        cout << "Roll number: " << arr[i].rollNumber << endl;
        cout << "Name: " << arr[i].name << endl;
        cout << "Age: " << arr[i].age << endl;
        cout << "Marks: " << arr[i].marks << endl;
    }
    int maxIndex = 0;
    for (int i = 1; i < 3; i++) {
        if (arr[i].marks > arr[maxIndex].marks) {
            maxIndex = i;
        }
    }
    cout << "\nStudent with the highest marks:" << endl;
    cout << "Name: " << arr[maxIndex].name << endl;
    cout << "Marks: " << arr[maxIndex].marks << endl;
    _getch();
    return 0;
}
