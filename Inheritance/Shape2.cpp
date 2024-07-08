//You are required to create a C++ program that demonstrates the concept of  inheritance.Consider the following requirements :
//Base Class - Shape :
//	Attributes :
//	∙ color(string)
//	∙ Constructor that initializes color.
//	∙ A pure virtual function area() which will return the area of the shape.∙ A virtual function display() that prints the color of the shape.
//	Derived Classes :
//Rectangle:
//∙ Attributes : width(double), height(double)
//∙ Constructor that initializes color, width, and height.
//∙ Override area() to calculate and return the area of the rectangle.
//∙ Override display() to print the color, width, height, and area of the rectangle.Circle :
//	Attributes :
//	∙ radius(double)
//	∙ Constructor that initializes color and radius.
//	∙ Override area() to calculate and return the area of the circle.
//	∙ Override display() to print the color, radius, and area of the circle.
//	Main Function :
//∙ Create instances of Rectangle and Circle with different attributes.
//∙ Use a pointer to Shape to store the addresses of these instances and call their  display() method.
#include<iostream>
using namespace std;
class Shape {
protected:
	string color;
public:
	Shape (string c) : color(c){}
	virtual double area()=0{}
	virtual void display(){}
};
class Rectangle : public Shape {

	double width, height;
public:
	Rectangle(double w, double h) : width(w), height(h) {};
	double area()override {
		cout << "Area: " << width * height;
	}
	void display()override {
		cout << "Color: " << color<< endl;
		cout << "Area: " << area()<< endl;
		cout << "Width ,Height =  " << width << ", " << height;
	}
};
class Circle : public Shape {

	double radius;
public:
	Circle(double r) : radius(r);
	double area()override {
		cout << "Area: " << 3.14 *radius * radius;
	}
	void display()override {
		cout << "Color: " << color << endl;
		cout << "Area: " << area() << endl;
		cout << "Width :  " << radius;
	}
};
int main() {
	Rectangle r(4, 3);
	Circle c(4);
	c.display();
	r.display();
}
