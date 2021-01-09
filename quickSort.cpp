#include "bits/stdc++.h"
using namespace std;

void Swap(int arr[], int i, int j)
{
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int r)
{
    int pivot = arr[r];
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            Swap(arr, i, j);
        }
    }
    Swap(arr, i + 1, r);
    return i + 1;
}

void QuickSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pi = partition(arr, l, r);
        QuickSort(arr, l, pi - 1);
        QuickSort(arr, pi + 1, r);
    }
}

int main()
{
    int arr[] = {12, 23, 21, 54, 19};
    QuickSort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;

    return 0;
}