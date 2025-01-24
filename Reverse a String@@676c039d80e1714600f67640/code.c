#include <stdio.h>
#include<string.h>

void rev(char arr[]){
    int len=strlen(str);
    for(int i=len;i>=0;i--){
        printf("%c",arr[i]);
    }
}

int main() {
    char arr[100];
    scanf("%s",&arr[]);
    rev(arr[]);
    return 0;
}