/*WAP to create a 1-D array of n elements and perform the following menu based operations using function.
a. insert a given element at specific position.
b. delete an element from a specific position of the array.
c. linear search to search an element
d. traversal of the array 
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size;
    int n=0;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int ar[size];
    printf("\nEnter the array elements:");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&ar[i]);
        n++;
    }
    printf("\n%d",n);
    int choice;
    while(1)
    {
    printf("\nMenu\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Linear Search\n");
        printf("4. Traverse\n");
        printf("5. Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        int pos;
        int element;
        switch(choice)
        {
          case 1:
          printf("Enter the position where you want to insert the element:");
          scanf("%d",&pos);
          printf("Enter the element you want to insert:");
          scanf("%d",&element);
          if(n==0)
          {
            ar[0]=element;
            n=n+1;
            printf("The element has been inserted at first position\n");
          }
          else if(pos>(n+1)||pos>=(size+1))
          {
            printf("Given position is invalid\n");
          }
          else
          {
            for(int i=n;i>=pos;i--)
            {
                ar[i]=ar[i-1];
                ar[pos-1]=element;
                n=n+1;
            }
            printf("Element has been inserted");
            printf("%d",n);
          }
          break;
          case 2:
          printf("Enter the position where you want to delete the element:");
          scanf("%d",&pos);
          if(n<=0)
          {
            printf("No elements found\n");
          }
          else if(pos>=(n+1))
          {
            printf("Invalid position\n");
          }
          else
          {
            for(int i=pos-1;i<=n;i++)
            {
                ar[i]=ar[i+1];
                n=n-1;
            }
          }
          break;
          case 3:
          printf("Enter the element you want to find:");
          scanf("%d",&element);
          int flag=0;
          for(int i=0;i<size;i++)
          {
            if(ar[i]==element)
            {
                flag=1;
            }
          }
          if(flag==1)
          {
            printf("Element found\n");
          }
          else
          {
            printf("Element not found");
          }
          break;
          case 4:
          if(n==0)
          {
            printf("No elements found");
          }
          else{
          printf("The elements of the array are\n");
          for(int i=0;i<size;i++)
          {
            printf("%d",ar[i]);
          }
          }
          break;
          case 5:
          printf("Exiting\n");
          exit(0);
          break;
        }
}
}
