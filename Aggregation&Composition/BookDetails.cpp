//Question 1: Composition
//Create a Book class that has title, author, and a Date object for the publication date.Implement a method to display the book details.
#include <iostream>
using namespace std;
class Date {
	int year;
	int month;
	int day;
public:
	Date(int yr, int m, int d) {
		year = (yr > 1900 && yr < 2050) ? yr : 0;
		month = (m > 0 && m < 13) ? m : 0;
		day = checkday(d);
	}
	int  checkday(int d1) {
		int no_of_days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		if (year % 4 == 0 &&( year % 100 != 0 || year % 400 == 0)) {
			no_of_days[2] = 29;
			return  (d1 > 0 && d1 <= no_of_days[month]) ? d1 : 0;
		}
	}
	void printDate() {
		string monthsName[13] = { "null","Jan","feb","Mar","Apr","May","Jun","July","Aug","Sep","Oct","Nov","Dec" };
		cout << year << " / " << monthsName[month] << " / " << day;
	}
};
class Book {
	string title, author;
	Date date;
public:
	Book(string title, string author, Date date) : title(title), author(author), date(date) {};
	void Display() {
		cout << "Title : " << title << endl << "Author: " << author << endl;
		cout << "Date: ";
		date.printDate();
	}
};
int main() {
	Date d(2024,7,7);
	Book b("AlShifa", "IbneSina", d);
	b.Display();
	return 0;
}
