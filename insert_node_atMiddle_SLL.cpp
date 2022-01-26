#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
struct node *newnode()
{
    node *temp = (struct node *)malloc(sizeof(struct node));
    int x;
    cout << "enter value: ";
    cin >> x;
    temp->data = x;
    temp->next = NULL;
    return temp;
}
void printlist(struct node *head)
{
    if (head == NULL)
    {
        cout << "nothing in list";
        return;
    }
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << endl;
    return;
}
void insertnodeMiddle(struct node *(&node))
{
    struct node *temp = newnode();
    temp->next = node->next;
    node->next=temp;
    return;
}
int main()
{
    struct node *head = NULL, *prev = NULL, *curr = NULL,*passing=NULL;
    for (int i = 0;; i++)
    {
        cout << "enter true or false: ";
        string s;
        cin >> s;
        if (s == "true")
        {
            curr = newnode();
            cout << curr->data << endl;
            if (head == NULL)
            {
                head = curr;
            }
            else
            {
                prev->next = curr;
            }
            prev = curr;
        }
        else
        {
            break;
        }
    }
    printlist(head);
    insertnodeMiddle(head->next->next);
    printlist(head);
}