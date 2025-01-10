#include<stdio.h>
int main()
{
    int n,i,j;
    char ch;
    int m;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            
            if(i==3 || j==3)
            {
                printf("*");
            }
            else{
                printf("#");
            }
        }
        printf("\n");
    }
    

return 0;
}
