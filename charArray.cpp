// finding max length of word in array
#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char arr[n + 1];
    cin.getline(arr, n);
    cin.ignore();

    int currlength = 0, maxlength = 0, st = 0, stmax = 0;
    int i = 0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currlength > maxlength)
            {
                maxlength = currlength;
                stmax = st;
            }
            currlength = 0;
            st = i + 1;
        }
        else
            currlength++;

        if (arr[i] == '\0')
        {
            break;
        }

        i++;
    }

    cout << maxlength << endl;
    for (int i = 0; i < maxlength; i++)
    {
        cout << arr[i + stmax];
    }

    return 0;
}