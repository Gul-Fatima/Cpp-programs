#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int ISBN;
    bool isAvailable;

public:
    Book() : title(""), author(""), ISBN(0), isAvailable(true) {}

    Book(const string& t, const string& a, int isbn)
        : title(t), author(a), ISBN(isbn), isAvailable(true) {}

    string getTitle() const {
        return title;
    }

    string getAuthor() const {
        return author;
    }

    int getISBN() const {
        return ISBN;
    }

    bool getAvailability() const {
        return isAvailable;
    }

    void setTitle(const string& t) {
        title = t;
    }

    void setAuthor(const string& a) {
        author = a;
    }

    void setISBN(int isbn) {
        ISBN = isbn;
    }

    void setAvailability(bool available) {
        isAvailable = available;
    }

    friend ostream& operator<<(ostream& os, const Book& book) {
        os << "Title: " << book.title << ", Author: " << book.author
           << ", ISBN: " << book.ISBN << ", Available: " << (book.isAvailable ? "Yes" : "No");
        return os;
    }
};

class Library {
private:
    static const int maxBooks = 50;
    Book books[maxBooks];
    int size;

public:
    Library() : size(0) {}

    void addBook(const Book& book) {
        if (size < maxBooks) {
            books[size] = book;
            size++;
        } else {
            cout << "Library is full!" << endl;
        }
    }

    void removeBook(int isbn) {
        for (int i = 0; i < size; i++) {
            if (books[i].getISBN() == isbn) {
                for (int j = i; j < size - 1; j++) {
                    books[j] = books[j + 1];
                }
                size--;
                return;
            }
        }
        cout << "Book not found!" << endl;
    }

    void displayBooks() const {
        for (int i = 0; i < size; i++) {
            cout << "Book " << (i + 1) << ": " << books[i] << endl;
        }
    }

    void listAvailableBooks() const {
        for (int i = 0; i < size; i++) {
            if (books[i].getAvailability()) {
                cout << "Book " << (i + 1) << ": " << books[i] << endl;
            }
        }
    }

    Book* findBook(int isbn) {
        for (int i = 0; i < size; i++) {
            if (books[i].getISBN() == isbn) {
                return &books[i];
            }
        }
        return nullptr;
    }
};

class Member {
private:
    int memberId;
    string memberName;
    static const int maxBorrowedBooks = 5;
    Book* borrowedBooks[maxBorrowedBooks];
    int borrowedCount;

public:
    Member(int id, const string& name) : memberId(id), memberName(name), borrowedCount(0) {
        for (int i = 0; i < maxBorrowedBooks; i++) {
            borrowedBooks[i] = nullptr;
        }
    }

    void borrowBook(Book& book) {
        if (borrowedCount < maxBorrowedBooks && book.getAvailability()) {
            borrowedBooks[borrowedCount] = &book;
            borrowedCount++;
            book.setAvailability(false);
        } else {
            cout << "Cannot borrow more books or book not available!" << endl;
        }
    }

    void returnBook(Book& book) {
        for (int i = 0; i < borrowedCount; i++) {
            if (borrowedBooks[i]->getISBN() == book.getISBN()) {
                book.setAvailability(true);
                for (int j = i; j < borrowedCount - 1; j++) {
                    borrowedBooks[j] = borrowedBooks[j + 1];
                }
                borrowedBooks[borrowedCount - 1] = nullptr;
                borrowedCount--;
                return;
            }
        }
        cout << "Book not found in borrowed books!" << endl;
    }

    void displayBorrowedBooks() const {
        cout << "Member " << memberName << " (ID: " << memberId << ") has borrowed:" << endl;
        for (int i = 0; i < borrowedCount; i++) {
            cout << *borrowedBooks[i] << endl;
        }
    }
};

int main() {
    Library library;
    Member member(1, "John Doe");

    library.addBook(Book("The Catcher in the Rye", "J.D. Salinger", 12345));
    library.addBook(Book("To Kill a Mockingbird", "Harper Lee", 67890));
    library.addBook(Book("1984", "George Orwell", 11112));

    cout << "All books in the library:" << endl;
    library.displayBooks();

    cout << "\nAvailable books in the library:" << endl;
    library.listAvailableBooks();

    Book* bookToBorrow = library.findBook(12345);
    if (bookToBorrow) {
        member.borrowBook(*bookToBorrow);
    }

    cout << "\nBooks borrowed by member:" << endl;
    member.displayBorrowedBooks();

    cout << "\nAvailable books in the library after borrowing:" << endl;
    library.listAvailableBooks();

    if (bookToBorrow) {
        member.returnBook(*bookToBorrow);
    }

    cout << "\nBooks borrowed by member after returning:" << endl;
    member.displayBorrowedBooks();

    cout << "\nAvailable books in the library after returning:" << endl;
    library.listAvailableBooks();

    return 0;
}
