#include <stdio.h>
#include<string.h>
int main() {
    char str[1000];
    int len=0;
    if (fgets(str, 1000, stdin) == NULL ) {
        printf("0");
        return 0;
    }
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='\n')str[i]='\0';
        len++;
    }
    // if(str[strlen(str)-1]=='\n'){
    //     str[strlen(str)-1]='\0';
    // }
    // if(str[0]=='\0'){
    //     printf("%d",0);
    //     return 0;
    // }
    // // while(arr[len]!='\0' || arr[len]!='\n'){
    // //     len++;
    // // }
    // for(int i=0;str[i]!='\0';i++)
    // len++;
    printf("%d",len);
    return 0;
}