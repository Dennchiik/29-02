#include <iostream>

class Figure {
protected:
    double side;

public:
    Figure(double s) : side(s) {}

    virtual double calculateArea() const = 0;
    virtual double calculatePerimeter() const = 0;
};

class Square : public Figure {
public:
    Square(double side) : Figure(side) {}

    double calculateArea() const override {
        return side * side;
    }

    double calculatePerimeter() const override {
        return 4 * side;
    }
};

class Rectangle : public Figure {
private:
    double length;

public:
    Rectangle(double width, double length) : Figure(width), length(length) {}

    double calculateArea() const override {
        return side * length;
    }

    double calculatePerimeter() const override {
        return 2 * (side + length);
    }
};

int main() {
    Square square(5);
    Rectangle rectangle(4, 6);

    std::cout << "Square:" << std::endl;
    std::cout << "Area: " << square.calculateArea() << std::endl;
    std::cout << "Perimeter: " << square.calculatePerimeter() << std::endl;

    std::cout << "\nRectangle:" << std::endl;
    std::cout << "Area: " << rectangle.calculateArea() << std::endl;
    std::cout << "Perimeter: " << rectangle.calculatePerimeter() << std::endl;

    return 0;
}
