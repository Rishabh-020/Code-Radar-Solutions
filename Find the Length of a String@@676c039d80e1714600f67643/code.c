#include <stdio.h>
#include<string.h>

int main() {
    char arr[1000];
    int len=0;
    fgets(arr,1000,stdin);
    if(str[strlen(str)-1]=='\n'){
        str[strlen(str)-1]='\0';
    }
    if(arr[0]=='\n'){
        printf("%d",0);
        return 0;
    }
    // while(arr[len]!='\0' || arr[len]!='\n'){
    //     len++;
    // }
    for(int i=0;str[i]!='\0';i++)
    len++;
    printf("%d",len);
    return 0;
}