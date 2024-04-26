//Define a structure named Rectangle with members length and width.Create a variable of this structure  type, input values for length and width, calculate the area, and display it.


#include <iostream>
#include <conio.h>
using namespace std;
struct Rectangle {
    float length;
    float width;
};
int main() {
    cout << "Gul Fatima, SE-23007" << endl;
    Rectangle rectangle1;
    cout << "Enter the length of rectangle : ";
    cin >> rectangle1.length;
    cout << "Enter the width of rectangle : ";
    cin >> rectangle1.width;
    cout << "Area of rectangle : " << rectangle1.length * rectangle1.width << " square units.";
    _getch();
    return 0;
}
