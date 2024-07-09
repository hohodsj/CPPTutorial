#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"
#include "IllegalBalanceException.h"

using namespace std;

int main() {
    // test your code here
    std::cout << "Program completed successfully" << std::endl;

    // Normal test
    Trust_Account t {"Trust account", 1000, 5.1};
    
    // Savings_Account s {"Savings Illegal Balance Account", -100, 5};

    try {
        Savings_Account s {"Savings Illegal Balance Account", -100, 5};
    }
    catch (const IllegalBalanceException &ex) {
        cout << ex.what() << endl;
    }


    Checking_Account c {"Checking account", 10};
    try {
        c.withdraw(100);
    }
    catch (const Insufficient_Funds_Exception &ex) {
        cout << ex.what() << endl;
    }



    return 0;
}

