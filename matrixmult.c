#include<stdio.h>

int main(){
    int n,m,y,x;
    printf("Enter the order in form of (Row X Column) of matrix 1 :");
    scanf("%d  %d",&m,&n);
    printf("Enter the order in form of (Row X Column) of matrix 2 :");
    scanf("%d X %d",&y,&x);
    if(n!=y){
        printf("Matrix Multiplication is not possible\n");
        return 0;
    }
    int arr[m][n];
    printf("Enter the elements of the array: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf(" %d",&arr[i][j]);
        }
    }
    
    int a[y][x];
    printf("Enter the elements of the array: \n");
    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            scanf(" %d",&a[i][j]);
        }
    }
    int mx[m][x];
    for(int i=0;i<m;i++){
        for(int j=0;j<x;j++){
            mx[i][j]=0;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<x;j++){
            for(int k=0;k<n;k++){
                mx[i][j] += arr[i][k]*a[k][j];
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<x;j++){
            printf("%d ",mx[i][j]);
        }
    }
    printf("\n");
    return 0;
}