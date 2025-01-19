//WAP to represent a given sparse matrix in 3-tuple format using 2-D array

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i,j,m,n,sum,a;
    printf("Enter the no of rows:");
    scanf("%d",&n);
    printf("Enter the no of columns:");
    scanf("%d",&m);
    int arr[n][m];
/************************************Taking input and displaying the sparse matrix*************************************************/
    for(i=0; i<n; i++) {
      for(j=0;j<m;j++) {
        printf("Enter value for arr[%d][%d]:",i, j);
        scanf("%d", &arr[i][j]);
      }
    }
    for(i=0; i<n; i++){
      for(j=0;j<m;j++) {
        printf(" %d",arr[i][j]);  
      }
      printf("\n");
   }
/**********************************************First row****************************************************************************/
printf("The representation of the sparse matrix:\n");
   sum=0;
   for(i=0;i<n;i++)
   {
    for(j=0;j<m;j++)
    {
        if(arr[i][j]!=0)
        {
            sum++;
        }
    }
   }

int brr[(sum+1)][3];

   
   brr[0][0]=n;
   brr[0][1]=m;
   brr[0][2]=sum;
/******************************************REST OF THE ROW*************************************************************************/
   a=1;
   for(i=0;i<n;i++)
   {
    for(j=0;j<m;j++)
    {
        if(arr[i][j]!=0)
        {
            brr[a][2]=arr[i][j];
            brr[a][1]=j;
            brr[a][0]=i;
            a++;
        }
        
    }
   }
/*****************************************Printing the Representation of the sparse matrix****************************************/

     for(i=0; i<(sum+1); i++){
      for(j=0;j<3;j++) {
        printf(" %d",brr[i][j]);  
      }
      printf("\n");
   }
}
