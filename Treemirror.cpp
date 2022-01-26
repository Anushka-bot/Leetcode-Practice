#include <bits/stdc++.h>
using namespace std;
vector<int> v_left, v_right, v_reverse;
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
bool mirror(vector<int> v_left, vector<int> v_right)
{
    reverse(v_right.begin(), v_right.end());
    v_reverse = v_right;
    if (v_left == v_reverse)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void inorder_left(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder_left(root->left);
    v_left.push_back(root->val);
    inorder_left(root->right);
}
void inorder_right(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder_right(root->left);
    v_right.push_back(root->val);
    inorder_right(root->right);
}
/*int size(struct node* root)
{if(root==NULL)
{return 0;}
else
{return root->left+root->right+1;}
}
*/
int main()
{
    struct node *root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(2);
    root->left->left = newnode(3);
    root->left->right = newnode(4);
    root->left->left->left = newnode(5);
    root->left->left->left->right = newnode(6);
    root->right->left = newnode(4);
    root->right->right = newnode(3);
    root->right->right->right = newnode(5);
    root->right->right->right->left = newnode(6);
    //int s=size(root);
    //int *left=(int *)malloc(sizeof(int)*s);
    //int* right=(int *)malloc(sizeof(int)*s);
    inorder_left(root->left);
    inorder_right(root->right);
    cout << mirror(v_left, v_right);
}
