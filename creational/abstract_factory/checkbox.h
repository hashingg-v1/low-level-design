#pragma once
#include <iostream>

class Checkbox {
public:
    virtual void paint() const = 0;
    virtual ~Checkbox() = default;
};
