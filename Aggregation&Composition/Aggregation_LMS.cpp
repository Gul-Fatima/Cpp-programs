//Question 2: Aggregation Create a Library class that can hold multiple Book objects.Implement methods to add  books and display all books in the library.
#include<iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
public:
	string title,author;
	Book(string t, string a) : title(t), author(a) {};
};
class library {
	vector<Book> b;
public:
	void addbook(Book b1) {
		b.push_back(b1);
	}
	void display()const {
		for (int i = 0; i < b.size();i++) {
			cout <<"Book-" << i+1 << " : " << b[i].title << endl;
		}
		
	}
};
int main() {
	Book b1("Alshifa", "Sina");
	Book b2("Optics", "Haitham");
	library l;
	l.addbook(b1);
	l.addbook(b2);
	l.display();
}
