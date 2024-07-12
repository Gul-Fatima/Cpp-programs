#include <iostream>
using namespace std;

int main() {
    int yearsWorked;
    
    cout << "Enter the number of years you have worked (1 to 40): ";
    cin >> yearsWorked;
    
    if (yearsWorked >= 1 && yearsWorked <= 40) {
        if (yearsWorked == 1) {
            cout << "You have worked " << yearsWorked << " year." << endl;
        } else {
            cout << "You have worked " << yearsWorked << " years." << endl;
        }
    } else {
        cout << "Error: Please enter a number between 1 and 40." << endl;
    }

    return 0;
}
