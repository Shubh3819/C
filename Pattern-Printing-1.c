#include <stdio.h>
int main()
{
    int n,i,j,k,l;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for (l=1;l<=i;l++)
        {
            printf("%d", l);
        }
        for (k=i-1;k>= 1;k--)
        {
            printf("%d", k);
        }
        printf("\n");
    }
}
