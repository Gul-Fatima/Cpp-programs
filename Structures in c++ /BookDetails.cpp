#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
struct Book {
    string title;
    string author;
    string genre;
    int yearOfPublication; };
int main() {
    Book arr[3];
    for (int i = 0; i < 3; i++) {
        cout << "\tBook " << i + 1 << " Details" << endl;
        cout << "Enter title: ";
        cin.ignore();
        getline(cin, arr[i].title);
        cout << "Enter author: ";
        getline(cin, arr[i].author);
        cout << "Enter genre: ";
        getline(cin, arr[i].genre);
        cout << "Enter year of publication: ";
        cin >> arr[i].yearOfPublication;    }
    cout << "\nDetails of all books:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Book " << i + 1 << " Details" << endl;
        cout << "Title: " << arr[i].title << endl;
        cout << "Author: " << arr[i].author << endl;
        cout << "Genre: " << arr[i].genre << endl;
        cout << "Year of Publication: " << arr[i].yearOfPublication << endl;     }
    int earliestYearIndex = 0;
    for (int i = 1; i < 3; i++) {
        if (arr[i].yearOfPublication < arr[earliestYearIndex].yearOfPublication) {
            earliestYearIndex = i;         }
    }
    cout << "Book with the earliest publication year: " << arr[earliestYearIndex].title << " by " << arr[earliestYearIndex].author << endl;
    _getch();
    return 0;
}
