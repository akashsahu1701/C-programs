#include "bits/stdc++.h"
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Queue
{
    node *front;
    node *back;

public:
    Queue()
    {
        front = NULL;
        back = NULL;
    }

    void push(int x)
    {
        node *n = new node(x);
        if (front == NULL)
        {
            front = n;
            back = n;
            return;
        }
        back->next = n;
        back = n;
    }

    void peek()
    {
        if (front == NULL)
        {
            cout << "No Elements\n";
            return;
        }
        cout << front->data << endl;
    }

    void pop()
    {
        if (front == NULL)
        {
            cout << "No Elements\n";
            return;
        }
        if (front == back)
        {
            node *todelete = front;
            delete todelete;
            front = NULL;
            back = NULL;
            return;
        }
        node *todelete = front;
        front = front->next;
        delete todelete;
    }

    bool empty()
    {
        if (front == NULL)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Queue Q;
    Q.push(4);
    Q.peek();
    Q.push(5);
    Q.pop();
    Q.peek();
    cout << Q.empty() << endl;
    Q.pop();
    cout << Q.empty() << endl;
    Q.peek();
    return 0;
}