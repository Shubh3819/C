#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *rptr;
    struct node *lptr;
};
struct node *head=NULL;

void traverse(){
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp=temp->rptr;
    }
}

void insertatfirst(int item){
    
    struct node *new=(struct node *)malloc(sizeof(struct node));
    new->data=item;
    new->rptr=head;
    new->lptr=NULL;
    head=new;
}

void insertatlast(int item){
    struct node *temp=head;
    struct node *new=(struct node *)malloc(sizeof(struct node));
    new->rptr=NULL;
    new->data=item;
    if(head==NULL){
        head=new;
        new->lptr=NULL;
    }
    else{
    while(temp->rptr!=NULL){
        temp=temp->rptr;
    }
    temp->rptr=new;
    new->lptr=temp;
    }
}

void insertatany(int item,int position){
    struct node *temp=head;
    struct node *new=(struct node *)malloc(sizeof(struct node));
    new->rptr=NULL;
    new->data=item;
    if(head==NULL){
        head=new;
        new->lptr=NULL;
    }
    else{
        for(int i=0;i<(position-2);i++){
            temp=temp->rptr;
        }
        new->rptr=temp->rptr;
        temp->rptr=new;
        new->lptr=temp;
    }
}

void deletatstart(){
    struct node *temp=head;
    if(head==NULL){
        printf("EMPTY LINKED LIST");
    }
    else{
    head->rptr->lptr=NULL;
    head=head->rptr;
    free(temp);
    }
}

void deleteatend(){
    struct node *temp=head;
    struct node *ptr=head;
    if(head==NULL){
        printf("EMPTY LINKED LIST");
    }
    else{
    while(temp->rptr!=NULL){
        ptr=temp;
        temp=temp->rptr;
    }
    temp->lptr=NULL;
    ptr->rptr=NULL;
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
            temp=temp->rptr;
        }
        ptr->rptr=temp->rptr;
        temp->rptr->lptr=ptr;
        temp->lptr=NULL;
        temp->rptr=NULL;
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
        first->rptr=second;
        first->lptr=NULL;
        head=first;

        second->data=47;
        second->rptr=third;
        second->lptr=first;

        third->data=99;
        third->rptr=fourth;
        third->lptr=second;

        fourth->data=87;
        fourth->rptr=NULL;
        fourth->lptr=third;

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
