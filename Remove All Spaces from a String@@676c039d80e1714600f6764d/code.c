#include<stdio.h>
#include<string.h>
int main(){
    char arr[100];
    fgets(arr,sizeof(arr),stdin);
    int len=strlen(arr);
    if(arr[strlen(arr)-1]=='\n'){
        arr[strlen(arr)-1]='\0';
        len--;
    }
    for(int i=0;i<len;i++){
        if(arr[i]!=' '){
            printf("%c",arr[i]);
        }
    }
    return 0;
}