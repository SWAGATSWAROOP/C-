#include<stdio.h>


int main(){
    int n,m,sum=0;
    printf("Enter the order of matrix (rows,column) :");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    printf("Enter the element of of matrix: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int j = 0;
    printf("The sum of elements of all posible rectangles are: ");
    while(j<m){
        sum = 0;
        for(int k=0;k<n;k++){
            for(int l = 0;l<=j;l++){
                sum+=arr[k][l];
            }
            printf("%d ",sum);
        }
        j++;
    }
    printf("\n");
    return 0;
}