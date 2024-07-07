//2.	Implement a class Rectangle with private members length and width.Write a  friend function to calculate the perimeter of the rectangle.
#include <iostream>
using namespace std;
class Rectangle {
	double len;
	double width;
public:
	Rectangle(double l, double w): len(l),width(w){}
	friend void Peri(Rectangle r);
};
void Peri(Rectangle r) {
	cout << "Perimeter : " << 2 * (r.width + r.len) << " units";
}
int main() {
	Rectangle r(3,6);
	Peri(r);
	return 0;
}
