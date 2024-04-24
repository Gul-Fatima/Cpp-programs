#include <iostream>
#include <conio.h>
using namespace std;
int main() {
    char op;
    float num1, num2;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter first numbers: ";
    cin >> num1;
    cout << "Enter second numbers: ";
    cin >> num2;
    switch (op) {
    case '+':
        cout << "Result: " << num1 << " + " << num2 << " = " << (num1 + num2);
        break;
    case '-':
        cout << "Result: " << num1 << " - " << num2 << " = " << (num1 - num2);
        break;
    case '*':
        cout << "Result: " << num1 << " * " << num2 << " = " << (num1 * num2);
        break;
    case '/':
        if (num2 != 0)
            cout << "Result: " << num1 << " / " << num2 << " = " << (num1 / num2);
        else
            cout << "Error: Division by zero!";
        break;
    default:
        cout << "Error: Invalid operator!";
    }
    _getche();
    return 0;
}
