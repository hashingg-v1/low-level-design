#pragma once
#include <memory>
#include <string>
#include "circle.h"
#include "square.h"

// Factory class to create Shape objects
class ShapeFactory {
public:
    static std::unique_ptr<Shape> createShape(const std::string& type) {
        if (type == "circle") {
            Circle* circle = new Circle();
            return std::unique_ptr<Shape>(circle);
        } else if (type == "square") {
            Square* square = new square();
            return std::unique_ptr<Shape>(square);
        } else {
            return nullptr; // Unknown shape type
        }
    }
};
