#include <stdio.h>
#include<string.h>

void rev_string(char arr[]){
    int len=strlen(arr);   
    if(arr[len-1]=='\n'){
        arr[len-1]='\0';
        len--;
    } 
    for(int i=len;i>=0;i--){
        printf("%c",arr[i]);
    }
}
int main(){
    char arr[1000];
    scanf("%s",arr);
    rev_string(arr);
    return 0;
}
