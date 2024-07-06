#include <iostream>
using namespace std;

int main() {
    int arr[8] = { 1, 3, 2, 4, 3, 2, 4, 6 };
    int size = sizeof(arr) / sizeof(arr[0]);

    // Boolean array to track duplicates
    bool printed[8] = { false };  // Initialize all elements to false

    cout << "Duplicates in the array are: ";
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j] && !printed[j]) {
                cout << arr[i] << " ";
                printed[j] = true;  // Mark as printed to avoid duplicates in output
            }
        }
    }

    cout << endl;
    return 0;
}
