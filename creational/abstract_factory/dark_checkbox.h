#pragma once
#include "checkbox.h"

class DarkCheckbox : public Checkbox {
public:
    void paint() const override {
        std::cout << "Rendering Dark Checkbox" << std::endl;
    }
};
