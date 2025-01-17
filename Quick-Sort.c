//QUICK SORT
#include<stdio.h>
#include<stdlib.h>

void traverse(int size,int *arr){
    printf("\nThe elements in the array:\n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main(void){
    int l,r,size,pivot;
    int arr[]={1,2,3,4,5,6,7,8,9};
    size=sizeof(arr)/sizeof(int);
    printf("Size of array:%d\n",size);
    traverse(size,arr);
    r=size;
    l=1;
    for(pivot=0;pivot<size-1;pivot++){
        for(int i=0;i<size;i++){
    if(arr[pivot]>arr[l]);
    {
        l++;
        if(arr[pivot]<arr[r]){
            r--;
        }
    }
    printf("");
    if(r>l){
        int temp;
    temp=arr[l];
    arr[l]=arr[r];
    arr[r]=temp;
    }
    if(r<l){
    int temp1;
    temp1=arr[l];
    arr[l]=arr[pivot];
    arr[pivot]=temp1;
    }
    traverse(size,arr);
    }
    }
}
