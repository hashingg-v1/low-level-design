#pragma once
#include "shape.h"

// Concrete product: Circle
class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a Circle!" << std::endl;
    }
};
