#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    //the values
    int data;

    //the pointer in which the address are stored
    //it is second part of node called next or pointer
    node* next;
};

void display(node* list){
    while(list!=NULL){
        cout<<list->data<<"->";
        list=list->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    //these values are stored in heap memory
    //head of the node
    node* head = NULL;
    node* second=NULL;
    node* third =NULL;

    //allocates new memeory to heap
    head = new node();
    second = new node();
    third = new node();

    //stored the values to the memory
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    display(head);

return 0;
}