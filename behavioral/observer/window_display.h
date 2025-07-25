#pragma once
#include "observer.h"
#include <iostream>

class WindowDisplay : public Observer {
public:
    void update(float temperature) override {
        std::cout << "Window Display: Temperature is now " << temperature << "°C" << std::endl;
    }
};
