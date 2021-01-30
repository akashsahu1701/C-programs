#include "Player.h"
#include <string>
using namespace std;

Player::Player(string tempName, int heal, int exp)
    : name{tempName}, health{heal}, xp{exp}
{
}