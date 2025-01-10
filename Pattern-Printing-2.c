#include<stdio.h>
int main()
{
int i,j,k,n,ch;
ch='A';
printf("Enter the number of rows:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    
    for(k=1;k<=(n-i);k++)
    {
        printf(" ");
    }

    for(j=1;j<=i;j++)
    {
        printf("%c ",ch);
        
    }
    printf("\n");
    ch++;
}
return 0;
}
