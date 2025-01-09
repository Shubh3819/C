#include<stdio.h>
int main()
{
    int i,j,k;

   for(i=0;i<5;i++)
   {
    int a=1;
    for(j=0;j<=i;j++)
    {
        printf("%d",a);
        a=a+2;
    }
    printf("\n");
   }
return 0;
}
