#include <stdio.h>
#include<string.h>

char palindrome(char arr[]){
    int len=strlen(str);
    for(int i=0;i<len/2;i++){
        if(arr[i]!=arr[len-i]){
            return 0;
        }
    }
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