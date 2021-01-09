#include <iostream>
using namespace std;

int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

int clearBit(int n, int pos)
{
    int mask = ~(1 << pos);
    return (mask & n);
}

int updateBit(int n, int pos, int value)
{
    int mask = ~(1 << pos);
    n = (mask & n);
    // clearing bit first and then setbit with given value;

    return (n | (value << pos));
}

int main()
{
    int n = 5;
    int pos = 1;
    // cout << getBit(n, pos) << endl;
    // cout << setBit(n, pos) << endl;
    // cout << clearBit(n, pos) << endl;
    cout << updateBit(n, pos, 1) << endl;
}