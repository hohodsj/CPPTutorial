#include <iostream>
#include <memory>

// https://github.com/Kwounsu/VSCode_cpp/blob/main/tasks.json
using namespace std;

class Base {
public:
    virtual void say_hello() const {
        cout << "Base class object" << endl;
    }
    virtual ~Base() {};
};

class Derived: public Base {
public:
    virtual void say_hello() const override { // override keyword is optional but it is extremely helpful when comes to debugging
        cout << "Derived class object" << endl;
    }
    virtual ~Derived() {};
};

int main()
{
    Base *p1 = new Base(); // Base::say_hello()
    p1 -> say_hello();

    Derived *p2 = new Derived(); // Derived::say_hello()
    p2 -> say_hello();

    Base *p3 = new Derived(); // Base::say_hello()
    p3 -> say_hello();

    return 0;
}