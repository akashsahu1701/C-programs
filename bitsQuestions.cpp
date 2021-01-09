#include <iostream>
using namespace std;

int ispowerof2(int n)
{
    return n && !(n & n - 1);
}

// no of ones in binary digit
int numberofones(int n)
{
    int count = 0;
    while (n)
    {
        n = n & n - 1;
        count++;
    }

    return count;
}

// subsets of array using bit manipulations
void subsets(int arr[], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}
// find a unique number if all element is present twice
int unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}

int main()
{
    // cout << ispowerof2(0) << endl;
    // cout << numberofones(7) << endl;
    int arr[] = {1, 2, 3, 7, 1, 2, 3};
    cout << unique(arr, 7) << endl;
    return 0;
}