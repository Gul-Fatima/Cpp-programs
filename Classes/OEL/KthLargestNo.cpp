//Find the kth largest number in the array.e.g if array = [1, 5, 2, 6, 4, 3] and k = 2 then output should be 5 if K = 4 THEN output should be 3
#include<iostream>
using namespace std;
void sort(int a[6],int size) {
	for (int i = 0;i < size;i++) {
	//int temp = a[0];
	for (int j = i+1; j < size; j++)
	{

		if (a[i] >a[j]) {
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
		
	}
	}

}
int main() {
	int arr[6] = { 1, 5, 2, 6, 4, 3 };
	int s = sizeof(arr) / sizeof(arr[0]);
	sort(arr,s);
	for (int i = 0; i < s; i++)
	{
		cout << arr[i] << " ";
	}
	int k = 2;
	cout << arr[s-k];
}
