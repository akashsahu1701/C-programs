#include "Player.cpp"
#include <iostream>
using namespace std;

int main()
{
    Player hero = Player("Akash");
    cout << hero.getName() << " health:" << hero.getHealth() << " XP:" << hero.getXp() << endl;
    return 0;
}