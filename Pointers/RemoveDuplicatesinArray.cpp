#include <conio.h>
#include <iostream>
#include <set>
using namespace std;
void removeDuplicates(int arr[], int& size) {
    if (size <= 1) // If array has 0 or 1 element, no duplicates to remove
        return;
    set<int> uniqueElements(arr, arr + size);
    int newSize = uniqueElements.size();
    copy(uniqueElements.begin(), uniqueElements.end(), arr);
    size = newSize;
}
int main() {
    int arr[] = { 1, 2, 3, 2, 4, 5, 1, 6, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    removeDuplicates(arr, size);
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    _getch();
    return 0;
}

