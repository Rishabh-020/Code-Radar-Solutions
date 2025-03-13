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
        //     for(int j=start;j<i;i++){
        //         printf("%c",arr[j]);
        //     }start=i;
        }
    }
    return 0;
}