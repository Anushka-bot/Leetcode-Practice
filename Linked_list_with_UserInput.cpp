#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void printlist(struct node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    return;
}
struct node *build_list()
{
    int x;
    cout << "enter data to be entered in the node: ";
    cin >> x;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    return temp;
}
int main()
{
    struct node *head = NULL;
    struct node *prev = NULL;
    for (int i = 0;; i++)
    {
        cout << "enter true if you want to give input else enter false: ";
        string s;
        cin >> s;
        if (s == "true")
        {
            struct node *list = build_list();
            if (head == NULL)
            {
                head = list;
            }
            else
            {
                prev->next = list;
            }
            prev = list;
        }
        else
        {
            break;
        }
    }
    printlist(head);
}