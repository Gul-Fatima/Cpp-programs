//To find the sum of all elements in a 2D array, we iterate through each element of the array and add it to a running total.This process ensures that we accumulate the sum of all elements.Let’s  consider a 2D array matrix with dimensions ROW x COL.
//matrix = [
//	[1, 2, 3],
//		[4, 5, 6],
//		[7, 8, 9]
//]
//The sum of all elements in the matrix is 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 = 45.

#include <iostream>
#include <conio.h>
using namespace std;
const int ROWS = 3;
const int COLS = 3;
int sumOfMatrix(int matrix[ROWS][COLS]) {
    int totalSum = 0;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            totalSum += matrix[i][j];
        }
    }
    return totalSum;
}
int main() {
    cout << "Gul Fatima, SE-23007" << endl;
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << "The sum of all elements in the matrix is " << sumOfMatrix(matrix) << endl;
    _getch();
    return 0;
}



