#include "bits/stdc++.h"
#include <string>

using namespace std;

bool isValid(string s)
{
    stack<char> st;
    bool ans = true;

    for (auto x : s)
    {
        if (x == '{' || x == '(' || x == '[')
        {
            st.push(x);
        }
        else if (x == '}')
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (x == ']')
        {
            if (!st.empty() && st.top() == '[')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (x == ')')
        {
            if (!st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
    }
    if (!st.empty())
    {
        ans = false;
    }

    return ans;
}

int main()
{
    string s = "[{[()]}]";

    if (isValid(s))
    {
        cout << "Valid String";
    }
    else
    {
        cout << "Invalid string";
    }

    return 0;
}