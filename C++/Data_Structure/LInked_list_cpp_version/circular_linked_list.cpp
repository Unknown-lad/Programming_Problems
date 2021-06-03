#include <bits/stdc++.h>
using namespace std;

class Circular_node{
    public:
    int data;
    Circular_node* next;

    Circular_node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtHead(Circular_node* &head,int val){
    Circular_node*n = new Circular_node(val);
    Circular_node*temp = head;

    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}

void insertAtTail(Circular_node* &head, int val){
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }

    Circular_node* n = new Circular_node(val);
    Circular_node* temp = head;

    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}

void display(Circular_node* head){
    Circular_node* temp = head;

    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    } while (temp!=head);
    cout<<endl;
}

int main(){
    
    Circular_node* head = NULL;
    insertAtHead(head,0);
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);

return 0;
}