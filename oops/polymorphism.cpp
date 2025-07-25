#include <iostream>
using namespace std;




/*
 -----------------------------
 Runtime Polymorphism

 -----------------------------
    Runtime polymorphism: Animal* points to Cat; when we call speak(), it uses Cat’s version → “Meow!”
*/
class Animal {
public:
    virtual void speak() const { // virtual function
        cout << "Animal sound" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() const override {
        cout << "Meow!" << endl;
    }
};

// -----------------------------
// Compile-time Polymorphism (function overloading)
// -----------------------------

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    // Overloaded function with different parameters
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    // Runtime polymorphism
    Animal* animal = new Cat(); 
    animal->speak();  // Output: Meow!
    delete animal;

    // Compile-time polymorphism
    Calculator calc;
    cout << "Int add: " << calc.add(3, 4) << endl;        // Output: 7
    cout << "Double add: " << calc.add(2.5, 4.5) << endl; // Output: 7.0

    return 0;
}
