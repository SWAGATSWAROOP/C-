#include<stdio.h>

int main(){
    FILE *ptr,*fp,*new;
    char readw[50];
    fp = fopen("sample.txt","r");
    ptr = fopen("file.txt","r");
    new = fopen("Merge.txt","w+");
    printf("\n");
    printf("The contents of the first file is: \n");
    while(fscanf(fp,"%s",readw)!=EOF){
        printf("%s ",readw);
        fprintf(new,"%s ",readw);
    }
    printf("\n \n");
    fclose(fp);
    printf("The contents of the second file is: \n");
    while(fscanf(ptr,"%s",readw)!=EOF){
        printf("%s ",readw);
        fprintf(new,"%s ",readw);
    }
    printf("\n \n");
    fclose(ptr);
    printf("The contents of the merged file is: \n");
    rewind(new);
    while(fscanf(new,"%s",readw)!=EOF){
        printf("%s ",readw);
    }
    printf("\n \n");
    fclose(new);
    return 0;
}