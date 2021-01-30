#include "Account.h"
#include <string>
using namespace std;

string Account::getName()
{
    return name;
}

double Account::getBalance()
{
    return balance;
}

bool Account::deposit(double bal)
{
    if (bal > 0)
    {
        balance += bal;
        return true;
    }
    return false;
}

bool Account::withdraw(double bal)
{
    if (balance - bal >= 0)
    {
        balance -= bal;
        return true;
    }
    return false;
}

string Account::status(bool something)
{
    if (something)
    {
        return "SUCCESS";
    }
    return "FAILED";
}