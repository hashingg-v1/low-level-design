#include <iostream>

/*
If you have some code that works with a parent class (like Bird), it should also work with any child class (like Duck) — without breaking, crashing, or changing the meaning of the program.

In simpler words:
“If my code can use a Bird, it should also work if I give it a Duck, or a Sparrow, or a Penguin that extends Bird — and the code shouldn’t care or need to know which one it is.”

Anywhere code expects:   IMessage
                             |
               +-------------+------------+
               |                          |
           Email                      SMS

*/
class Bird {
public:
    virtual void fly() const {
        std::cout << "Bird is flying\n";
    }
    virtual ~Bird() = default;
};

class Duck : public Bird {
public:
    void fly() const override {
        std::cout << "Duck is flying\n";
    }
};


/*
    void makeItFly(const Bird& bird) → works with Bird, Duck, Sparrow, etc.
    void makeItFly(const Duck& duck) → only works with Duck (and subclasses of Duck, if any).
*/
void makeItFly(const Bird& bird) {
    bird.fly();
}

int main() {
    Bird b;
    Duck d;

    makeItFly(b);
    makeItFly(d);

    return 0;
}
