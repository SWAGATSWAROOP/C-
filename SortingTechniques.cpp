#include<iostream>
using namespace std;

void Bubblesort(int* arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                arr[j+1]+=arr[j];
                arr[j] = arr[j+1] - arr[j];
                arr[j+1] -= arr[j];
            }
        }
    }
}

void InsertionSort(int *arr,int n){
    for(int i=1;i<n;i++){
        int curr = arr[i];
        int j = i-1;
        while(arr[j]>curr && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curr;
    }
}

void selectionsort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                arr[i]+=arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] -= arr[j];
            }
        }
    }
}

void Mergesort(int* arr,int si,int ei){
    if(si>=ei){
        return;
    }
    int mid = (si+ei)/2;
    Mergesort(arr,si,mid);
    Mergesort(arr,mid+1,ei);
    int size1 = mid - si + 1;
    int size2 = ei - mid;
    int* arr1 = new int[size1];
    int* arr2 = new int[size2];
    int* arr3 = new int[size1+size2];
    for(int i=0;i<size1;i++){
        arr1[i] = arr[si+i];
    }
    for(int i=0;i<size2;i++){
        arr2[i] = arr[mid+1+i];
    }
    int i=0,k=0,j=0;
    while(i<size1 && j<size2){
        if(arr1[i]>arr2[j]){
            arr3[k++] = arr2[j++];
        }
        else{
            arr3[k++] = arr1[i++];
        }
    }
    for(;i<size1;i++){
        arr3[k++] = arr1[i];
    }
    for(;j<size2;j++){
        arr3[k++] = arr2[j];
    }
    for(int l = 0;l<size1+size2;l++){
        arr[si+l] = arr3[l];
    }
    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Mergesort(arr,0,n-1);
    for(auto x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}