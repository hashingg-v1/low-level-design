#include <iostream>
using namespace std;

// Abstract base class hides internal details & forces derived classes to implement speak()
class Animal {
public:
    virtual void speak() const = 0; // pure virtual function
};

class Dog : public Animal {
public:
    void speak() const override {
        cout << "Woof!" << endl;
    }
};

int main() {
    Dog d;
    d.speak(); // Output: Woof!
    return 0;
}
