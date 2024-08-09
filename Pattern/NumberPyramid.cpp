#include <iostream>
using namespace std;
int main() {
	int n = 5;
	int start;
	for (int i = 1; i <= n; i++)
	{
		//no
		for (int j = 1; j <= i; j++)
		{
			cout << j;
		}
		//spaces
		for (int j = 1; j <= 2*(n-i); j++)
		{
			cout << " ";
		}
		//no
		for (int j = i; j >= 1 ; j--)
		{
			cout << j;
		}
		cout << endl;
	}
}
