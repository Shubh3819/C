#include <stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        k=i;
        for(j=n;j>=i;j--)
        {
           
            printf("%d",n-k+1);
            k=k+1;
        }

        printf("\n");
    }
    
    return 0;
}
