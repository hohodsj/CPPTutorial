#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player{
private:
    std::string name;
    int health;
    int xp;
public:
    void set_name(std::string name_val) {
        name = name_val;
    }

    // Overloaded Constructors
    Player() {
        cout << "No args constructor called" << endl;
    }

    Player(std::string name) {
        cout << "String args called" << endl;
    }

    Player(std::string name, int health, int xp) {
        cout << "Three args called" << endl;
    }

    ~Player() {
        cout << "Destructor called for " << name << endl;
    }
};

int main()
{
    {
        Player slayer;
        slayer.set_name("Slayer");
    }

    {
        Player frank;
        frank.set_name("Frank");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villian("Villain", 100, 12);
        villian.set_name("Villain");
    }

    Player *enemy = new Player;
    enemy->set_name("Enemy");

    delete enemy;
}