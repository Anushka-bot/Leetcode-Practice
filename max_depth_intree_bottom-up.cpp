#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
node *newnode(int val)
{
    struct node *temp = new node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
int l=0;
int r=0;
int max_depth(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return (max(l, r) + 1);
    }
    l = max_depth(root->left);
    r = max_depth(root->right);
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
    cout << "max depth of the given tree will be : ";
    int ans = max_depth(root);
    cout << ans;
}
