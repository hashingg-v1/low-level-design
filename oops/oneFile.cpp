#include <iostream>
#include <string>

using namespace std;

// ---------------------
// Abstraction & Encapsulation
// ---------------------

// This is an abstract base class (interface-like) showing abstraction.
// We hide how 'speak()' actually works from the outside world.
class Animal {
protected:
    string name;  // This is encapsulation: keeping data private/protected

public:
    Animal(const string& n) : name(n) {}

    // Pure virtual function: must be implemented by derived classes
    virtual void speak() const = 0;

    // Getter: another part of encapsulation
    string getName() const {
        return name;
    }
};

// ---------------------
// Inheritance & Polymorphism (Run-time)
// ---------------------

// Dog is inheriting from Animal
class Dog : public Animal {
public:
    Dog(const string& n) : Animal(n) {}

    // Implement the abstract method
    void speak() const override {
        cout << name << " says: Woof!" << endl;
    }

    // Example of compile-time polymorphism (method overloading)
    void fetch() const {
        cout << name << " is fetching the ball!" << endl;
    }

    void fetch(const string& item) const {
        cout << name << " is fetching the " << item << "!" << endl;
    }
};

// Cat is also inheriting from Animal
class Cat : public Animal {
public:
    Cat(const string& n) : Animal(n) {}

    void speak() const override {
        cout << name << " says: Meow!" << endl;
    }
};

int main() {
    // ---------------------
    // Abstraction + Encapsulation
    // ---------------------
    Dog d("Buddy");
    Cat c("Whiskers");

    // ---------------------
    // Polymorphism (Run-time): same interface, different behavior
    // ---------------------
    Animal* animal1 = &d;
    Animal* animal2 = &c;

    animal1->speak(); // Buddy says: Woof!
    animal2->speak(); // Whiskers says: Meow!

    // ---------------------
    // Compile-time polymorphism: method overloading
    // ---------------------
    d.fetch();
    d.fetch("stick");

    return 0;
}
