#include <iostream>
#include <stdexcept>
#include <string>

class Book {
public:
    std::string Title;
    std::string Author;
    std::string ISBN;
};

class IUser {
public:
    virtual void BorrowBook(const std::string& bookId) = 0;
    virtual void ReturnBook(const std::string& bookId) = 0;
    virtual void SearchCatalog(const std::string& searchTerm) = 0;
    virtual void AddBook(const Book& book) = 0;
    virtual void RemoveBook(const std::string& bookId) = 0;
    virtual ~IUser() {}
};

class Guest : public IUser {
public:
    void BorrowBook(const std::string& bookId) override {
        throw std::logic_error("Guests cannot borrow books.");
    }
    void ReturnBook(const std::string& bookId) override {
        throw std::logic_error("Guests cannot return books.");
    }
    void SearchCatalog(const std::string& searchTerm) override {
        std::cout << "Guest searching catalog for: " << searchTerm << std::endl;
    }
    void AddBook(const Book& book) override {
        throw std::logic_error("Guests cannot add books.");
    }
    void RemoveBook(const std::string& bookId) override {
        throw std::logic_error("Guests cannot remove books.");
    }
};



//   with
#include <iostream>
#include <string>

// Basic Book class same as before
class Book {
public:
    std::string Title;
    std::string Author;
    std::string ISBN;
};

// Segregated interfaces
class ICatalogSearcher {
public:
    virtual void SearchCatalog(const std::string& searchTerm) = 0;
    virtual ~ICatalogSearcher() {}
};

class IBorrower {
public:
    virtual void BorrowBook(const std::string& bookId) = 0;
    virtual void ReturnBook(const std::string& bookId) = 0;
    virtual ~IBorrower() {}
};

class IInventoryManager {
public:
    virtual void AddBook(const Book& book) = 0;
    virtual void RemoveBook(const std::string& bookId) = 0;
    virtual ~IInventoryManager() {}
};

// Guest only searches catalog
class Guest : public ICatalogSearcher {
public:
    void SearchCatalog(const std::string& searchTerm) override {
        std::cout << "Guest searching catalog for: " << searchTerm << std::endl;
    }
};

// Member can search, borrow and return books
class Member : public ICatalogSearcher, public IBorrower {
public:
    void SearchCatalog(const std::string& searchTerm) override {
        std::cout << "Member searching catalog for: " << searchTerm << std::endl;
    }
    void BorrowBook(const std::string& bookId) override {
        std::cout << "Member borrowing book: " << bookId << std::endl;
    }
    void ReturnBook(const std::string& bookId) override {
        std::cout << "Member returning book: " << bookId << std::endl;
    }
};

// Librarian can do everything Members can, plus manage inventory
class Librarian : public ICatalogSearcher, public IBorrower, public IInventoryManager {
public:
    void SearchCatalog(const std::string& searchTerm) override {
        std::cout << "Librarian searching catalog for: " << searchTerm << std::endl;
    }
    void BorrowBook(const std::string& bookId) override {
        std::cout << "Librarian borrowing book: " << bookId << std::endl;
    }
    void ReturnBook(const std::string& bookId) override {
        std::cout << "Librarian returning book: " << bookId << std::endl;
    }
    void AddBook(const Book& book) override {
        std::cout << "Librarian adding book: " << book.Title << std::endl;
    }
    void RemoveBook(const std::string& bookId) override {
        std::cout << "Librarian removing book: " << bookId << std::endl;
    }
};
