// section 6
#include "bits/stdc++.h"
using namespace std;

int main()
{
    cout << "hello welcome to room service\n";
    int small, large, cost;
    float tax, total;

    cout << "No. of small rooms you want?\n";
    cin >> small;
    cout << "No. of large rooms you want?\n";
    cin >> large;
    cout << "price of small room: $25 \n";
    cout << "price of large room: $55 \n";

    cost = small * 25 + large * 35;
    tax = cost * 0.06;
    total = cost + tax;

    cout << "Cost : $" << cost << endl;
    cout << "Tax : $" << tax << endl;
    cout << "Total Estimated value : $" << total;

    return 0;
}