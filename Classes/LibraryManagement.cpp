#include <iostream>
#include <cstring>

using namespace std;

class Book {
    int Pub_ID;
    char Title[100];
    char Author[100];
    char Subscriber[100];
public:
    Book() {}
    Book(int id, const char title[100], const char author[100], const char subscriber[100]) {
        Pub_ID = id;
        strcpy(Title, title);
        strcpy(Author, author);
        strcpy(Subscriber, subscriber);
    }

    // Getter methods, for display method of library class:
    int getId() { return Pub_ID; }
    const char* getTitle() { return Title; }
    const char* getAuthor() { return Author; }
    const char* getSubscriber() { return Subscriber; }

    // Setter methods for Add/Delete method of library:
    void setID(int id) { Pub_ID = id; }
    void setTitle(const char title[100]) { strcpy(Title, title); }
    void setAuthor(const char author[100]) { strcpy(Author, author); }
    void setSubscriber(const char subscriber[100]) { strcpy(Subscriber, subscriber); }
};

class Library {
    Book arr_book[50];
    int noOfBooks;
public:
    // Non-parameterized constructor
    Library() {
        noOfBooks = 0;
    }

    void AddBook(int id, const char title[100], const char author[100], const char subscriber[100]) {
        for (int i = 0; i < noOfBooks; i++) {
            if (id == arr_book[i].getId()) {
                cout << "This book is already available";
                return;
            }
        }

        arr_book[noOfBooks].setID(id);
        arr_book[noOfBooks].setTitle(title);
        arr_book[noOfBooks].setAuthor(author);
        arr_book[noOfBooks].setSubscriber(subscriber);
        ++noOfBooks;
    }

    // Delete book
    void DeleteBook(int id) {
        bool found = false;
        for (int i = 0; i < noOfBooks; ++i) {
            if (arr_book[i].getId() == id) {
                found = true;
                for (int j = i; j < noOfBooks - 1; ++j) {
                    arr_book[j] = arr_book[j + 1];
                }
                --noOfBooks;
                cout << "Book with ID " << id << " deleted successfully." << endl;
                break;
            }
        }
        if (!found) {
            cout << "Book with ID " << id << " not found." << endl;
        }
    }

    // Edit details
    void EditBook(int id, const char title[100], const char author[100], const char subscriber[100]) {
        bool found = false;
        for (int i = 0; i < noOfBooks; ++i) {
            if (arr_book[i].getId() == id) {
                found = true;
                arr_book[i].setTitle(title);
                arr_book[i].setAuthor(author);
                arr_book[i].setSubscriber(subscriber);
                cout << "Book with ID " << id << " details updated successfully." << endl;
                break;
            }
        }
        if (!found) {
            cout << "Book with ID " << id << " not found." << endl;
        }
    }

    // Display Details
    void Details() {
        for (int i = 0; i < noOfBooks; i++) {
            cout << "Publication ID: " << arr_book[i].getId() << endl;
            cout << "Book Title: " << arr_book[i].getTitle() << endl;
            cout << "Author: " << arr_book[i].getAuthor() << endl;
            cout << "Subscriber: " << arr_book[i].getSubscriber() << endl;
        }
    }
};

int main() {
    Library book;
    book.AddBook(1, "book1", "Author1", "Subscriber1");
    book.AddBook(2, "Book2", "Author2", "Subscriber2");

    book.DeleteBook(1);
    book.EditBook(2, "New Title", "New Author", "New Subscriber");

    book.Details();

    return 0;
}
