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
    void display();

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
    // Account();
    // Account(string tempName);
    Account(string tempName = "XXXX", double bal = 0.00);
};

class SavingAccount : public Account
{
    double interest;

public:
    void setInterest(int rate) { interest = rate; }
    double getInterest() { return interest; }
    void display();
    bool withdraw(double bal);
    SavingAccount(string tempName = "XXXX", double bal = 0.00, double rate = 0.00);
};

class TrustAccount : public SavingAccount
{
    int limit;

public:
    void display();
    void set_limit(int tempLimit) { limit = tempLimit; }
    int get_limit() { return limit; }
    bool withdraw(double bal);
    bool deposit(double bal);
    TrustAccount(string tempName = "XXXX", double bal = 0.00, double rate = 0.00);
};

#endif