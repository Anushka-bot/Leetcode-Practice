#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* next;
};
void printlist(struct node* head){
    while(head != NULL){
        cout << head->data << "->";
        head=head->next;
    }
}
int main(){
    node* head = (struct node*)malloc(sizeof(struct node*));
    node* second =(struct node*) malloc(sizeof(struct node*));
    node* third =(struct node*) malloc(sizeof(struct node*));
    head->data=6;
    head->next=second;
    second->data=79;
    second->next=third;
    third->data=98;
    third->next=NULL;
    printlist(head);
}