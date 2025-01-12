#include<stdio.h>
int main()
{
    int x,y,z,l,min;
    printf("Enter x,y,z,l:");
    scanf("%d%d%d%d",&x,&y,&z,&l);
    min=x;
    if (y<min){
        min=y;
    }
    if(z<min){
        min=z;
    }
    if(l<min){
        min=l;
    }
    printf("The smallest number out of the four is %d",min);
    return 0;
}
