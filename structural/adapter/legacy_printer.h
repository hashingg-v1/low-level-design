#pragma once
#include <iostream>

class LegacyPrinter {
public:
    void oldPrint(const char* text) {
        std::cout << "LegacyPrinter: " << text << std::endl;
    }
};
