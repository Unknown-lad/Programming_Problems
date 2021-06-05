#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insertHead(node* &head,int val){
    node* n = new node(val);
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }

    node* temp = head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}

void insertion(node* &head,int val){

    if(head==NULL){
        insertHead(head,val);
        return;
    }
    node* n = new node(val);

    node* temp = head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}

void display(node* head){
    node* temp = head;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    } while (temp!=head);
    cout<<endl;
}

int main(){
    
    node* head = NULL;
    insertion(head,1);
    insertion(head,2);
    insertion(head,3);
    insertion(head,4);
    display(head);
    insertHead(head,9);
    display(head);

return 0;
}