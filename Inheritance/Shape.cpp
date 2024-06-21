//Create a base class Shape with a method draw() that prints "Drawing Shape".Create  derived classes Circle and Square that override //// //draw() method to print "Drawing  Circle" and "Drawing Square", respectively


#include<iostream>
#include <conio.h>
using namespace std;
class Shape {
public :
	void draw() {
		cout << "Drawing shape." << endl;	
	}
};
class Circle:public Shape {
public:
		void draw() {
			cout << "Drawing Circle." << endl;
		}
};
class Square:public Shape {
public:
	void draw() {
		cout << "Drawing Square." << endl;
	}
};
int main() {
	Shape s;
	s.draw();
	Circle c;
	c.draw();
	Square sq;
	sq.draw();
	return 0;
}
