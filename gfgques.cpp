#include<cmath>
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