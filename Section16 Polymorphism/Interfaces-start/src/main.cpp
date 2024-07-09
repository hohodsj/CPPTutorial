#include <iostream>

using namespace std;

class Account {
    friend std::ostream &operator<<(std::ostream &os, const Account &acc);
public:
    virtual void withdraw(double amount) {
        std::cout << "In Account::withdraw" << std::endl;
    }
    virtual ~Account() {}
};

std::ostream &operator<<(std::ostream &os, const Account &acc) {
    os << "Account display";
    return os;
}

class Checking: public Account {
    friend std::ostream &operator<<(std::ostream &os, const Checking &acc); // friend functions are not inherited
public:
    virtual void withdraw(double amount) {
        std::cout << "In Checking::withdraw" << std::endl;
    }
    virtual ~Checking() {}
};

std::ostream &operator<<(std::ostream &os, const Checking &acc) {
    os << "Checking display";
    return os;
}

class Savings: public Account {
    friend std::ostream &operator<<(std::ostream &os, const Savings &acc); // friend functions are not inherited
public:
    virtual void withdraw(double amount) {
        std::cout << "In Savings::withdraw" << std::endl;
    }
    virtual ~Savings() {}
};

std::ostream &operator<<(std::ostream &os, const Savings &acc) {
    os << "Savings display";
    return os;
}

class Trust: public Account {
    friend std::ostream &operator<<(std::ostream &os, const Trust &acc); // friend functions are not inherited
public:
    virtual void withdraw(double amount) {
        std::cout << "In Trust::withdraw" << std::endl;
    }
    virtual ~Trust() {}
};

std::ostream &operator<<(std::ostream &os, const Trust &acc) {
    os << "Trust display";
    return os;
}

int main()
{
    Account *p1 = new Account();
    std::cout << *p1 << std::endl;

    Account *p2 = new Checking();
    std::cout << *p2 << std::endl; // We want to print Checking display but friend has no virtual method Solution will be in Complete

    // Account a;
    // std::cout << a << std::endl;

    // Checking c;
    // std::cout << c << std::endl;

    // Savings s;
    // std::cout << s << std::endl;

    // Trust t;
    // std::cout << t << std::endl;

    return 0;
}