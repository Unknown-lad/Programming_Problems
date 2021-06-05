#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data=val;
        prev=NULL;
        next=NULL;
    }
};

void insertion_head(node* &head,int val){
    node* n = new node(val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    head=n;
}

void insertion(node* &head,int val){

    if(head==NULL){
        insertion_head(head,val);
        return;
    }
    node* n = new node(val);
    node* temp = head;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}

void show(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    
    node* head = NULL;
    insertion(head,1);
    insertion(head,2);
    insertion(head,3);
    insertion(head,4);
    show(head);
    insertion_head(head,0);
    show(head);
return 0;
}