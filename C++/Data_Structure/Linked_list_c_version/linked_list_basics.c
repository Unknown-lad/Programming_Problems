#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};

struct node *head, *newnode, *temp;

int main(){

    int choice;
    while(1){

    newnode=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=NULL;

    if(head==NULL){
        head=temp=newnode;
    }else{
        temp->next=newnode;
        temp=newnode;
    }
    printf("Enter choice(0/1): ");
    scanf("%d",&choice);
    if(choice==1){
        continue;
    }else{
        temp=head;
        while (temp!=0)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
        break;
    }
}
    
return 0;
}