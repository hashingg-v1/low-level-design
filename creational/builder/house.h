#pragma once
#include <iostream>
#include <string>

// Product: the complex object we're building
class House {
public: 
    std::string walls;
    std::string roof;
    std::string door;

    void show() const {
        std::cout << "House with " << walls 
                  << ", " << roof 
                  << ", and " << door << std::endl;
    }
};
