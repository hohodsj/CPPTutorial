#include <iostream>

template<class T>
// Displays Account objects in a  vector of Account objects 
void display(const std::vector<T> &accounts) {
    std::cout << "\n=== Accounts ==========================================" << std::endl;
    for (const T &acc: accounts) 
        std::cout << acc << std::endl;
}

template<class T>
// Deposits supplied amount to each Account object in the vector
void deposit(std::vector<T> &accounts, double amount) {
    std::cout << "\n=== Depositing to Accounts =================================" << std::endl;
    for (T &acc:accounts)  {
        if (acc.deposit(amount)) 
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

template<class T>
// Withdraw amount from each Account object in the vector
void withdraw(std::vector<T> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Accounts ==============================" <<std::endl;
    for (T &acc:accounts)  {
        if (acc.withdraw(amount)) 
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
    } 
}