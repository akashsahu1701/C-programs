#include "Account.h"
#include <iostream>
#include <string>
using namespace std;

int limit = 0;

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
// Account::Account()
//     : name{"XXXX"}, balance{0.00}
// {
// }
// Account::Account(string tempName)
//     : name{tempName}, balance{0.00}
// {
// }
Account::Account(string tempName, double bal)
    : name{tempName}, balance{bal}
{
}

void Account::display()
{
    cout << getName() << " " << getBalance() << endl;
}

void SavingAccount::display()
{
    cout << getName() << " " << getBalance() << " " << getInterest() << endl;
}

SavingAccount::SavingAccount(string tempName, double bal, double rate)
{
    setName(tempName);
    setBalance(bal);
    setInterest(rate);
}

bool SavingAccount::withdraw(double bal)
{
    if (getBalance() - (bal + 1.50) >= 0)
    {
        double balance = getBalance();
        balance -= (bal + 1.50);
        setBalance(balance);
        return true;
    }
    return false;
}

void TrustAccount::display()
{
    cout << getName() << " " << getBalance() << " " << getInterest() << endl;
}

bool TrustAccount::withdraw(double bal)
{
    if (getBalance() * (0.20) >= bal && limit <= 3)
    {
        double balance = getBalance();
        balance -= bal;
        setBalance(balance);
        limit++;
        return true;
    }
    return false;
}

bool TrustAccount::deposit(double bal)
{
    if (bal > 0)
    {
        double balance = getBalance();
        balance += bal;
        setBalance(balance);
        return true;
    }
    else if (bal > 5000)
    {
        double balance = getBalance();
        balance += bal + 50;
        setBalance(balance);
        return true;
    }
    return false;
}

TrustAccount::TrustAccount(string tempName, double bal, double rate)
{
    setName(tempName);
    setBalance(bal);
    setInterest(rate);
}