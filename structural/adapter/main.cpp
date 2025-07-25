#include "adapter.h"

int main() {
    LegacyPrinter legacy;

    // Use adapter so legacy printer works like a modern printer
    ModernPrinter* printer = new Adapter(&legacy);

    printer->printDocument("Hello Adapter Pattern!");

    delete printer;
    return 0;
}
