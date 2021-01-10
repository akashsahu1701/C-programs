#include <bits/stdc++.h>
#include <vector>

using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}

int main()
{
    int arr[] = {10, 16, 17, 7, 14, 5, 3, 12, 9};
    vector<pair<int, int>> a;
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        a.push_back(make_pair(arr[i], i));
    }
    sort(a.begin(), a.end(), compare);
    for (int i = 0; i < a.size(); i++)
    {
        arr[a[i].second] = i;
    }

    for (int i = 0; i < a.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}