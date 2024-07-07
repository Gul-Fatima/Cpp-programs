
//Create an abstract class Shape with a pure virtual function area().Derive two classes  Circle and Rectangle from Shape.Implement the area() function in both derived classes.Write a program to calculate the area of a circle and a rectangle.

#include<iostream>
using namespace std;
class Shape {
public:
	virtual double Area() = 0 {
		}
};
class Circle : public Shape {
	double r;
public:
	Circle(int r) : r(r){}
	double Area()override {
		return 3 * r * r;
	}
};
class Rectangle : public Shape {
	double l, w;
public:
	Rectangle(double l, double w):l(l),w(w){}
	double Area() {
		return l * w;
	}
};
int main() {
	Circle c(3);
	Rectangle r(3, 5);
	cout << c.Area();
	cout << r.Area();
	return 0;
}
