#include <iostream>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include <vector>

class Test {
private:
    int data;
public:
    Test(): data{0} {std::cout << "Test constructor (" << data << ")" << std::endl; }
    Test(int data): data {data} {std::cout << "Test constructor (" << data << ")" << std::endl; }
    int get_data() const { return data; }
    ~Test() { std::cout << "Test destructor (" << data << ")" << std::endl; }
};

using namespace std;

int main()
{
    // Test *t1 = new Test {1000};
    // delete t1;

    // std::unique_ptr<Test> t1 = new Test(100);  // Compilor error because new Test returns raw pointer

    std::unique_ptr<Test> t1 {new Test{100}};
    std::unique_ptr<Test> t2 = std::make_unique<Test>(1000);
    std::unique_ptr<Test> t3;
    // t3 = t1; // Not allowed to assign
    t3 = std::move(t1);
    if(!t1)
        std::cout << "t1 is nullptr" << std::endl;
    
    std::unique_ptr<Account> a1 = std::make_unique<Checking_Account>("Moe", 5000);
    std::cout << *a1 << std::endl;
    a1 -> deposit(5000);
    std::cout << *a1 << std::endl;

    std::vector<std::unique_ptr<Account>> accounts;
    accounts.push_back(std::make_unique<Checking_Account>("James", 1000));
    accounts.push_back(std::make_unique<Savings_Account>("Billy", 4000, 5.2));
    accounts.push_back(std::make_unique<Trust_Account>("Bobby",5000, 4.5));

    for(const auto &account: accounts)
        std::cout << *account << std::endl;
    
    std::vector<Account> accounts2;
    Checking_Account c1 {"c1", 1000};
    Savings_Account s1 {"s1", 4000, 5.2};
    accounts2.push_back(static_cast<Account>(c1));
    accounts2.push_back(static_cast<Account>(s1));

    for(const auto account: accounts2)
        std::cout << *account << std::endl;

    return 0;    
}