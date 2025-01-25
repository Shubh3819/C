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

void insertatfirst(int item){
    
    struct node *new=(struct node *)malloc(sizeof(struct node));
    new->data=item;
    new->next=head;
    head=new;
}

void insertatlast(int item){
    struct node *temp=head;
    struct node *new=(struct node *)malloc(sizeof(struct node));
    new->next=NULL;
    new->data=item;
    if(head==NULL){
        head=new;
    }
    else{
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new;
    }
}

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

void deletatstart(){
    struct node *temp;
    temp=head;
    head=head->next;
    free(temp);
}

void deleteatend(){
    struct node *temp=head;
    struct node *ptr=head;
    if(head==NULL){
        printf("EMPTY LINKED LIST");
    }
    else{
    while(temp->next!=NULL){
        ptr=temp;
        temp=temp->next;
    }
    ptr->next=NULL;
    free(temp);
    }
}

void deleteatany(int position){
    struct node *temp=head;
    struct node *ptr=head;
    if(head==NULL){
        printf("EMPTY LINKED LIST");
    }
    else{
        for(int i=0;i<(position-1);i++){
            ptr=temp;
            temp=temp->next;
        }
        ptr->next=temp->next;
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
        fourth->next=NULL;
        traverse();
        printf("\n");
        insertatfirst(69);
        traverse();
        insertatlast(111);
        printf("\n");
        traverse();
        insertatany(4093,3);
        printf("\n");
        traverse();
        deletatstart();
        printf("\n");
        traverse();
        deleteatend();
        printf("\n");
        traverse();
        deleteatany(2);
        printf("\n");
        traverse();
        
}
