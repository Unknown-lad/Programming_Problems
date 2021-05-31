#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insertList(node* &head, int val){
    node* n = new node(val);

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

void del_head(node* &head){
    node* del_node = head;
    head=head->next;

    delete del_node;
}

void deleting(node* &head, int val){
    node* temp = head;
    //empty list
    if(head==NULL){
        return;
    }
    //1 node present
    if(head->next==NULL){
        del_head(head);
    }

    while(temp->next->data!=val){
        temp=temp->next;
    }

    node* del_node = temp->next;
    temp->next=temp->next->next;

    delete del_node;
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
    insertList(head,1);
    insertList(head,2);
    insertList(head,3);
    insertList(head,4);
    display(head);
    deleting(head,3);
    del_head(head);
    display(head);

return 0;
}