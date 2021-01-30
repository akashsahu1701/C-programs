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

// better way of making constructors
// faster and cleaner
Account::Account()
    : name{"XXXX"}, balance{0.00}
{
}
Account::Account(string tempName)
    : name{tempName}, balance{0.00}
{
}
Account::Account(string tempName, double bal)
    : name{tempName}, balance{bal}
{
}