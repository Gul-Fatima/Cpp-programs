#include <iostream>
#include <conio.h>
using namespace std;

float Telephone_Bill(int calls) {
    float bill = 0.0;
    if (calls <= 100) {
        bill = 200.0;
    }
    else if (calls <= 150) {
        bill = 200.0 + (calls - 100) * 0.60;
    }
    else if (calls <= 200) {
        bill = 200.0 + 50 * 0.60 + (calls - 150) * 0.50;
    }
    else {
        bill = 200.0 + 50 * 0.60 + 50 * 0.50 + (calls - 200) * 0.40;
    }
    return bill;
}

int main() {
    int no_of_calls;
    cout << "Enter the number of calls: ";
    cin >> no_of_calls;

    float totalBill = Telephone_Bill(no_of_calls);
    cout << "Monthly telephone bill: Rs. " << totalBill << endl;
    _getch();
    return 0;
}
