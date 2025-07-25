#include "shape_factory.h"

int main() {
    // Create a Circle
    auto circle = ShapeFactory::createShape("circle");
    if (circle) circle->draw();

    // Create a Square
    auto square = ShapeFactory::createShape("square");
    if (square) square->draw();

    // Try to create an unknown shape
    auto unknown = ShapeFactory::createShape("triangle");
    if (!unknown) {
        std::cout << "Unknown shape type!" << std::endl;
    }

    return 0;
}