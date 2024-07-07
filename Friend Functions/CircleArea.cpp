//1.	Write a class Circle with a private member radius. Write a friend function to  calculate the area of the circle. 
#include <iostream>
using namespace std;
class Circle {
	double radius;
public:
	Circle(double c) : radius(c) {}
	friend void Area(Circle c);

};
void Area(Circle c) {
	cout << "Area: " << 3.14 * c.radius * c.radius <<" square units";
}
int main() {
	Circle c1(3);
	Area(c1);

}

