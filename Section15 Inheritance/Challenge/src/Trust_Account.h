#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_
#include "Savings_Account.h"
#include <string>

class Trust_Account : public Savings_Account{
    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);
private:
    double threshold;
    double bonus;
public:
    Trust_Account(std::string name, double balance, double int_rate);
    Trust_Account(std::string name, double balance, double int_rate, double threshold, double bonus);
    bool deposit(double amount);
};

#endif // _TRUST_ACCOUNT_H_