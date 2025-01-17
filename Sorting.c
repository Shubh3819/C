/*WAP to take some integer numbers from the user. Store the numbers in an array.

Then sort the array by calling any sorting techniques in a menu-driven approach. 

Bubble sort
Selection sort
Insertion sort */
#include<stdio.h>


void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}



void selectionSort(int arr[], int n){
    int min,temp;
    for (int i = 0; i < n-1; i++){
        min=i;
        for (int j = i+1; j < n; j++){
            if (arr[j] < arr[min]){
                min=j;
                }
                }
                temp = arr[min];
                arr[min]=arr[i];
                arr[i]=temp;
                }
                }


void insertionSort(int arr[], int n)
{
    int k, j;
    for (int i = 1; i < n; i++){
    k = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > k){
        arr[j + 1] = arr[j];
        j--;
        }
        arr[j + 1]=k;
        }
        }

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
    printf("%d ", arr[i]);
    printf("\n");
}


int main(void){
    int choice,n=10;
    int arr[10] = {33,44,67,1,9,-100,222,123,321,-555};
    printf("Given array is \n");
    printArray(arr, n);
    printf("\n************MENU***********\n");
    printf("1.Bubble sort\n2.Selection sort\n3.Insertion sort\n4.exit\n");
    printf("ENTER YOUR CHOICE:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        bubbleSort(arr, n);
        break;
        case 2:
        selectionSort(arr, n);
        break;
        case 3:
        insertionSort(arr, n);
        break;
        case 4:
        printf("Thank you");
        exit(0);
        break;
    }
    printf("\nYour Sorted array is:\n");
    printArray(arr, n);
}
