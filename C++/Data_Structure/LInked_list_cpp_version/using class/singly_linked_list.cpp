#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
};
//insertion
void insert(node* &head, int val){
    node* n = new node();
    n->data=val;
    if(head==NULL){
        head=n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void insert_at_head(node* &head, int val){
    node* n = new node();
    n->data=val;
    n->next=head;
    head=n;
}

void insert_at_end(node* &head,int val){
    node* n = new node();
    n->data=val;
    node* temp = head;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->next=NULL;
}

void insert_at_given_position(node* &head, int key){
    node* n = new node();
    n->data=key;
    n->next=head;
    head=n;
}

//deleting
void del_head(node* &head){
    node* to_del= head;
    head=head->next;
    
    delete to_del;
}

void del_tail(node* &head,int val){
    node* temp = head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todel= temp->next;
    temp->next=temp->next->next;

    delete todel;
}

//counting
void count(node *temp){
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    cout<<"\nNode: "<<count;
}
//display
void display(node* temp){
    while(temp!=NULL){
        cout<<"->"<<temp->data;
        temp=temp->next;
    }
}

int main(){
    
    node* head = NULL;
    //insertion
    insert(head,1);
    insert(head,2);
    insert(head,3);
    display(head);
    count(head);
    cout<<endl;
    //insertion at head
    insert_at_head(head,-1);
    insert_at_head(head,0);
    display(head);
    count(head);
    cout<<endl;
    //insertion at end
    insert_at_end(head,4);
    insert_at_end(head,5);
    display(head);
    count(head);
    cout<<endl;
    //insertion at given point
    insert_at_given_position(head->next->next,9);
    display(head);
    count(head);
    cout<<endl;
    //delete head
    del_head(head);
    display(head);
    del_tail(head,4);
    count(head);
    cout<<"\n";
    display(head);
    count(head);
    cout<<"\n";

return 0;
}