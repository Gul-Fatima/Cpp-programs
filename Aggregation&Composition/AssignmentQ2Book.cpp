#include <iostream>
#include <cstring>
using namespace std;

class Book {
    int pId;
    char author[20], title[20];
    int Sub;
public:
    Book() : pId(-1), Sub(-1) {
        strcpy_s(author, "");
        strcpy_s(title, "");
    }
    Book(int pid, const char* au, const char* ti, int sub) : pId(pid), Sub(sub) {
        strcpy_s(author, au);
        strcpy_s(title, ti);
    }
    int getid() const { return pId; }
    int getSub() const { return Sub; }
    const char* gettitle() const { return title; }
    const char* getauthor() const { return author; }
    void setid(int id) { pId = id; }
    void setSub(int s) { Sub = s; }
    void setauthor(const char* au) { strcpy_s(author, au); }
    void settitle(const char* ti) { strcpy_s(title, ti); }
};

class Library {
    Book book[50];
    int n = 0;
public:
    void addBook(int pid, const char* au, const char* ti, int sub) {
        for (int i = 0; i < n; i++) {
            if (pid == book[i].getid()) {
                cout << "Book already exists." << endl;
                return; // Exit function if the book exists
            }
        }
        if (n < 50) { // Ensure we don't exceed the array size
            book[n++] = Book(pid, au, ti, sub);
        }
        else {
            cout << "Library is full." << endl;
        }
    }

    void editBook(int pid, const char* au, const char* ti, int sub) {
        for (int i = 0; i < n; i++) {
            if (pid == book[i].getid()) {
                book[i].setSub(sub);
                book[i].settitle(ti);
                book[i].setauthor(au);
                return; // Exit function after editing
            }
        }
        cout << "Book not found" << endl;
    }

    void delBook(int pid) {
        for (int i = 0; i < n; i++) {
            if (pid == book[i].getid()) {
                for (int j = i; j < n - 1; j++) {
                    book[j] = book[j + 1];
                }
                n--;
                return; // Exit function after deleting
            }
        }
        cout << "Book not found" << endl;
    }

    void display() const {
        for (int i = 0; i < n; i++) {
            cout << "Book - " << i + 1 << " : " << book[i].gettitle() << endl;
        }
    }
};

int main() {
    Library l;
    l.addBook(3, "bookA", "autorA", 7);
    l.addBook(2, "bookB", "autorA", 17);
    l.addBook(1, "bookC", "autorA", 71);
    l.delBook(4);
    l.delBook(3);
    l.display();
    return 0;
}
