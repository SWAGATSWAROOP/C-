#include<stdio.h>

void Inarr(int arr[],int n){
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf(" %d",&arr[i]);
    }
}

void swap(int* x,int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void SelectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min = arr[i];
        int s;
        for(int j=i+1;j<n;j++){
            if(min>arr[j]){
                min = arr[j];
                s = j;
            }
        }
        if(min != arr[i]){
            swap(&arr[i],&arr[s]);
        }
    }
}

void Printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}


int main(){
    int n;
    printf("Enter the number elements of the array: ");
    scanf(" %d",&n);
    int arr[n];
    Inarr(arr,n);
    SelectionSort(arr,n);
    printf("The Sorted Array is: ");
    Printarr(arr,n);
    return 0;
}