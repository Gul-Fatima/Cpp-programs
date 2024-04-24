#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    cout << "Gul Fatima, SE-23007" << endl;
    int number;

    cout << "Enter the number to generate multiplication table: ";
    cin >> number;

    cout << "Multiplication table of " << number << ":\n";
    for (int i = 1; i <= 10; ++i) {
        cout << number << " x " << i << " = " << (number * i) << endl;
    }
    _getche();
    return 0;
}
