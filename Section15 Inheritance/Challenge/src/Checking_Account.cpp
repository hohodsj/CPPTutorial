#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance, double withdraw_fee)
:Account(name, balance), withdraw_fee{withdraw_fee} {

}

Checking_Account::Checking_Account()
:Checking_Account{"Unnamed Account", 0, 1.5} {

}

Checking_Account::Checking_Account(std::string name)
:Checking_Account{name, 0, 1.5} {

}

Checking_Account::Checking_Account(std::string name, double balance)
:Checking_Account{name, balance, 1.5} {

}

bool Checking_Account::withdraw(double amount) {
    if (balance >= amount + withdraw_fee ) {
        Account::withdraw(amount);
        return true;
    }
    return false;
}

std::ostream &operator<<(std::ostream &os, const Checking_Account &account) {
    os << "[Checking_Account: " << account.name << ": " << account.balance << ", " << account.withdraw_fee << "%]";
    return os;
}