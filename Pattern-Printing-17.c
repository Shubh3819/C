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
        ch='A';
        m=1;
        for(j=1;j<i+1;j++)
        {
            
            if(i%2==0)
            {
                printf("%c",ch);
            }
            else{
                printf("%d",m);
            }
            ch++;
            m++;
        }
        printf("\n");
    }
    

return 0;
}
