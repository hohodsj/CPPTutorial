#include <iostream>
// https://github.com/Kwounsu/VSCode_cpp/blob/main/tasks.json
using namespace std;

class Base {
private:
    int value;
public:
    Base(): value{0} {cout << "Base no-args" << endl; }
    Base(int x): value{x} {cout << "Base (int) overloaded constructor" << endl; }
    ~Base() {cout << "Base destructor" << endl; }
};

class Derived: public Base {
    // using Base::Base; // Drag all constructors from Base class NOT RECOMMENDED
private:
    int doubled_value;
public:
    Derived(): doubled_value {0} {cout << "Derived no-args" << endl; }
    Derived(int x): doubled_value {x * 2} {cout << "Derived (int) overloaded constructor" << endl; }
    ~Derived() { cout << "Derived destructor" << endl; }
};


int main()
{
    // Base b;
    // Base b{100};
    // Derived d;
    Derived d{1000}; // Derived(int x) is being called and Base() is called (but we want to call Base(int x))
    return 0;
}