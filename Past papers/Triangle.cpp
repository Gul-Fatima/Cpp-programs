//Triangle" (when two sides are equal), "Right Angle Triangle" (when angle is 90 degrees) and "Equilateral Triangle" having a double variable side denoting the three sides of the equilateral triangle [Note that since all the 3 sides are equal, the constructor will have only one parameter). The area and perimeter of the equilateral triangle are given as follows:
//Area = % *3 * (side)²
//Perimeter = 3 * side
//Provide accessor methods for the sides, angle and override area() method of base class in all the three derived olasses and calculate area and perimeter for equilateral triangle
#include <iostream>
#include <cmath>

using namespace std;
class Triangle {
public:
	virtual void Area() = 0 {

	}
};
class Iso : public Triangle {
	float s1, s2;
public:
	Iso(float a,float b): s1(a),s2(b){}
	void sets1(float v)
	{
		s1 = v;
	}
	void sets2(float v)
	{
		s2 = v;
	}
	float gets1() {
		return s1;
	}
	float gets2() {
		return s2;
	}
	void Area()override {
		cout << "Area: " << 0.5 * s1 * s2;
	}
};
class Eq :public Triangle {
	float s;
public:
	Eq(float a) : s(a){}
	void setside(float v)
	{
		s = v;
	}
	float gets() {
		return s;
	}
	void Area()override {
		cout << "Area: " << 0.25 * pow(3, (1 / 3)) * s;
	}
	void Perimeter() {
		cout << "Perimeter : " << 3 * s;
	}
};
class Right : public Triangle {
	float angle;
	float s1;
	float s2;
public:
	Right(float a , float b , float ang) : s1(a),s2(b),angle(ang){}
	void Area()override {
		//cout << setpre
		cout << "Area: " << 0.5 * s1 * s2* sin(angle);
	}
	void setangle(float v)
	{
		angle = v;
	}
	void setside1(float v)
	{
		s1 = v;
	}
	void setside2(float v)
	{
		s2 = v;
	}
	float gets1() {
		return s1;
	}
	float gets2() {
		return s2;
	}
	float getangle() {
		return angle;
	}
	
};
int main() {
	Iso i(23, 4);
	Eq e(3);
	Right r(3, 2, 30);
	e.Area();
	i.Area();
	r.Area();
	e.Perimeter();
	return 0;
}
