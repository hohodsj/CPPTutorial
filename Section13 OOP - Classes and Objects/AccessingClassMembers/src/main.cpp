#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Player {
public:
    // attribute
    string  name {"Player"};
    int health {0};
    int xp {3};

    // methods
    void talk(string text_to_say) { cout << name << " says " << text_to_say << endl; }
    bool is_dead();
};

class Account {
public:
    // attributes
    string name {"Account"};
    double balance {0.0};

    // methods
    bool deposit(double bal) {balance += bal; cout << "In Deposit" << endl;}
    bool withdraw(double bal) {balance -= bal; cout << "In Withdraw" << endl;}
};

int main()
{
    Account frank_account;
    frank_account.name = "Frank's account";
    frank_account.balance = 5000;
    frank_account.deposit(1000);
    frank_account.withdraw(500);
    

    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;

    frank.talk("Hi");

    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy -> xp = 15;
    enemy -> talk("I will destroy you!");
    return 0;
}