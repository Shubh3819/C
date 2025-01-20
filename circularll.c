#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;

void traverse(){
    struct node *temp=head;
    while(temp->next!=head){
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("%d ", temp->data);
}

void insertatfirst(int item){
    struct node *temp=head;
    struct node *new=(struct node *)malloc(sizeof(struct node));
    new->data=item;
    if(head==NULL){
        head=new;
        new->next=head;
    }
    else{
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=new;

        new->next=head;
        head=new;
    }
}
void insertatlast(int item){
    struct node *temp=head;
    struct node *new=(struct node *)malloc(sizeof(struct node));
    new->data=item;
    while(temp->next!=head){
        temp=temp->next;
        }
        temp->next=new;
        new->next=head;
}
void deletatstart(){
    struct node *temp=head;
    if(head==NULL){
        printf("List is empty");
    }
    else{
        while(temp->next!=head){
            temp=temp->next;
    }
    temp->next=head->next;
    head=head->next;
    }
}
void deleteatend(){
    struct node *temp=head;
    struct node *prev=head;
    if(head==NULL){
        printf("List is empty");
    }
    else{
        while(temp->next!=head){
            prev=temp;
            temp=temp->next;
    }
    prev->next=head;
    free(temp);
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
        fourth->next=head;
        traverse();
        insertatfirst(999);
        printf("\n");
        traverse();
        insertatlast(123);
        printf("\n");
        traverse();
        deletatstart();
        printf("\n");
        traverse();
        deleteatend();
        printf("\n");
        traverse();
}
