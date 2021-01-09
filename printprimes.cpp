#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cin >> num1;
    cin >> num2;
    cout << "prime numbers: " << endl;
    for (int j = num1; j < num2; j++)
    {
        int i;
        for (i = 2; i < j; i++)
        {
            if (j % i == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            cout << j << endl;
        }
    }
    return 0;
}