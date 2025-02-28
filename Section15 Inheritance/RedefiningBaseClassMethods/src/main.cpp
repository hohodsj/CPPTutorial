#include <iostream>
#include "Savings_Account.h"
// https://github.com/Kwounsu/VSCode_cpp/blob/main/tasks.json
using namespace std;

int main()
{
    cout << "\n===Account class===" << endl;
    Account a1 { 1000.0 };
    cout << a1 << endl; // Account balance 1000

    a1.deposit(500.0);
    cout << a1 << endl;

    a1.withdraw(1000);
    cout << a1 << endl;

    a1.withdraw(5000);
    cout << a1 << endl;
    
    cout << "\n===Savings Account class===" << endl;
    Savings_Account s1 {1000, 5};
    cout << s1 << endl;

    s1.deposit(1000);
    cout << s1 << endl;

    s1.withdraw(2000);
    cout << s1 << endl;

    s1.withdraw(1000); // Insufficient funds
    cout << s1 << endl;

    return 0;
}