#include <iostream>
#include <conio.h>
using namespace std;
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int firstValue = 5;
    int secondValue = 10;
    int* a = &firstValue;
    int* b = &secondValue;
    cout << "Before swapping:" << endl;
    cout << "firstValue = " << *a << ", secondValue = " << *b << endl;
    swap(a, b);
    cout << "After swapping:" << endl;
    cout << "firstValue = " << *a << ", secondValue = " << *b << endl;
    _getch();
    return 0;
}
