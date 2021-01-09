#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    int key;
    cin >> key;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // sort the array
    for (int i = 1; i < n; i++)
    {
        int current = a[i];
        int j = i - 1;
        while (a[j] > current && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = current;
    }

    int low = 0;
    int high = n - 1;
    int sum = 0;
    while (high > low)
    {
        if (a[low] + a[high] == key)
        {
            cout << low << " " << high << endl;
            return 0;
        }
        else if (a[low] + a[high] < key)
        {
            low++;
        }
        else
        {
            high--;
        }
    }
    if (low == high)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << low << " " << high << endl;
    }

    return 0;
}