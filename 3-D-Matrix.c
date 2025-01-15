/*Write a program to perform the following operations on a given square matrix using functions: 
i.   Find the no.of nonzero elements
ii.  Display upper triangular matrix
iii. Display the elements of just above and below the main diagonal*/

#include<stdio.h>
#include<stdlib.h>
int main(void){
   int n,m,i,j;
   printf("Enter no of rows n:");
   scanf("%d",&n);
   printf("Enter no of columns m:");
   scanf("%d",&m);
   int arr[n][m];
/*************Taking Input and displaying the actual matrix****************************************************/
   for(i=0; i<n; i++) {
      for(j=0;j<m;j++) {
         printf("Enter value for arr[%d][%d]:",i, j);
         scanf("%d", &arr[i][j]);
      }
   }
    for(i=0; i<n; i++) {
      for(j=0;j<m;j++) {
        printf(" %d",arr[i][j]);  
      }
      printf("\n");
   }
/**************************************(i)*********************************************************************/
   printf("All the non zero elements are:");
   for(i=0; i<n; i++) {
      for(j=0;j<m;j++) {
        if(arr[i][j]!=0)
        {
            printf(" %d",arr[i][j]);
        }
      }
   }
/******************************************(ii)****************************************************************/
printf("\nTHE UPPER TRIANGULAR MATRIX IS:\n");
for(i=0; i<n; i++) {
      for(j=0;j<m;j++) {
        if(j>i)
        {
            printf(" %d",arr[i][j]);
        }
      }
      printf("\n");
   }
/********************************************(iii)*************************************************************/
printf("\nELEMENTS JUST ABOVE AND BELOW THE MAIN DAIGONAL ARE:\n");
 for (int i=0; i<n; i++) {
        for (int j=0;j<m; j++) {
            if (j == i - 1 || j == i + 1) {
                printf(" %d",arr[i][j]);
        }
    }
}
   return 0;

}
