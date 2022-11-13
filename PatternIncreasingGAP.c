#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int x = 1 + (n-1)*(n+2);
    int mid = x/2;
    for(int i=0;i<n;i++){
        int z = (i*(i+3)/2);
        int gap = i;
        for(int j=0;j<x;j++){
            if(( j >= mid - z)  && (j <= mid+z)){
                if(j==mid -z){
                    printf("*");
                }
                while(gap!=0){
                    for(int k = 0;k<gap;k++){
                        printf(" ");
                        j++;
                    }
                    gap--;
                    printf("*");
                }
                while(gap!=i+1){
                    for(int k = 0;k<=gap;k++){
                        printf(" ");
                        j++;
                    }
                    gap++;
                    if(gap!=i+1){
                        printf("*");
                    }    
                    j++;
                }
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}