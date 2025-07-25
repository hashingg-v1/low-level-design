#pragma once
#include "observer.h"
#include <iostream>

class PhoneDisplay : public Observer {
public:
    void update(float temperature) override {
        std::cout << "Phone Display: Temperature is now " << temperature << "°C" << std::endl;
    }
};
