#include <iostream>
using namespace std;

int main() {
    int numberOfShirts;
    double totalCost;
    const double pricePerShirt = 12.0;

    cout << "How many shirts would you like? ";
    cin >> numberOfShirts;

    if (numberOfShirts >= 0) {
        // Calculate total cost based on quantity and apply discounts
        if (numberOfShirts < 5) {
            totalCost = numberOfShirts * pricePerShirt; // No discount
        } else if (numberOfShirts <= 10) {
            totalCost = numberOfShirts * pricePerShirt * 0.9; // 10% discount
        } else if (numberOfShirts <= 20) {
            totalCost = numberOfShirts * pricePerShirt * 0.85; // 15% discount
        } else if (numberOfShirts <= 30) {
            totalCost = numberOfShirts * pricePerShirt * 0.8; // 20% discount
        } else {
            totalCost = numberOfShirts * pricePerShirt * 0.75; // 25% discount
        }

        cout << "The cost per shirt is $" << pricePerShirt << " and the total cost is $" << totalCost << endl;
    } else {
        cout << "Invalid Input: Please enter a nonnegative integer." << endl;
    }

    return 0;
}
