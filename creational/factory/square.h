#pragma once
#include "shape.h"

// Concrete product: Square
class Square : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a Square!" << std::endl;
    }
};
