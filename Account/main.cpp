#include "Account.cpp"
#include "Account.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Account Akash("Akash Sahu");
    Akash.display();
    SavingAccount Poonam("Poonam Sahu", 10000, 12.5);
    Poonam.display();
    TrustAccount Manisha("Manisha Sahu", 1200, 13);
    Manisha.display();
    Manisha.withdraw(100);
    Manisha.withdraw(100);
    Manisha.withdraw(100);
    Manisha.deposit(6000);
    Manisha.display();
    return 0;
}