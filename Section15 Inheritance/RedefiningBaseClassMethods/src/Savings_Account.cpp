#include "Savings_Account.h"
#include <iostream>

Savings_Account::Savings_Account(double balance, double int_rate)
    :Account(balance), int_rate{int_rate} {
        std::cout <<"Saving constructor with 2 args" << std::endl;
    }

Savings_Account::Savings_Account()
    :Savings_Account(0.0, 0.0) {
        std::cout <<"Saving constructor with no args" << std::endl;
    }

void Savings_Account::deposit(double amount) {
    amount = amount + (amount * int_rate/100);
    Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const Savings_Account &account) {
    os << "Savings account balance: " << account.balance << " Interest rate: " << account.int_rate;
    return os;
}