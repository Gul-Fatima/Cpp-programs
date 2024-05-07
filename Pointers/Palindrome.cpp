#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;
bool isPalindrome(const char* str) {
    if (str == nullptr) // Check for null pointer
        return false;
    int length = strlen(str);
    const char* front = str;
    const char* back = str + length - 1;
    while (front < back) {
        if (*front != *back)
            return false;
        front++;
        back--;
    }
    return true;
}
int main() {
    char input[100];
    cout << "Enter a string: ";
    cin.getline(input, 100);
    if (isPalindrome(input)) {
        cout << "\"" << input << "\" is a palindrome." << endl;
    }
    else {
        cout << "\"" << input << "\" is not a palindrome." << endl;
    }
    _getch();
    return 0;
}
