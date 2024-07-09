#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate, double threshold, double bonus)
    : Savings_Account{name, balance, int_rate}, threshold{threshold}, bonus{bonus} {

    }

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    : Trust_Account{name, balance, int_rate, 0, 0} {

    }

bool Trust_Account::deposit(double amount) {
    if(amount >= threshold) {
        amount += bonus;
    }
    Savings_Account::deposit(amount);
    return true;
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
    os << "[Trust_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "% ," << account.threshold << "," << account.bonus << "]";
    return os;
}
