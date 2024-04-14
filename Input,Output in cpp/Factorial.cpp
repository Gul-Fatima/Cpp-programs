#include <iostream>
#include <conio.h>
using namespace std;

int facto(int n) {
    int temp = 1;
    for (int i = 2; i <= n; i++)
    {
        temp = temp * i;
    }
    return temp;
}
int main() {
    int number;
    cout << "Enter a number : ";
    cin >> number;
    cout << "The factorial of " << number << " is " << facto(number) << endl;
    _getch();
    return 0;
}
