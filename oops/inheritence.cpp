#include <iostream>
using namespace std;

class Animal {
public:
    void eat() const {
        cout << "Animal is eating" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() const {
        cout << "Dog is barking" << endl;
    }
};

int main() {
    Dog d;
    d.eat();  // Inherited from Animal
    d.bark(); // Dog's own method
    return 0;
}
