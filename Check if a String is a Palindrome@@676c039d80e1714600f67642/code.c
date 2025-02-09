#include <stdio.h>
#include<string.h>

char palindrome(char arr[]){
    int len=strlen(arr);
    if(arr[len-1]=='\n'){
        arr[len-1]='\0';
        len--;
    }
    int end=len-1,ma=0;
    if(len==1){
        printf("Yes");
        return 0;
    }if(len%2==0){
        for(int i=0;i<len/2;i++){
        if(arr[i]==arr[end]){
            ma=1;
        }else{
            ma=0;
        }
    }
    }else{
        for(int i=0;i<(len-1)/2;i++){
        if(arr[i]==arr[end]){
            ma=1;
        }else{
            ma=0;
        }
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