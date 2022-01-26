#include <bits/stdc++.h>
using namespace std;
vector<int> v1;
stack<int> s;
struct node
{
    int data;
    node *left;
    node *right;
};
node *newnode(int d)
{
    node *temp = (node *)malloc(sizeof(node *));
    temp->data = d;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
node *buildtree()
{
    int data,count=0;
    string s;
    cin >> data >> s;
    node *root = newnode(data);
    if (s == "false")
    {
        count++;
        return NULL;
    }
    else
    {root->left = buildtree();
    root->right = buildtree();}
    cout << count;
    return root;
}
void inorder_iterative(node *root)
{
    if (root == NULL)
    {
        return;
    }
    while (root || s.size() >= 1)
    {
        s.push(root->data);
        root = root->left;
        if (root == NULL)
        {
            v1.push_back(s.top());
            s.pop();
            root->right;
        }
    }
}
void print_vector(vector<int> v)
{
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
}
int main()
{
    node *root = buildtree();
    inorder_iterative(root);
    print_vector(v1);
}