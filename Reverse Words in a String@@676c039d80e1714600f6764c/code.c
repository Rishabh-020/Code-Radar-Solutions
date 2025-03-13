#include<stdio.h>
#include<string.h>
int main(){
    char arr[100];
    fgets(arr,sizeof(arr),stdin);
    if(arr[strlen(arr)-1]=='\n'){
        arr[strlen(arr)-1]='\0';
    }
    int start=0,len=strlen(arr)-1;
    for(int i=start;i<len;i++){
        if(arr[i]==' '){
        // while(i!=0){
        //     printf("%c",arr[i]);i--;
        // }
        }
    }
    return 0;
}