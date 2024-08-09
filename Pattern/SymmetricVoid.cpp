#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Top half of the diamond
    for (int i = n; i > 0; i--) {
        // Left stars
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        // Middle spaces
        for (int j = 0; j < 2 * (n - i); j++) {
            cout << " ";
        }
        // Right stars
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Bottom half of the diamond
    for (int i = 1; i <= n; i++) {
        // Left stars
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        // Middle spaces
        for (int j = 0; j < 2 * (n - i); j++) {
            cout << " ";
        }
        // Right stars
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
