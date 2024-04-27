// Define a structure named Number with a single member num. Create two variables of this structure  type, input values for them, swap their values using a function, and display the swapped values. 

#include <iostream>
#include <conio.h>
using namespace std;
struct Number {
    int num;
};
void swap(Number& no1, Number& no2) {
    int temp = no1.num;
    no1.num = no2.num;
    no2.num = temp;
    cout << "After Swapping : " << endl;
    cout << "Number1 : " << no1.num << endl;
    cout << "Number2 : " << no2.num << endl;
}
int main() {
    Number num1, num2;
    cout << "Enter Number1: ";
    cin >> num1.num;
    cout << "Enter Number2: ";
    cin >> num2.num;
    cout << "Before Swapping : " << endl;
    cout << "Number1 : " << num1.num << endl;
    cout << "Number2 : " << num2.num << endl;
    swap(num1, num2);
    _getch();
    return 0;
}
