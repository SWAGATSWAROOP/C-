#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter The Number of rows to be entered ";
    cin>>n;
    cout<<"Enter the columns to be enterd ";
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int k=m*n;
    while(k>1){
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
            int*b= &arr[i-1][j-1];
            int*c= &arr[i][j];
            if(arr[i-1][j-1]>arr[i][j]){
                *b= arr[i][j];
                *c= arr[i-1][j-1];
                }
            }
        }
        k--;
    }
    for(int i=0;i<n;i++){
        for(int j=0;i<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}