#pragma once
#include <iostream>

class Button {
public:
    virtual void paint() const = 0;
    virtual ~Button() = default;
};
