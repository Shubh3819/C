#include <stdio.h>
int main()
{
    int n,i,j,d;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        d=i;
        for(j=n;j>=i;j--)
        {
            printf("%d",d);
            d=d+1;
        }
        printf("\n");
    }
    
    return 0;
}
