#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    node *next;
};
node *newnode(int val)
{
    struct node *temp = new node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    temp->next = NULL;
    return temp;
}
void connect(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    if(root->left)
    {
        root->left->next = root->right;
    }
    if (root->next != NULL)
    {
        root->right->next = root->next->left;
        return;
    }
    connect(root->left);
    connect(root->right);
}
void levelorder(struct node *root, int i)
{
    if (root == NULL)
    {
        return;
    }
    if (i == 1)
    {
        cout << root->data << " " << root->next;
    }
    else
    {
        levelorder(root->left, i - 1);
        levelorder(root->right, i - 1);
    }
}
int l = 0, r = 0;
int heighttree(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return max(l, r) + 1;
    }
    l = heighttree(root->left);
    r = heighttree(root->right);
}
void printtree(struct node *node)
{
    int h = heighttree(node);
    for (int i = 1; i <= h; i++)
    {
        levelorder(node, i);
    }
}
int main()
{
    struct node *root = newnode(9);
    root->left = newnode(8);
    root->right = newnode(6);
    root->left->left = newnode(5);
    root->left->right = newnode(3);
    root->right->left = newnode(1);
    root->right->right = newnode(4);
    root->left->left->right = newnode(66);
    connect(root);
    printtree(root);
}