/*Write a program to create a single linked list of n nodes and perform the following menu based operations on it using function:
i. Insert a node at specific position 
ii. Insert a given data
iii.Deletion of an element from specific position
iv.Delete of a given data  
v. Count nodes
vi. Traverse the linked list
*/

#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int data;
    struct node *next;
};
struct node *start=NULL;

int main()
{
    
    struct node *new_node;
    struct node *ptr;
    int x,choice;
    printf("Enter -1 to Exit\n");
    printf("Enter the data:");
    scanf("%d",&x);
    while (x!=-1) {
        new_node=(struct node*)malloc(sizeof(struct node));
        new_node->data=x;
        if(start=NULL)
        {
            start=new_node;
            start=new_node->next=NULL;
        }
        else{
            new_node->next=start;
            start=new_node;
        }
        printf("Enter data:");
        scanf("%d",&x);
    }
    while(1)
    {
    printf("\nMenu\n");
        printf("1.Insert a node at specific position\n");
        printf("2.Insert after a given data\n");
        printf("3.Deletion of an element from specific position\n");
        printf("4.Delete of a given data\n");
        printf("5.Count nodes\n");
        printf("6.Traverse the linked list\n");
        printf("7.Exit");
        printf("Enter your choice:\n");
        scanf("%d",&choice);
        int pos;
        int element;
        int value;
        int item;
        switch(choice)
        {
            case 1:
            
            new_node=(struct node*)malloc(sizeof(struct node));
            new_node->data=item;
            new_node->next=NULL;
            if(start=NULL)
            {
              start=new_node;
            }
            else{
                ptr=start;
                while(ptr!=NULL){
                    ptr->next=new_node;
                }
                ptr->next=new_node;
            }
            case 2:
            

            case 6:
            while (ptr != NULL)
            {
                printf("Element: %d\n",ptr->data);
                ptr=ptr->next;
            }
            break;

            case 7:
            printf("Exiting\n");
            exit(0);
            break;
}
       }
}
