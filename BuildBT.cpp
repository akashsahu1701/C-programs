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

// using preorder and inorder array;
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
    root->left = BuildTree(preOrder, inOrder, start, pos - 1); //build left subtree firstly
    root->right = BuildTree(preOrder, inOrder, pos + 1, end);  //build right subTree

    return root;
}

// using postorder and inorder array
Node *BuildTree1(int postorder[], int inorder[], int start, int end)
{
    if (start > end)
    {
        return NULL;
    }
    static int idx = end;
    int curr = postorder[idx];
    idx--;
    Node *root = new Node(curr);
    if (start == end)
    {
        return root;
    }

    int pos = Search(inorder, start, end, curr);
    root->right = BuildTree1(postorder, inorder, pos + 1, end);  //build right sub tree firstly
    root->left = BuildTree1(postorder, inorder, start, pos - 1); //build left subTree

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
    int postOrder[] = {4, 2, 5, 3, 1};

    Node *root = BuildTree(preOrder, inOrder, 0, 4);
    // for checking function;
    inOrderPrint(root);

    Node *root1 = BuildTree1(postOrder, inOrder, 0, 4);
    inOrderPrint(root1);

    return 0;
}