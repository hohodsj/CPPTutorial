#include <iostream>
// https://github.com/Kwounsu/VSCode_cpp/blob/main/tasks.json
using namespace std;
/*
    If virtual function is used,
    it should also define a virtual desctructor
    otherwise the desctruction is undefine.
*/
class Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Account::withdraw" << std::endl;
    }
    virtual ~Account() { std::cout << "Account::desctructor" << std::endl; }
};

class Checking: public Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Checking::withdraw" << std::endl;
    }
    virtual ~Checking() { std::cout << "Checking::desctructor" << std::endl; }
};

class Savings: public Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Savings::withdraw" << std::endl;
    }
    virtual ~Savings() { std::cout << "Savings::desctructor" << std::endl; }
};

class Trust: public Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Trust::withdraw" << std::endl;
    }
    virtual ~Trust() { std::cout << "Trust::desctructor" << std::endl; }
};

void do_withdraw(Account &account, double amount) {
    account.withdraw(amount);
}

int main()
{
    Account a;
    Account &ref = a;
    ref.withdraw(1000); // In Account::withdraw

    Trust t;
    Account &ref1 = t;
    ref1.withdraw(1000); // In Trust::withdraw

    Account a1;
    Savings a2;
    Checking a3;
    Trust a4;

    do_withdraw(a1, 1000); // Account
    do_withdraw(a2, 2000); // Savings
    do_withdraw(a3, 3000); // Checking
    do_withdraw(a4, 4000); // Trust
    

    return 0;
}