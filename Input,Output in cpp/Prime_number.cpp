#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int number;
    cout << "Enter a number to check if it's prime: ";
    cin >> number;

    bool isPrime = true;
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime && number > 1) {
        cout << number << " is a prime number" << endl;
    }
    else {
        cout << number << " is not a prime number" << endl;
    }

    _getch();
    return 0;
}
