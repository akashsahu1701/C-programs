// adding guards for stoping multile declarations
#ifndef _ACCOUNT_H
#define _ACCOUNT_H

#include <string>
using namespace std;

class Account
{
    string name;
    double balance;

public:
    // inline declarations
    void setName(string tempName) { name = tempName; }
    void setBalance(double bal) { balance = bal; }

    // outside declarations
    string getName();
    double getBalance();

    bool withdraw(double bal);
    bool deposit(double bal);

    string status(bool something);
    // ordinary way for constructors
    // Account()
    // {
    //     name = "test";
    //     balance = 0.00;
    // }
    // Account(string tempName, double bal)
    // {
    //     name = tempName;
    //     balance = bal;
    // }
    // or Use the Default Value constructors
    Account();
    Account(string tempName);
    Account(string tempName, double bal);
};

#endif