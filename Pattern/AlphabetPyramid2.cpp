#include <iostream>
using namespace std;
int main() {
	int n = 5;
	int start = 1;
	for (int i = n; i >= 1; i--)
	{
		for (char ch = 'A'; ch <=  'A' + i; ch++)
		{
			cout << ch << " ";
		}
		
		cout << endl;
	}
}
