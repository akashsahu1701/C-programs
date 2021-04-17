#include "bits/stdc++.h"
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int Search(int inOrder[], int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inOrder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}

Node *BuildTree(int preOrder[], int inOrder[], int start, int end)
{
    if (start > end)
    {
        return NULL;
    }
    static int idx = 0;
    int curr = preOrder[idx];
    idx++;
    Node *root = new Node(curr);
    if (start == end)
    {
        return root;
    }

    int pos = Search(inOrder, start, end, curr);
    root->left = BuildTree(preOrder, inOrder, start, pos - 1);
    root->right = BuildTree(preOrder, inOrder, pos + 1, end);

    return root;
}
void inOrderPrint(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrderPrint(root->left);
    cout << root->data << " ";
    inOrderPrint(root->right);
}

int main()
{
    int preOrder[] = {1, 2, 4, 3, 5};
    int inOrder[] = {4, 2, 1, 5, 3};

    Node *root = BuildTree(preOrder, inOrder, 0, 4);
    // for checking function;
    inOrderPrint(root);
    return 0;
}