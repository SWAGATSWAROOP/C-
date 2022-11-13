#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int n,k,even=0;
    int odd,evendup=0;
    int oddup = 0;
    int dupli = 0;
    int nofop = 0;
    int z,l;
    FILE* ptr =fopen("output1.txt","a+");
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    if(n%2!=0){
        printf("-1\n");
        return 0;
    }
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            even++;
        }
    }
    odd = n - even;
    printf("Enter the number upto which value can be present in the array: ");
    scanf("%d",&k);
    if(n>k){
        printf("-1\n");
        return 0;
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                dupli++;
                if(arr[j]%2==0){
                    evendup++;
                }
                else{
                    oddup++;
                }
            }
        }
    }
    if(evendup == oddup){
        z = 0;
    }
    else{
        z = abs(evendup - oddup);
    }
    nofop = dupli + abs(odd-even) - z;
    fprintf(ptr,"The number of operations is : %d\n",nofop);
    fclose(ptr);
    ptr = NULL;
    printf("The number of operations is : %d\n",nofop);
    return 0;
}