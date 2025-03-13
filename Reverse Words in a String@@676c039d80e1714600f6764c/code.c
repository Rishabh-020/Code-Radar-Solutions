#include<stdio.h>
#include<string.h>
int reverse(char arr[],char word){
    while arr<=word{
        char temp=arr;
        arr=word;
        word=temp;
        arr++;word--;
    }
}
int main(){
    char arr[100];
    fgets(arr,sizeof(arr),stdin);
    if(arr[strlen(arr)-1]=='\n'){
        arr[strlen(arr)-1]='\0';
    }
    int start=0,len=strlen(arr)-1;
    char first_word=arr;
    for(int i=start;i<len;i++){
        if(arr[i]==' '){
            reverse(first_word,&arr[i-1]);
        }
    }
    return 0;
}