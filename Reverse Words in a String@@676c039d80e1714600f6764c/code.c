#include<stdio.h>
#include<string.h>
void reverse(char arr[],int num1,int num2){
    for(int i=num2;i>=num1;i--){
        printf("%c",arr[i]);
    }
}
int main(){
    char arr[100];
    fgets(arr,sizeof(arr),stdin);
    if(arr[strlen(arr)-1]=='\n'){
        arr[strlen(arr)-1]='\0';
    }
    int start=0,len=strlen(arr);
    for(int i=start;i<len;i++){
        if(arr[i]==' ' || arr[i]=='\0'){
            int end=i-1;
            reverse(arr,start,end);
            if(arr[i]==' ')printf(" ");
            start=i+1;
        }
    }
    return 0;
}