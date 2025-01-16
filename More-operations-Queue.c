/*7.2 Write a menu driven program to implement circular queue 
operations such as Enqueue, Dequeue, Traverse, IsEmpty, IsFull using array.*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int i=0,front=-1,rear=-1,choice,x,size,variable;
    printf("Enter size of queue\n");
    scanf("%d",&size);
    int Q[size];

    while(1){
    printf("\n***************MENU************\n");
    printf("\n1.Enqueue");
    printf("\n2.Dequeue");
    printf("\n3.Traverse");
    printf("\n4.IsEmpty");
    printf("\n5.IsFull");
    printf("\n6.Exit");
    printf("\nEnter your choice:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        //INSERT
        printf("\nEnter data:");
        scanf("%d",&x);
        if(front==-1&&rear==-1){
            front=rear=0;
            Q[rear]=x;
        }
        if((rear+1)%size!=front && rear!=-1 ){
                Q[rear]=x;
                rear=rear+1;
        }
        else{
            printf("\nOverflow");
        }
        break;

        case 2:
        //Delete
        if (front == -1)
        {
            printf ("Underflow condition\n");
        }
        else
        {
            variable=Q[front];
            if (front==rear)
            {
                front=rear=-1;
                }
            else
            {
                front=(front+1)%size;
            }
            printf ("%d was removed from circular queue\n",variable);
        }
        break;

        case 3:
        //traverse;
        if (front == -1){
            printf ("Nothing to dequeue\n");
        }
        else
        {
            printf ("\nThe queue looks like: \n");
            for (i = front; i != rear; i = (i + 1) %size)
            {
                printf ("%d ", Q[i]);
            }
            printf ("%d \n\n", Q[i]);
        }
        break;

        case 4:
        //IsEmpty
        if (front == -1)
    {
      printf("Queue is empty");
    }
    else{
        printf("Queue not Empty");
    }
        break;

        case 5:
        //IsFull
        if ((front == rear + 1) || (front == 0 && rear ==size-1))
    {
        printf("Queue is Full");
    }
    printf("Queue not full;");
        
        break;

        case 6:
        printf("Thank you!");
        exit(1);
        break;
    }
 }
}
