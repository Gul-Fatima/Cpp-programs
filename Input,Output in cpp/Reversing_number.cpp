#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int number, originalNumber, reverseNumber = 0;
    cout << "Enter a two-digit integer: ";
    cin >> number;
    originalNumber = number;
    while (number != 0) {
        int remainder = number % 10;
        reverseNumber = reverseNumber * 10 + remainder;
        number /= 10;
    }
    cout << "The reverse of " << originalNumber << " is: " << reverseNumber << endl;
    _getch();
    return 0;
}
