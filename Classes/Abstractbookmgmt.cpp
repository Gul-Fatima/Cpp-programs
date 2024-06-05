#include <iostream>
#include <conio.h>

using namespace std;
class Book {
	int Pub_ID;
	char Title;
	char Author;
	char Subscriber;
public:
	Book(){}
	Book(int id, char title, char author, char subscriber ) {
		Pub_ID = id;
		Title = title;
		Author = author;
		Subscriber = subscriber;
	}

	//Getter method, for display method of library class:
	int getId() { return Pub_ID; }
	char getTitle() { return Title; }
	char getAuthor() { return Author; }
	char getSubscriber() { return Subscriber; }

	//Setter methods for Add/Delete method of library:
	void setID(int id) { Pub_ID = id; }
	void setTitle(char title) { Title= title; }
	void setAuthor(char author) { Author = author; }
	void setSubscriber(char subs) { Subscriber = subs;}
};
class Library {
	Book arr_book[50];
	int noOfBooks;
public:
	//non - parameterized constuctir
	Library(){
		noOfBooks = 0;
	}

	void AddBook(int id, char title, char author, char subscriber) {
		for (int i = 0; i < noOfBooks; i++)
		{
			if (id == arr_book[i].getId())
			{
				cout << "This book is already available";
				break;
			}
			else {
				arr_book[noOfBooks].setID(id);
				arr_book[noOfBooks].setTitle(title);
				arr_book[noOfBooks].setAuthor(author);
				arr_book[noOfBooks].setSubscriber(subscriber);
				++noOfBooks;
				}
		}

	}
	//delete book
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
	// edit details
	void EditBook(int id, char title, char author, char subscriber) {
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
	//Display Details
	void Details() {
		for (int i = 0; i < noOfBooks; i++){		
				cout << "Publication id: " << arr_book[i].getId();
				cout << "Book Title: " << arr_book[i].getTitle();
				cout << "Author: " << arr_book[i].getAuthor();
				cout << "Subscriber: " << arr_book[i].getSubscriber();
			}	
	}
	//
};
