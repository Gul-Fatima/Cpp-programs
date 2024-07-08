//Create an abstract class Vehicle with a pure virtual function fuelEfficiency().Derive two  classes Car and Truck from Vehicle.Implement the fuelEfficiency() function in both  derived classes.Write a program to calculate the fuel efficiency of a car and a truck.
//Input :
#include <iostream>
using namespace std;
class Vehicle {
public:
	virtual int fuelEfficiency()=0 {

	}
};
class Car : public Vehicle {
	int miles;
	int noOfGallons;
public:
	Car(int m, int g) : miles(m), noOfGallons(g) {};
	int fuelEfficiency()override {
		return miles / noOfGallons;
	}
};
class Truck : public Vehicle {
	int miles;
	int noOfGallons;
public:
	Truck(int m, int g) : miles(m), noOfGallons(g) {};
	int fuelEfficiency()override {
		return miles / noOfGallons;
	}
};
int main() {
	Car c(14,7);
	Truck t(3, 9);
	cout << c.fuelEfficiency()<< endl;
	cout << t.fuelEfficiency() << endl;
}
