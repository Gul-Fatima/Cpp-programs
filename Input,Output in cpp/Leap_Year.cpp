#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    // Leap year is divisible by 4, but not by 100, unless it's also divisible by 400
    bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    if (isLeapYear) {
        cout << year << " is a leap year." << endl;
    }
    else {
        cout << year << " is not a leap year." << endl;
    }
    _getch();
    return 0;
}

