#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
// transform(str.begin(), s.end(), s.begin(), :: toupper);
// transform(str.begin(), s.end(), s.begin(), :: tolower);
// sort(str.begin(), str.end(), greater<int>) sort in decreasing order for char use char;
int main()
{
    string str = "Akash Sahu";
    cout << str << endl;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    cout << str << endl;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
    cout << str << endl;
    return 0;
}