#include <iostream>
#include <conio.h>
using namespace std;

string charType(char ch) {
    int asciiValue = (int)ch;
    if (asciiValue >= 65 && asciiValue <= 90) {
        return "Capital Letter";
    }
    else if (asciiValue >= 97 && asciiValue <= 122) {
        return "Small Case Letter";
    }
    else if (asciiValue >= 48 && asciiValue <= 57) {
        return "Digit";
    }
    else if ((asciiValue >= 0 && asciiValue <= 47) || (asciiValue >= 58 && asciiValue <= 64) ||
        (asciiValue >= 91 && asciiValue <= 96) || (asciiValue >= 123 && asciiValue <= 127)) {
        return "Special Symbol";
    }
    else {
        return "It is an unknown value";
    }
}

int main() {
    char charInput;
    cout << "Enter a character: ";
    cin >> charInput;
    cout << "The character '" << charInput << "' is a " << charType(charInput) << endl;
    _getch();
    return 0;
}


