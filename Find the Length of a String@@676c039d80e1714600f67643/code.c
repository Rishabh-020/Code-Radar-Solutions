#include <stdio.h>
#include<string.h>

int main() {
    char arr[1000];
    int len=0;
    fgets(arr,1000,stdin);
    while(arr[len]!='\0' && arr[len]!='\n'){
        len++;
    }
    printf("%d",len);
    return 0;
}