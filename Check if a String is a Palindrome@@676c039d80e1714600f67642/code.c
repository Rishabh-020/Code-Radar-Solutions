#include <stdio.h>
#include<string.h>

void palindrome(char arr[]){
    int len=strlen(arr);
    if(arr[len-1]=='\n'){
        arr[len-1]='\0';
        len--;
    }
    int end=len-1,ma=0;
    for(int i=0;i<len/2;i++){
        if(arr[i]==arr[end]){
            ma=1;
        }else{
            ma=0;
        }
    }
    if(ma==1){
        printf("Yes");
    }else{
        printf("No");
    }
}
int main() {
    char arr[1000];
    fgets(arr,sizeof(arr),stdin);
    palindrome(arr);
    return 0;
}