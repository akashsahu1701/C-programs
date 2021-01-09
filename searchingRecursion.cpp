// searching last and first occurences;
#include "bits/stdc++.h"
using namespace std;

int first(int arr[], int n, int i, int key)
{
    if (i >= n)
    {
        return -1;
    }

    if (arr[i] == key)
    {
        return i;
    }
    return first(arr, n, i + 1, key);
}

int last(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }

    if (last(arr, n, i + 1, key) != -1)
    {
        return last(arr, n, i + 1, key);
    }
    if (arr[i] == key)
    {
        return i;
    }

    return -1;
}

int main()
{
    int arr[] = {1, 2, 4, 5, 3, 2, 4, 6};

    cout << first(arr, 8, 0, 2) << endl;
    cout << last(arr, 8, 0, 2) << endl;
}