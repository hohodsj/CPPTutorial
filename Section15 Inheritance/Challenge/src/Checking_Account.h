#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include "Account.h"
#include <string>

class Checking_Account: public Account{
friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);
private:
    std::string name;
    double withdraw_fee;

public:
    Checking_Account();
    Checking_Account(std::string name);
    Checking_Account(std::string name, double balance);
    Checking_Account(std::string name, double balance, double withdraw_fee);
    // use deposit method from base class
    bool withdraw(double amount);
};


#endif