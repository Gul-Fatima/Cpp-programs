#include <iostream>
#include <conio.h>
using namespace std;
int* findMax(int arr[], int size) {
    if (size == 0) 
        return nullptr;
    int* maxPtr = &arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > *maxPtr) {
            maxPtr = &arr[i];        }
    }
    return maxPtr; 
}
int main() {
    int arr[] = { 1, 5, 3, 7, 2, 9 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int* maxElementPtr = findMax(arr, size);
    if (maxElementPtr != nullptr) {
        cout << "Maximum element in the array: " << *maxElementPtr << endl;
    }
    else {
        cout << "Array is empty." << endl;
    }
    _getch();
    return 0;
}

