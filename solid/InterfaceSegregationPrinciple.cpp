#include <iostream>

/*
We said: "Any printer must know how to print."
We said: "Any scanner must know how to scan."

We made:
A big printer that can do both (print + scan)
A small printer that can only print
*/

class Printer {
public:
    virtual void print() = 0;
    virtual ~Printer() = default;
};

class Scanner {
public:
    virtual void scan() = 0;
    virtual ~Scanner() = default;
};

class MultiFunctionPrinter : public Printer, public Scanner {
public:
    void print() override {
        std::cout << "Printing...\n";
    }
    void scan() override {
        std::cout << "Scanning...\n";
    }
};

/*
 We didn’t force the small printer to also have a fake scan() that does nothing.
 Each device only implements what it can really do.
*/
class SimplePrinter : public Printer {
public:
    void print() override {
        std::cout << "Simple printing...\n";
    }
};


/*
 Prevents “fat” / “god” interfaces that force classes to implement useless methods.

 Keeps classes clean and focused on what they actually do.

 Makes the code easier to read, change, and extend.
 
 Reduces bugs and confusion from empty or dummy methods.
*/
int main() {
    MultiFunctionPrinter mfp;
    SimplePrinter sp;

    mfp.print();
    mfp.scan();
    sp.print();

    return 0;
}
