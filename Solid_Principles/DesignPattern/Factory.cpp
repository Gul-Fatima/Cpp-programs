// Task: Develop a factory method that creates objects based on input
// parameters without exposing the instantiation logic.
// o Example Scenario: A shape creation program that can create circles,
// rectangles, and squares based on user input without exposing object
// creation details.

#include <iostream>
#include <string>
#include <algorithm>

// Interface
class IShape {
public:
    virtual void Draw() = 0;
    virtual ~IShape() {}
};

// Concrete Shapes
class Circle : public IShape {
public:
    void Draw() override { std::cout << "Drawing a Circle.\n"; }
};

class Rectangle : public IShape {
public:
    void Draw() override { std::cout << "Drawing a Rectangle.\n"; }
};

class Square : public IShape {
public:
    void Draw() override { std::cout << "Drawing a Square.\n"; }
};

// Simple Shape Factory returning raw pointer
class ShapeFactory {
public:
    IShape* GetShape(std::string shapeType) {
        // Convert input to lowercase
        std::transform(shapeType.begin(), shapeType.end(), shapeType.begin(), ::tolower);

        if (shapeType == "circle") return new Circle();
        else if (shapeType == "rectangle") return new Rectangle();
        else if (shapeType == "square") return new Square();
        else return nullptr;
    }
};

int main() {
    ShapeFactory factory;
    std::string shapeType;

    std::cout << "Enter the shape to create (Circle, Rectangle, Square): ";
    std::getline(std::cin, shapeType);

    IShape* shape = factory.GetShape(shapeType);

    if (shape) {
        shape->Draw();
        delete shape; // Don't forget to free memory!
    } else {
        std::cout << "Invalid shape type.\n";
    }

    return 0;
}
