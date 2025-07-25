#pragma once
#include "modern_printer.h"
#include "legacy_printer.h"

class Adapter : public ModernPrinter {
private:
    LegacyPrinter* legacyPrinter;
public:
    Adapter(LegacyPrinter* lp) : legacyPrinter(lp) {}

    void printDocument(const std::string& text) override {
        // Convert std::string to const char* and delegate
        legacyPrinter->oldPrint(text.c_str());
    }
};
