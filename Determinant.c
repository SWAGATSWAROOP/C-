#include<stdio.h>

int D(int n,int arr[][n]){
    if(n==1){
        return arr[0][0];
    }
    else if(n==2){
        return arr[0][0]*arr[1][1] - arr[0][1]*arr[1][0];
    }
    else{
        int x =(arr[0][0]*(arr[1][1]*arr[2][2]-arr[1][2]*arr[2][1])-arr[0][1]*(arr[1][0]*arr[2][2]-arr[1][2]*arr[2][0])+arr[0][2]*(arr[1][0]*arr[2][1]-arr[1][1]*arr[2][0]));
        return x;
    }
}

int main(){
    int n;
    printf("Enter the order of matrix (such that it should be less than or equal to 3): ");
    scanf("%d",&n);
    if((n<1) || (n>3)){
        printf("The order entered is not as per instructions\n");
        return 0;
    }
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int x = D(n,arr);
    printf("The Determinant of the matrix is: %d\n",x);
    return 0;
}