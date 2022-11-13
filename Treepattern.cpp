#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"The number of rows: ";
    cin>>n;
    int m=n/2;
    char arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                if(j==m){
                    arr[i][j]='|';
                }
                else if(i!=0 && j>=m-i && j<m && i<=m){
                    arr[i][j]='\\';
                }
                else if(i!=0 && j<=m+i && j>m && i<=m){
                    arr[i][j]='/';
                }
                else if((i>m) && ((j==m-1) || (j==m+1))){
                    arr[i][j]='|';
                }
                else if((i==n-1) && ((j==m-3) || (j==m-2) || (j==m+3) || (j==m+2))){
                    arr[i][j]='_';
                }
                else{
                    arr[i][j]=' ';
                }
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   return 0;
}