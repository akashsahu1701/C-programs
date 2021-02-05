#include <iostream>

using namespace std;
#define n 100

class Stack
{
    int *arr;
    int top;

public:
    Stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack is Overflown" << endl;
            return;
        }

        top++;
        arr[top] = x;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "No Element To Pop\n";
            return;
        }
        top--;
    }

    int Top()
    {
        if (top == -1)
        {
            cout << "No Element To Show\n";
            return -1;
        }

        return arr[top];
    }

    bool empty()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }

    void display()
    {
        int y = top;
        if (y == -1)
        {
            cout << "Stack is Empty\n";
            return;
        }
        while (y != -1)
        {
            cout << arr[y] << " ";
            y--;
        }
    }
};

int main()
{
    Stack a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(5);
    cout << a.empty() << endl;
    a.display();
    a.pop();

    cout << "\n"
         << a.Top();
}