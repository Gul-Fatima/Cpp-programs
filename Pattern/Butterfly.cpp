#include <iostream>
using namespace std;
int main() {
	int n = 5;
	int start = 1;
	for (int i = 0; i <= n ; i++)
	{
		
		for (int j = 0; j <=i ; j++)
		{
			cout << "*";
		}
		for (int j = 0; j < 2*(n- i); j++)
		{
			cout << " ";
		}

		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = -1+n; i >= 0; i--)
	{

		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		for (int j = 0; j < 2 * (n - i); j++)
		{
			cout << " ";
		}

		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
