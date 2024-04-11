#include <iostream>
#include <conio.h> 

using namespace std;

int main() {
    int length, breadth;
    cout << "Enter the length of rectangle : ";
    cin >> length;
    cout << "Enter the breadth of rectangle : ";
    cin >> breadth;
    cout << "The area of rectangle having length " << length << " units and breadth " << breadth << " units is " << length * breadth <<" square units.";
    _getch(); 
    return 0;
}


