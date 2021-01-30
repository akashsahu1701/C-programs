#include "Account.cpp"
#include "Account.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Account Akash;
    Akash.setName("Akash Sahu");
    Akash.setBalance(10000.00);

    cout << Akash.getName() << " " << Akash.getBalance() << endl;
    cout << Akash.status(Akash.deposit(100)) << endl;
    cout << Akash.getName() << " " << Akash.getBalance() << endl;
    cout << Akash.status(Akash.withdraw(1000)) << endl;
    cout << Akash.getName() << " " << Akash.getBalance() << endl;

    Account *n = new Account();
    n->setName("pankaj");
    n->setBalance(1000);

    cout << n->getName() << " " << n->getBalance() << endl;
    n->deposit(1000);
    cout << n->getBalance() << endl;
    return 0;
}