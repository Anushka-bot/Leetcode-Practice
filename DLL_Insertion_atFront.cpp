#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next, *prev;
};
struct node *newnode()
{
    int x;
    cout << "enter value: ";
    cin >> x;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    temp->prev = NULL;
    return temp;
}
void printDLL(struct node *head)
{
    if (head == NULL)
    {
        cout << "list is empty";
        return;
    }
    else
    {
        while (head != NULL)
        {
            cout << head->data << "->";
            head = head->next;
        }
    }
    return;
}
void insertFront(struct node* (&head))
{
    struct node* temp=newnode();
    temp->next=head;
    head->prev=temp;
    head=temp;
    return;
}
int main()
{
    struct node *head = NULL, *curr = NULL, *second = NULL;
    while (true)
    {
        string s;
        cout << "enter true or false: ";
        cin >> s;
        if (s == "true")
        {
            curr = newnode();
            if (head == NULL)
            {
                head = curr;
            }
            else
            {
                second->next = curr;
                curr->prev = second;
            }
            second = curr;
        }
        else
        {
            break;
        }
    }
    printDLL(head);
    cout << endl;
    insertFront(head);
    cout << "list after inserting will be: ";
    printDLL(head);
}