#pragma once
#include <string>

class ModernPrinter {
public:
    virtual void printDocument(const std::string& text) = 0;
    virtual ~ModernPrinter() = default;
};
