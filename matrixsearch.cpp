// when matrix is sorted in both direction optimized solution;
#include "bits/stdc++.h"
using namespace std;

int main()
{

    int n, m, key;
    cin >> n >> m >> key;
    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int r = 0, c = m - 1;
    bool found = false;
    while (r < n && c >= 0)
    {
        if (a[r][c] == key)
        {
            found = true;
            break;
        }
        else if (a[r][c] > key)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if (found)
    {
        cout << "Element found";
    }
    else
    {
        cout << "Element Does Not Exist";
    }

    return 0;
}