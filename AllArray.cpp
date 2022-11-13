#include<iostream>
using namespace std;
int LinearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int BinarySearch(int arr[],int n,int key){
    int s=0;
    int e=n;
    
    while(s<=e){
            int mid= (s+e)/2;
            if(arr[mid]==key){
                return mid;
            }
            else if(arr[mid]>key){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        
    }
    return -1;
}
void InsertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int current=arr[i];
        while(arr[j]>current && j>=0){
            
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

  void BubbleSort(int arr[],int n){
    int counter=1;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int t=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=t;
            }
         for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
        cout<<endl;
        }
        
        counter++;
    }
    cout<<"The Sorted list is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

void SelectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
        }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
int main(){
    cout<<"Sorting Algo And Ds Remember"<<endl;
    cout<<"Enter the no of elements in array: ";
    int n,key;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter The Sorting Process:\n 1.Selection Sort \n 2.Bubble Sort \n 3.Insertion Sort \n Enter Your Choice:";
    int z;
    cin>>z;
    switch(z){
        case 1:
        SelectionSort(arr,n);
        break;
        case 2:
        BubbleSort(arr,n);
        break;
        case 3:
        InsertionSort(arr,n);
        break;
        default:
        cout<<"Invalid Choice "<<z<<"  ."<<endl;
        break;
    }
    cout<<"Enter Key:";
    cin>>key;
    cout<<"Select Seraching method:\n 1.Linear Search \n 2.Binary Search\n";
    int g;
    cin>>g;
    switch (g){
        case 1:
        int l;
        l = LinearSearch(arr,n,key);
        if(l == -1){
            cout<<"No Element Found."<<endl;
        }
        else{
            cout<<l<<" is the index of key."<<endl;
        }
        break;
        case 2:
        int f;
        f= BinarySearch(arr,n,key);
         if(f == -1){
            cout<<"No Element Found."<<endl;
        }
        else{
            cout<<f<<" is the index of key."<<endl;
        }
        break;
        default:
        cout<<"Invalid Choice"<<endl;
        break;
        

        
       
    }
    return 0;


}