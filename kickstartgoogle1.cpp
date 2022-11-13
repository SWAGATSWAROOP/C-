#include<iostream>
#include<climits>
using namespace std;
int googlekickstart(int a[],int n){
        int ans=2;
        int pd= a[1]-a[0];
        int curr= 2;
        int j=2;
        while(j<n){
            if(pd==a[j]-a[j-1]){
                curr++;
            }
            else{
                pd=a[j]-a[j-1];
                curr=2;
               
            }
            ans=max(ans,curr);
            
            j++;
        }
        
      
        return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<googlekickstart(arr,n)<<endl;
    return 0;
}