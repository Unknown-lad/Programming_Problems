#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    head=n;
}

void insertatTail(node* &head, int val){
    node* n = new node(val);

    if(head==NULL){
        insertAtHead(head,val);
        return;
    }

    while(head->next!=NULL){
        head=head->next;
    }
    head->next=n;
    n->prev=head;
}

void display(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main(){
    
    node* head = NULL;

    insertatTail(head,4);
    insertatTail(head,3);
    display(head);
    insertAtHead(head,0);
    display(head);

return 0;
}