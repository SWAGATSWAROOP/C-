#include<iostream>
using namespace std;
int combination(int a,int b){
    if(b<2){
        b=1;
    }
    else if(b>1){
        for(int i=b;i>=2;i--){
            b*=i;
        }
    }
    int z =a-b;
    for(int i=a;i>z;i-- ){
            a*=i;
    }
    return a/b;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int m=n;
        for(int j=0;j<2*n;j++){
            if(i%2==0 && (j>=(m-i)) && (j<=m+i) && (j%2!=0)){
                int k;
                if(j>=n){
                    k=j-n;
                }
                else{
                    k=n-j;
                }
                if(i>1){
                    cout<<" "<<combination(i,k)<<" ";
                }
                else if(i<2){
                    cout<<" "<<1<<" ";
                }
            }
            else if((i%2!=0) && (j>=(m-i)) && (j<=m+i) && (j!=m) && (j%2==0)){
                int k;
                if(j>n){
                    k=j-n;
                }
                else{
                    k=n-j;
                }
                if(i>1){
                    cout<<" "<<combination(i,k)<<" ";
                }
                else if(i<2){
                    cout<<" "<<1<<" ";
                }
            }
            else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
    return 0;
}