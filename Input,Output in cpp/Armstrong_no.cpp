#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0;
    int original_n = n;
    int num_digits = 0;
        // Count the number of digits in the original number
    while (original_n != 0) {
        original_n /= 10;
        num_digits++;
    }
        original_n = n; // Reset original_n to the original value
    while (original_n > 0) {
        int lstdig = original_n % 10;
        sum += pow(lstdig, num_digits);
        original_n /= 10;
    }
    if (sum == n) {
        cout << n << " is an Armstrong number." << endl;
    }
    else {
        cout << n << " is not an Armstrong number." << endl;
    }
    _getch();
    return 0;
}
