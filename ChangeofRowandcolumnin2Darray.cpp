#include<iostream>
using namespace std;

int main(){
    int n,m,o,p,z;
    cout<<"Enter the value of rows and columns: ";
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the number: ";
    cin>>z;
    cin>>o>>p;
    o--;
    p--;
    if(z%2!=0){
       for(int j=0;j<n;j++){
           int temp = arr[j][o];
           arr[j][o]= arr[j][p];
           arr[j][p]= temp;
       }
    }
    else{
        for(int j=0;j<m;j++){
        int temp = arr[o][j];
        arr[o][j]= arr[p][j];
        arr[p][j]= temp;
       }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}