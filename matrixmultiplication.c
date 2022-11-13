#include<stdio.h>

int main(){
    int m,n; // 1st matrix
    printf("Enter the order of 1st matrix (rows,column) :");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    printf("Enter the element of of matrix: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int x,y;  //2nd matrix
    printf("Enter the order of 2nd matrix (rows,column) :");
    scanf("%d %d",&x,&y);
    int a[x][y];
    printf("Enter the element of of matrix: \n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            scanf("%d",&a[i][j]);
        }
    }
    if(n!=x){
        printf("Matrix Multiplication not possible.\n");
        return 0;
    }

    int ar[m][y];    //resultant matrix
    for(int i=0;i<m;i++){
        for(int j=0;j<y;j++){
            ar[i][j] = 0;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<y;j++){
            for(int k=0;k<n;k++)
                ar[i][j] += arr[i][k]*a[k][j];
        }
    }
    printf("The resultant matrix is: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<y;j++){
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}