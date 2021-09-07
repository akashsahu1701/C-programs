// Sample Input
// aakashsahu
// ashu
// Sample Output
//     YES
// Task
//     check wether the second is subset of first string

#include "bits/stdc++.h"
#include "string"
using namespace std;

int main()
{

    string s1, s2;

    getline(cin, s1);
    getline(cin, s2);

    int i = s1.length();
    int j = s2.length();

    while (i >= 0 && j >= 0)
    {
        if (s1[i] == s2[j])
        {
            i--;
            j--;
        }
        else
        {
            i--;
        }
    }
    if (j == -1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}