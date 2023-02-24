#include<iostream>
using namespace std;

int Candy(int arr[],int n){
    int count = 0;
    vector<int> v1(n,1);
    for(int i = 1;i<n;i++){
        if(ratings[i]>ratings[i-1]) v1[i] = v1[i-1]+1;
    }
    vector<int> v2(n,1);
    for(int j = n-2;j>=0;j--){
        if(ratings[j]>ratings[j+1]) v2[j] = v2[j+1]+1;  
    }
    for(int i=0;i<n;i++) count += max(v1[i],v2[i]);
    return count;
}


int main(){

    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The Minimum Number of Candies Required is:- "<<Candy(arr,n)<<endl;
    return 0;
}