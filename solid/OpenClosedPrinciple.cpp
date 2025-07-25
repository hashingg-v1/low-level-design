#include <iostream>
#include <vector>
#include <memory>

class Shape {
public:
    virtual double area() const = 0;
    virtual ~Shape() = default;
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override { return 3.14 * radius * radius; }
};

class Square : public Shape {
    double side;
public:
    Square(double s) : side(s) {}
    double area() const override { return side * side; }
};

void printAreas(const std::vector<std::unique_ptr<Shape>>& shapes) {
    for (const auto& s : shapes) {
        std::cout << "Area: " << s->area() << "\n";
    }
}

int main() {
    std::vector<std::unique_ptr<Shape>> shapes;
    shapes.push_back(std::make_unique<Circle>(2.0));
    shapes.push_back(std::make_unique<Square>(3.0));

    printAreas(shapes); 
    return 0;
}
