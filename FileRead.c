#include<stdio.h>
#include<string.h>

int main(){
    printf("The Contents Of File Are:-\n");
    FILE* fp, *ft;
    char ch;
    char word[100], rword[100], read[100];
    fp = fopen("file.txt","r");
    ft = fopen("rfile.txt","w");
    while(1){
        ch = fgetc(fp);
        if(ch == EOF){
            break;
        }
        printf("%c",ch);
    }
    printf("\n");
    printf("Enter the word to find: ");
    fgets(word,100,stdin);
    word[strlen(word)-1] = word[strlen(word)];
    printf("Enter the word to replace in file: ");
    fgets(rword,100,stdin);
    rword[strlen(rword)-1]=rword[strlen(rword)];
    rewind(fp);
    while(fscanf(fp,"%s",read)!=EOF){
        if(strcmp(read,word)==0){
            strcpy(read,rword);
        }
        fprintf(ft,"%s ",read);
    }
    fclose(fp);
    fclose(ft);
    remove("file.txt");
    rename("rfile.txt","file.txt");
    fp = fopen("file.txt","r");
    while(1){
        ch = fgetc(fp);
        if(ch == EOF){
            break;
        }
        printf("%c",ch);
    }
    printf("\n");
    return 0;
}