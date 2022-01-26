#include <bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    struct node *left;
    struct node *right;
};
node *newnode(int val)
{
    node *temp = new node;
    temp->val = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
void inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }
}
int main()
{
    node *root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(9);
    root->left->right = newnode(8);
    root->right->left = newnode(7);
    cout << "inorder traversal of the given tree will be: ";
    inorder(root);
}
