#include <iostream>
#include <conio.h>
using namespace std;
void max_value(int matrix[3][3]) {
	int max = matrix[0][0];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (matrix[i][j] > max) {
				max = matrix[i][j]; 
			}
		}
		cout << "Largest element in row " << i + 1 << ": " << max << endl;
	}
}

int main() {
	int matrix[3][3];
	for (int i = 0; i < 3; i++)	{
		for (int j = 0; j < 3; j++){
			cout << "Enter matrix[" << i << "][" << j << "] : " ;
			cin >> matrix[i][j];
		}
	}
	max_value(matrix);
	_getch();
	return 0;
}
