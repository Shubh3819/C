#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a and b:");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("A = %d",a);
    printf("\nB = %d",b);
}
