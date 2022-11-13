#include<stdio.h>
#include<limits.h>

void DupliMax(char arr[],int n){
    int t=INT_MIN;
    char s;
    for(int i=0;i<n-1;i++){
        if(arr[i]=='\0'){
            break;
        }
        int count = 0;
        int j =i+1;
        while(j<n){
            if(arr[i]==arr[j]){
                count++;
                for(int k=j;k<n-1;k++){
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
            j++;
        }
        if(t<count){
            t = count;
            s = arr[i];
        }
    }
    printf("The String Now is: %s\n",arr);
    printf("The element %c is repeated %d times in the string.\n",s,t);
}

int main(){
    char arr[100];
    printf("Enter The String: ");
    gets(arr);
    DupliMax(arr,100);
    return 0;
}