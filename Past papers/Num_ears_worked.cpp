//Write a program that asks the user for the number of years, from 1 to 40, that he or she has(4) worked.If the urer enters a value that doesn't fall in that range, print an error and terminate the program early. Otherwise, print a message that says the following Assuming that the user enters 11: You have worked 11 years If the user enters 1, print the singular of the message, like this: You have worked 1 year
#include <iostream>
using namespace std;
int main() {
	int Yr;
	cin >> Yr;
	if (Yr > 1 && Yr <= 40) {
		cout << "You have worked " << Yr << " years.";

	}
	else if (Yr == 1) {
		cout << "You have worked " << Yr << " year.";

	}

	else {
		cout << "Error";
	}
}
