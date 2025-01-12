#include<stdio.h>
int fib(int n);
int main() {
    printf("Enter the number of elements of fibonacci series:");
    int n;
    scanf("%d",&n);
    printf("The fibonacci series is:%d",fib(n));
return 0;
}


int fib(int n){
if(n==0){
return 0;
}


if(n== 1) {
return 1;
}
int fibNm1= fib(n-1);
int fibNm2 = fib(n-2);
int fibN= fibNm1 + fibNm2;
return fibN;
}
