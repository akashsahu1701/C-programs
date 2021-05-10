#include "bits/stdc++.h"
using namespace std;

class Queue
{
    stack<int> s1;
    stack<int> s2;

public:
    void push(int x)
    {
        s1.push(x);
    }

    void pop()
    {
        if (s1.empty() && s2.empty())
        {
            cout << "No Elements\n";
            return;
        }
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        cout << s2.top() << endl;
        s2.pop();
    }

    bool empty()
    {
        if (s1.empty() && s2.empty())
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Queue Q;

    Q.push(5);
    Q.push(3);
    Q.push(6);
    Q.pop();
    Q.pop();
    Q.push(8);
    Q.pop();
    Q.pop();
}