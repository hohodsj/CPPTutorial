#include <iostream>
#include <memory>

// https://github.com/Kwounsu/VSCode_cpp/blob/main/tasks.json
using namespace std;

class Base {
public:
    void say_hello() const {
        cout << "Base class object" << endl;
    }
};

class Derived: public Base {
public:
    void say_hello() const {
        cout << "Derived class object" << endl;
    }
};

void greetings(const Base &obj) {
    cout << "Greetings:";
    obj.say_hello();
}

int main()
{
    Base b;
    b.say_hello();

    Derived d;
    d.say_hello();

    greetings(b);

    greetings(d);

    Base *ptr = new Derived();
    ptr -> say_hello();

    std::unique_ptr<Base> ptr1 = std::make_unique<Derived>();
    ptr1 -> say_hello();

    delete ptr;

    return 0;
}