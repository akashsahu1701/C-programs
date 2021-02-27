#include "bits/stdc++.h"
using namespace std;

#define n 20

class Queue
{
     int *arr;
     int front;
     int back;

public:
     Queue()
     {
          arr = new int[n];
          front = -1;
          back = -1;
     }

     void push(int x)
     {
          if (back == n - 1)
          {
               cout << "overflow\n";
               return;
          }
          back++;
          arr[back] = x;

          if (front == -1)
          {
               front++;
          }
     }

     void pop()
     {
          if (front == -1 || front > back)
          {
               cout << "no element to pop\n";
               return;
          }
          front++;
     }

     int peek()
     {
          if (front == -1 || front > back)
          {
               cout << "no element to show\n";
               return -1;
          }
          return arr[front];
     }

     bool empty()
     {
          if (front == -1 || front > back)
          {
               cout << "no element to show\n";
               return true;
          }
          return false;
     }

     void display()
     {
          while (front != -1 && front <= back)
          {
               cout << arr[front] << " ";
               front++;
          }
     }
};

int main()
{
     Queue Q;
     Q.push(5);
     Q.push(2);
     Q.push(4);
     Q.display();
     return 0;
}
