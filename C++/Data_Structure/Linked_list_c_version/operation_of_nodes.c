#include <stdio.h>
#include <stdlib.h>
/*
1. insert_list() ☑️
2. insert_at_head() ☑️
3. insert_at_tail() ☑️
4. insert_at_given_key() 
5. delete_at_head()
6. delete_at_tail()
7. delete_at_given_key()
8. reverse_the_node() ☑️
*/

struct node
{
    int data;
    struct node* next;
};

struct node *head, *newnode, *temp;

void insert_list(int val){
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    // scanf("%d",&newnode->data);
    newnode->next=NULL;

    if(head==NULL){
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
}

void insert_at_head(int val){
    if(head==NULL){
        printf("empty list");
    }else{
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=val;
        newnode->next=head;
        head=newnode;
    }
}

void insert_at_tail(int val){
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;

    while (temp->next!=NULL){
        temp=temp->next;
    }
    newnode->next=0;
    temp->next=newnode;
}
//not yet finished 😞
void insert_at_given_key(int val){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    struct node *current = head;
    int i=0,count=0,pos=3;
    while(current!=NULL){
        count++;
        current=current->next;
    }
    if(i>count){
        printf("Invalid Input\n");
    }else{
        while(i<pos){
        temp=temp->next;
        i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
}

int count_nodes(){
    int count =0;
    struct node* current = head;
    while(current!=NULL){
        count++;
        current=current->next;
    }
    printf("Count: %d",count);
}

void reverse_the_node(){
    struct node* prev, *current, *next_node;
    prev=NULL;
    current=next_node=head;

    while (next_node!=0){
        next_node=next_node->next;
        current->next=prev;
        prev=current;
        current=next_node;
    }
    head=prev;
}

void display(){
    temp=head;
    while(temp!=0){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main(){
    
    head=NULL;
    
    insert_list(1);
    insert_list(2);
    insert_list(3);
    insert_list(4);
    insert_at_tail(5);
    insert_at_head(0);
    display();
    count_nodes();
    printf("\n");
    reverse_the_node();
    display();

return 0;
}