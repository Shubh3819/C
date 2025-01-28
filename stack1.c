#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *top=NULL;

void push(int x){
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    new->data=x;
    new->next=top;
    top=new;
}
void pop(){
struct node *t;
if(top==NULL){
    printf("\nUNDERFLOW\n");
}
else{
t=top;
top=top->next;
free(t);
t=NULL;
}
}

void traverse(){
    struct node *p=top;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}

int main(void){
    int i,j,choice;
    push(33);
    push(44);
    push(91);
    pop();
    traverse();
}
