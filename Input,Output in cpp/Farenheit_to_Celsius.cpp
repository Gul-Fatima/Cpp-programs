#include <iostream>
#include <conio.h>
using namespace std;
int main() {
    float fahrenheit, celsius;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5 / 9;
    cout << "Temperature in Celsius: " << celsius << "°C" << endl;
    _getch();
    return 0;
}
