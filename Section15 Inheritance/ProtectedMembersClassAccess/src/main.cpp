#include <iostream>
// https://github.com/Kwounsu/VSCode_cpp/blob/main/tasks.json
using namespace std;

class Base {
    // Note friends of Base have access to all
    // ex. friend void display2() {std::cout << a << "," << b << "," << c << std::endl;}
public:
    int a {0};
    void display() {std::cout << a << "," << b << "," << c << std::endl;} // member method has access to all
protected:
    int b {0};
private:
    int c {0};
};

class Derived: public Base {
    // Note friends of Derived have access to only what Derived has access to

    // a will be public
    // b will be protected
    // c will not be accessible
public:
    void access_base_members() {
        a = 100; // OK
        b = 200; // OK
        // c = 300; // not accessible
    }
};


int main()
{
    cout << "===Base member access from base objects ===" << endl;
    Base base;
    base.a = 100; // OK
    // base.b = 200; // Compiler error
    // base.c = 300; // Compiler error

    Derived d;
    d.a = 100; // OK
    // d.b = 200; // Compiler error
    // d.c = 300; // Compiler error
}