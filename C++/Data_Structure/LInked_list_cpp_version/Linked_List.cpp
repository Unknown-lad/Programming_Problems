#include <bits/stdc++.h>
using namespace std;

class nodeList{
    public:
    int data;
    nodeList* next;

    nodeList(int val){
        data=val;
        next = NULL;
    }
};
//insertion at last node
void insertAtTail(nodeList* &head, int val){
    nodeList* n = new nodeList(val);
    
    //if there is only 1 node then it will put null in next
    if(head == NULL){
        head = n;
        return;
    }

    nodeList* temp = head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    //to insert the the data on last element or last
    temp->next=n;
}

void display(nodeList* head){
    nodeList* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    
    nodeList* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);

return 0;
}