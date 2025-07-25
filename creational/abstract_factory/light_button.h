#pragma once
#include "button.h"

class LightButton : public Button {
public:
    void paint() const override {
        std::cout << "Rendering Light Button" << std::endl;
    }
};
