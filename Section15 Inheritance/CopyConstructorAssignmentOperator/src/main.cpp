#include <iostream>
// https://github.com/Kwounsu/VSCode_cpp/blob/main/tasks.json
using namespace std;

class Base {
private:
    int value;
public:
    Base(): value{0} {
        cout << "Base no-args constructor" << endl;
    }
    Base(int x): value{x} {
        cout << "Base (int) overloaded constructor" << endl;
    }
    Base(const Base &other) 
    :value{other.value} {
        cout << "Base copy constructor" << endl;
    }

    Base &operator=(const Base &rhs) {
        cout << "Base operator=" << endl;
        if (this == &rhs)
            return *this;
        value = rhs.value;
        return *this;
    }

    ~Base() {
        cout << "Base destructor" << endl;
    }
};

class Derived: public Base {
private:
    int doubled_value;
public:
    Derived()
        :Base{}, doubled_value{0} {
            cout << "Derived no-args constructor" << endl;
        }
    Derived(int x)
        :Base{x}, doubled_value{x*2} {
            cout << "Derived (int) constructor" << endl;
        }
    Derived(const Derived &other) // invoke Base copy constructor+
        :Base{other}, doubled_value {other.doubled_value} {
            cout << "int Derived constructor" << endl;
        } 
    Derived &operator=(const Derived &rhs) {
        cout << "Derived operator=" << endl;
        if (this == &rhs) {
            return *this;
        }
        Base::operator=(rhs);
        doubled_value = rhs.doubled_value;
        return *this;
    }  
    ~Derived() {
        cout << "Derived destructor" << endl;
    }
};

int main() {
    // Base b {100}; // Overloaded constructor
    // Base b1 {b};
    // b = b1;

    Derived d {100};
    Derived d1 {d};
    d = d1;

    return 0;
 }