#include <stdio.h>
#include<string.h>

char palindrome(char arr[]){
    int len=strlen(arr);
    if(arr[len-1]=='\n'){
        arr[len-1]='\0';
        len--;
    }
    for(int i=0;i<(len)/2;i++){
        if(arr[i]!=arr[len-i-1]){
            return 0;
        }
    }return 1;
}
int main() {
    char arr[1000];
    fgets(arr,sizeof(arr),stdin);
    if(palindrome(arr)){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}