#include <iostream>
#include <conio.h>
using namespace std;
int main() {
    int dayNumber;
    cout << "Enter the day number (1 for Monday, 2 for Tuesday, ..., 7 for Sunday): ";
    cin >> dayNumber;
    switch (dayNumber) {
    case 1:
        cout << "Monday\n";
        break;
    case 2:
        cout << "Tuesday\n";
        break;
    case 3:
        cout << "Wednesday\n";
        break;
    case 4:
        cout << "Thursday\n";
        break;
    case 5:
        cout << "Friday\n";
        break;
    case 6:
        cout << "Saturday\n";
        break;
    case 7:
        cout << "Sunday\n";
        break;
    default:
        cout << "Invalid day number!\n";
        break;
    }
    return 0;
}
