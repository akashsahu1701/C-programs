#include "bits/stdc++.h"
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;

    node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    if (head != NULL)
    {
        head->prev = n;
    }
    head = n;
}

void insertAtTail(node *&head, int val)
{

    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    node *n = new node(val);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void deletionAtHead(node *&head)
{
    node *todelete = head;
    head = head->next;
    head->prev = NULL;

    delete todelete;
}

void deletion(node *&head, int pos)
{
    if (pos == 1)
    {
        deletionAtHead(head);
        return;
    }

    node *temp = head;
    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            node *todelete = temp;
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete todelete;
        }
        count++;
        temp = temp->next;
    }
}
void deletionByValue(node *&head, int key)
{

    node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->data == key)
        {
            node *todelete = temp;
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete todelete;
        }
        temp = temp->next;
    }
}

int length(node *&head)
{
    int length = 0;
    node *temp = head;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}

node *kAppend(node *&head, int k)
{
    node *newHead;
    node *newTail;
    node *tail = head;

    int l = length(head);
    int count = 1;
    k = k % l;
    while (tail->next != NULL)
    {
        if (count == l - k)
        {
            newTail = tail;
        }
        if (count == l - k + 1)
        {
            newHead = tail;
        }
        tail = tail->next;
        count++;
    }
    tail->next = head;
    newTail->next = NULL;
    newHead->prev = NULL;

    return newHead;
}

int main()
{

    node *head = NULL;
    insertAtTail(head, 3);
    insertAtHead(head, 5);
    insertAtTail(head, 6);
    insertAtTail(head, 7);
    insertAtTail(head, 8);
    display(head);
    node *newhead = kAppend(head, 3);
    display(newhead);
    return 0;
}