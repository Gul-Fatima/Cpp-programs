#include <iostream>
#include <conio.h>
using namespace std;
struct Employee {
    int employeeID;
    string name;
    string department;
    int salary;
};
int main() {
    Employee arr[5];
    for (int i = 0; i < 5; i++) {
        cout << "\tEmployee " << i + 1 << " Details" << endl;
        cout << "Enter employee ID: ";
        cin >> arr[i].employeeID;
        cout << "Enter name: ";
        cin >> arr[i].name;
        cout << "Enter department: ";
        cin >> arr[i].department;
        cout << "Enter salary: ";
        cin >> arr[i].salary;
    }
    cout << "\n\nDetails of all employees:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Employee " << i + 1 << " Details" << endl;
        cout << "Employee ID: " << arr[i].employeeID << endl;
        cout << "Name: " << arr[i].name << endl;
        cout << "Department: " << arr[i].department << endl;
        cout << "Salary: " << arr[i].salary << endl;
    }
    int totalSalary = 0;
    for (int i = 0; i < 5; i++) {
        totalSalary += arr[i].salary;
    }
    float averageSalary = totalSalary / 5.0;

    cout << "\nAverage salary: " << averageSalary;

    _getch();
    return 0;
}
