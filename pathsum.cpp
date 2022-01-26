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
    return temp;
}
int sum=0;
bool pathsum(struct node* root,int ts)
{
    if(root == NULL)
    {
        return false;
    }
    sum=sum+root->val;
    if(root->left==NULL && root->right==NULL && ts==sum)
    {
        return true;
    }
    return pathsum(root->left,ts) || pathsum(root->right,ts);
}
int main()
{
    int ts;
    cin >> ts;
    struct node *root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(2);
    root->left->left = newnode(3);
    root->left->right = newnode(4);
    root->right->left = newnode(4);
    root->right->right = newnode(9);
    cout << pathsum(root,ts);
}
