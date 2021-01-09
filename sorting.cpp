#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                // swaping numbers
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void bubble_sort(int arr[], int n)
{
    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                // swaping numbers
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "1 for selection sort\n";
    cout << "2 for bubble sort\n";
    cout << "3 for insertion sort\n";
    cout << "Enter a choice :\n";
    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
        selection_sort(arr, n);
        break;
    case 2:
        bubble_sort(arr, n);
        break;
    case 3:
        insertion_sort(arr, n);
        break;

    default:
        cout << "please make a valid choice";
        break;
    }

    return 0;
}