#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"

// Utility helper functions for Account class
template<class T>
void display(const std::vector<T> &accounts);
template<class T>
void deposit(std::vector<T> &accounts, double amount);
template<class T>
void withdraw(std::vector<T> &accounts, double amount);
#include "Account_Util.cpp" // Include the implementation file

#endif