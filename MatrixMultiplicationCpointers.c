#include<stdio.h>
#include<stdlib.h>

struct Arr{
    int row;
    int column;
    int** arr;
};

void inArr(struct Arr* arr1,int o){
    static int count = 1;
    if(o!=1){
        printf("Enter The Row and Column of Array %d (repectively): ",count);
        scanf("%d %d",&arr1->row,&arr1->column);
        count++;
    }
    arr1->arr =(int **)malloc((arr1->row)*sizeof(int *));
    for(int i=0;i<arr1->row;i++){
        arr1->arr[i]=(int*)malloc((arr1->column)*sizeof(int));
    }
    if(o == 1){
        for(int i=0;i<arr1->row;i++){
            for(int j=0;j<arr1->column;j++){
                arr1->arr[i][j]=0;
            }
        }
    }
    else{
        for(int i=0;i<arr1->row;i++){
            for(int j=0;j<arr1->column;j++){
                scanf("%d",&arr1->arr[i][j]);
            }
        }
    }    
}

void outArr(struct Arr* arr1){
    printf("\nThe Resultant Matrix: \n");
    for(int i=0;i<arr1->row;i++){
        for(int j=0;j<arr1->column;j++){
            printf("%d ",arr1->arr[i][j]);
        }
        printf("\n");
    }
}

struct Arr* Multiplication(struct Arr* arr1,struct Arr* arr2){
    struct Arr* arr3 =(struct Arr*)malloc(sizeof(struct Arr));
    arr3->row = arr1->row;
    arr3->column = arr2->column;
    inArr(arr3,1);
    for(int i=0;i<arr3->row;i++){
        for(int j=0;j<arr3->column;j++){
            for(int k=0;k<arr1->column;k++){
                arr3->arr[i][j] += arr1->arr[i][k] * arr2->arr[k][j];
            }
        }
    }
    return arr3; 
}


int main(){
    struct Arr arr1,arr2;
    inArr(&arr1,0);
    inArr(&arr2,0);
    struct Arr* arr3;
    if(arr1.column == arr2.row){
        arr3 = Multiplication(&arr1,&arr2);
        outArr(arr3);
        free(arr3);
        arr3 = NULL;
    } 
    else{
        printf("Matrix multiplication is not possible.\n");
    }   
    return 0;
}