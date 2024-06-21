//Create a base class Vehicle with a /*method move() that prints "Vehicle is moving".Derive a  class Car from Vehicle and override the move() method to print "Car is moving".*/
# include<iostream>
# include <conio.h>
using namespace std;
class Vehicle {
public:
	void move() {
		cout << "Vehicle is moving \n";
	}
};
class Car : public Vehicle {
public:
	void move() {
		cout << "Car is moving \n";
	}
};
int main() {
	Vehicle v;
	v.move();
	Car c;
	c.move();
	return 0;
}
