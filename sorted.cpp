#include "bits/stdc++.h"
using namespace std;

bool sorted(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }
    return (arr[0] < arr[1] && sorted(arr + 1, n - 1));
}

int main()
{
    int arr[] = {11, 3, 5, 16, 7, 9};
    cout << sorted(arr, 6) << endl;

    return 0;
}