#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

string ReverseString(string value) {
    string reversed_string;
    for (int i = value.length() - 1; i >= 0; i--) {
        reversed_string += value[i];
    }
    return reversed_string;
}

int main() {
    string input_string;
    cout << "Enter a string: ";
    getline(cin, input_string);

    string reversed = ReverseString(input_string);

    cout << "Reversed string: " << reversed << endl;
    _getch();
    return 0;
}
