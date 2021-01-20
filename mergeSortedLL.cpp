#include <iostream>
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

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

void Display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

node *Merge(node *&head1, node *&head2)
{
    node *dummynode = new node(-1);
    node *ptr1 = head1;
    node *ptr2 = head2;
    node *ptr3 = dummynode;
    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->data > ptr2->data)
        {
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        else
        {
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }
        ptr3 = ptr3->next;
    }
    while (ptr1 != NULL)
    {
        ptr3->next = ptr1;
        ptr1 = ptr1->next;
        ptr3 = ptr3->next;
    }
    while (ptr2 != NULL)
    {
        ptr3->next = ptr2;
        ptr2 = ptr2->next;
        ptr3 = ptr3->next;
    }
    return dummynode->next;
}

node *MergeRecursive(node *&head1, node *&head2)
{
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }

    node *result;

    if (head1->data < head2->data)
    {
        result = head1;
        result->next = MergeRecursive(head1->next, head2);
    }
    else
    {
        result = head2;
        result->next = MergeRecursive(head1, head2->next);
    }
    return result;
}

int main()
{
    node *head1 = NULL;
    node *head2 = NULL;

    int arr1[] = {6, 3, 2, 1};
    int arr2[] = {9, 8, 7, 5, 4};

    for (int i = 0; i < 4; i++)
    {
        insertAtHead(head1, arr1[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        insertAtHead(head2, arr2[i]);
    }

    Display(head1);
    Display(head2);
    node *newhead = MergeRecursive(head1, head2);
    Display(newhead);
    return 0;
}