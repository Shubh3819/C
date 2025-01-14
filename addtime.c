#include<stdio.h>
int main()
{
    int h1,m1,s1,h2,m2,s2,h3,m3,s3,s4,s5;
    printf("Enter time 1 in the format hh:mm:ss:");
    scanf("%d:%d:%d",&h1,&m1,&s1);
    
    printf("Enter time 2 in the format hh:mm:ss:");
    scanf("%d:%d:%d",&h2,&m2,&s2);
    h3=h2+h1+((m1+m2+((s1+s2)/60))%60);
    m3=(m1+m2+(((s1+s2)/60)%60))%60;
    s3=(s1+s2)%60;
    printf("The added time is %d:%d:%d",h3,m3,s3);
    return 0;   
}
