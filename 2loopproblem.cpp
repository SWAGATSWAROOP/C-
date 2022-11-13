#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k = 1;
        for(int j=1;j<(2*n);j++){
            if(j>=n-i && j<=n){
                cout<<" "<<k<<" ";
                k++;
            }
            else if(j>n && j<=n+i){
                if(j==n+1){   //as after last loop finishes k value will be n+1 so before next loop decrease it by 2
                    k=k-2;
                }
                cout<<" "<<k<<" ";
                k--;
            }
            else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
    return 0;
}