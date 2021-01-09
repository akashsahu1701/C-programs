#include "bits/stdc++.h"
#include <string>
using namespace std;

void reversed(string str)
{
    if (str.length() == 0)
    {
        return;
    }
    reversed(str.substr(1));
    cout << str[0];
}

void replacePi(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    if (s[0] == 'p' && s[1] == 'i')
    {
        cout << "3.14";
        replacePi(s.substr(2));
    }
    else
    {
        cout << s[0];
        replacePi(s.substr(1));
    }
}

// for continous duplicates
void removeDuplicate(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    if (s[0] == s[1])
    {
        removeDuplicate(s.substr(1));
    }
    else
    {
        cout << s[0];
        removeDuplicate(s.substr(1));
    }
}

string moveAllX(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    if (s[0] == 'x')
    {
        return (moveAllX(s.substr(1)) + s[0]);
    }

    return (s[0] + moveAllX(s.substr(1)));
}

int main()
{
    string str = "aakashsahu";
    reversed(str);
    cout << "\n";
    replacePi("ppiwpipppi");
    cout << "\n";
    removeDuplicate("aaaaddddsssseeefff");
    cout << "\n";
    cout << moveAllX("xxxaasxaxadxnddxx");
    return 0;
}