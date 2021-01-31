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
    Poonam.withdraw(1000);
    Poonam.display();
    TrustAccount Manisha("Manisha Sahu", 1200, 13);
    Manisha.display();
    cout << Manisha.status(Manisha.withdraw(100)) << endl;
    cout << Manisha.status(Manisha.withdraw(100)) << endl;
    cout << Manisha.status(Manisha.withdraw(100)) << endl;
    cout << Manisha.status(Manisha.withdraw(100)) << endl;

    Manisha.deposit(6000);
    Manisha.display();
    return 0;
}