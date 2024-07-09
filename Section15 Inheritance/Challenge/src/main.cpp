// Section 15
// Challenge 
#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Account_Util.h"
#include "Checking_Account.h"
#include "Trust_Account.h"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;
   
    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000} );
    accounts.push_back(Account {"Curly", 5000} );
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts,2000);
    
    // Savings 

    vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account {} );
    sav_accounts.push_back(Savings_Account {"Superman"} );
    sav_accounts.push_back(Savings_Account {"Batman", 2000.0} );
    sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000.0, 5.0} );

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);
    
    // Checking
    vector<Checking_Account> chk_acounts;
    chk_acounts.push_back(Checking_Account{});
    chk_acounts.push_back(Checking_Account {"c1"});
    chk_acounts.push_back(Checking_Account{"c2", 2000.0});
    chk_acounts.push_back(Checking_Account{"c3", 3000.0, 1.5});

    display(chk_acounts);
    deposit(chk_acounts, 1000);
    withdraw(chk_acounts, 2000);

    // Trust
    vector<Trust_Account> trst_acounts;
    trst_acounts.push_back(Trust_Account{"c3", 3000.0, 1.5});
    trst_acounts.push_back(Trust_Account{"c3", 3000.0, 1.5, 1000, 10});


    display(trst_acounts);
    deposit(trst_acounts, 1000);
    withdraw(trst_acounts, 2000);
    return 0;
}

