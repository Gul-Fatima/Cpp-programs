#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>

using namespace std;

string encrypt(string text, int shift) {
    string encrypted_text = "";
    for (char ch : text) {
        if (isalpha(ch)) {
            char shifted = ch + shift;
            if ((isupper(ch) && shifted > 'Z') || (islower(ch) && shifted > 'z')) {
                shifted -= 26;  
            }
            encrypted_text += shifted;
        }
        else {
            encrypted_text += ch;
        }
    }
    return encrypted_text;
}

string decrypt(string text, int shift) {
    return encrypt(text, -shift);  
}

int main() {
    string filename;
    int shift;
    cout << "Enter filename to encrypt/decrypt: ";
    cin >> filename;
    cout << "Enter shift value: ";
    cin >> shift;

    ifstream infile(filename);
    if (!infile) {
        cerr << "Error: Unable to open file " << filename << endl;
        return 1;
    }

    string text;
    getline(infile, text, '\0');  
    infile.close();

    string encrypted_text = encrypt(text, shift);
    cout << "Encrypted text:" << endl << encrypted_text << endl;

    string decrypted_text = decrypt(encrypted_text, shift);
    cout << "Decrypted text:" << endl << decrypted_text << endl;
    _getche();
    return 0;
}
