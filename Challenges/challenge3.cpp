// section 8
#include "bits/stdc++.h"
#include "cmath"
using namespace std;

int main()
{
    int money;
    cout << "How much change you need? \n";
    cin >> money;

    int note_50, note_20, note_10, note_5, note_2, note_1;
    note_50 = money / 50;
    money = money % 50;
    note_20 = money / 20;
    money = money % 20;
    note_10 = money / 10;
    money = money % 10;
    note_5 = money / 5;
    money = money % 5;
    note_2 = money / 2;
    money = money % 2;
    note_1 = money / 1;
    money = money % 1;

    cout << "Note 50 :" << note_50 << endl;
    cout << "Note 20 :" << note_20 << endl;
    cout << "Note 10 :" << note_10 << endl;
    cout << "Note 5 :" << note_5 << endl;
    cout << "Note 2 :" << note_2 << endl;
    cout << "Note 1 :" << note_1 << endl;

    return 0;
}