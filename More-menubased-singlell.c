#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node 
{
    int data;
    struct node *next;         
};
struct node *start;
struct node *end;
void make_list(int n)
{
 struct node *track;
    int num;
    start = (struct node *)malloc(sizeof(struct node));

    if(start == NULL)
    {
        printf(" Error, Not allocated.");
    }
    else
    {

        printf(" Input node 1 : ");
        scanf("%d", &num);
        start->data = num;      
        start->next = NULL;
        track = start;
         for(int i=1; i<n; i++)
        {
            end = (struct node *)malloc(sizeof(struct node));
            if(end == NULL)
            {
                printf("Error, Not allocated.");
                break;
            }
            else
            {
                printf(" Input node %d : ", i+1);
                scanf(" %d", &num);
 
                end->data = num;
                end->next = NULL; 
 
                track->next = end;
                track = track->next; 
            }
        }   
    }
}
void add_node(int num)
{
    struct node *newNode=(struct node *)malloc(sizeof(struct node));
    newNode->data=num;
    newNode->next=NULL;
    if((start==NULL))
    {
        start=newNode;
        end=newNode;
    }
    else{
        end->next=newNode;
        end=newNode;
    }
}
void searchNode(int data) {  
    struct node *current = start;  
    int i = 1;  
    bool flag = false;  
    
    if(start == NULL) {  
        printf("List is empty \n");  
    }  
 else {  
        while(current != NULL) {  
            if(current->data == data) {  
                flag = true;  
                break;  
            }  
            i++;  
            current = current->next;  
        }  
 }  
    if(flag)  
         printf("Element is present in the list at the position: %d\n", i);  
    else  
         printf("Element is not present in the list\n");  
}  
     void sortList() {  
            struct node *current = start, *index = NULL;  
            int temp;  
              
            if(start == NULL) {  
                return;  
            }  
            else {  
                while(current != NULL) {   
                    index = current->next;  
                      
                    while(index != NULL) {  
                        if(current->data > index->data) {  
                            temp = current->data;  
                            current->data = index->data;  
                            index->data = temp;  
                        }  
                        index = index->next;  
                    }  
                    current = current->next;  
                }      
            }
        }  
 void reverse(struct node *current) {  
    if(start == NULL) {  
        printf("List is empty\n");  
        return;  
    }  
    else{  
        if(current->next == NULL) {  
            printf("%d ", current->data);  
            return;  
        }   
        reverse(current->next);  
        printf("%d ", current->data); 
    }  
}  
void displayList()
{
    struct node *tmp;
    if(start == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = start;
        while(tmp != NULL)
        {
            printf("%d, ", tmp->data);
            tmp = tmp->next;
        }
    }
    return;
}
void options() {
    int option, pos;


    printf("\nChoose:\n1.Search\n2.Sort\n3.reverse\n4. Exit\n");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
    printf("Enter the value to be searched\n");
    int d;
    scanf("%d",&d);
    add_node(d);
    searchNode(d);
     break;
    case 2:
      sortList();
      displayList();
        break;
    case 3:
        reverse(start);
        break;
    case 4:
        exit(0);
        break;
    default:
        printf("Invalid Input");
        options();
        break;
    }

    options();
}
int main()
{
      
    int n; 
    printf(" Input the no. of nodes : ");
    scanf("%d", &n);
    make_list(n);
    options();
      return 0;

}
