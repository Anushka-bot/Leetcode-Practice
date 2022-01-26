#include <bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    struct node *left;
    struct node *right;
};
node *newnode(int data)
{
    node *temp = new node;
    temp->val = data;
    temp->left = NULL;
    temp->right = NULL;
}
void preorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        cout << root->val << " ";
        preorder(root->left);
        preorder(root->right);
    }
}
int main()
{
    node *root = newnode(1);
    root->left = newnode(9);
    root->right = newnode(8);
    root->left->right = newnode(6);
    root->left->left = newnode(4);
    root->right->right = newnode(5);
    cout << "preorder traversal is: ";
    preorder(root);
}
