#include <iostream>
#include <conio.h>
using namespace std;
int main() {
    int amount, temp;
    cout << "Enter amount in rupees: ";
    cin >> amount;
    //For 1000s
    temp = amount / 1000;
    cout << "1000's in the given amount is: " << temp << endl;
    //For 500s
    amount %= 1000; //to calculate left amount
    temp = amount / 500;
    cout << "500's in the given amount is: " << temp << endl;
    //For 100s
    amount %= 500;
    temp = amount / 100;
    cout << "100's in the given amount is: " << temp << endl;
    //For 50s
    amount %= 100;
    temp = amount / 50;
    cout << "50's in the given amount is: " << temp << endl;
    //For 10s
    amount %= 50;
    temp = amount / 10;
    cout << "10's in the given amount is: " << temp << endl;
    //For 5s
    amount %= 10;
    temp = amount / 5;
    cout << "5's in the given amount is: " << temp << endl;
    //For 2s
    amount %= 5;A
    temp = amount / 2;
    cout << "2's in the given amount is: " << temp << endl;
    //For 1
    amount %= 2;
    cout << "1's in the given amount is: " << amount << endl;
    _getch();
    return 0;
    }
