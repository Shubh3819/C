#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;

void insertatany(int item,int position){
    struct node *temp=head;
    struct node *new=(struct node *)malloc(sizeof(struct node));
    new->next=NULL;
    new->data=item;
    if(head==NULL){
        head=new;
    }
    else{
        for(int i=0;i<(position-2);i++){
            temp=temp->next;
        }
        new->next=temp->next;
        temp->next=new;
    }
}


void traverse(struct node *temp){
    
    if(temp!=NULL){
        printf("%d ", temp->data);
        traverse(temp->next);
    }
}

int main(void){
    int i,j,choice;
    //insertion
        struct node *first=(struct node *)malloc(sizeof(struct node));
        struct node *second=(struct node *)malloc(sizeof(struct node));
        struct node *third=(struct node *)malloc(sizeof(struct node));
        struct node *fourth=(struct node *)malloc(sizeof(struct node));

        first->data=33;
        first->next=second;
        head=first;
        second->data=47;
        second->next=third;
        third->data=99;
        third->next=fourth;
        fourth->data=87;
        fourth->next=NULL;
        traverse(head);
        printf("\nAFTER INSERTING AN ELEMENT\n");
        insertatany(4093,3);
        traverse(head);
        
} 
