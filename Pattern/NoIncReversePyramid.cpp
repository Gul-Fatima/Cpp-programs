#include<iostream>
using namespace std;

void main() {
	int n = 5;
	
	for (int i = 1; i <=n; i++)
	{
		for (int j = n; j >=i ; j--)
		{
			cout << 6-j;
		}
		cout << endl;
	}
}


