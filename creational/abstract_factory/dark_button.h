#pragma once
#include "button.h"

class DarkButton : public Button {
public:
    void paint() const override {
        std::cout << "Rendering Dark Button" << std::endl;
    }
};
