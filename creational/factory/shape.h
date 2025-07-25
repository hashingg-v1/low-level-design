#pragma once
#include <iostream>

// Abstract base class
class Shape {
public:
    virtual void draw() const = 0; // Pure virtual function
    virtual ~Shape() = default;    // Virtual destructor
};
