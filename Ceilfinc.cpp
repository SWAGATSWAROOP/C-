#include<cmath>
#include<iostream>
using namespace std;
// ar[] is the array 
// n is the number of elements in array.
void print(int ar[], int n)
{
    for(int i=0;i<ceil(n/2);i++){
        cout<<ar[2*i]<<" ";
    }
    cout<<endl;
    return;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    float m =5/2;
    cout<<m<<endl;
    cout<<ceil(m)<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    print(arr,n);
    return 0;

}