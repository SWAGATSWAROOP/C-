#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of rows(or columns both are same): ");
    scanf("%d",&n);
    int z = (n+1)/2;
    int mid = n/2;
    for(int i=0;i<n;i++){
        int l,min;
        if(i>mid){
            l = n - i - 1;
        }
        else{
            l = i;
        }
        for(int j=0;j<n;j++){
            int k;
            if(j>mid){
                k = n - j - 1;
                if(l>=k){
                    printf("%d ",z-k);
                }
                else{
                    printf("%d ",z-l);
                }
            }
            else{
                k = j;
                if(l>=k){
                    if(j==mid && n%2==0){
                        printf("%d ",1);
                    }
                    else{
                        printf("%d ",z-k);
                    }    
                }
                else{
                    printf("%d ",z-l);
                }
            }
        }
        printf("\n");
    }
    return 0;
}