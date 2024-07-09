#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Player {
private:
    // attribute
    string  name {"Player"};
    int health {0};
    int xp {3};
public:
    // methods
    void talk(string);
    bool is_dead();
};

int main()
{
    Player frank;
    frank.name = "frank";
    cout << frank.health << endl;
}