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
// traversal of binary tree
void preOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void levelOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<Node *> que;
    que.push(root);
    que.push(NULL);

    while (!que.empty())
    {
        Node *node = que.front();
        que.pop();
        if (node != NULL)
        {
            cout << node->data << " ";
            if (node->left)
                que.push(node->left);
            if (node->right)
                que.push(node->right);
        }
        else if (!que.empty())
        {
            que.push(NULL);
        }
    }
}

int sumAtKLevel(Node *root, int k)
{
    if (root == NULL)
    {
        return -1;
    }

    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    int level = 0, sum = 0;

    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();
        if (node != NULL)
        {
            if (level == k)
            {
                sum += node->data;
            }
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
        else if (!q.empty())
        {
            q.push(NULL);
            level++;
        }
    }
    return sum;
}

int countNode(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int ans = countNode(root->left) + countNode(root->right) + 1;

    return ans;
}

int sumNode(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int ans = sumNode(root->left) + sumNode(root->right) + root->data;

    return ans;
}

int heightOfTree(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int rHeight = heightOfTree(root->left);
    int lHeight = heightOfTree(root->right);

    return max(lHeight, rHeight) + 1;
}

int diameterOfTree(Node *root)
{
    // time complexity O(N^2);
    if (root == NULL)
        return 0;
    int lheight = heightOfTree(root->left);
    int rheight = heightOfTree(root->right);
    int currDiameter = lheight + rheight + 1;

    int lDiameter = diameterOfTree(root->left);
    int rDiameter = diameterOfTree(root->right);

    return max(currDiameter, max(lDiameter, rDiameter));
}

int diameter(Node *root, int *height)
{
    // time complexity O(n);
    if (root == NULL)
    {
        *height = 0;
        return 0;
    }
    int rh = 0, lh = 0;
    int lDiameter = diameter(root->left, &lh);
    int rDiameter = diameter(root->right, &rh);

    int currDiameter = lh + rh + 1;
    *height = max(lh, rh) + 1;
    return max(currDiameter, max(lDiameter, rDiameter));
}

void sumReplace(Node *root)
{
    // time complexity O(n);
    if (root == NULL)
    {
        return;
    }

    sumReplace(root->left);
    sumReplace(root->right);

    if (root->left != NULL)
    {
        root->data += root->left->data;
    }
    if (root->right != NULL)
    {
        root->data += root->right->data;
    }
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    // levelOrderTraversal(root);
    cout << "\n";
    cout << sumAtKLevel(root, 1) << "\n";
    cout << countNode(root) << "\n";
    cout << sumNode(root) << "\n";
    cout << heightOfTree(root) << "\n";
    cout << diameterOfTree(root) << "\n";
    int height = 0;
    cout << diameter(root, &height) << "\n";
    levelOrderTraversal(root);
    cout << "\n";
    sumReplace(root);
    levelOrderTraversal(root);
    cout << "\n";
    return 0;
}