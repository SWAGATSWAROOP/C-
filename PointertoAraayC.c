#include<stdio.h>

void input(int *p,int n){
    for(int i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
}

int BinarySearch(int *p,int n,int key){
    int i=0;
    int j=n-1;
    while(i<=j){
        int mid = (i+j)/2;
        if(p[mid]==key){
            return mid;
        }
        else if(p[mid]>key){
            j = mid - 1;
        }
        else{
            i = mid + 1;
        }
    }
    return -1;
}

int main(){
    int n,key;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    int *p=arr;
    printf("Enter the elements of the array(Sorted): \n");
    input(p,n);
    printf("Enter the key to search: ");
    scanf("%d",&key);
    int s = BinarySearch(p,n,key);
    if(s==-1){
        printf("The key element is not found.\n");
    }
    else{
        printf("The key element is found at index %d .\n",s);
    }
    return 0;
}