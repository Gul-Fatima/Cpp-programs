#include <iostream>
using namespace std;
class Complex {
	double real;
	double img;
public:
	Complex(): real(0),img(0){}
	Complex(double r, double i) : real(r), img(i) {}
	Complex operator / (const Complex& obj) {
		Complex temp;
		temp.real = ((real * obj.real) + (img * obj.img)) / ((obj.img*obj.img)+(obj.real *obj.real));
		temp.img = ((img * obj.real) - (real * obj.img)) / ((obj.img * obj.img) + (obj.real * obj.real));
		return temp;
	}
	void display() {
		cout << real << " + " << img << "i" << endl;
	}
};
int  main() {
	Complex c1(3, 4);
	Complex c2(3, 5);
	Complex c3 = c1 / c2;
	c3.display();
}
