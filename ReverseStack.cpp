#include "bits/stdc++.h"
#include "stack"
using namespace std;

void insertAtBottom(stack<int> &st, int ele)
{

    if (st.empty())
    {
        st.push(ele);
        return;
    }

    int topele = st.top();
    st.pop();
    insertAtBottom(st, ele);

    st.push(topele);
}

void Reverse(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }

    int topel = st.top();
    st.pop();

    Reverse(st);
    insertAtBottom(st, topel);
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    Reverse(st);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}