#include <iostream>
using namespace std;
int main() {
	int n = 5;
	int start = 1;
	for (int i = 1; i <= n; i++)
	{
		//no
		for (int j = 1; j <= i; j++)
		{
			cout << start << " ";
			start += 1;
		}
		
		cout << endl;
	}
}
