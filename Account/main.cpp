#include "Account.cpp"
#include "Account.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Account Akash;
    cout << Akash.getName() << " " << Akash.getBalance() << endl;

    Akash.setName("Akash Sahu");
    Akash.setBalance(10000.00);

    cout << Akash.getName() << " " << Akash.getBalance() << endl;
    cout << Akash.status(Akash.deposit(100)) << endl;
    cout << Akash.getName() << " " << Akash.getBalance() << endl;
    cout << Akash.status(Akash.withdraw(1000)) << endl;
    cout << Akash.getName() << " " << Akash.getBalance() << endl;

    Account *n = new Account{"pankaj", 10000};

    cout << n->getName() << " " << n->getBalance() << endl;
    n->deposit(1000);
    cout << n->status(n->withdraw(10000)) << " " << n->getBalance() << endl;
    return 0;
}