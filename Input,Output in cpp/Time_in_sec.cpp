#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int seconds, hours, minutes, remaining_seconds;
    cout << "Enter the time in seconds: ";
    cin >> seconds;
    hours = seconds / 3600; // 1 hour = 3600 seconds
    seconds = seconds % 3600;
    minutes = seconds / 60; // 1 minute = 60 seconds
    remaining_seconds = seconds % 60;
    cout << "Hours in time is: " << hours << endl;
    cout << "Minutes in time is: " << minutes << endl;
    cout << "Seconds in time is: " << remaining_seconds << endl;
    _getch();
    return 0;
}
