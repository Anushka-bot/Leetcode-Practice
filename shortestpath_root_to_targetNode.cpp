//in a binary tree
#include <bits/stdc++.h>
using namespace std;
queue<char> q;
struct node
{
    char data;
    node *left;
    node *right;
};
node *newnode(char d)
{
    node *temp = (node *)malloc(sizeof(node *));
    temp->data = d;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
node *buildtree()
{
    char data;
    cout << "enter character for node: ";
    cin >> data;
    if (data == '!')
    {
        return NULL;
    }
    node *root = newnode(data);
    root->left = buildtree();
    root->right = buildtree();
    return root;
}
bool inserting_inQueue(node *root, char target)
{
    if (root == NULL)
    {
        return false;
    }
    else if (root->data == target)
    {
        q.push(root->data);
        return true;
    }
    inserting_inQueue(root->left, target);
    if (q.size() >= 1)
    {
        q.pop();
    }
    inserting_inQueue(root->right, target);
}
int main()
{
    node *root = buildtree();
    char target;
    cout << "enter target node character: ";
    cin >> target;
    if (root == NULL)
    {
        cout << "tree does not exist";
    }
    else
    {
        cout << inserting_inQueue(root, target);
    }
}