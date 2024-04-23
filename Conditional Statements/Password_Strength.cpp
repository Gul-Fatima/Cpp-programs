#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;

bool UpperCase(char ch) {
    return (ch >= 'A' && ch <= 'Z'); }
bool LowerCase(char ch) {
    return (ch >= 'a' && ch <= 'z'); }
bool Digit(char ch) {
    return (ch >= '0' && ch <= '9'); }
bool SpecialChar(char ch) {
    return ((ch >= 33 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126)); }

bool ValidPassword(char password[]) {
    int len = strlen(password);
    bool Upper = false, Lower = false, Dig = false, Special = false;

    if (len < 8)
        return false;
    for (int i = 0; i < len; ++i) {
        if (UpperCase(password[i]))
            Upper = true;
        else if (LowerCase(password[i]))
            Lower = true;
        else if (Digit(password[i]))
            Dig = true;
        else if (SpecialChar(password[i]))
            Special = true;
    }
    return (Upper && Lower && Dig && Special);
}

int main() {
    char password[20];
    cout << "Enter your password: ";
    cin.getline(password, 20);

    if (ValidPassword(password)) {
        cout << "Password is strong!" << endl;
    }
    else {
        cout << "Password is weak. Kindly follow the criteria.  " << endl;
    }
    _getch();
    return 0;
}
