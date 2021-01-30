#include <string>
using namespace std;

class Player
{
    string name;
    int health;
    int xp;

public:
    void setName(string tempName) { name = tempName; }
    void setHealth(int heal) { health = heal; }
    void setXp(int exp) { xp = exp; }
    string getName() { return name; }
    int getHealth() { return health; }
    int getXp() { return xp; }

    Player(string name = "XXXX", int health = 0, int xp = 0);
};