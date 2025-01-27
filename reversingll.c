#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;


void traverse(){
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp=temp->next;
    }
}

void reverse(){
    struct node *temp=head;
    struct node *a=head->next;
    struct node *b=NULL;
    while(a!=NULL){
        temp->next=b;
        b=temp;
        temp=a;
        a=a->next;
    }
    temp->next=b;
    head=temp;
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
        printf("\nBefore reversing\n");
        traverse();
        printf("\nAfter reversing\n");
        reverse();
        traverse();
} 
