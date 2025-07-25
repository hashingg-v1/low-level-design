#pragma once
#include "checkbox.h"

class LightCheckbox : public Checkbox {
public:
    void paint() const override {
        std::cout << "Rendering Light Checkbox" << std::endl;
    }
};
