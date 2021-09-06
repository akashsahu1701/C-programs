// Sample Input
// 3
// 92 022
// 82 12
// 77 13
// 2 false numeric

// Sample Output
// 82 12
// 77 13
// 92 022

#include <bits/stdc++.h>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

string extractAtKey(string str, int key)
{
    char *s = strtok((char *)str.c_str(), " ");
    while (key > 1)
    {
        s = strtok(NULL, " ");
        key--;
    }
    return s;
}
bool numCompare(pair<string, string> s1, pair<string, string> s2)
{
    string key1, key2;
    key1 = s1.second;
    key2 = s2.second;
    return stoi(key1) < stoi(key2);
}
bool lexCompare(pair<string, string> s1, pair<string, string> s2)
{
    string key1, key2;
    key1 = s1.second;
    key2 = s2.second;
    return key1 < key2;
}

int main()
{
    int n;
    cin >> n;
    cin.get();
    string temp;
    vector<string> vec;

    for (int i = 0; i < n; i++)
    {
        getline(cin, temp);
        vec.push_back(temp);
    }
    int key;
    string reversal, ordering;
    cin >> key >> reversal >> ordering;

    // extracting key and store them
    vector<pair<string, string>> vp;
    for (int i = 0; i < n; i++)
    {
        vp.push_back({vec[i], extractAtKey(vec[i], key)});
    }

    // sorting
    if (ordering == "numeric")
    {
        sort(vp.begin(), vp.end(), numCompare);
    }
    else
    {
        sort(vp.begin(), vp.end(), lexCompare);
    }

    // reversal
    if (reversal == "true")
    {
        reverse(vp.begin(), vp.end());
    }

    // printing answer
    for (int i = 0; i < n; i++)
    {
        cout << vp[i].first << endl;
    }
    return 0;
}