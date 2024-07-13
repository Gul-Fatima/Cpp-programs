#include <iostream>
using namespace std;
int main() {
	int n1, n2;
	cout <<"n1 : ";
	cin >> n1;
	cout << "n2 : ";
	cin >> n2;
	cout << endl;

	if (n1 % n2 == int(0)) {
		cout << "True" << endl;
			}
	else {
		cout << "False";
	}
	return 0;
}
