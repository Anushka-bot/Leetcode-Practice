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
void insertnodeFront(struct node *(&head))
{
    struct node *temp = newnode();
    struct node *head_dummy;
    head_dummy = head;
    head = temp;
    head->next = head_dummy;
    return;
}
int main()
{
    struct node *head = NULL, *prev = NULL, *curr = NULL;
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
    insertnodeFront(head);
    printlist(head);
}