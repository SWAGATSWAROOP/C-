#include<iostream>
using namespace std;

int fact(int n){
    if(n<2){
        return 1;
    }
    for(int i=n-1;i>1;i--){
        n*=i;
    }
    return n;
}

int comb(int n,int z){
    int l = fact(n);
    int v = fact(z);
    int m = fact(n-z);
    int f = l/(v*m) ;
    return f;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k=0;
        for(int j=0;j<2*n;j++){
            if(n%2!=0){
                if((i%2==0) && (j>=n-i) && (j<=n+i) && (j%2!=0)){
                    cout<<" "<<comb(i,k)<<" ";
                    k++;
                }
                else if((i%2!=0) && (j>=n-i) && (j<=n+i) && (j!=n) && (j%2==0)){
                    cout<<" "<<comb(i,k)<<" ";
                    k++;
                }
                else{
                    cout<<"  ";
                }
            }
           else{ 
                if((i%2==0) && (j>=n-i) && (j<=n+i) && (j%2==0)){
                    cout<<" "<<comb(i,k)<<" ";
                    k++;
                }
                else if((i%2!=0) && (j>=n-i) && (j<=n+i) && (j!=n) && (j%2!=0)){
                    cout<<" "<<comb(i,k)<<" ";
                    k++;
                }   
                else{
                    cout<<"  ";
                }
           }
        }
        cout<<endl;
    }
    return 0;
}