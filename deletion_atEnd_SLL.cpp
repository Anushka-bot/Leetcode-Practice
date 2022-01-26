#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};
struct node* newnode(){
    int x;
    cout << "enter value: ";
    cin >> x;
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    return temp;
}
void printlist(struct node* head){
    if(head == NULL){
        cout << "list is empty";
        return;
    }
    else{
        while(head != NULL){
            cout << head->data << "->";
            head=head->next;
        }
    }
    return;
}
void deletingatEnd(struct node*(&head)){
    struct node* temp=head;
    while(temp != NULL){
        if(temp->next->next == NULL){
            temp->next = NULL;
            break;
        }
        temp=temp->next;
    }
    return;
}
int main(){
    struct node* head=NULL,*prev=NULL,*curr=NULL;
    while(true){
        string s;
        cout << "enter true or false: ";
        cin >> s;
        if(s == "true"){
            curr=newnode();
            if(head == NULL){
                head = curr;
            }
            else{
                prev->next=curr;
            }
            prev=curr;
        }
        else{
            break;
        }
    }
    printlist(head);
    cout << endl;
    deletingatEnd(head);
    cout << "new list after deleton is: ";
    printlist(head);
}