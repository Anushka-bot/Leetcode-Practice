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
    struct node *temp = (node *)malloc(sizeof(node *));
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
int search_ele(int inorder[], int n, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (inorder[i] == n)
        {
            return i;
        }
    }
}
node *buildtree(int inorder[], int postorder[], int srt, int end, int size_arr)
{
    if (srt > end)
    {
        return NULL;
    }
    static int indx = 0;
    indx=size_arr-1;
    node *node = newnode(postorder[indx]);
    int in_index = search_ele(inorder, postorder[indx], size_arr);
    indx--;
    if (srt == end)
    {
        return node;
    }
    node->right = buildtree(inorder, postorder, in_index + 1, end, size_arr);
    node->left = buildtree(inorder, postorder, srt, in_index - 1, size_arr);
    return node;
}
void print_inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    print_inorder(root->left);
    cout << root->data << " ";
    print_inorder(root->right);
}
int main()
{
    int n;
    cin >> n;
    int inorder[n];
    int postorder[n];
    for (int i = 0; i < n; i++)
    {
        cin >> inorder[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> postorder[i];
    }
    node *node = buildtree(inorder, postorder, 0, n - 1, n);
    print_inorder(node);
}
