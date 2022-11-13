#include<stdio.h>
#include<limits.h>

void Inarr(int arr[],int n){
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf(" %d",&arr[i]);
    }
}

void small(int arr[],int n){
    int f,s = f = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<f){
            s = f;
            f = arr[i];
        }
        else if((arr[i]<s) && (arr[i]!=f)){
            s = arr[i];
        }
    }
    printf("The smallest element is %d and second smallest is %d \n",f,s);
}


int main(){
    int n;
    printf("Enter the number elements of the array: ");
    scanf(" %d",&n);
    int arr[n];
    Inarr(arr,n);
    small(arr,n);
    return 0;
}