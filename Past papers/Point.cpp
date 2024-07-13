#include <iostream>
using namespace std;

class point {
    int x_coordinate;
    int y_coordinate;
public:
    point() : x_coordinate(0), y_coordinate(0) {} // default constructor

    point(int x, int y) : x_coordinate(x), y_coordinate(y) {} // parameterized constructor

    void show() const {
        cout << "X: " << x_coordinate << ", Y: " << y_coordinate << "\n";
    }

    // Overload + for point
    point operator+(const point& op2) const {
        point temp;
        temp.x_coordinate = op2.x_coordinate + x_coordinate;
        temp.y_coordinate = op2.y_coordinate + y_coordinate;
        return temp;
    }

    // Overload prefix ++ for point
    point operator++() {
        x_coordinate++;
        y_coordinate++;
        return *this;
    }

    // Overload postfix ++ for point
    point operator++(int) {
        point temp = *this; // Store the original state
        x_coordinate++;
        y_coordinate++;
        return temp; // Return the original (unincremented) object
    }
};

int main() {
    point ob1(10, 20), ob2(5, 30);

    cout << "Initial points:" << endl;
    ob1.show(); // displays ob1
    ob2.show(); // displays ob2

    ob1 = ob1 + ob2; // add points
    cout << "After adding ob1 and ob2:" << endl;
    ob1.show(); // displays ob1

    ++ob1; // prefix increment
    cout << "After prefix increment of ob1:" << endl;
    ob1.show(); // displays incremented ob1

    ob1++; // postfix increment
    cout << "After postfix increment of ob1:" << endl;
    ob1.show(); // displays incremented ob1

    return 0;
}
