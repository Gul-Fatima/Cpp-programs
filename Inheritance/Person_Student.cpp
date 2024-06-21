//Cre/*ate a base class Person with attributes name and age.Create a derived class Student  with an additional attribute studentID.Initialize these attributes using constructors.*/
#include<iostream>
#include <conio.h>
using namespace std;
class Person {
protected:
	string name;
	int age;
public:
	Person(string n,int a): name(n),age(a){ }
};
class Student : public Person {
protected:
	int studentId;
public:
	Student(string n, int a, int sId) : Person(n,a),studentId(sId){}
};
int main() {
	Person p1("Ali", 12);
	Student s1("Sara",13,01);
	}
//
//Create a base class Shape with a method draw() that prints "Drawing Shape".Create  derived classes Circle and Square that override the draw() method to print "Drawing  Circle" and "Drawing Square", respectively
